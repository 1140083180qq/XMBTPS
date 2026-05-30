
#include "XMBComponent/CombatComponent.h"

#include "Character/XMBCharacterBase.h"
#include "Engine/SkeletalMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"
#include "Actor/Projectile.h"
#include "GameMode/BlasterGameMode.h"
#include "Weapon/ShotGun.h"


UCombatComponent::UCombatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	BaseWalkSpeed = 600.f;
	AimWalkSpeed = 450.f;
	ShoulderAimWalkSpeed = 300.f;
}



void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	if (Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = BaseWalkSpeed;

		// 仅服务器端初始化弹药数据，客户端通过复制同步
		if (Owner->HasAuthority())
		{
			InitializeCarriedAmmo();
		}
	}
}

/**
 * @brief 每帧更新 - 处理本地玩家的射线检测
 *
 * 【逻辑说明】：
 * - 仅对"本地控制的角色"执行射线检测（IsLocallyControlled）
 *   原因：远程代理角色的准心不需要在本机绘制
 * - 每帧从屏幕中心（准心位置）发射射线检测命中目标
 * - 将命中点的 ImpactPoint 存入 HitTarget 变量，供开火时使用
 *
 * 【设计意图】：将射线检测放在 Tick 中而非开火瞬间，确保
 * 准心始终指向最新的目标位置，提高射击反馈的即时性
 */
void UCombatComponent::TickComponent(float DeltaTime, enum ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// 仅本地玩家需要进行射线检测和准心更新
	if (Owner && Owner->IsLocallyControlled())
	{
		FHitResult HitResult;
		TraceUnderCrosshairs(HitResult);
		HitTarget = HitResult.ImpactPoint; // 缓存命中点，供 ServerFire 使用
	}
}

/**
 * @brief 注册网络复制的属性变量
 */
void UCombatComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UCombatComponent, EquippedWeapon);
	DOREPLIFETIME(UCombatComponent, SecondaryWeapon);
	DOREPLIFETIME(UCombatComponent, bAiming);
	DOREPLIFETIME(UCombatComponent, bShoulderAiming);
	DOREPLIFETIME(UCombatComponent, bFireButtonPressed);
	// COND_OwnerOnly: 仅向拥有此组件的客户端同步，不广播给其他玩家（节省带宽+安全考虑）
	DOREPLIFETIME_CONDITION(UCombatComponent, CarriedAmmo, COND_OwnerOnly);
	DOREPLIFETIME(UCombatComponent, CombatState);
	DOREPLIFETIME(UCombatComponent, Grenades);
	DOREPLIFETIME(UCombatComponent, bHoldingTheFlag);

}

/**
 * @brief 从准心位置发射射线检测，获取瞄准的目标点
 * @param TraceHitResult - 输出参数，存储射线检测结果
 *
 * 【完整逻辑流程】：
 * 1. 获取当前视口（屏幕）尺寸
 * 2. 计算屏幕中心点坐标（即准心显示位置）
 * 3. 将屏幕坐标反投影为3D世界坐标和方向向量（DeprojectScreenToWorld）
 * 4. 计算射线起点：从准心世界位置沿方向偏移一段距离
 *    （偏移量=角色到准心的距离+100，避免射线从角色体内开始）
 * 5. 沿视线方向发射 TRACE_LENGTH（80000单位）长的射线
 * 6. 检测命中物体是否实现了 IInteractWithCrosshairsInterface 接口
 *    （目前只有 Character 实现了该接口）
 *    若命中，设置 UIComponent 的 bIsChange 标志为true（用于改变准心颜色）
 * 7. 若射线未命中任何物体，将 ImpactPoint 设为射线终点（远处的空位点）
 *
 * 【设计意图】：使用 ECC_Visibility 通道进行射线检测，
 * 该通道只检测可见的碰撞体，忽略不可见的几何体
 */
void UCombatComponent::TraceUnderCrosshairs(FHitResult& TraceHitResult)
{
	// 步骤1: 获取视口尺寸
	FVector2D ViewportSize;
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}

	// 步骤2: 计算屏幕中心（准心位置）
	FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;

	// 步骤3: 屏幕坐标 -> 世界坐标/方向 的反投影变换
	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(
		UGameplayStatics::GetPlayerController(this, 0),
		CrosshairLocation,
		CrosshairWorldPosition,
		CrosshairWorldDirection);

	if (bScreenToWorld)
	{
		// 步骤4: 计算射线起始点（跳过角色自身，避免自遮挡）
		FVector Start = CrosshairWorldPosition;

		if (Owner)
		{
			// 计算从准心屏幕位置到角色位置的偏移距离
			// 再加上100单位的额外偏移，确保射线起点在角色前方
			float DistanceToCharacter = (Owner->GetActorLocation() - Start).Size();
			Start += CrosshairWorldDirection * (DistanceToCharacter + 100.f);
		}

		// 步骤5: 计算射线终点（沿视线方向延伸80000单位）
		FVector End = Start + CrosshairWorldDirection * TRACE_LENGTH;

		// 发射可见性通道的射线检测
		GetWorld()->LineTraceSingleByChannel(
			TraceHitResult,
			Start,
			End,
			ECC_Visibility);

		// 步骤6: 检测是否命中实现了准心交互接口的对象（如角色）
		// 通过 UIComponent 的 bIsChange 标志位通知 HUD 改变准心颜色
		if (bool InChanged = TraceHitResult.GetActor() && TraceHitResult.GetActor()->Implements<UInteractWithCrosshairsInterface>())
		{
			if (Owner->GetUIComponent()->GetbIsChange() != InChanged)
			{
				Owner->GetUIComponent()->SetbIsChange(true); // 标记为准心变色状态
			}
		}
		else
		{
			if (Owner->GetUIComponent()->GetbIsChange() != InChanged)
			{
				Owner->GetUIComponent()->SetbIsChange(false); // 恢复默认准心颜色
			}
		}

		// 步骤7: 若未命中任何物体，将命中点设为射线终点（用于射击远处的空位点）
		if (!TraceHitResult.bBlockingHit)
		{
			TraceHitResult.ImpactPoint = End;
		}
	}
}




/*
 * 装备武器
 */


