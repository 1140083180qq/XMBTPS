
#include "Character/XMBCharacterBase.h"

#include "NiagaraFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameMode/BlasterGameMode.h"
#include "GameState/XMBBlasterGameState.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "XMBComponent/CombatComponent.h"
#include "PlayerState/XMBPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"
#include "XMBBlaster/XMBBlaster.h"
#include "Sound/SoundCue.h"
#include "XMBComponent/BuffComponent.h"
#include "Components/BoxComponent.h"
#include "XMBComponent/LagCompensationComponent.h"

#include "NiagaraComponent.h"
#include "PlayerStart/TeamPlayerStart.h"

AXMBCharacterBase::AXMBCharacterBase()
{
	// 禁用默认Tick，由子组件自行处理每帧更新
	PrimaryActorTick.bCanEverTick = false;
	
	// 网络同步频率：最高66Hz，最低33Hz（平衡带宽与流畅度）
	NetUpdateFrequency = 66.f;
	MinNetUpdateFrequency = 33.f;
	
	// 当生成位置有碰撞时，尝试调整位置但强制生成（不丢弃武器等关键对象）
	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	/* ====== 相机系统 ====== */
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetMesh());
	CameraBoom->TargetArmLength = 600.f;              // 相机距角色600单位
	CameraBoom->bUsePawnControlRotation = true;      // 相机臂跟随玩家视角控制旋转

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;   // 相机本身不独立旋转，完全依赖相机臂

	/* ====== 移动配置 ====== */
	bUseControllerRotationYaw = false;               // 不用控制器直接控制身体朝向
	GetCharacterMovement()->bOrientRotationToMovement = true; // 身体朝向移动方向（横移走）

	/* ====== UI组件 ====== */
	OverheadWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverheadWidget"));
	OverheadWidget->SetupAttachment(GetMesh());

	/* ====== 功能组件（启用网络复制） ====== */
	CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));
	CombatComponent->SetIsReplicated(true);          // 战斗状态需要网络同步

	UIComponent = CreateDefaultSubobject<UUIComponent>(TEXT("UIComponent"));
	UIComponent->SetIsReplicated(true);             // UI状态需要网络同步

	LagCompensationComponent = CreateDefaultSubobject<ULagCompensationComponent>(TEXT("LagCompensationComponent"));
	// LagCompensationComponent->SetIsReplicated(true);
	
	/* ====== 移动能力配置 ====== */
	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;  // 允许蹲伏
	GetCharacterMovement()->RotationRate = FRotator(0.f, 0.f, 650.f); // Z轴旋转速度650°/s

	/* ====== 碰撞通道优化 ====== */
	// 解决角色模型阻挡相机的问题：让Capsule和Mesh对Camera通道无响应
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetCollisionObjectType(ECC_SkeletalMesh);     // 设置为骨骼网格体类型
	GetMesh()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);  // Mesh不阻挡相机
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block); // Mesh参与可见性射线检测
	
	/* ====== 初始状态 ====== */
	TurningInPlace = ETurningInPlace::ETIP_NotTurning;       // 初始不在转身

	// 始终更新动画姿态和骨骼，即使角色在屏幕外（保证Simulated Proxy动画准确）
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;

	AttachedGrenade = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Attached Grenade"));
	AttachedGrenade->SetupAttachment(GetMesh(), FName("GrenadeSocket"));
	AttachedGrenade->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	BuffComponent = CreateDefaultSubobject<UBuffComponent>(TEXT("BuffComponent"));
	BuffComponent->SetIsReplicated(true);

	
	Head = CreateDefaultSubobject<UBoxComponent>(TEXT("Head"));
	Head->SetupAttachment(GetMesh(), FName("head"));
	HitCollisionBoxes.Add(FName("Head"), Head);

	Pelvis = CreateDefaultSubobject<UBoxComponent>(TEXT("Pelvis"));
	Pelvis->SetupAttachment(GetMesh(), FName("Pelvie"));
	HitCollisionBoxes.Add(FName("Pelvis"), Pelvis);

	Spine_02 = CreateDefaultSubobject<UBoxComponent>(TEXT("Spine_02"));
	Spine_02->SetupAttachment(GetMesh(), FName("spine_02"));
	HitCollisionBoxes.Add(FName("Spine_02"), Spine_02);
	
	Spine_03 = CreateDefaultSubobject<UBoxComponent>(TEXT("Spine_03"));
	Spine_03->SetupAttachment(GetMesh(), FName("spine_03"));
	HitCollisionBoxes.Add(FName("Spine_03"), Spine_03);
	
	Upperarm_l = CreateDefaultSubobject<UBoxComponent>(TEXT("Upperarm_l"));
	Upperarm_l->SetupAttachment(GetMesh(), FName("upperarm_l"));
	HitCollisionBoxes.Add(FName("Upperarm_l"), Upperarm_l);
	
	Upperarm_r = CreateDefaultSubobject<UBoxComponent>(TEXT("Upperarm_r"));
	Upperarm_r->SetupAttachment(GetMesh(), FName("upperarm_r"));
	HitCollisionBoxes.Add(FName("Upperarm_r"), Upperarm_r);
	
	Lowerarm_l = CreateDefaultSubobject<UBoxComponent>(TEXT("Lowerarm_l"));
	Lowerarm_l->SetupAttachment(GetMesh(), FName("lowerarm_l"));
	HitCollisionBoxes.Add(FName("Lowerarm_l"), Lowerarm_l);
	
	Lowerarm_r = CreateDefaultSubobject<UBoxComponent>(TEXT("Lowerarm_r"));
	Lowerarm_r->SetupAttachment(GetMesh(), FName("lowerarm_r"));
	HitCollisionBoxes.Add(FName("Lowerarm_r"), Lowerarm_r);
	
	Hand_l = CreateDefaultSubobject<UBoxComponent>(TEXT("Hand_l"));
	Hand_l->SetupAttachment(GetMesh(), FName("hand_l"));
	HitCollisionBoxes.Add(FName("Hand_l"), Hand_l);
	
	Hand_r = CreateDefaultSubobject<UBoxComponent>(TEXT("Hand_r"));
	Hand_r->SetupAttachment(GetMesh(), FName("hand_r"));
	HitCollisionBoxes.Add(FName("Hand_r"), Hand_r);

	Thigh_l = CreateDefaultSubobject<UBoxComponent>(TEXT("Thigh_l"));
	Thigh_l->SetupAttachment(GetMesh(), FName("thigh_l"));
	HitCollisionBoxes.Add(FName("Thigh_l"), Thigh_l);
	
	Thigh_r = CreateDefaultSubobject<UBoxComponent>(TEXT("Thigh_r"));
	Thigh_r->SetupAttachment(GetMesh(), FName("thigh_r"));
	HitCollisionBoxes.Add(FName("Thigh_r"), Thigh_r);
	
	Calf_l = CreateDefaultSubobject<UBoxComponent>(TEXT("Calf_l"));
	Calf_l->SetupAttachment(GetMesh(), FName("calf_l"));
	HitCollisionBoxes.Add(FName("Calf_l"), Calf_l);
	
	Calf_r = CreateDefaultSubobject<UBoxComponent>(TEXT("Calf_r"));
	Calf_r->SetupAttachment(GetMesh(), FName("calf_r"));
	HitCollisionBoxes.Add(FName("Calf_r"), Calf_r);
	
	Foot_l = CreateDefaultSubobject<UBoxComponent>(TEXT("Foot_l"));
	Foot_l->SetupAttachment(GetMesh(), FName("foot_l"));
	HitCollisionBoxes.Add(FName("Foot_l"), Foot_l);
	
	Foot_r = CreateDefaultSubobject<UBoxComponent>(TEXT("Foot_r"));
	Foot_r->SetupAttachment(GetMesh(), FName("foot_r"));
	HitCollisionBoxes.Add(FName("Foot_r"), Foot_r);

	for(auto Box : HitCollisionBoxes)
	{
		if (Box.Value)
		{
			Box.Value->SetCollisionObjectType(ECC_HitBox);
			Box.Value->SetCollisionResponseToAllChannels(ECR_Ignore);
			Box.Value->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
			Box.Value->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}

/**@brief 游戏开始时初始化*/
void AXMBCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	UpdateHUDHealth();  // 初始化时将当前生命值同步到HUD
	UpdateHUDShield();

	CombatComponent->SpawnDefaultWeapon();
	UpdateHUDAmmo();
	
	// 仅服务器绑定伤害事件，确保伤害计算的权威性
	if (HasAuthority())
	{
		OnTakeAnyDamage.AddDynamic(this, &AXMBCharacterBase::ReceiveDamage);
	}

	if (AttachedGrenade)
	{
		AttachedGrenade->SetVisibility(false);
	}
}




