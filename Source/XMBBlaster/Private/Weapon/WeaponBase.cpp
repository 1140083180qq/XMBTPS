
// ============================================================
// @file WeaponBase.cpp
// @brief 武器基类实现 - 所有武器的父类，处理通用武器逻辑
//
// 【核心功能概述】：
// 本类是武器系统的基类（AProjectileWeapon 等子类的父），负责：
// 1. 武器的组件初始化（骨骼网格体/碰撞球体/拾取UI）
// 2. 武器状态机管理（Initial → Equipped → Dropped 三态转换）
// 3. 武器碰撞拾取系统（AreaSphere 检测玩家接近并显示拾取提示）
// 4. 弹药系统管理（弹夹内Ammo/MagCapacity容量/SpendRound消耗）
// 5. 开火逻辑（播放开火动画 + 抛出弹壳 + 扣除弹药）
// 6. 准心纹理配置（5向十字准心：Center/Left/Right/Top/Bottom）
// 7. 网络同步（WeaponState/Ammo 的 ReplicatedUsing 回调）
// ============================================================

#include "Weapon/WeaponBase.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Character/XMBCharacterBase.h"
#include "PlayerController/XMBPlayerController.h"
#include "Net/UnrealNetwork.h"


/**
 * @brief 构造函数 - 初始化武器的所有子组件
 *
 * 【组件创建与配置流程】：
 *
 * 1. bReplicates = true
 *    声明此 Actor 支持网络复制。只有设置了此标志，
 *    该 Actor 的 Replicated 变量才会在网络间同步。
 *    这是所有需要多客户端可见的 Actor 的基础设置。
 *
 * 2. WeaponMesh (USkeletalMeshComponent) - 武器骨骼网格体
 *    作为根组件（SetRootComponent），包含武器的3D模型。
 *    碰撞响应配置：
 *    - 对所有通道设为 Block（可被射线检测命中）
 *    - 对 Pawn 通道设为 Ignore（角色不会推开武器）
 *    - 初始禁用碰撞（NoCollision），装备后由状态机控制
 *
 * 3. AreaSphere (USphereComponent) - 拾取检测球体
 *    附加到根组件上，用于检测玩家是否靠近武器以便拾取。
 *    初始忽略所有碰撞通道，在 BeginPlay 中由服务器启用 Pawn 重叠检测。
 *
 * 4. PickupWidget (UWidgetComponent) - 拾取提示UI
 *    附加到根组件上，显示"按E拾取"之类的提示文字。
 *    默认隐藏（BeginPlay 中设置），当玩家进入 AreaSphere 时显示。
 */
AWeaponBase::AWeaponBase()
{
	PrimaryActorTick.bCanEverTick = false;
	// 启用 Actor 级别的网络复制，使本对象的 Replicated 变量能在网络间同步
	bReplicates = true;
	SetReplicateMovement(true);
	

	// 创建武器的骨骼网格体组件作为根组件
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	SetRootComponent(WeaponMesh);

	// 配置武器碰撞响应：
	// - 对所有通道阻挡（用于射线检测等交互）
	// - 忽略Pawn（防止角色身体与武器模型产生物理碰撞干扰）
	// - 初始禁用碰撞（由状态机根据武器状态动态控制）
	WeaponMesh->SetCollisionResponseToAllChannels(ECR_Block);
	WeaponMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 创建拾取检测球体组件
	AreaSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AreaSphere"));
	AreaSphere->SetupAttachment(RootComponent);
	// 初始忽略所有碰撞（在 BeginPlay 中按需启用重叠检测）
	AreaSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 创建拾取提示 Widget 组件（如"按E拾取"文字提示）
	PickupWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("PickupWidget"));
	PickupWidget->SetupAttachment(RootComponent);
}

/**
 * @brief 注册网络复制的属性变量
 *
 * 【注册的复制属性】：
 * - WeaponState: 武器状态枚举（变化时通过 OnRep_WeaponState 回调通知客户端）
 * - Ammo: 当前弹夹内的弹药数（变化时通过 OnRep_Ammo 回调更新HUD）
 */
void AWeaponBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// 注册需要网络复制的变量
	DOREPLIFETIME(AWeaponBase, WeaponState);
	DOREPLIFETIME(AWeaponBase, Ammo);
}



/**
 * @brief 游戏开始时初始化武器的碰撞和UI状态
 *
 * 【逻辑说明】：
 * 仅在服务器端（HasAuthority）执行以下操作：
 *
 * 1. 启用 AreaSphere 的碰撞检测：
 *    - 设为 QueryAndPhysics 模式（同时支持射线查询和物理模拟）
 *    - 对 Pawn 通道设为 Overlap（当玩家进入球体范围时触发重叠事件）
 *
 * 2. 绑定碰撞重叠回调函数：
 *    - OnComponentBeginOverlap → OnSphereOverlap（玩家进入拾取范围时调用）
 *    - OnComponentEndOverlap → OnSphereEndOverlap（玩家离开拾取范围时调用）
 *
 * 3. 隐藏 PickupWidget（拾取提示UI默认不可见，
 *    当玩家进入重叠范围后由 OnSphereOverlap 控制显示）
 *
 * 【为什么仅服务器端绑定？】因为拾取是游戏核心逻辑，
 * 必须由服务器权威决定。客户端的重叠检测可能因网络延迟而不准确。
 */
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority()) // 仅服务器端初始化碰撞系统
	{
		// 启用碰撞球体的重叠检测能力，对Pawn通道设置为重叠模式
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		AreaSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

		// 绑定球体的进入/离开重叠事件到对应的处理函数
		AreaSphere->OnComponentBeginOverlap.AddDynamic(this, &AWeaponBase::OnSphereOverlap);
		AreaSphere->OnComponentEndOverlap.AddDynamic(this, &AWeaponBase::OnSphereEndOverlap);
	}

	// 默认隐藏拾取提示UI（有玩家接近时再显示）
	if (PickupWidget)
	{
		PickupWidget->SetVisibility(false);
	}
}



/**
 * @brief 开火方法（虚函数，子类可重写扩展功能）
 * @param HitTarget - 射线检测到的命中目标位置坐标
 *
 * 【基类开火逻辑】（子类如 ProjectileWeapon 会在此基础上追加投射物生成）：
 *
 * 1. 播放开火动画：
 *    使用 FireAnimation（在蓝图中配置的动画资产）在武器骨骼网格体上播放。
 *    false 参数表示不循环播放（播放一次即停）。
 *
 * 2. 抛出弹壳效果：
 *    如果配置了 CasingClass（弹壳蓝图类）：
 *    a. 获取武器骨骼上的 "AmmoEject" 插槽（抛壳口位置和朝向）
 *    b. 获取该插槽的当前世界变换（位置+旋转）
 *    c. 在该位置以该旋转生成一个 ACasing 弹壳 Actor
 *       弹壳Actor自身会在 BeginPlay 中获得初始抛射速度和旋转
 *
 * 3. 扣除一发弹药（SpendRound）：
 *    将 Ammo 减1并通过 Clamp 限制在 [0, MagCapacity] 范围内，
 *    同时更新 HUD 上显示的弹药数量
 */