/**
 * @brief 装备指定的武器到角色身上
 * @param WeaponToEquip - 要装备的武器指针
 *
 * 【完整装备流程】：
 * 1. 安全检查：角色和武器指针必须有效
 * 2. 若已有装备的武器，先丢弃旧武器（调用 Dropped 使其掉落地面）
 * 3. 将新武器保存到 EquippedWeapon 并设置状态为 EWS_Equipped
 * 4. 将武器附加（Attach）到角色骨骼的 "RightHandSocket" 插槽上
 * 5. 设置武器拥有者（SetWeaponOwner 内部调用 SetOwner 进行网络复制）
 * 6. 更新HUD上的弹药显示
 * 7. 从 CarriedAmmoMap 中读取该武器类型的备用弹药并更新HUD
 * 8. 播放装备音效（若有配置）
 * 9. 若装备时弹夹为空，自动触发换弹
 * 10. 修改角色移动朝向模式：
 *     - 关闭 bOrientRotationToMovement（不再面向移动方向）
 *     - 开启 bUseControllerRotationYaw（改为面向控制器/相机方向）
 *     这是因为持枪状态下角色应面向瞄准方向而非移动方向
 */
void UCombatComponent::EquipWeapon(AWeaponBase* WeaponToEquip)
{
	if (Owner == nullptr || WeaponToEquip == nullptr) return;
	if (CombatState != ECombatState::ECS_Unoccupied) return;

	if (WeaponToEquip->GetWeaponType() == EWeaponType::EWT_Flag)
	{
		Owner->Crouch();
		bHoldingTheFlag = true;
		WeaponToEquip->SetOwner(Owner);
		WeaponToEquip->SetWeaponState(EWeaponState::EWS_Equipped);
		AttachFlagToLeftHand(WeaponToEquip);
	}
	else
	{
		//将武器装备到另一个插槽
		if (EquippedWeapon != nullptr && SecondaryWeapon == nullptr)
		{
			EquipSecondaryWeapon(WeaponToEquip);
		}
		else
		{
			EquipPrimaryWeapon(WeaponToEquip);
		}
		
		// 切换角色朝向模式：持枪状态下面向控制器方向（而非移动方向）
		Owner->GetCharacterMovement()->bOrientRotationToMovement = false;
		Owner->bUseControllerRotationYaw = true;
	}
}

void UCombatComponent::EquipPrimaryWeapon(AWeaponBase* WeaponToEquip)
{
	if (WeaponToEquip == nullptr) return;
	DropEquippedWeapon();
	
	EquippedWeapon = WeaponToEquip;
	
	EquippedWeapon->SetWeaponOwner(Owner);
	EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);

	AttachActorToRightHand(EquippedWeapon);
	
	EquippedWeapon->SetHUDAmmo(); // 更新HUD上显示的弹夹弹药数

	UpdateCarriedAmmo();
	PlayEquipWeaponSound(WeaponToEquip);
	ReloadEmptyWeapon();
}

void UCombatComponent::EquipSecondaryWeapon(AWeaponBase* WeaponToEquip)
{
	if (WeaponToEquip == nullptr) return;
	SecondaryWeapon = WeaponToEquip;
	
	// SecondaryWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
	SecondaryWeapon->SetWeaponOwner(Owner);
	SecondaryWeapon->SetWeaponState(EWeaponState::EWS_EquippedSecondary);
	
	AttachActorToBackpack(WeaponToEquip);
	PlayEquipWeaponSound(WeaponToEquip);
	
	
}



void UCombatComponent::SpawnDefaultWeapon()
{
	ABlasterGameMode* BlasterGameMode = Cast<ABlasterGameMode>(UGameplayStatics::GetGameMode(this));
	UWorld* World = GetWorld();
	if (BlasterGameMode && World &&!Owner->IsElimmed() && DefaultWeaponClass)
	{
		AWeaponBase* StartingWeapon = World->SpawnActor<AWeaponBase>(DefaultWeaponClass);
		if (StartingWeapon)
		{
			StartingWeapon->SetWeaponDestroy(true);//装备了别的武器后销毁掉初始武器//XMBTODO:若玩家置换武器也销毁
			EquipWeapon(StartingWeapon);
		}
	}
}


void UCombatComponent::DropEquippedWeapon()
{
	// 如果已经持有武器，先让旧武器掉落到地面
	if (EquippedWeapon)
	{
		EquippedWeapon->Dropped();
	}
}

//目前设置的交换武器的输入按键是跟装备武器的按键是一样的。
//XMBTOOD:可以制作一个交换武器的按键
void UCombatComponent::SwapWeapons()
{
	if (CombatState != ECombatState::ECS_Unoccupied || Owner == nullptr) return;//防止玩家在播放Reloading时切换武器

	Owner->PlaySwapWeaponMontage();
	Owner->bFinishedSwapping = false;
	CombatState = ECombatState::ECS_SwappingWeapons;
	
	AWeaponBase* TempWeapon = EquippedWeapon;
	EquippedWeapon = SecondaryWeapon;
	SecondaryWeapon = TempWeapon;

	if (SecondaryWeapon) SecondaryWeapon->EnableCustomDepth(false);

	// EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
	// AttachActorToRightHand(EquippedWeapon);
	// EquippedWeapon->SetHUDAmmo();
	// UpdateCarriedAmmo();
	// PlayEquipWeaponSound(EquippedWeapon);
	//
	// SecondaryWeapon->SetWeaponState(EWeaponState::EWS_EquippedSecondary);
	// AttachActorToBackpack(SecondaryWeapon);
	
}

bool UCombatComponent::ShouldSwapWeapons()
{
	return (EquippedWeapon != nullptr && SecondaryWeapon != nullptr);
}



/**
 * @brief 装备武器变化的网络回调 - 当 EquippedWeapon 在服务器端被修改时，客户端自动调用
 *
 * 【调用时机】: 服务器 EquipWeapon() 设置 EquippedWeapon 后，
 * 引擎自动将该变量的变化复制到各客户端，触发本回调
 *
 * 【逻辑说明】：
 * 本回调在客户端上重现服务器端的装备效果：
 * 1. 设置武器状态为 EWS_Equipped
 * 2. 将武器 Attach 到右手骨骼插槽（视觉上武器出现在手中）
 * 3. 修改角色朝向模式（与 EquipWeapon 保持一致）
 * 4. 播放装备音效
 *
 * 注意：本回调不包含弹药/HUD相关逻辑（那些通过各自的 OnRep 回调独立同步）
 */
void UCombatComponent::OnRep_EquippedWeapon()
{
	if (EquippedWeapon && Owner)
	{
		EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
		
		AttachActorToRightHand(EquippedWeapon);

		// 同步切换朝向模式
		Owner->GetCharacterMovement()->bOrientRotationToMovement = false;
		Owner->bUseControllerRotationYaw = true;

		// 播放装备音效
		PlayEquipWeaponSound(EquippedWeapon);

		EquippedWeapon->EnableCustomDepth(false);
		EquippedWeapon->SetHUDAmmo();
	}
}