/**@brief 每帧调用*/
void AXMBCharacterBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	RotateInPlace(DeltaSeconds);        // 核心动画逻辑
	HideCameraIfCharacterClose();       // 相机防穿透
	PollInit();                         // TODO: 可改为定时器实现
}

/** @brief 注册网络复制属性*/
void AXMBCharacterBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AXMBCharacterBase, OverlappingWeapon, COND_OwnerOnly);
	DOREPLIFETIME(AXMBCharacterBase, Health);
	DOREPLIFETIME(AXMBCharacterBase, MaxHealth);
	DOREPLIFETIME(AXMBCharacterBase, Shield);
	DOREPLIFETIME(AXMBCharacterBase, MaxShield);
	// DOREPLIFETIME(AXMBCharacterBase, bDisableGameplay);
}



/** @brief 角色销毁时的清理工作*/
void AXMBCharacterBase::Destroyed()
{
	Super::Destroyed();

	// 清理淘汰机器人特效组件
	if (ElimBotComponent)
	{
		ElimBotComponent->DestroyComponent();
	}

	// 仅在非进行中的比赛状态下销毁装备的武器
	AXMBBlasterGameState* BlasterGameState = Cast<AXMBBlasterGameState>(UGameplayStatics::GetGameState(this));
	bool bmatchNotInProgress = BlasterGameState && BlasterGameState->GetMatchState() != MatchState::InProgress;
	
	if (CombatComponent && CombatComponent->EquippedWeapon && bmatchNotInProgress)
	{
		CombatComponent->EquippedWeapon->Destroy();
	}
}

/**在所有组件CreateDefaultSubobject完成后调用*/
void AXMBCharacterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	// 将自身指针传递给子组件，建立双向引用
	if (CombatComponent)
	{
		CombatComponent->Owner = this;
	}
	if (UIComponent)
	{
		UIComponent->Owner = this;
	}
	if (BuffComponent)
	{
		BuffComponent->Owner = this;
		BuffComponent->SetInitialSpeeds(GetCharacterMovement()->MaxWalkSpeed, GetCharacterMovement()->MaxWalkSpeedCrouched);
		BuffComponent->SetInitialJumpVelocity(GetCharacterMovement()->JumpZVelocity);
	}
	if (LagCompensationComponent)
	{
		LagCompensationComponent->Owner = this;
		if (Controller)
		{
			LagCompensationComponent->OwnerController = Cast<AXMBPlayerController>(Controller);
		}
	}
}



/**
 * @brief 计算瞄准偏移(AimOffset) - 本地玩家专用
 *
 * 【核心算法原理】：
 * 
 * AimOffset解决的问题：当玩家静止站立但转动视角时，
 * 上半身需要朝向瞄准方向，而下半身保持不动。
 * 这通过AO_Yaw值传递给动画蓝图的混合空间来实现。
 *
 * 【两种状态的分支处理】：
 * ┌─────────────────────────────────────────────────────┐
 * │ 状态1: 静止站立 (Speed==0 && !bIsInAir)            │
 * │  - 允许根骨骼旋转(bRotateRootBone=true)            │
 * │  - 计算CurrentAimRotation vs StartingAimRotation差值│
 * │  - AO_Yaw = 差值的Yaw分量                          │
 * │  - 调用TurnInPlace()处理大角度转身                 │
 * └─────────────────────────────────────────────────────┘
 * ┌─────────────────────────────────────────────────────┐
 * │ 状态2: 移动中或空中 (Speed>0 || bIsInAir)           │
 * │  - 禁止根骨骼旋转                                   │
 * │  - 重置锚点StartingAimRotation为当前朝向            │
 * │  - AO_Yaw归零（移动时不使用瞄准偏移）               │
 * │  - TurningInPlace重置为NotTurning                   │
 * └─────────────────────────────────────────────────────┘
 *
 * 最后统一调用CalculateAO_Pitch()计算俯仰角
 *
 * @param DeltaTime - 帧间隔时间，用于TurnInPlace插值
 */
void AXMBCharacterBase::AimOffset(float DeltaTime)
{
	// 无武器时不需要计算瞄准偏移
	if (CombatComponent && CombatComponent->EquippedWeapon == nullptr) return;

	float Speed = CalculateSpeed();
	bool bIsInAir = GetCharacterMovement()->IsFalling();

	/* ====== 状态1: 静止站立 ====== */
	if (Speed == 0.f && !bIsInAir)
	{
		bRotateRootBone = true;  // 允许根骨骼参与旋转
		
		// 获取当前相机瞄准方向的纯Yaw旋转（去除Pitch和Roll）
		FRotator CurrentAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		
		// 计算当前瞄准方向相对于锚点(上次停止移动时的方向)的差值
		// NormalizedDeltaRotator返回[-180,180]范围的最短路径差值
		FRotator DeltaAimRotation = UKismetMathLibrary::NormalizedDeltaRotator(CurrentAimRotation, StartingAimRotation);
		
		AO_Yaw = DeltaAimRotation.Yaw;  // 提取水平偏移量
		
		// 未在转身时，记录当前偏移量用于插值起始点
		if (TurningInPlace == ETurningInPlace::ETIP_NotTurning)
		{
			InterpAO_Yaw = AO_Yaw;
		}
		
		bUseControllerRotationYaw = true;
		TurnInPlace(DeltaTime);  // 处理是否需要播放转身动画
	}
	/* ====== 状态2: 移动中或空中 ====== */
	else if (Speed > 0.f || bIsInAir)
	{
		bRotateRootBone = false;  // 移动时禁止根骨骼旋转（使用移动动画 blendspace）
		
		// 更新锚点为当前朝向，下次停止移动时以此为新基准
		StartingAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		
		AO_Yaw = 0.f;  // 移动时清零偏移
		bUseControllerRotationYaw = true;
		TurningInPlace = ETurningInPlace::ETIP_NotTurning;  // 移动中不算转身
	}
	
	CalculateAO_Pitch();  // 统一计算俯仰角
}