void AWeaponBase::Fire(const FVector& HitTarget)
{
	// 步骤1: 播放武器开火动画（如枪机后座、枪口跳动等）
	if (FireAnimation)
	{
		WeaponMesh->PlayAnimation(FireAnimation, false); // false = 不循环
	}

	// 步骤2: 在抛壳口生成弹壳 Actor
	if (CasingClass)
	{
		// 从武器骨骼模型中找到名为 "AmmoEject" 的插槽（抛壳口）
		const USkeletalMeshSocket* AmmoEjectSocket = WeaponMesh->GetSocketByName(FName("AmmoEject"));
		if (AmmoEjectSocket)
		{
			// 获取抛壳口的当前世界空间变换（位置 + 旋转角度）
			FTransform SocketTransform = AmmoEjectSocket->GetSocketTransform(GetWeaponMesh());
			if (UWorld* World = GetWorld())
			{
				// 在抛壳口位置生成弹壳 Actor，继承插槽的旋转方向
				ACasing* Projectile = World->SpawnActor<ACasing>(
					CasingClass,
					SocketTransform.GetLocation(),
					SocketTransform.GetRotation().Rotator());
			}
		}
	}

	// 步骤3: 扣除一发弹药并更新HUD
	SpendRound();
}

/**
 * @brief 设置武器的拥有者角色
 * @param Character - 拥有此武器的角色指针
 *
 * 【逻辑说明】：
 * - SetOwner() 是 UE5 Actor 基类的内置函数，会触发 Owner 的网络复制。
 *   当 Owner 变化时，所有客户端都会收到 OnRep_Owner 回调通知。
 * - InstigatorPawn 缓存为 APawn 类型，用于记录造成伤害的来源Pawn，
 *   在伤害计算系统中用于确定击杀归属
 */
void AWeaponBase::SetWeaponOwner(ACharacter* Character)
{
	SetOwner(Character); // 引擎内置的网络复制Owner
	InstigatorPawn = Cast<APawn>(GetOwner()); // 缓存为Pawn类型供伤害系统使用
}

/**
 * @brief 显示或隐藏拾取提示Widget
 * @param bShowWidget - true显示，false隐藏
 *
 * 【使用场景】：当玩家进入/离开 AreaSphere 重叠范围时由 OnSphereOverlap / OnSphereEndOverlap 调用
 */
void AWeaponBase::ShowPickupWidget(bool bShowWidget)
{
	if (PickupWidget)
	{
		PickupWidget->SetVisibility(bShowWidget);
	}
}

/**
 * @brief 设置武器状态并执行对应的状态转换操作
 * @param State - 目标武器状态（Equipped / Dropped）
 *
 * 【状态转换逻辑】：
 *
 * === EWS_Equipped（已装备状态）的操作 ===
 * - 隐藏拾取提示Widget（已装备不需要再提示拾取）
 * - 禁用 AreaSphere 碰撞（已装备的武器不能再被其他人拾取）
 * - 关闭武器模型的物理模拟（跟随角色手部移动，不受重力影响）
 * - 禁用武器碰撞（防止已装备武器与其他物体产生碰撞干扰）
 *
 * === EWS_Dropped（已丢弃状态）的操作 ===
 * - 仅在服务器端重新启用 AreaSphere 的 QueryOnly 碰撞
 *   （让其他玩家可以再次拾取这把掉落的武器）
 * - 启用武器物理模拟（受重力影响自由下落）
 * - 启用武器重力
 * - 启用武器 QueryAndPhysics 碰撞（可以与其他物体碰撞反弹）
 *
 * 【设计意图】：状态集中管理确保每次状态变更都执行完整的配套操作，
 * 避免遗漏某项设置导致异常行为
 */
void AWeaponBase::SetWeaponState(EWeaponState State)
{
	WeaponState = State; // 先更新状态值（会触发网络复制）

	switch (WeaponState)
	{
	case EWeaponState::EWS_Equipped:
		// 装备状态下禁用拾取相关功能
		ShowPickupWidget(false);                    // 隐藏拾取提示
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 关闭拾取检测
		// 武器变为"附着模式"：无物理、无重力、无碰撞
		WeaponMesh->SetSimulatePhysics(false);      // 关闭物理模拟
		WeaponMesh->SetEnableGravity(false);         // 关闭重力
		WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 关闭碰撞
		break;
	case EWeaponState::EWS_Dropped:
		// 丢弃状态下仅在服务器端重新开启拾取碰撞（避免客户端冲突）
		if (HasAuthority())
		{
			AreaSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly); // 仅射线检测（不物理碰撞）
		}
		// 武器变为"物理模式"：可落地、可碰撞
		WeaponMesh->SetSimulatePhysics(true);       // 启用物理模拟（可被推动、弹跳）
		WeaponMesh->SetEnableGravity(true);          // 启用重力（自然下落）
		WeaponMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); // 启用完整碰撞
		break;
	}
}