void UCombatComponent::OnRep_SecondaryWeapon()
{
	if (SecondaryWeapon && Owner)
	{
		SecondaryWeapon->SetWeaponState(EWeaponState::EWS_EquippedSecondary);
		AttachActorToBackpack(SecondaryWeapon);
		PlayEquipWeaponSound(EquippedWeapon);
		if (SecondaryWeapon->GetWeaponMesh())
		{
			SecondaryWeapon->GetWeaponMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_TAN);
			SecondaryWeapon->GetWeaponMesh()->MarkRenderStateDirty();
		}
	}
}




/*
 * 开火
 */


/**
 * @brief 设置开火按钮的按下/释放状态
 * @param bPressed - true为按下，false为释放
 *
 * 【逻辑说明】：
 * - 保存按钮状态到 bFireButtonPressed（网络复制变量）
 * - 当按钮按下时（bPressed == true），直接调用 Fire() 尝试首次开火
 * - 后续的连发由 FireTimerFinished 中的循环逻辑处理
 * - 当按钮释放时（bPressed == false），bFireButtonPressed 设为 false，
 *   FireTimerFinished 中的自动连发条件不再满足，连发停止
 */
void UCombatComponent::FireButtonPressed(bool bPressed)
{
	bFireButtonPressed = bPressed;
	if (bFireButtonPressed)
	{
		// 按下瞬间立即尝试开火（首次开火）
		Fire();
	}
}

/**
 * @brief 检查当前是否满足开火条件
 * @return true 可以开火，false 不能开火
 *
 * 【开火三条件（必须全部满足）】：
 * 1. 弹夹内有弹药（!IsAmmoEmpty）
 * 2. 开火冷却已结束（bCanFire == true）
 * 3. 战斗状态为空闲（!Reloading）——换弹中不能开火
 *
 * 【设计意图】：将所有前置条件集中在此函数中判断，
 * 使 Fire() 函数本身保持简洁，便于后续扩展新的限制条件
 */
bool UCombatComponent::CanFire()
{
	if (EquippedWeapon == nullptr) return false;

	if (!EquippedWeapon->IsAmmoEmply() && bCanFire && CombatState == ECombatState::ECS_Reloading && EquippedWeapon->GetWeaponType() == EWeaponType::EWT_ShotGun) return true;

	if (bLocallyReloading ) return false;//XMBTEST
	
	// 三条件与运算：有弹药 AND 冷却结束 AND 未在换弹
	return !EquippedWeapon->IsAmmoEmply() && bCanFire && CombatState == ECombatState::ECS_Unoccupied;
}

/**
 * @brief 执行开火操作 - 开火的主入口函数
 *
 * 【完整开火流程】：
 * 1. 安全校验：武器必须存在
 * 2. 调用 CanFire() 检查三个开火条件（弹药/冷却/状态）
 * 3. 条件通过后：
 *    a. 将 bCanFire 设为 false（防止重复触发）
 *    b. 调用 ServerFire RPC 将 HitTarget（命中点坐标）发送给服务器
 *    c. 启动 FireTimer 进入冷却期
 *
 * 【网络同步路径】：
 * Client: Fire() → ServerFire(HitTarget) → Server: MulticastFire(HitTarget) → All Clients
 */
void UCombatComponent::Fire()
{
	if (EquippedWeapon == nullptr) return;

	if (CanFire())
	{
		bCanFire = false; // 立即标记为不可开火，直到冷却结束
		//*****因为制作了LocalFire,开火时本地的开火与服务器的开火不一样，所以会有不一样的随机弹道偏移
		// ServerFire(HitTarget); // 将 Tick 中缓存的目标点发送给服务器
		// LocalFire(HitTarget);
		if(EquippedWeapon)
		{
			Owner->GetUIComponent()->SetCrosshairShootingFactor(0.75f);

			switch (EquippedWeapon->FireType)
			{
			case EFireType::EFT_Projectile:
				FireProjectileWeapon();
				break;
			case EFireType::EFT_HitScan:
				FireHitScanWeapon();
				break;
			case EFireType::EFT_Shotgun:
				FireShotgun();
				break;
			}
		}
		
		
		StartFireTimer(); // 启动冷却计时器
	}
}

void UCombatComponent::LocalFire(const FVector_NetQuantize& TraceHitTarget)
{
	if (EquippedWeapon == nullptr) return;
	
	// 再次确认战斗状态合法，防止换弹期间误触发出开火
	if (Owner && CombatState == ECombatState::ECS_Unoccupied)
	{
		// Owner->PlayFireMontage(bFireButtonPressed); // 播放开火动画
		Owner->PlayFireMontage(bAiming); 
		EquippedWeapon->Fire(TraceHitTarget); // 调用武器的开火方法（生成投射物/抛弹壳/扣弹药）
		
	}
}

void UCombatComponent::ShotgunLocalFire(const TArray<FVector_NetQuantize>& TraceHitTargets)
{
	AShotGun* Shotgun = Cast<AShotGun>(EquippedWeapon);
	if (Shotgun == nullptr || Owner == nullptr) return;
	if (CombatState == ECombatState::ECS_Reloading || CombatState == ECombatState::ECS_Unoccupied)
	{
		bLocallyReloading = false;
		Owner->PlayFireMontage(bAiming);
		Shotgun->FireShotgun(TraceHitTargets);
		CombatState = ECombatState::ECS_Unoccupied;
	}
}

//********************************************
/*
 * 此处执行的重点，是玩家经过开火后，现在本地执行散射，再将本地的散射结果发给服务器，再由服务器将本地的结果发给别的客户端。
 * TODO:需要了解此处有关散射的制作设置，后续需要将成员换成private并添加安全验证
 * TODO:需要了解整个开火的执行流程以及数据在本地-服务器-客户端的传递
 */
//XMBTODO:会出现新的作弊方式，需要修改验证
//********************************************
void UCombatComponent::FireProjectileWeapon()
{
	if (EquippedWeapon && Owner)
	{
		HitTarget = EquippedWeapon->bUseScatter ? EquippedWeapon->TraceEndWithScatter(HitTarget) : HitTarget;
		if (!Owner->HasAuthority()) LocalFire(HitTarget);
		ServerFire(HitTarget,EquippedWeapon->FireDelay); 
	}
}