/**
 * @brief 计算俯仰角(Pitch)用于上下瞄准动画
 *
 * 【Pitch值不一致问题】：
 * GetBaseAimRotation().Pitch 在不同环境下返回不同范围：
 * - 本地客户端: 返回 [-90, 90] （正常范围）
 * - 远程代理(SimulatedProxy): 可能返回 [270, 360) 表示向下看
 *
 * 【解决方法】：将 [270, 360) 映射到 [-90, 0)
 * 公式: AO_Pitch = MapClamp(Value, [270,360] → [-90,0])
 */
void AXMBCharacterBase::CalculateAO_Pitch()
{
	AO_Pitch = GetBaseAimRotation().Pitch;
	
	// 仅对远程代理角色做范围转换（本地客户端已经是正确的 [-90,90]）
	if (AO_Pitch > 90.f && !IsLocallyControlled())
	{
		FVector2D InRange(270.f, 360.f);   // 输入范围：UE特殊编码的下看角度
		FVector2D OutRange(-90.f, 0.f);     // 输出范围：标准的下看负角度
		AO_Pitch = FMath::GetMappedRangeValueClamped(InRange, OutRange, AO_Pitch);
	}
}

/*** 使用场景：判断角色是否在移动、准心散布计算、动画混合空间输入*/
float AXMBCharacterBase::CalculateSpeed()
{
	FVector Velocity = GetVelocity();
	Velocity.Z = 0.f;  // 忽略跳跃/下落的垂直分量
	return Velocity.Size();
}

/**
 * @brief 原地转身处理逻辑
 *
 * 【转身判定算法】：
 * 
 * AO_Yaw 表示当前视角偏离正前方的角度：
 * - AO_Yaw > 90°  →  视角右偏超过90°  →  需要向右转身
 * - AO_Yaw < -90° →  视角左偏超过90°  →  需要向左转身
 *
 * 【转身插值过程】：
 * 1. 判定转身方向后，使用 FInterpTo 将 AO_Yaw 平滑插回 0
 * 2. 插值速率 4.0f，使转身动画自然过渡
 * 3. 当 |AO_Yaw| < 15° 时认为转身完成：
 *    - 重置TurningInPlace为NotTurning
 *    - 更新锚点StartingAimRotation为当前朝向
 *    - 这样下一帧就不会再进入转身分支
 *
 * @param DeltaTime - 用于FInterpTo插值
 */
void AXMBCharacterBase::TurnInPlace(float DeltaTime)
{
	/* ====== 判定转身方向 ====== */
	if (AO_Yaw > 90.f)  // 视角右偏超过90度
	{
		TurningInPlace = ETurningInPlace::ETIP_Right;
	}
	else if (AO_Yaw < -90.f)  // 视角左偏超过90度
	{
		TurningInPlace = ETurningInPlace::ETIP_Left;
	}
	
	/* ====== 执行转身插值 ====== */
	if (TurningInPlace != ETurningInPlace::ETIP_NotTurning)
	{
		// AO_Yaw 通过插值逐渐回归0，使上半身平滑转回正前方
		InterpAO_Yaw = FMath::FInterpTo(InterpAO_Yaw, 0.f, DeltaTime, 4.f);
		AO_Yaw = InterpAO_Yaw;
		
		// |AO_Yaw| < 15° 时判定转身完成
		if (FMath::Abs(AO_Yaw) < 15.f)
		{
			TurningInPlace = ETurningInPlace::ETIP_NotTurning;
			// 更新锚点：将当前瞄准方向设为新的基准方向
			StartingAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		}
	}
}

/**
 * @brief 远程代理角色的转身判断（替代AimOffset）
 *
 * 【为什么需要这个函数】：
 * AimOffset依赖GetBaseAimRotation()获取相机方向，
 * 但远程代理角色(SimulatedProxy)没有本地相机信息！
 *
 * 【解决方案】：使用帧间的Actor旋转差来推断是否在转身
 *
 * 【算法原理】：
 * 1. 保存上一帧的旋转(ProxyRotationLastFrame)
 * 2. 获取当前帧的旋转(ProxyRotation)
 * 3. 计算两帧之间的Yaw差值(ProxyYaw)
 * 4. 如果 |ProxyYaw| > TurnThreshold(0.5°)，说明角色在转身
 *    - ProxyYaw > 0 → 向右转
 *    - ProxyYaw < 0 → 向左转
 * 5. 定时触发(每0.25秒检查一次)，避免过度计算
 */
void AXMBCharacterBase::SimProxiesTurn()
{
	if (CombatComponent == nullptr || CombatComponent->EquippedWeapon == nullptr) return;

	bRotateRootBone = false;
	float Speed = CalculateSpeed();

	// 移动中不判定转身
	if (Speed > 0.f)
	{
		TurningInPlace = ETurningInPlace::ETIP_NotTurning;
		return;
	}

	// 记录帧间旋转数据
	ProxyRotationLastFrame = ProxyRotation;
	ProxyRotation = GetActorRotation();
	// 计算这一帧相对于上一帧的Yaw变化量
	ProxyYaw = UKismetMathLibrary::NormalizedDeltaRotator(ProxyRotation, ProxyRotationLastFrame).Yaw;

	// 根据旋转量判断转身方向
	if (FMath::Abs(ProxyYaw) > TurnThreshold)  // 超过阈值才认为是转身
	{
		if (ProxyYaw > TurnThreshold)
		{
			TurningInPlace = ETurningInPlace::ETIP_Right;
		}
		else if (ProxyYaw < -TurnThreshold)
		{
			TurningInPlace = ETurningInPlace::ETIP_Left;
		}
		else
		{
			TurningInPlace = ETurningInPlace::ETIP_NotTurning;
		}
		return;
	}
	TurningInPlace = ETurningInPlace::ETIP_NotTurning;
}

/**
 * @brief 统一的原地旋转入口
 *
 * 【根据角色类型分发不同的处理方式】：
 *
 * ┌──────────────────────────────────────────────────────┐
 * │ 本地控制的角色 (ROLE > SimulatedProxy):             │
 * │   → 使用 AimOffset()                                │
 * │   原因：有本地相机信息，可以直接计算瞄准偏移         │
 * ├──────────────────────────────────────────────────────┤
 * │ 远程代理角色 (SimulatedProxy 或更低):               │
 * │   → 使用 SimProxiesTurn()                           │
 * │   原因：没有相机，只能通过帧间旋转差推断转身         │
 * │   每0.25秒手动触发一次OnRep_ReplicatedMovement       │
 * └──────────────────────────────────────────────────────┘
 *
 * 两类角色都会调用CalculateAO_Pitch()计算俯仰角
 *
 * @param DeltaSeconds - 帧间隔时间
 */