/**
 * @brief 武器状态变化的网络回调 - 客户端收到服务器端 WeaponState 变化时自动调用
 *
 * 【调用时机】: 服务器调用 SetWeaponState 后，引擎将 WeaponState 的新值复制到各客户端，
 * 触发此回调函数。客户端在此处重现服务器端的视觉效果变更。
 *
 * 【与 SetWeaponState 的区别】：
 * - SetWeaponState: 设置状态值 + 执行全部副作用（含 AreaSphere 操作）
 * - OnRep_WeaponState: 仅执行视觉相关的副作用（不含 AreaSphere，
 *   因为 AreaSphere 的碰撞仅服务器需要关心）
 */
void AWeaponBase::OnRep_WeaponState()
{
	switch (WeaponState)
	{
	case EWeaponState::EWS_Equipped:
		ShowPickupWidget(false);
		WeaponMesh->SetSimulatePhysics(false);
		WeaponMesh->SetEnableGravity(false);
		WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	case EWeaponState::EWS_Dropped:
		WeaponMesh->SetSimulatePhysics(true);
		WeaponMesh->SetEnableGravity(true);
		WeaponMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		break;
	}
}

/**
 * @brief 消耗一发弹药 - 开火时调用
 *
 * 【逻辑说明】：
 * - Ammo 减1，使用 FMath::Clamp 限制在 [0, MagCapacity] 有效范围内
 *   （防止出现负数或超过容量的异常值）
 * - 扣减后立即更新 HUD 上的弹药显示
 * - 注意：Ammo 变量的变化会通过网络复制到所有客户端（DOREPLIFETIME 注册过）
 */
void AWeaponBase::SpendRound()
{
	Ammo = FMath::Clamp(Ammo - 1, 0, MagCapacity); // 扣除1发并钳制在有效范围
	SetHUDAmmo(); // 更新HUD弹药显示
}

/**
 * @brief 弹药数量变化的网络回调 - 当 Ammo 在服务器端被修改时，客户端自动调用更新HUD
 *
 * 【惰性缓存模式】：
 * XMBOwnerCharacter 使用三目运算符进行惰性初始化：
 * - 如果为 nullptr，则从 GetOwner() 转换获取并缓存
 * - 如果已有缓存值，直接复用（避免每帧 Cast 的性能开销）
 */
void AWeaponBase::OnRep_Ammo()
{
	// 惰性获取或复用缓存的拥有者角色引用
	XMBOwnerCharacter = XMBOwnerCharacter == nullptr ? Cast<AXMBCharacterBase>(GetOwner()) : XMBOwnerCharacter;
	// ★ 通过 Multicast RPC 广播霰弹枪装填动画跳转，确保所有客户端同步
	if (HasAuthority() && XMBOwnerCharacter && XMBOwnerCharacter->GetCombatComponent() && IsAmmoFull())
	{
		XMBOwnerCharacter->GetCombatComponent()->MulticastJumpToShotgunEnd();
	}
	SetHUDAmmo(); // 更新HUD上的弹药数值显示
}

/**
 * @brief Owner 变化的网络回调 - 当武器的拥有者发生变化时调用
 *
 * 【触发场景】：
 * - 装备武器时：SetOwner(Character) 触发
 * - 丢弃武器时：SetOwner(nullptr) 触发
 * - 角色淘汰/销毁时：引擎自动清理 Owner
 *
 * 【逻辑分支】：
 * - Owner == nullptr（武器被丢弃或拥有者消失）：
 *   清空所有缓存的 Character 和 Controller 引用，防止悬空指针
 * - Owner != nullptr（武器有了新的拥有者）：
 *   更新 HUD 弹药显示（新拥有者需要看到正确的弹药数）
 */