void UCombatComponent::FireHitScanWeapon()
{
	if (EquippedWeapon && Owner)
	{
		HitTarget = EquippedWeapon->bUseScatter ? EquippedWeapon->TraceEndWithScatter(HitTarget) : HitTarget;
		if (!Owner->HasAuthority()) LocalFire(HitTarget);
		ServerFire(HitTarget,EquippedWeapon->FireDelay);
	}
}

//霰弹枪需要把所有弹丸的轨迹都发送给服务器
void UCombatComponent::FireShotgun()
{
	AShotGun* Shotgun = Cast<AShotGun>(EquippedWeapon);
	if (Shotgun && Owner)
	{
		TArray<FVector_NetQuantize> HitTargets;
		Shotgun->ShotgunTraceEndWithScatter(HitTarget, HitTargets);
		if (!Owner->HasAuthority()) ShotgunLocalFire(HitTargets);
		ServerShotgunFire(HitTargets,EquippedWeapon->FireDelay);
	}
}




/**
 * @brief 服务器RPC实现 - 执行开火逻辑的服务器端
 * @param TraceHitTarget - 客户端发送的命中目标位置（FVector_NetQuantize 网络压缩向量）
 *
 * 【网络传播链路说明】：
 * 客户端不能直接调用 MulticastFire（没有权限）。
 * 必须走 Client → Server → Multicast to All Clients 的路径：
 * 1. 客户端调用 ServerFire（RPC 到服务器）
 * 2. 服务器验证后调用 MulticastFire（多播到所有客户端，包括原始客户端）
 * 3. 所有客户端收到 MulticastFire 后各自播放开火特效
 *
 * 为什么这样设计？因为服务器需要对开火行为进行权威校验（防作弊）
 */
void UCombatComponent::ServerFire_Implementation(const FVector_NetQuantize& TraceHitTarget, float FireDelay)
{
	MulticastFire(TraceHitTarget);// 服务器收到开火请求后，向所有客户端多播开火效果
}

bool UCombatComponent::ServerFire_Validate(const FVector_NetQuantize& TraceHitTarget, float FireDelay)
{
	if (EquippedWeapon)
	{
		bool bNearlyEqual = FMath::IsNearlyEqual(EquippedWeapon->FireDelay, FireDelay, 0.001f);
		return bNearlyEqual;
	}
	return true;
}




/**
 * @brief 多播开火效果 - 在所有客户端上同时播放开火表现
 * @param TraceHitTarget - 服务器确认的命中目标位置
 *
 * 【逻辑说明】：
 * - 此函数在每个客户端（包括服务器所在的本地客户端）上都执行
 * - 执行两项操作：
 *   1. 播放开火动画蒙太奇（PlayFireMontage），传入 bFireButtonPressed
 *      决定是否播放完整的开火动画（按住时播放，松开时不播放后续部分）
 *   2. 调用武器的 Fire() 方法，具体效果取决于武器子类的实现：
 *      - WeaponBase: 播放枪口动画 + 抛弹壳 + 扣除弹药
 *      - ProjectileWeapon: 还会在枪口生成投射物Actor
 * - 二次检查 CombatState：如果在换弹期间收到多播请求则忽略
 *   （防止换弹动画与开火动画冲突）
 */
void UCombatComponent::MulticastFire_Implementation(const FVector_NetQuantize& TraceHitTarget)
{
	//因为LocalFire已经拥有了播放蒙太奇的逻辑，为了防止RPC使得客户端再一次播放蒙太奇
	if (Owner && Owner->IsLocallyControlled() && !Owner->HasAuthority()) return;//是给别的客户端使用的
	LocalFire(TraceHitTarget);
}


void UCombatComponent::ServerShotgunFire_Implementation(const TArray<FVector_NetQuantize>& TraceHitTarget, float FireDelay)
{
	MulticastShotgunFire(TraceHitTarget);
}

bool UCombatComponent::ServerShotgunFire_Validate(const TArray<FVector_NetQuantize>& TraceHitTarget, float FireDelay)
{
	if (EquippedWeapon)
	{
		bool bNearlyEqual = FMath::IsNearlyEqual(EquippedWeapon->FireDelay, FireDelay, 0.001f);
		return bNearlyEqual;
	}
	return true;
}


void UCombatComponent::MulticastShotgunFire_Implementation(const TArray<FVector_NetQuantize>& TraceHitTarget)
{
	if (Owner && Owner->IsLocallyControlled() && !Owner->HasAuthority()) return;
	ShotgunLocalFire(TraceHitTarget);
}



/**
 * @brief 启动开火冷却计时器
 *
 * 【逻辑说明】：
 * - 使用 UE5 的 TimerManager 设置一个一次性定时器
 * - 定时间隔 = 武器的 FireDelay 属性（如 0.15秒 ≈ 600 RPM 射速）
 * - 定时器到期后调用 FireTimerFinished 回调
 *
 * 【设计目的】：形成"开火 → 冷却等待 → 可再次开火"的循环机制，
 * 控制全自动武器的射击频率。手动武器则不受此计时器限制
 */
void UCombatComponent::StartFireTimer()
{
	if (EquippedWeapon == nullptr || Owner == nullptr) return;

	// 设置定时器：FireDelay 秒后触发 FireTimerFinished
	Owner->GetWorldTimerManager().SetTimer(
		FireTimer,
		this,
		&UCombatComponent::FireTimerFinished,
		EquippedWeapon->FireDelay // 使用武器的射速间隔作为定时时长
		);
}

/**
 * @brief 开火冷却计时器结束回调
 *
 * 【逻辑说明】：当一次开火的冷却时间结束后：
 * 1. 将 bCanFire 重置为 true（允许下一次开火）
 * 2. 如果满足以下两个条件，自动触发下一次开火（形成全自动连发）：
 *    a. 玩家仍在按住开火按钮 (bFireButtonPressed)
 *    b. 武器是全自动模式 (bAutomatic == true)
 * 3. 冷却结束后如果发现弹夹已空，自动触发换弹
 *
 * 【全自动连发的原理】：
 * Fire() → ServerFire → MulticastFire(播放特效) → StartFireTimer → [等待FireDelay] →
 * FireTimerFinished → bCanFire=true → 检查bFireButtonPressed → 再次调用 Fire() → 循环
 */
void UCombatComponent::FireTimerFinished()
{
	if (EquippedWeapon == nullptr) return;

	// 冷却结束，标记为可以开火
	bCanFire = true;

	// 全自动模式下，如果玩家仍按住开火键，自动连续开火
	if (bFireButtonPressed && EquippedWeapon->bAutomatic)
	{
		Fire();
	}

	// 自动换弹：冷却结束时若弹夹为空，尝试换弹
	ReloadEmptyWeapon();
}