void AXMBCharacterBase::RotateInPlace(float DeltaSeconds)
{
	if (CombatComponent && CombatComponent->bHoldingTheFlag)
	{
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		TurningInPlace = ETurningInPlace::ETIP_NotTurning;
		return;
	}
	if (CombatComponent && CombatComponent->EquippedWeapon)
	{
		GetCharacterMovement()->bOrientRotationToMovement = false;
		bUseControllerRotationYaw = true;
	}

	
	if (bDisableGameplay)
	{
		bUseControllerRotationYaw = false;
		TurningInPlace = ETurningInPlace::ETIP_NotTurning;
		return;
	}
	
	// 本地控制的角色：使用基于相机的AimOffset
	if (GetLocalRole() > ROLE_SimulatedProxy && IsLocallyControlled())
	{
		AimOffset(DeltaSeconds);
	}
	else
	{
		// 远程代理角色：定时模拟OnRep触发SimProxiesTurn
		TimeSinceLastMovementReplication += DeltaSeconds;
		if (TimeSinceLastMovementReplication > 0.25f)
		{
			OnRep_ReplicatedMovement();  // 手动触发以刷新代理转身状态
		}
		CalculateAO_Pitch();  // 远程角色也需要Pitch值
	}
}


/**
 * @brief 接收伤害的处理函数（绑定在OnTakeAnyDamage委托上）
 *
 * 【伤害处理链路】：
 * 1. 扣减生命值：Health = Clamp(Health - Damage, 0, MaxHealth)
 * 2. 更新HUD生命值显示
 * 3. 播放受击反应动画
 * 4. 判断是否死亡(Health == 0):
 *    - 是 → 获取GameMode → 调用PlayerEliminated()处理淘汰
 *      - 传入受害者控制器(this->Controller)
 *      - 传入攻击者控制器(InstigatorController)
 *
 * 【为什么不用RPC而是用变量复制】：
 * 伤害是高频事件，每个RPC都消耗带宽。使用Replicated变量+OnRep回调更经济
 *
 * @param DamagedActor - 受伤的Actor（即this）
 * @param Damage - 伤害数值
 * @param DamageType - 伤害类型（子弹、爆炸等）
 * @param InstigatorController - 造成伤害者的控制器
 * @param DmaageCauser - 造成伤害的来源Actor（如子弹）
 */ 
void AXMBCharacterBase::ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
	AController* InstigatorController, AActor* DmaageCauser)
{
	
	BlasterGameMode =  BlasterGameMode == nullptr ? GetWorld()->GetAuthGameMode<ABlasterGameMode>() : BlasterGameMode;
	if (bElimmed || BlasterGameMode == nullptr) return;
	Damage = BlasterGameMode->CalculateDamage(InstigatorController, Controller, Damage);
	
	float DamageToHealth = Damage;

	if (Shield > 0.f)
	{
		if (Shield >= Damage)
		{
			Shield = FMath::Clamp(Shield - Damage, 0.f, MaxShield);
			DamageToHealth = 0;
		}
		else
		{
			DamageToHealth = FMath::Clamp(DamageToHealth - Shield, 0.f, Damage);
			Shield = 0.f;
		}
	}
	
	
	// 扣减生命值并限制在[0, MaxHealth]范围内
	Health = FMath::Clamp(Health - DamageToHealth, 0.f, MaxHealth);
	
	UpdateHUDHealth();       // 同步HUD显示
	UpdateHUDShield();


	PlayHitReactMontage();   // 播放受击动画（内部含非空闲状态恢复保护）
	
	
	// 生命值归零 → 触发淘汰流程
	if (Health == 0.f)
	{
		
		if (BlasterGameMode)
		{
			// 缓存控制器引用（避免每次都Cast）
			XMBPlayerController = XMBPlayerController == nullptr ? Cast<AXMBPlayerController>(Controller) : XMBPlayerController;
			AXMBPlayerController* AttackController = Cast<AXMBPlayerController>(InstigatorController);
			
			// 由GameMode统一处理淘汰逻辑（加分、通知等）
			BlasterGameMode->PlayerEliminated(this, XMBPlayerController, AttackController);
		}
	}
}




/**
 * @brief 防止相机穿入角色模型内部
 *
 * 【问题】：当相机距离角色太近（如贴墙后退）时，相机会穿入角色体内
 *
 * 【解决方案】：
 * 计算相机与角色位置的距离，小于阈值(CameraThreshold=200)时：
 * - 隐藏角色网格体(GetMesh→SetVisibility(false))
 * - 设置武器网格体对拥有者不可见(bOwnerNoSee=true)
 *
 * 距离恢复正常后恢复可见性
 *
 * 注意：仅对本地控制的玩家生效（!IsLocallyControlled直接返回）
 */
void AXMBCharacterBase::HideCameraIfCharacterClose()
{
	if (!IsLocallyControlled()) return;  // 只处理本地玩家

	// 判断相机到角色的距离
	if ((FollowCamera->GetComponentLocation() - GetActorLocation()).Size() < CameraThreshold)
	{
		// 太近了：隐藏角色模型和武器
		GetMesh()->SetVisibility(false);
		if (CombatComponent && CombatComponent->GetEquippedWeapon() && CombatComponent->EquippedWeapon->GetWeaponMesh())
		{
			// bOwnerNoSee=true 让拥有者看不到自己的武器（第一人称效果）
			CombatComponent->EquippedWeapon->GetWeaponMesh()->bOwnerNoSee = true;
		}
		if (CombatComponent && CombatComponent->SecondaryWeapon && CombatComponent->SecondaryWeapon->GetWeaponMesh())
		{
			// bOwnerNoSee=true 让拥有者看不到自己的武器（第一人称效果）
			CombatComponent->SecondaryWeapon->GetWeaponMesh()->bOwnerNoSee = true;
		}
	}
	else
	{
		// 距离恢复：重新显示
		GetMesh()->SetVisibility(true);
		if (CombatComponent && CombatComponent->GetEquippedWeapon() && CombatComponent->EquippedWeapon->GetWeaponMesh())
		{
			CombatComponent->EquippedWeapon->GetWeaponMesh()->bOwnerNoSee = false;
		}
		if (CombatComponent && CombatComponent->SecondaryWeapon && CombatComponent->SecondaryWeapon->GetWeaponMesh())
		{
			// bOwnerNoSee=true 让拥有者看不到自己的武器（第一人称效果）
			CombatComponent->SecondaryWeapon->GetWeaponMesh()->bOwnerNoSee = false;
		}
	}
}

/** @return 准心射线命中的目标位置（从CombatComponent获取） */
FVector AXMBCharacterBase::GetHitTarget() const
{
	if (CombatComponent == nullptr) return FVector();
	return CombatComponent->HitTarget;
}



/**@brief 播放开火蒙太奇动画*/
void AXMBCharacterBase::PlayFireMontage(bool bAiming)
{
	if (CombatComponent == nullptr || CombatComponent->EquippedWeapon == nullptr) return;

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && FireWeaponMontage)
	{
		AnimInstance->Montage_Play(FireWeaponMontage);
		FName SectionName;
		SectionName = bAiming ? FName("RifleAim") : FName("RifleHip");
		AnimInstance->Montage_JumpToSection(SectionName);
	}
}