void AWeaponBase::OnRep_Owner()
{
	Super::OnRep_Owner(); // 先调用父类的基础处理

	if (Owner == nullptr)
	{
		// 丢失了拥有者，清空所有引用防止悬空指针访问崩溃
		XMBOwnerCharacter = nullptr;
		XMBOwnerController = nullptr;
	}
	else
	{
		// 获得了新拥有者，立即更新其HUD弹药显示
		SetHUDAmmo();
	}

}

/**
 * @brief 更新HUD上显示的武器弹药数量
 *
 * 【数据链路】：Ammo(本类) → XMBOwnerController → XMBPlayerController.SetHUDWeaponAmmo() → UMG Widget
 *
 * 【惰性双重缓存】：
 * 1. XMBOwnerCharacter: 从 GetOwner() 懒加载并缓存（避免重复Cast）
 * 2. XMBOwnerController: 从 Character.Controller 懒加载并缓存
 * 这种模式在整个项目中频繁使用，是UE5中获取跨对象引用的标准做法
 */
void AWeaponBase::SetHUDAmmo()
{
	// 第一层懒加载：获取或复用拥有者角色的缓存引用
	XMBOwnerCharacter = XMBOwnerCharacter == nullptr ? Cast<AXMBCharacterBase>(GetOwner()) : XMBOwnerCharacter;

	if (XMBOwnerCharacter)
	{
		// 第二层懒加载：获取或复用 PlayerController 的缓存引用
		XMBOwnerController = XMBOwnerController == nullptr ? Cast<AXMBPlayerController>(XMBOwnerCharacter->Controller) : XMBOwnerController;
		if (XMBOwnerController)
		{
			// 最终将当前 Ammo 值传递给 Controller 的 HUD 更新函数
			XMBOwnerController->SetHUDWeaponAmmo(Ammo);
		}
	}
}

/**
 * @brief 碰撞体重叠进入回调 - 当有 Actor 进入 AreaSphere 范围时触发
 *
 * 【参数说明】：
 * - OverlappedComponent: 发生重叠的组件（本对象的 AreaSphere）
 * - OtherActor: 进入重叠范围的另一个 Actor
 * - OtherComp: 另一个 Actor 上发生重叠的具体组件
 * - OtherBodyIndex: 另一个 Actor 的 body 索引
 * - bFromSweep: 是否由扫描(sweep)触发的重叠（通常为 false，因为是持续重叠检测）
 * - SweepResult: 扫描结果信息（bFromSweep=true 时有效）
 *
 * 【逻辑说明】：
 * 1. 尝试将 OtherActor 转换为 AXMBCharacterBase 类型（检查是否为玩家角色）
 * 2. 如果确实是角色且 PickupWidget 存在：
 *    调用角色的 SetOverlappingWeapon(this)，将本武器指针传递给角色。
 *    角色内部会将此指针保存到 OverlappingWeapon 变量（ReplicatedUsing=OnRep_OverlappingWeapon），
 *    服务器端的变量变化会自动复制到各客户端，客户端的 OnRep_OverlappingWeapon 回调
 *    会控制 PickupWidget 的显示/隐藏
 */
void AWeaponBase::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
                                  const FHitResult& SweepResult)
{
	// 检测进入重叠区的是否为本项目的玩家角色
	AXMBCharacterBase* XMBCharacter = Cast<AXMBCharacterBase>(OtherActor);
	if (XMBCharacter && PickupWidget)
	{
		// 通知角色"你附近有一把可拾取的武器"，触发网络同步显示拾取提示UI
		XMBCharacter->SetOverlappingWeapon(this);
	}
}