void UCombatComponent::ThrowGrenade()
{
	if (Grenades == 0) return;
	if (CombatState != ECombatState::ECS_Unoccupied || EquippedWeapon == nullptr) return;
	CombatState = ECombatState::ECS_ThrowingGrenade;
	bGrenadeLaunched = false;  // 重置发射标记：手雷尚未 Spawn
	if (Owner && Owner->IsLocallyControlled())
	{
		Owner->PlayThrowGrenadeMontage();
		AttachActorToLeftHand(EquippedWeapon);
		ShowAttachedGrenade(true);
	}
	if (Owner && !Owner->HasAuthority())
	{
		ServerThrowGrenade();
	}
	
	if (Owner && Owner->HasAuthority())
	{
		Grenades = FMath::Clamp(Grenades - 1, 0, MaxGrenades);
		UpdateHUDGrenades();
	}
}

//TODO:当player处于reloading时，使用这个手雷会不会有影响
void UCombatComponent::ThrowGrenadeFinished()
{
	CombatState = ECombatState::ECS_Unoccupied;
	AttachActorToRightHand(EquippedWeapon);
}

void UCombatComponent::LaunchGrenade()
{
	ShowAttachedGrenade(false);
	if (Owner && Owner->IsLocallyControlled())
	{
		ServerLaunchGrenade(HitTarget);
	} 
}

void UCombatComponent::OnRep_Grenades()
{
	UpdateHUDGrenades();
}

void UCombatComponent::ServerThrowGrenade_Implementation()
{
	if (Grenades == 0) return;
	CombatState = ECombatState::ECS_ThrowingGrenade;
	bGrenadeLaunched = false;  // 重置发射标记：手雷尚未 Spawn
	if (Owner)
	{
		Owner->PlayThrowGrenadeMontage();
		AttachActorToLeftHand(EquippedWeapon);
		ShowAttachedGrenade(true);
	}
	Grenades = FMath::Clamp(Grenades - 1, 0, MaxGrenades);
	UpdateHUDGrenades();
}

void UCombatComponent::ServerLaunchGrenade_Implementation(const FVector_NetQuantize& Target)
{
	if (Owner && GrenadeClass && Owner->GetAttachedGrenade())
	{
		const FVector StartingLocation = Owner->GetAttachedGrenade()->GetComponentLocation();
		FVector ToTarget = Target - StartingLocation;//获取手雷丢出的朝向
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = Owner;
		SpawnParams.Instigator = Owner;
		UWorld* World = GetWorld();
		if (World)
		{
			World->SpawnActor<AProjectile>(
				GrenadeClass,
				StartingLocation,
				ToTarget.Rotation(),
				SpawnParams);
			bGrenadeLaunched = true;  // 手雷已实际生成，标记为已发射
		}
	}
}




/*
 * 换弹
 */


/**
 * @brief 触发换弹流程（客户端入口）
 *
 * 【逻辑说明】：
 * - 前置条件检查：
 *   1. 备用弹药 > 0（有子弹可装）
 *   2. 当前不在换弹状态中（防止重复触发）
 * - 检查通过后调用 ServerReload RPC 向服务器请求换弹
 */
void UCombatComponent::Reload()
{
	// 必须有备用弹药且当前未处于换弹状态才能发起换弹
	if (CarriedAmmo > 0 && CombatState == ECombatState::ECS_Unoccupied && EquippedWeapon && !EquippedWeapon->IsAmmoFull() && !bLocallyReloading)
	// if (CarriedAmmo > 0 && CombatState != ECombatState::ECS_Unoccupied && !EquippedWeapon->IsAmmoFull())
	{
		//判断当前弹夹是否为最大装填
		
		ServerReload();
		HandleReload();//此处在本地使用播放换弹动画，同时让服务器也处理换弹相关逻辑//在由服务器处理的函数ServerReload_Implementation内增加一个判断用于在服务器上的本地客户端的副本进行设置
		bLocallyReloading = true;
	}
}

/**
 * @brief 执行换弹的具体操作 - 播放换弹动画蒙太奇
 *
 * 【逻辑说明】：
 * - 调用角色的 PlayReloadMontage 播放换弹动画
 * - 动画内部通过 AnimNotify（动画通知）在合适的时间点
 *   调用 FinishReloading 来完成弹药数据的实际转移
 * - 这种设计将"视觉效果"与"数据逻辑"解耦：
 *   动画时长可以自由调整而不影响弹药计算逻辑
 */
void UCombatComponent::HandleReload()
{
	if (Owner)
	{
		Owner->PlayReloadMontage();
	}
	// Owner->PlayReloadMontage();
}

void UCombatComponent::ReloadEmptyWeapon()
{
	// 如果装备时弹夹已空，自动触发换弹
	if (EquippedWeapon && EquippedWeapon->IsAmmoEmply())
	{
		Reload();
	}
}

/**
 * @brief 计算本次可补充的弹药数量
 * @return 可装入弹夹的弹药数量
 *
 * 【计算公式】：
 * RoomInMag = 弹夹容量 - 当前弹夹内剩余弹药
 * AmountCarried = 备用弹药库存中该武器类型的剩余数量
 * 返回值 = min(RoomInMag, AmountCarried)，取两者较小值
 *
 * 【示例】：弹夹容量30，当前剩5发，备用有20发
 * → RoomInMag = 25, AmountCarried = 20 → 返回20（受限于备用弹药）
 */
int32 UCombatComponent::AmountToReload()
{
	if (EquippedWeapon == nullptr) return 0;

	// 计算弹夹中的剩余空间
	int32 RoomInMag = EquippedWeapon->GetMagCapacity() - EquippedWeapon->GetAmmo();

	// 查找该武器类型对应的备用弹药库存
	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		int32 AmountCarried = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
		int32 Least = FMath::Min(RoomInMag, AmountCarried); // 取弹夹空间和库存量的最小值
		return FMath::Clamp(RoomInMag, 0, Least);
	}

	return 0; // 无对应武器类型的库存
}

void UCombatComponent::ShotgunShellReload()
{
	if (Owner && Owner->HasAuthority())
	{
		UpdateShotgunAmmoValues();
	}
}