/** @brief 播放淘汰(死亡)蒙太奇动画 */
void AXMBCharacterBase::PlayElimMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && ElimMontage)
	{
		AnimInstance->Montage_Play(ElimMontage);
	}
}

void AXMBCharacterBase::PlayThrowGrenadeMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && ThrowGrenadeMontage)
	{
		AnimInstance->Montage_Play(ThrowGrenadeMontage);
	}
}

void AXMBCharacterBase::PlaySwapWeaponMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && SwapWeaponMontage)
	{
		AnimInstance->Montage_Play(SwapWeaponMontage);
	}
}

/** @brief 播放受击反应动画（"FromFront" Section） */
void AXMBCharacterBase::PlayHitReactMontage()
{
	if (CombatComponent == nullptr || CombatComponent->EquippedWeapon == nullptr) return;

	// ★ 受击中断保护 [核心修复位置]
	//   PlayHitReactMontage 是唯一入口，被3处调用：
	//   ① ReceiveDamage()       - 服务器端处理伤害
	//   ② OnRep_Health()        - 客户端收到生命值变化
	//   ③ OnRep_Shield()        - 客户端收到护盾值变化
	//
	//   Montage_Play(HitReactMontage) 会替换当前正在播放的 Montage，
	//   导致其 AnimNotify（ThrowGrenadeFinished / FinishReloading）永远不触发 →
	//   CombatState 永久锁死 → 玩家无法操作。
	//
	//   必须在替换 Montage 前强制恢复非空闲状态，且此逻辑必须在
	//   PlayHitReactMontage 内部而非调用方，才能覆盖所有3个调用路径！
	if (CombatComponent->CombatState == ECombatState::ECS_ThrowingGrenade)
	{
		// 手雷投掷被打断：恢复空闲 + 武器回右手
		CombatComponent->ThrowGrenadeFinished();
		// 仅在手雷尚未实际 Spawn 时才补偿数量
		// bGrenadeLaunched 由 ServerLaunchGrenade_Implementation 在手雷生成后置 true
		if (!CombatComponent->bGrenadeLaunched)
		{
			// ThrowGrenade/ServerThrowGrenade 已执行 Grenades-=1，
			// 但 LaunchGrenade 的 AnimNotify 不会触发 → 手雷不会 Spawn
			CombatComponent->Grenades = FMath::Clamp(CombatComponent->Grenades + 1, 0, CombatComponent->MaxGrenades);
			CombatComponent->UpdateHUDGrenades();  // Replicated变量同步到所有客户端
		}
	}
	else if (CombatComponent->CombatState == ECombatState::ECS_Reloading)
	{
		// 换弹被打断：仅重置状态为空闲
		CombatComponent->CombatState = ECombatState::ECS_Unoccupied;
	}

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

	//TODO:停止玩家当前的蒙太奇动画
	
	if (AnimInstance && HitReactMontage)
	{
		AnimInstance->Montage_Play(HitReactMontage);
		FName SectionName("FromFront");
		AnimInstance->Montage_JumpToSection(SectionName);
	}
}

/** @brief 播放换弹蒙太奇动画*/
void AXMBCharacterBase::PlayReloadMontage()
{
	if (CombatComponent == nullptr || CombatComponent->EquippedWeapon == nullptr) return;
	
	if ( ReloadMontage && SniperReloadMontage)//AnimInstance &&
	{
		FName SectionName;
		bool bIsSniper = false;

		switch (CombatComponent->EquippedWeapon->GetWeaponType())
		{
		case EWeaponType::EWT_AssaultRifle:
			SectionName = FName("Rifle");
			break;
		case EWeaponType::EWT_RocketLauncher:
			SectionName = FName("RocketLauncher");//TODO:制作火箭的蒙太奇动画
			break;
		case EWeaponType::EWT_Pistol:
			SectionName = FName("Pistol");
			break;
		case EWeaponType::EWT_SubmachineGun:
			SectionName = FName("Pistol");
			break;
		case EWeaponType::EWT_ShotGun:
			SectionName = FName("ShotGun");
			break;
		case EWeaponType::EWT_SniperRifle:
			SectionName = FName("SniperRifle");
			bIsSniper = true;
			break;
		case EWeaponType::EWT_GrenadeLauncher:
			SectionName = FName("GrenadeLauncher");
			break;	
		}

		ExecuteReloadMontage(SectionName,bIsSniper);
		
		// AnimInstance->Montage_Play(ReloadMontage);
		// AnimInstance->Montage_JumpToSection(SectionName);
	}
}



void AXMBCharacterBase::ExecuteReloadMontage(FName SectionName, bool bIsSniper)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance == nullptr) return;

	// 选择目标蒙太奇
	UAnimMontage* TargetMontage = bIsSniper ? SniperReloadMontage : ReloadMontage;
	if (TargetMontage == nullptr) return;

	// ★ 关键修复：仅在蒙太奇未播放时才 Montage_Play
	//   如果直接 Montage_Play 会停止当前正在播放的旧 Montage 实例，
	//   导致旧 Montage 中尚未到达的 FinishReloading AnimNotify 永远丢失！
	//   后果：CombatState 卡死在 ECS_Reloading（无法开火）+ 动画时序混乱（弹药异常扣减）
	if (!AnimInstance->Montage_IsPlaying(TargetMontage))
	{
		AnimInstance->Montage_Play(TargetMontage);
	}
	
	AnimInstance->Montage_JumpToSection(SectionName);
}



/**
 * @brief 装备按钮按下处理
 *
 * 【网络逻辑】：
 * - 有权限(HasAuthority) → 直接在服务器执行EquipWeapon
 * - 无权限(客户端) → 调用ServerRPC请求服务器执行
 */
void AXMBCharacterBase::EquipButtonPressed()
{
	if (bDisableGameplay) return;
	if (CombatComponent)
	{
		if (CombatComponent->bHoldingTheFlag) return;
		
		if (GetCombatState() == ECombatState::ECS_Unoccupied) ServerEquipButtonPressed();

		bool bSwap = CombatComponent->ShouldSwapWeapons()
		&& !HasAuthority()
		&& CombatComponent->CombatState == ECombatState::ECS_Unoccupied
		&& OverlappingWeapon == nullptr;
		
		if (bSwap)
		{
			PlaySwapWeaponMontage();
			CombatComponent->CombatState = ECombatState::ECS_SwappingWeapons;
			bFinishedSwapping = false;
		}
	}
}

/**
 * @brief 装备按钮的服务器RPC实现
 *
 * RPC的_Implementation后缀是UE的要求：
 * - Server前缀的函数必须以_Server_Implementation形式定义
 * - 此函数仅在服务器上执行
 * - 不需要检查Authority，因为UE保证只有服务器才会收到
 */
void AXMBCharacterBase::ServerEquipButtonPressed_Implementation()
{
	if (CombatComponent)
	{
		if (OverlappingWeapon)
		{
			CombatComponent->EquipWeapon(OverlappingWeapon);
		}
		else if (CombatComponent->ShouldSwapWeapons())
		{
			CombatComponent->SwapWeapons();
		}
	}
}