/**
 * @brief 碰撞体重叠离开回调 - 当 Actor 离开 AreaSphere 范围时触发
 *
 * 【逻辑说明】：与 OnSphereOverlap 对应的反向操作：
 * 通知角色"你已经离开了武器的拾取范围"，传入 nullptr 表示没有重叠的武器
 * 角色的 SetOverlappingWeapon(nullptr) 会隐藏拾取提示 UI
 */
void AWeaponBase::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                     UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AXMBCharacterBase* XMBCharacter = Cast<AXMBCharacterBase>(OtherActor);
	if (XMBCharacter && PickupWidget)
	{
		// 传入 nullptr 表示没有重叠的武器了
		XMBCharacter->SetOverlappingWeapon(nullptr);
	}
}

/**
 * @brief 丢弃武器 - 使武器从角色手上掉落到地面
 *
 * 【完整丢弃流程】：
 * 1. 将武器状态切换为 EWS_Dropped（触发状态机的全套操作：启用物理/重力/碰撞）
 * 2. 使用 DetachFromComponent 将武器从角色骨骼插槽上分离
 *    - EDetachmentRule::KeepWorld: 保持世界空间的当前位置和旋转（不从零开始）
 *    - true: 保持相对于父级的世界变换
 * 3. 清空 Owner（SetOwner(nullptr)），解除与角色的归属关系
 * 4. 清空所有缓存的 Character 和 Controller 引用
 *
 * 【结果】：武器变成一个独立的物理模拟 Actor，自由落体到地面，
 * 并可以被其他玩家通过 AreaSphere 再次拾取
 */
void AWeaponBase::Dropped()
{
	SetWeaponState(EWeaponState::EWS_Dropped); // 切换到丢弃状态（启用物理）

	// 从角色骨骼插槽分离武器，保持世界坐标系的位置和旋转
	FDetachmentTransformRules DetachRules(EDetachmentRule::KeepWorld, true);
	WeaponMesh->DetachFromComponent(DetachRules);

	SetOwner(nullptr); // 解除拥有者关系（触发 OnRep_Owner 清理缓存）
	XMBOwnerCharacter = nullptr; // 清空角色缓存
	XMBOwnerController = nullptr; // 清空控制器缓存
}

/**
 * @brief 为武器添加弹药
 * @param AmmoToAdd - 要添加的弹药数量（正值增加，但传入方式特殊）
 *
 * 【注意参数语义】：虽然函数名是 AddAmmo，但在 UpdateAmmoValues 中的实际调用方式是
 * AddAmmo(-ReloadAmount)，即传入负值来表示增加弹夹内的弹药。
 * 内部的计算公式为：Ammo = Clamp(Ammo - AmmoToAdd, 0, MagCapacity)
 * 所以传入 -ReloadAmount 时实际效果为 Ammo += ReloadAmount
 *
 * 【设计原因】：这个命名可能是历史遗留或为了统一 SpendRound（扣弹药）和 AddAmmo（加弹药）
 * 的接口风格。Clamp 确保最终值不会超过弹夹容量上限
 */
void AWeaponBase::AddAmmo(int32 AmmoToAdd)
{
	Ammo = FMath::Clamp(Ammo - AmmoToAdd, 0, MagCapacity); // 注意：传入负值=增加
	SetHUDAmmo(); // 同步更新HUD显示
}

/**
 * @brief 检查弹夹内弹药是否耗尽
 * @return true 表示弹夹为空（Ammo <= 0），false 表示还有弹药
 *
 * 【使用场景】：
 * - CombatComponent.CanFire(): 有弹药才能开火
 * - CombatComponent.FireTimerFinished(): 冷却结束时若弹夹空了自动换弹
 * - CombatComponent.EquipWeapon(): 装备时若弹夹为空自动触发换弹
 */
bool AWeaponBase::IsAmmoEmply()
{
	return Ammo <= 0; // 注意：原代码此处方法名拼写为 Emply（应为 Empty），保持不变
}

bool AWeaponBase::IsAmmoFull()
{
	return Ammo == MagCapacity;
}