/**
 * @brief 完成换弹 - 由换弹动画的通知（AnimNotify）在动画播放完毕时调用
 *
 * 【逻辑说明】：
 * - 此函数在服务器端执行实际的数据更新：
 *   1. 将战斗状态重置为 ECS_Unoccupied（空闲，允许再次操作）
 *   2. 调用 UpdateAmmoValues 执行实际的弹药转移计算
 *      （从 CarriedAmmoMap 转移弹药到武器的 Ammo 中）
 * - 换弹结束后，如果玩家仍按住开火按钮，自动继续开火
 *   （保证换弹后操作的连贯性，无需重新按下开火键）
 */
void UCombatComponent::FinishReloading()
{
	if (Owner == nullptr) return;

	bLocallyReloading = false;

	// 仅服务器端执行状态和数据更新
	if (Owner->HasAuthority())
	{
		// 重置战斗状态为空闲
		CombatState = ECombatState::ECS_Unoccupied;
		// ★ 霰弹枪的弹药转移已在 ShotgunShellReload → UpdateShotgunAmoValues 中逐发完成
		//   此处仅对非霰弹枪执行全量弹药转移（一次性装填所有弹药）
		if (EquippedWeapon == nullptr || EquippedWeapon->GetWeaponType() != EWeaponType::EWT_ShotGun)
		{
			UpdateAmmoValues();
		}
	}
	// 换弹完成后如果开火按钮仍被按住，自动恢复开火
	if(bFireButtonPressed)
	{
		Fire();
	}
}

/**
 * @brief 服务器RPC实现 - 处理换弹请求
 *
 * 【执行路径】: Client Reload() → ServerReload() [服务器执行]
 *
 * 【逻辑说明】：
 * - 安全校验： Owner 和 EquippedWeapon 必须有效
 * - 将战斗状态设为 ECS_Reloading（此变化会通过网络复制到所有客户端）
 * - 调用 HandleReload 播放换弹动画
 * - 注意：实际弹药数据的转移不在此时发生，
 *   而是在 FinishReloading 中（由 AnimNotify 触发）
 */
void UCombatComponent::ServerReload_Implementation()
{
	if (Owner == nullptr || EquippedWeapon == nullptr) return;

	// 设置战斗状态为"换弹中"（会触发 OnRep_CombatState 同步到客户端）
	CombatState = ECombatState::ECS_Reloading;
	
	//由于在本地客户端执行Reload时会执行ServerReload，而ServerReload会让本地客户端再一次执行Reload，所以需要加一个对本地客户端判断
	if (!Owner->IsLocallyControlled()) HandleReload(); // 播放换弹动画
}




/*
 * 更新弹药
 */


/**
 * @brief 执行弹药数值的实际转移（换弹完成时调用）
 *
 * 【数据流转过程】：
 * 1. 计算 ReloadAmount = 本次可补充的弹药数（调用 AmountToReload）
 * 2. 从 CarriedAmmoMap 中扣除对应的备用弹药量
 * 3. 更新本地 CarriedAmmo 变量
 * 4. 更新 HUD 上的携带弹药显示
 * 5. 调用武器 AddAmmo 将弹药加入弹夹（参数取负数表示增加）
 *
 * 【注意】：此函数仅在服务器端调用（由 HasAuthority 保护或仅在 FinishReloading 中调用）
 * 弹药的变化通过 OnRep_Ammo 和 OnRep_CarriedAmmo 同步到客户端
 */
void UCombatComponent::UpdateAmmoValues()
{
	if (Owner == nullptr || EquippedWeapon == nullptr) return;

	// 计算本次实际要转移多少弹药
	int32 ReloadAmount = AmountToReload();

	// 从备用弹药库中扣除对应数量
	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmoMap[EquippedWeapon->GetWeaponType()] -= ReloadAmount;
		CarriedAmmo = CarriedAmmoMap[EquippedWeapon->GetWeaponType()]; // 更新本地缓存
	}

	// 更新 HUD 显示
	XMBController = XMBController == nullptr ? Cast<AXMBPlayerController>(Owner->Controller) : XMBController;
	if (XMBController)
	{
		XMBController->SetHUDCarriedAmmo(CarriedAmmo);
	}

	// AddAmmo 传入负数表示增加弹夹内的弹药（内部用 clamp 限制上限）
	EquippedWeapon->AddAmmo(ReloadAmount);
}

void UCombatComponent::UpdateHUDGrenades()
{
	XMBController = XMBController == nullptr ? Cast<AXMBPlayerController>(Owner->Controller) : XMBController;
	if (XMBController)
	{
		XMBController->SetHUDGrenades(Grenades);
	}
}



void UCombatComponent::UpdateCarriedAmmo()
{
	if (EquippedWeapon == nullptr) return;
	
	// 从弹药映射表中获取该类型的备用弹药量并显示在HUD
	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmo = CarriedAmmoMap[EquippedWeapon->GetWeaponType()];
	}

	// 更新HUD上的携带弹药数显示
	XMBController = XMBController == nullptr ? Cast<AXMBPlayerController>(Owner->Controller) : XMBController;
	if (XMBController)
	{
		XMBController->SetHUDCarriedAmmo(CarriedAmmo);
	}
}

/**
 * @brief 初始化每种武器类型的初始携带弹药量
 *
 * 【逻辑说明】：
 * - 在 BeginPlay 中仅服务器端调用一次
 * - 使用 TMap 存储每种武器类型与其初始弹药量的映射
 * - 目前仅支持突击步枪（EWT_AssaultRifle），初始值为 StartingArAmmo（默认30发）
 * - 架构设计上预留了扩展性：新增武器类型只需在此添加一行 Emplace
 */
void UCombatComponent::InitializeCarriedAmmo()
{
	CarriedAmmoMap.Emplace(EWeaponType::EWT_AssaultRifle, StartingArAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_RocketLauncher, StartingRocketAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_Pistol, StartingPistolAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_SubmachineGun, StartingSMGAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_ShotGun, StartingShotGunAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_SniperRifle, StartingSniperAmmo);
	CarriedAmmoMap.Emplace(EWeaponType::EWT_GrenadeLauncher, StartingGrenadeLauncherAmmo);
}