/**
 * @brief 设置重叠武器（当进入/离开武器拾取范围时调用）
 *
 * 【逻辑说明】：
 * 1. 先隐藏旧武器的拾取Widget（如果有）
 * 2. 更新OverlappingWeapon指针
 * 3. 如果是本地控制的玩家，显示新武器的拾取Widget
 *
 * 此函数在服务器被AreaSphere的重叠事件触发，
 * 由于OverlappingWeapon标记了ReplicatedUsing，
 * 变化会自动同步到拥有者客户端。
 *
 * @param Weapon - 新的重叠武器指针（离开时为nullptr）
 */
void AXMBCharacterBase::SetOverlappingWeapon(AWeaponBase* Weapon)
{
	// 隐藏旧武器的拾取提示
	if (OverlappingWeapon)
	{
		OverlappingWeapon->ShowPickupWidget(false);
	}
	
	OverlappingWeapon = Weapon;
	
	// 仅本地玩家能看到拾取UI
	if (IsLocallyControlled())
	{
		if (OverlappingWeapon)
		{
			OverlappingWeapon->ShowPickupWidget(true);
		}
	}
}

/**
 * @brief 更新HUD上的生命值显示
 *
 * 【缓存模式】：XMBPlayerController可能还未就绪（尤其是游戏刚开始时）
 * 所以使用延迟获取模式：每次调用都尝试Cast，成功后缓存
 */
void AXMBCharacterBase::UpdateHUDHealth()
{
	// 尝试获取PlayerController（带缓存，避免重复Cast）
	XMBPlayerController = XMBPlayerController == nullptr ? Cast<AXMBPlayerController>(Controller) : XMBPlayerController;
	if (XMBPlayerController)
	{
		// 将当前生命值和最大生命值传给Controller去更新HUD Widget
		XMBPlayerController->SetHUDHealth(Health, MaxHealth);
	}
}


void AXMBCharacterBase::UpdateHUDShield()
{
	XMBPlayerController = XMBPlayerController == nullptr ? Cast<AXMBPlayerController>(Controller) : XMBPlayerController;
	if (XMBPlayerController)
	{
		// 将当前生命值和最大生命值传给Controller去更新HUD Widget
		XMBPlayerController->SetHUDShield(Shield, MaxShield);
	}
}

void AXMBCharacterBase::UpdateHUDAmmo()
{
	XMBPlayerController = XMBPlayerController == nullptr ? Cast<AXMBPlayerController>(Controller) : XMBPlayerController;
	if (XMBPlayerController && CombatComponent && CombatComponent->GetEquippedWeapon())
	{
		XMBPlayerController->SetHUDCarriedAmmo(CombatComponent->CarriedAmmo);
		XMBPlayerController->SetHUDWeaponAmmo(CombatComponent->GetEquippedWeapon()->GetAmmo());
	}
}


/**
 * @brief 轮询初始化（延迟获取PlayerState）
 *
 * 【为什么要Poll而不是在BeginPlay中直接获取】：
 * BeginPlay时PlayerState可能还未完全初始化（特别是联机情况下）
 * 所以放在Tick中轮询，直到获取成功为止。
 *
 * bDoOnce标志确保只执行一次初始化：
 * - 获取PlayerState成功后设为false
 * - AddToScore(0)和AddToDefeats(0)触发一次HUD初始化
 */
void AXMBCharacterBase::PollInit()
{
	if (XMBPlayerState == nullptr)
	{
		XMBPlayerState = GetPlayerState<AXMBPlayerState>();
		if (XMBPlayerState)
		{
			OnPlayerStateInitialized();
			
			AXMBBlasterGameState* BlasterGameState = Cast<AXMBBlasterGameState>(UGameplayStatics::GetGameState(this));
			if (BlasterGameState && BlasterGameState->TopScoringPlayers.Contains(XMBPlayerState))
			{
				MulticastGainedTheLead();
			}
		}
	}
}

void AXMBCharacterBase::OnPlayerStateInitialized()
{
	bDoOnce = false;
	// 用0值触发一次更新，确保HUD显示正确的初始值
	XMBPlayerState->AddToScore(0.f);
	XMBPlayerState->AddToDefeats(0);
	SetTeamColor(XMBPlayerState->GetTeam());
	SetSpawnPoint();
}


void AXMBCharacterBase::DropOrDestroyWeapon(AWeaponBase* Weapon)
{
	if (Weapon == nullptr) return;
	if (Weapon->GetWeaponDestroy())
	{
		Weapon->Destroy();
	}
	else
	{
		Weapon->Dropped();
	}
}

void AXMBCharacterBase::DropOrDestroyWeapons()
{
	if (CombatComponent)
	{
		if (CombatComponent->EquippedWeapon)
		{
			DropOrDestroyWeapon(CombatComponent->EquippedWeapon);
		}
		if (CombatComponent->SecondaryWeapon)
		{
			DropOrDestroyWeapon(CombatComponent->SecondaryWeapon);
		}
	}
}


/**
 * @brief 淘汰（击杀）处理 - 仅在服务器调用
 *
 * 【淘汰完整流程】：
 * 1. 掉落已装备的武器(CombatComponent->EquippedWeapon->Dropped())
 * 2. 多播淘汰效果(MulticastElim) → 所有客户端执行视觉表现
 * 3. 启动重生倒计时(ElimDelay=3秒)
 *    - 计时结束后调用ElimTimerFinished → GameMode.RequestRespawn
 */
void AXMBCharacterBase::Elim(bool bPlayerLeftGame)
{
	// 步骤1：掉落武器
	DropOrDestroyWeapons();
	
	// 步骤2：多播淘汰效果到所有客户端
	MulticastElim(bPlayerLeftGame);
	
	
	
}

/**
 * @brief 多播淘汰效果的实现（在所有客户端执行）
 *
 * 【视觉效果清单】：
 * 1. HUD弹药清零
 * 2. 设置bElimmed标志（影响动画蓝图行为）
 * 3. 播放淘汰蒙太奇动画
 * 4. 溶解效果（当前已注释掉，需要配置材质后启用）
 * 5. 释放开火按钮（防止淘汰后继续射击）
 * 6. 禁用角色移动组件
 * 7. 禁用玩家输入（TODO: 保留摄像机旋转能力）
 * 8. 禁用碰撞（防止其他角色与尸体交互）
 * 9. 生成回收机器人和音效
 */