void UCombatComponent::UpdateShotgunAmmoValues()
{
	// ★ 防重入保护：同一帧内只允许执行一次，防止多重调用路径导致多发装填
	if (GFrameCounter == ShotgunReloadFrameCounter) return;

	// ★ 防御性检查：仅在换弹状态且装备霰弹枪时执行
	if (Owner == nullptr || EquippedWeapon == nullptr || CombatState != ECombatState::ECS_Reloading || EquippedWeapon->GetWeaponType() != EWeaponType::EWT_ShotGun) return;

	// ★ 防御性检查：确保备用弹药充足且弹夹未满
	if (CarriedAmmo <= 0 || EquippedWeapon->IsAmmoFull()) return;

	// 记录本次执行帧号（在所有前置检查通过后）
	ShotgunReloadFrameCounter = GFrameCounter;

	// 扣减1发备用弹药
	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmoMap[EquippedWeapon->GetWeaponType()] -= 1;
		CarriedAmmo = CarriedAmmoMap[EquippedWeapon->GetWeaponType()]; // 更新本地缓存
	}
	
	// 更新 HUD 显示
	XMBController = XMBController == nullptr ? Cast<AXMBPlayerController>(Owner->Controller) : XMBController;
	if (XMBController)
	{
		XMBController->SetHUDCarriedAmmo(CarriedAmmo);
	}
	
	// 弹夹增加1发弹药（AddAmmo传入负数表示增加）
	EquippedWeapon->AddAmmo(1);
	bCanFire = true;
	
	// 检查是否需要结束装填（弹夹满或备用耗尽）
	if (EquippedWeapon->IsAmmoFull() || CarriedAmmo == 0)
	{
		MulticastJumpToShotgunEnd();
	}
}

/**
 * @brief 携带弹药变化的网络回调 - 当 CarriedAmmo 在服务器端被修改时调用
 *
 * 【逻辑说明】：
 * - 当 UpdateAmmoValues 或 EquipWeapon 修改 CarriedAmmo 后触发
 * - 在客户端上更新 HUD 显示的携带弹药数量
 * - 使用惰性初始化模式（==nullptr ? Cast<> : 缓存值）避免重复查询
 */
void UCombatComponent::OnRep_CarriedAmmo()
{
	// 获取或使用缓存的 PlayerController 引用
	XMBController = XMBController == nullptr ? Cast<AXMBPlayerController>(Owner->Controller) : XMBController;
	if (XMBController)
	{
		XMBController->SetHUDCarriedAmmo(CarriedAmmo); // 更新HUD携带弹药显示
	}

	// ★ 修复：仅服务器端控制霰弹枪装填动画跳转
	//   Client端通过Replication接收CarriedAmmo变化即可，不需要本地干预动画状态
	bool bJumpToShotgunEnd = Owner->HasAuthority()
		&& CombatState == ECombatState::ECS_Reloading 
		&& EquippedWeapon != nullptr 
		&& EquippedWeapon->GetWeaponType() == EWeaponType::EWT_ShotGun 
		&& CarriedAmmo == 0;
	if (bJumpToShotgunEnd)
	{
		MulticastJumpToShotgunEnd();
	}
}




/*
 * 拾取
 */


//TODO:了解一下控制器与HUD，为什么需要通过获取控制器来更新HUD，有什么方便的作用吗
void UCombatComponent::PickupAmmo(EWeaponType InWeaponType, int32 AmmoAmount)
{
	if (CarriedAmmoMap.Contains(InWeaponType))
	{
		CarriedAmmoMap[InWeaponType] = FMath::Clamp(CarriedAmmoMap[InWeaponType] + AmmoAmount, 0, MaxCarriedAmmo);

		UpdateCarriedAmmo();
	}

	if (EquippedWeapon && EquippedWeapon->IsAmmoEmply() && EquippedWeapon->GetWeaponType() == InWeaponType)
	{
		Reload();
	}
}




/*
 * 蒙太奇
 */


void UCombatComponent::ShowAttachedGrenade(bool bShowGrenade)
{
	if (Owner && Owner->GetAttachedGrenade())
	{
		Owner->GetAttachedGrenade()->SetVisibility(bShowGrenade);
	}
}

void UCombatComponent::JumpToShotgunEnd()
{
	// ★ 纯本地动画操作：调用 Character 的 SniperReload 执行 Montage_JumpToSection
	//   SniperReload 内置 Montage_IsPlaying 检查 + 必要时 Montage_Play 重播机制，
	//   能正确处理客户端 Montage 状态与服务端不同步的情况
	if (Owner)
	{
		Owner->ExecuteReloadMontage(FName("ShotgunEnd"), false);
	}
}

void UCombatComponent::MulticastJumpToShotgunEnd_Implementation()
{
	JumpToShotgunEnd();
}

void UCombatComponent::AttachActorToRightHand(AActor* ActorToAttach)
{
	if (Owner == nullptr || ActorToAttach == nullptr || Owner->GetMesh() == nullptr) return;
	// 将武器 Attach 到角色右手骨骼插槽
	const USkeletalMeshSocket* HandSocket = Owner->GetMesh()->GetSocketByName(FName("RightHandSocket"));
	if (HandSocket)
	{
		HandSocket->AttachActor(ActorToAttach, Owner->GetMesh());
	}
}

void UCombatComponent::AttachActorToLeftHand(AActor* ActorToAttach)
{
	if (Owner == nullptr || ActorToAttach == nullptr || Owner->GetMesh() == nullptr || EquippedWeapon == nullptr) return;

	//手枪与SMG冲锋枪
	bool bUsePistolSocket = EquippedWeapon->GetWeaponType() == EWeaponType::EWT_Pistol || EquippedWeapon->GetWeaponType() == EWeaponType::EWT_SubmachineGun;
	
	// 将武器 Attach 到角色右手骨骼插槽
	FName SocketName = bUsePistolSocket ? FName("PistolSocket") : FName("LeftHandSocket");
	const USkeletalMeshSocket* HandSocket = Owner->GetMesh()->GetSocketByName(SocketName);
	if (HandSocket)
	{
		HandSocket->AttachActor(ActorToAttach, Owner->GetMesh());
	}
}

void UCombatComponent::AttachActorToBackpack(AActor* ActorToAttach)
{
	if (Owner == nullptr || Owner->GetMesh() == nullptr || ActorToAttach == nullptr) return;
	const USkeletalMeshSocket* BackpackSocket = Owner->GetMesh()->GetSocketByName(FName("BackpackSocket"));
	if (BackpackSocket)
	{
		BackpackSocket->AttachActor(ActorToAttach, Owner->GetMesh());
	}
}

void UCombatComponent::AttachFlagToLeftHand(AWeaponBase* Flag)
{
	if (Owner == nullptr || Owner->GetMesh() == nullptr || Flag == nullptr) return;
	const USkeletalMeshSocket* HandSocket = Owner->GetMesh()->GetSocketByName(FName("FlagSocket"));
	if (HandSocket)
	{
		HandSocket->AttachActor(Flag, Owner->GetMesh());
	}
}




/*
 * 瞄准
 */