void AXMBCharacterBase::MulticastElim_Implementation(bool bPlayerLeftGame)
{
	bLeftGame = bPlayerLeftGame;
	// HUD弹药显示清零
	if (XMBPlayerController)
	{
		XMBPlayerController->SetHUDWeaponAmmo(0);
	}
	
	// 标记为已淘汰状态
	bElimmed = true;
	PlayElimMontage();  // 播放淘汰动画

	// ====== 溶解效果（已注释，需要配置溶解材质后启用）======
	/*
	if (DissolveMaterialInstance)
	{
		DynamicDissolveMaterialInstance = UMaterialInstanceDynamic::Create(DissolveMaterialInstance,this);
		GetMesh()->SetMaterial(0,DynamicDissolveMaterialInstance);
		DynamicDissolveMaterialInstance->SetScalarParameterValue(TEXT("Dissolve"),0.55f);
		DynamicDissolveMaterialInstance->SetScalarParameterValue(TEXT("Glow"),200.f);
	}
	StartDissolve();
	*/

	
	
	// 释放开火按钮状态
	if (CombatComponent)
	{
		CombatComponent->FireButtonPressed(false);
	}

	bDisableGameplay = true;
	// 禁用移动（角色不能再移动或物理模拟）
	GetCharacterMovement()->DisableMovement();
	GetCharacterMovement()->StopMovementImmediately();
	
	// 禁用玩家输入
	// TODO: 保留摄像机旋转能力，目前完全禁止了输入
	if (XMBPlayerController)
	{
		DisableInput(XMBPlayerController);
	} 
	
	// 禁用碰撞（尸体不会阻挡其他角色或投射物）
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	AttachedGrenade->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 生成淘汰回收机器人特效（在角色上方200单位处）
	if (ElimBotEffect)
	{
		FVector ElimBotSpawnPoint(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 200.f);
		ElimBotComponent = UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			ElimBotEffect,
			ElimBotSpawnPoint,
			GetActorRotation()
		);
	}

	// 播放淘汰音效
	if (ElimBotSound)
	{
		UGameplayStatics::SpawnSoundAtLocation(
			this,
			ElimBotSound,
			GetActorLocation()
		);
	}

	bool bHideSniperScope = CombatComponent 
		&& CombatComponent->bAiming
		&& CombatComponent->EquippedWeapon
		&& CombatComponent->EquippedWeapon->GetWeaponType() == EWeaponType::EWT_SniperRifle;
	
	if (IsLocallyControlled() && bHideSniperScope)
	{
		ShowSniperScopeWidget(false);
	}

	if (CrownComponent)
	{
		CrownComponent->DestroyComponent();
	}

	//设置在此处则客户端上也工作
	GetWorldTimerManager().SetTimer(
		ElimTimer,
		this,
		&AXMBCharacterBase::ElimTimerFinished,
		ElimDelay  // 默认3秒后重生
	);
	
}

/**
 * @brief 淘汰计时器结束回调
 *
 * 请求GameMode重生角色：
 * - GameMode.Reset()恢复角色属性
 * - GameMode.Destroy()销毁旧角色Actor
 * - GameMode RestartPlayerAtPlayerStart() 在随机PlayerStart处重生
 */
void AXMBCharacterBase::ElimTimerFinished()
{
	BlasterGameMode =  BlasterGameMode == nullptr ? GetWorld()->GetAuthGameMode<ABlasterGameMode>() : BlasterGameMode;
	if (BlasterGameMode && !bLeftGame)
	{
		bDoOnce = true;  // 重置PollInit标志供新角色使用
		BlasterGameMode->RequestRespawn(this, Controller);
	}
	if (bLeftGame && IsLocallyControlled())
	{
		bDoOnce = false;
		OnLeftGame.Broadcast();
	}
}



void AXMBCharacterBase::MulticastGainedTheLead_Implementation()
{
	if (CrownSystem == nullptr) return;
	if (CrownComponent == nullptr)
	{
		CrownComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
			CrownSystem,
			GetCapsuleComponent(),
			FName(),
			GetActorLocation() + FVector(0.f,0.f,100.f),
			GetActorRotation(),
			EAttachLocation::KeepWorldPosition,
			false);
	}

	if (CrownComponent)
	{
		CrownComponent->Activate();
	}
}

void AXMBCharacterBase::MulticastLostTheLead_Implementation()
{
	if (CrownComponent)
	{
		CrownComponent->DestroyComponent();
	}
}




void AXMBCharacterBase::ServerLeaveGame_Implementation()
{
	BlasterGameMode =  BlasterGameMode == nullptr ? GetWorld()->GetAuthGameMode<ABlasterGameMode>() : BlasterGameMode;
	XMBPlayerState = XMBPlayerState == nullptr ? GetPlayerState<AXMBPlayerState>() : XMBPlayerState;
	if (BlasterGameMode && XMBPlayerState)
	{
		bDoOnce = false;
		BlasterGameMode->PlayerLeftGame(XMBPlayerState);
	}
}

/**
 * @brief 更新溶解材质参数（Timeline回调）
 *
 * @param DissolveValue - Timeline当前输出的溶解度值(0~1)
 * 0=完全不溶解（实体），1=完全溶解（透明消失）
 */
void AXMBCharacterBase::UpdateDissolveMaterial(float DissolveValue)
{
	if (DynamicDissolveMaterialInstance)
	{
		DynamicDissolveMaterialInstance->SetScalarParameterValue(TEXT("Dissolve"), DissolveValue);
	}
}

/**
 * @brief 开始溶解效果
 *
 * 将溶解曲线(DissolveCurve)绑定到Timeline组件上，
 * Timeline播放时会逐帧调用UpdateDissolveMaterial更新材质
 */
void AXMBCharacterBase::StartDissolve()
{
	DissolveTrack.BindDynamic(this, &AXMBCharacterBase::UpdateDissolveMaterial);
	if (DissolveCurve && DissolveTimeline)
	{
		DissolveTimeline->AddInterpFloat(DissolveCurve, DissolveTrack);
		DissolveTimeline->Play();
	}
}



/**
 * @brief 重写Jump - 增加蹲伏解除逻辑
 *
 * UE默认Jump不考虑蹲伏状态。此处增强：
 * - 已蹲伏 → 取消蹲伏(UnCrouch)
 * - 未蹲伏 → 正常跳跃(Super::Jump)
 */
void AXMBCharacterBase::Jump()
{
	if (CombatComponent && CombatComponent->bHoldingTheFlag) return;
	if (bIsCrouched)
	{
		UnCrouch();  // 蹲伏状态下按跳跃键取消蹲伏
	}
	else
	{
		Super::Jump();  // 否则正常跳跃
	}
}

/** @return 当前装备的武器 */
AWeaponBase* AXMBCharacterBase::GetEquippedWeapon()
{
	if (CombatComponent == nullptr) return nullptr;
	return CombatComponent->EquippedWeapon;
}

/** @return 当前战斗状态（换弹/空闲等） */
ECombatState AXMBCharacterBase::GetCombatState() const
{
	if (CombatComponent == nullptr) return ECombatState::ECS_MAX;
	return CombatComponent->CombatState;
}

/**
 * @brief OverlappingWeapon网络复制回调
 *
 * 回调逻辑：
 * - 新武器不为空 → 显示拾取Widget
 * - 旧武器不为空 → 隐藏旧武器的Widget
 *
 * @param LastWeapon - 复制前的旧武器（自动传入）
 */
void AXMBCharacterBase::OnRep_OverlappingWeapon(AWeaponBase* LastWeapon)
{
	// 显示新武器的拾取Widget
	if (OverlappingWeapon)
	{
		OverlappingWeapon->ShowPickupWidget(true);
	}
	// 隐藏旧武器的拾取Widget
	if (LastWeapon)
	{
		LastWeapon->ShowPickupWidget(false);
	}
}

/**
 * @brief 网络移动数据复制回调
 *
 * 当服务器的角色位置/旋转同步到客户端时自动触发：
 * 1. 调用SimProxiesTurn()判断远程代理是否在转身
 * 2. 重置移动复制计时器（用于RotateInPlace中的定时检查）
 */
void AXMBCharacterBase::OnRep_ReplicatedMovement()
{
	Super::OnRep_ReplicatedMovement();
	
	SimProxiesTurn();                    // 处理远程代理转身
	TimeSinceLastMovementReplication = 0.f;  // 重置计时器
}

/** @brief 生命值变化的网络回调：更新HUD + 播放受击动画 */
void AXMBCharacterBase::OnRep_Health(float LastHealth)
{
	UpdateHUDHealth();
	if (Health < LastHealth)
	{
		PlayHitReactMontage();
	}
}

void AXMBCharacterBase::OnRep_Shield(float LastShield)
{
	UpdateHUDShield();
	if (Shield < LastShield)
	{
		PlayHitReactMontage();
	}
}

/** @brief 最大生命值变化的网络回调（预留扩展） */
void AXMBCharacterBase::OnRep_MaxHealth()
{
}

void AXMBCharacterBase::OnRep_MaxShield()
{
}

/** 开火按钮按下 → 通知CombatComponent */
void AXMBCharacterBase::FireButtonPressed()
{
	if (CombatComponent && CombatComponent->bHoldingTheFlag) return;
	CombatComponent->FireButtonPressed(true);
}

/** 开火按钮释放 → 通知CombatComponent */
void AXMBCharacterBase::FireButtonReleased()
{
	if (CombatComponent && CombatComponent->bHoldingTheFlag) return;
	CombatComponent->FireButtonPressed(false);
}



/** 蹲伏按钮切换（已蹲伏→取消，未蹲伏→蹲下）*/
void AXMBCharacterBase::CrouchButtonPressed()
{
	if (CombatComponent && CombatComponent->bHoldingTheFlag) return;
	if (bIsCrouched)
	{
		UnCrouch();
	}
	else
	{
		Crouch();
	}
}

/** 瞄准按钮按下 → 通知CombatComponent开启瞄准 */
void AXMBCharacterBase::AimButtonPressed()
{
	if (CombatComponent && CombatComponent->bHoldingTheFlag) return;
	if (CombatComponent)
	{
		if (CombatComponent->bHoldingTheFlag) return;
		CombatComponent->SetAiming(true);
	}
}

/** 瞄准按钮释放 → 通知CombatComponent关闭瞄准 */
void AXMBCharacterBase::AimButtonReleased()
{
	if (CombatComponent)
	{
		if (CombatComponent->bHoldingTheFlag) return;
		CombatComponent->SetAiming(false);
	}
	
}

/** 肩射按钮按下 → 通知CombatComponent开启肩射 */
void AXMBCharacterBase::ShoulderAimButtonPressed()
{
	if (CombatComponent)
	{
		if (CombatComponent->bHoldingTheFlag) return;
		CombatComponent->SetShoulderAiming(true);
	}
}

/** 肩射按钮释放 → 通知CombatComponent关闭肩射 */
void AXMBCharacterBase::ShoulderAimButtonReleased()
{
	
	if (CombatComponent)
	{
		if (CombatComponent->bHoldingTheFlag) return;
		CombatComponent->SetShoulderAiming(false);
	}
}

/** 换弹按钮按下 → 通知CombatComponent触发换弹 */
void AXMBCharacterBase::ReloadButtonPressed()
{
	
	if (CombatComponent)
	{
		if (CombatComponent->bHoldingTheFlag) return;
		CombatComponent->Reload();
	}
}

void AXMBCharacterBase::GrenadeButtonPressed()
{
	if (CombatComponent)
	{
		if (CombatComponent->bHoldingTheFlag) return;
		CombatComponent->ThrowGrenade();
	}
}

void AXMBCharacterBase::QuitButtonReleased()
{
	if (XMBPlayerController)
	{
		XMBPlayerController->XMBTEST();
	}
}


/** @return 是否已装备武器 */
bool AXMBCharacterBase::IsWeaponEquipped()
{
	return (CombatComponent && CombatComponent->EquippedWeapon);
}

/** @return 是否正在瞄准 */
bool AXMBCharacterBase::IsAiming()
{
	return (CombatComponent && CombatComponent->bAiming);
}

/** @return 是否正在肩射 */
bool AXMBCharacterBase::IsShoulderAiming()
{
	return (CombatComponent && CombatComponent->bShoulderAiming);
}

bool AXMBCharacterBase::IsLocallyReloading()
{
	if (CombatComponent == nullptr) return false;
	return CombatComponent->bLocallyReloading;
}

bool AXMBCharacterBase::IsHoldingTheFlag() const
{
	if (CombatComponent == nullptr) return false;
	return CombatComponent->bHoldingTheFlag;
}




void AXMBCharacterBase::SetTeamColor(ETeam Team)
{
	if (OriginalMaterial == nullptr || GetMesh() == nullptr) return;
	switch (Team)
	{
	case ETeam::ET_NoTeam:
		GetMesh()->SetMaterial(0, OriginalMaterial);
		DissolveMaterialInstance = BlueDissolveMatInst;
		break;
	case ETeam::ET_BlueTeam:
		GetMesh()->SetMaterial(0, BlueMaterial);
		DissolveMaterialInstance = BlueDissolveMatInst;
		break;
	case ETeam::ET_RedTeam:
		GetMesh()->SetMaterial(0, RedMaterial);
		DissolveMaterialInstance = RedDissolveMatInst;
		break;
	}
}


ETeam AXMBCharacterBase::GetTeam()
{
	XMBPlayerState = XMBPlayerState == nullptr ? GetPlayerState<AXMBPlayerState>() : XMBPlayerState;
	if (XMBPlayerState == nullptr) return ETeam::ET_NoTeam;
	return XMBPlayerState->GetTeam();
}



void AXMBCharacterBase::SetSpawnPoint()
{
	if (HasAuthority() && XMBPlayerState->GetTeam() != ETeam::ET_NoTeam)
	{
		TArray<AActor*> PlayerStartPoints;
		UGameplayStatics::GetAllActorsOfClass(this, ATeamPlayerStart::StaticClass(),PlayerStartPoints);
		TArray<ATeamPlayerStart*> TeamPlayerStarts;
		for (auto Start : PlayerStartPoints)
		{
			ATeamPlayerStart* TeamStart = Cast<ATeamPlayerStart>(Start);
			if (TeamStart && TeamStart->Team == XMBPlayerState->GetTeam())
			{
				TeamPlayerStarts.Add(TeamStart);
			}
		}

		if (TeamPlayerStarts.Num() > 0)
		{
			ATeamPlayerStart* ChosenPlayerStart = TeamPlayerStarts[FMath::RandRange(0,TeamPlayerStarts.Num() - 1)];
			SetActorLocationAndRotation(ChosenPlayerStart->GetActorLocation(), ChosenPlayerStart->GetActorRotation());
		}
	}
}


void AXMBCharacterBase::SetHoldingTheFlag(bool bHolding)
{
	if (CombatComponent == nullptr) return;
	CombatComponent->bHoldingTheFlag = bHolding;
}