/**
 * @brief 设置正常瞄准状态
 * @param bIsAiming - true进入瞄准，false退出瞄准
 *
 * 【逻辑说明】：
 * 1. 更新本地 bAiming 变量（会被网络复制到其他客户端）
 * 2. 调用 ServerSetAiming RPC 同步服务器端的瞄准状态
 * 3. 立即在本地根据瞄准状态调整角色移动速度：
 *    - 瞄准时：MaxWalkSpeed = AimWalkSpeed (450)
 *    - 非瞄准：MaxWalkSpeed = BaseWalkSpeed (600)
 *    本地立即执行是为了避免等待服务器确认的延迟感
 */
void UCombatComponent::SetAiming(bool bIsAiming)
{
	if (Owner == nullptr || EquippedWeapon == nullptr) return;
	
	bAiming = bIsAiming;
	ServerSetAiming(bIsAiming); // 通知服务器更新
	// 本地立即调整移动速度（预测性执行，减少输入延迟感知）
	if (Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = bIsAiming ? AimWalkSpeed : BaseWalkSpeed;
	}

	//狙击枪瞄准处理
	if (Owner->IsLocallyControlled() && EquippedWeapon->GetWeaponType() == EWeaponType::EWT_SniperRifle)
	{
		Owner->ShowSniperScopeWidget(bIsAiming);
	}

	if (Owner->IsLocallyControlled()) bAimButtonPressed = bIsAiming;
}

void UCombatComponent::OnRep_Aiming()
{
	if (Owner && Owner->IsLocallyControlled())
	{
		bAiming = bAimButtonPressed;
	}
}


/**
 * @brief 服务器RPC实现 - 设置正常瞄准状态的服务器端版本
 *
 * 【作用】：确保服务器权威地记录瞄准状态并调整移动速度。
 * 即使客户端作弊修改本地速度，服务器的权威值也会在下一帧纠正
 */
void UCombatComponent::ServerSetAiming_Implementation(bool bIsAiming)
{
	bAiming = bIsAiming;
	if (Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = bIsAiming ? AimWalkSpeed : BaseWalkSpeed;
	}
}

/**
 * @brief 设置肩射瞄准状态
 * @param bIsShoulderAiming - true进入肩射，false退出肩射
 *
 * 【逻辑说明】：与 SetAiming 结构相同，但使用肩射专用速度 ShoulderAimWalkSpeed (300)
 * 肩射比正常瞄准移动更慢，提供不同的战术取舍
 */
void UCombatComponent::SetShoulderAiming(bool bIsShoulderAiming)
{
	bShoulderAiming = bIsShoulderAiming;
	ServerSetShoulderAiming(bIsShoulderAiming);
	if (Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = bIsShoulderAiming ? ShoulderAimWalkSpeed : BaseWalkSpeed;
	}
	if (Owner->IsLocallyControlled()) bShoulderAimButtonPressed = bIsShoulderAiming;
}

void UCombatComponent::OnRep_ShoulderAiming()
{
	if (Owner && Owner->IsLocallyControlled())
	{
		bShoulderAiming = bShoulderAimButtonPressed;
	}
}

/**
 * @brief 服务器RPC实现 - 设置肩射瞄准状态的服务器端版本
 */
void UCombatComponent::ServerSetShoulderAiming_Implementation(bool bIsShoulderAiming)
{
	bShoulderAiming = bIsShoulderAiming;
	if (Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = bIsShoulderAiming ? ShoulderAimWalkSpeed : BaseWalkSpeed;
	}
}



void UCombatComponent::PlayEquipWeaponSound(AWeaponBase* WeaponToEquip)
{
	// 播放装备音效
	if (Owner && WeaponToEquip && WeaponToEquip->EquipSound)
	{
		UGameplayStatics::PlaySoundAtLocation(
			this,
			WeaponToEquip->EquipSound,
			Owner->GetActorLocation());
	}
}




/**
 * @brief 战斗状态变化的网络回调 - 当 CombatState 在服务器端被修改时调用
 *
 * 【逻辑说明】：
 * 根据 CombatState 的不同值执行相应操作：
 * - ECS_Reloading: 客户端也开始播放换弹动画（保持与服务器视觉同步）
 * - ECS_Unoccupied:
 *   如果换弹结束时开火按钮仍被按住，自动恢复开火（无缝衔接）
 *   这保证了换弹后的操作连续性
 */
//TODO:修复此处的bug，玩家拾取武器,被手雷炸了之后就无法进行任何操作
void UCombatComponent::OnRep_CombatState()
{
	switch (CombatState)
	{
	case ECombatState::ECS_Reloading:
		if (Owner && !Owner->IsLocallyControlled()) HandleReload(); 
		break;
	case ECombatState::ECS_Unoccupied:
		// 换弹结束且玩家仍在按住开火键 → 自动恢复射击
			if(bFireButtonPressed)
			{
				Fire();
			}
		break;
	case ECombatState::ECS_ThrowingGrenade:
		if (Owner && !Owner->IsLocallyControlled())
		{
			Owner->PlayThrowGrenadeMontage();
			AttachActorToLeftHand(EquippedWeapon);
			ShowAttachedGrenade(true);
		}
		break;
	case ECombatState::ECS_SwappingWeapons:
		if (Owner && !Owner->IsLocallyControlled())
		{
			Owner->PlaySwapWeaponMontage();
		}
		break;
	}
	
}


void UCombatComponent::FinishSwap()
{
	if (Owner && Owner->HasAuthority())
	{
		CombatState = ECombatState::ECS_Unoccupied;
	}
	if (Owner) Owner->bFinishedSwapping = true;
	if (SecondaryWeapon) SecondaryWeapon->EnableCustomDepth(true);
}

void UCombatComponent::FinishSwapAttachWeapon()
{
	// if (Owner == nullptr || !Owner->HasAuthority()) return;
	PlayEquipWeaponSound(SecondaryWeapon);
	// AWeaponBase* TempWeapon = EquippedWeapon;
	// EquippedWeapon = SecondaryWeapon;
	// SecondaryWeapon = TempWeapon;

	
	EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
	AttachActorToRightHand(EquippedWeapon);
	EquippedWeapon->SetHUDAmmo();
	UpdateCarriedAmmo();
	
	SecondaryWeapon->SetWeaponState(EWeaponState::EWS_EquippedSecondary);
	AttachActorToBackpack(SecondaryWeapon);
}

void UCombatComponent::OnRep_HoldingTheFlag()
{
	if (bHoldingTheFlag && Owner && Owner->IsLocallyControlled())
	{
		Owner->Crouch();
	}
}