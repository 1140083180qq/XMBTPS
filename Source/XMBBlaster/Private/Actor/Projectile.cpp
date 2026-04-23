
// ============================================================
// @file Projectile.cpp
// @brief 投射物基类实现 - 所有飞行投射物（子弹、火箭等）的父类
//
// 【核心功能概述】：
// 本类是投射物系统的基类，AProjectileBullet（子弹）继承自此类。
// 负责投射物的通用行为逻辑：
//
// 1. 碰撞检测系统：
 /*    使用 BoxComponent 作为碰撞体，配置为阻挡 Visibility/WorldStatic/SkeletalMesh 通道
 *    仅在服务器端绑定碰撞事件（HasAuthority），确保伤害计算的权威性
 *
 * 2. 飞行轨迹可视化：
 *    Tracer 粒子特效附加在碰撞盒上，随投射物一起移动形成"拖尾"效果
 *
 * 3. 命中反馈效果：
 *    Destroyed() 中生成 ImpactParticles（命中粒子）和 ImpactSound（命中音效）
 *    在投射物被销毁前自动触发，无需在每个子类中重复实现
 *
 * 4. 网络同步：
 *    bReplicates = true 使投射物在所有客户端上可见
    ProjectileMovementComponent 处理位置的网络平滑插值 */
// ============================================================

#include "Actor/Projectile.h"

#include "Character/XMBCharacterBase.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

#include "XMBBlaster/XMBBlaster.h"

/**
 * @brief 构造函数 - 初始化投射物的所有组件和属性
 *
 * 【组件创建与配置详细说明】：
 *
 * === Tick 设置 ===
 * PrimaryComponentTick.bCanEverTick = true
 * 启用每帧更新（虽然当前 Tick 为空实现，
 * 但子类可能需要扩展持续效果如制导、轨迹修正等）
 *
 * === 网络复制 ===
 * bReplicates = true
 * 使此 Actor 及其 Replicated 属性在网络间自动同步。
 * 所有客户端都能看到这颗投射物的飞行轨迹和命中效果。
 *
 * === CollisionBox (UBoxComponent) ===
 * 投射物的碰撞检测盒（根组件）。使用 Box 而非 Sphere
 * 是因为子弹/火箭等投射物更适合用长方体近似形状。
 *
 * 碰撞响应配置详解：
 * - SetCollisionObjectType(ECC_WorldDynamic):
 *   将自身设为"动态世界物体"类型。这样其他物体的碰撞矩阵
 *   可以根据 ECC_WorldDynamic 来决定是否与投射物碰撞
 *
 * - SetCollisionEnabled(QueryAndPhysics):
 *   同时启用射线查询（用于检测命中）和物理模拟（用于反弹等物理交互）
 *
 * - 默认忽略所有通道 (SetCollisionResponseToAllChannels(Ignore)):
 *   采用"白名单"模式——先全部忽略，再逐个启用需要的通道
 *
 * - 阻挡 ECC_Visibility (ECR_Block):
 *   使投射物能被可见性通道的射线检测到。
 *   CombatComponent 的 TraceUnderCrosshairs 也使用此通道
 *
 * - 阻挡 ECC_WorldStatic (ECR_Block):
 *   使投射物能碰到地面、墙壁、建筑物等静态几何体
 *
 * - 阻挡 ECC_SkeletalMesh (ECR_Block):
 *   使投射物能碰到角色（角色的网格体属于 SkeletalMesh 通道）
 *   这是造成伤害的关键——碰到了 SkeletalMesh 就意味着击中了角色
 *
 * === ProjectileMovementComponent ===
 * UE5 内置的投射物移动组件，处理：
 * - 沿初始方向匀速直线飞行
 * - bRotationFollowsVelocity = true:
 *   投射物的旋转自动跟随速度方向（如子弹始终"头朝前"飞行）
 * - 初始速度、重力影响等可在蓝图中配置
 */
AProjectile::AProjectile()
{
	// 启用Tick（当前为空实现，预留扩展）
	PrimaryActorTick.bCanEverTick = true;
	
	// 启用 Actor 级别的网络复制（使投射物对所有客户端可见）
	bReplicates = true;

	// 创建碰撞盒组件作为根组件（投射物的物理实体表示）
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	SetRootComponent(CollisionBox);

	// 配置碰撞属性：自身为动态物体类型
	CollisionBox->SetCollisionObjectType(ECC_WorldDynamic);
	// 同时启用查询（射线检测）和物理（碰撞响应）
	CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	// 白名单模式：默认忽略所有通道
	CollisionBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	// 逐个启用需要阻挡的通道：
	CollisionBox->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);     // 阻挡可见性射线
	CollisionBox->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);    // 阻挡静态世界（地面/墙壁）
	CollisionBox->SetCollisionResponseToChannel(ECC_SkeletalMesh, ECR_Block);   // 阻挡骨骼网格体（角色）

	// 创建投射物移动组件（引擎内置的弹道运动解算器）
	// ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	// 投射物旋转方向跟随速度方向（子弹始终"向前"飞）
	// ProjectileMovementComponent->bRotationFollowsVelocity = true;

	// 注：不使用 InitialLifeSpan 做超时销毁，改为碰撞即销毁的模式
}

/**
 * @brief 游戏开始初始化 - 创建轨迹特效并绑定碰撞事件
 *
 * 【逻辑流程】：
 *
 * 1. 轨迹特效生成（Tracer VFX）：
 *    如果在蓝图中配置了 Tracer（UParticleSystem* 粒子资产），
 *    使用 SpawnEmitterAttached 将其作为子粒子组件附加到 CollisionBox 上。
 *    这样粒子会随投射物一起移动，形成"弹道拖尾"视觉效果。
 *
 * 2. 碰撞事件绑定（仅服务器端）：
 *    if (HasAuthority()) 检查确保只有服务器才绑定 OnComponentHit 回调。
 *    原因：
 *    - 伤害计算必须在服务器权威执行（防止作弊）
 *    - 客户端的投射物是复制过来的镜像，不需要也不应该独立处理碰撞事件
 *    - 如果客户端也绑定了会导致每个客户端各自执行一次 OnHit → 重复伤害
 */
void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	// 如果配置了轨迹粒子特效，将其附加到碰撞盒上
	if (Tracer)
	{
		TracerComponent = UGameplayStatics::SpawnEmitterAttached(
			Tracer,
			CollisionBox,           // 附加目标组件
			FName(),                // 无特定Socket名称（附加到根）
			GetActorLocation(),      // 世界空间位置
			GetActorRotation(),      // 世界空间旋转
			EAttachLocation::KeepWorldPosition // 保持世界位置不变
		);
	}

	// 仅在服务器端绑定碰撞回调（确保伤害计算的权威性和唯一性）
	if (HasAuthority())
	{
		CollisionBox->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
	}
}

/**
 * @brief 碰撞事件回调 - 当投射物的碰撞盒与其他物体发生碰撞时调用
 *
 * @param HitComp - 发生碰撞的本对象组件（CollisionBox）
 * @param OtherActor - 碰撞到的另一个Actor（可能是角色、墙壁、地面等）
 * @param OtherComp - 另一个Actor上的具体碰撞组件
 * @param NormalImpulse - 碰撞法线方向的冲量大小
 * @param Hit - 完整的碰撞结果信息（命中点坐标、法线方向、材质等）
 *
 * 【逻辑说明】：
 * 本基类的 OnHit 只做一件事：调用 Destroyed()。
 * Destroyed() 会执行以下操作：
 * 1. 调用 Super::Destroyed() 执行引擎层面的清理
 * 2. 生成命中粒子特效（ImpactParticles）
 * 3. 播放命中音效（ImpactSound）
 * 
 * 子类（如 AProjectileBullet）会重写此方法以追加伤害计算逻辑，
 * 但最后仍需调用 Super::OnHit() 来触发销毁和特效
 */
void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	// 销毁投射物，同时触发 Destroyed() 中的命中特效和音效生成
	Destroyed();
}

/**
 * @brief 每帧更新（当前为空实现）
 * @param DeltaTime - 帧间隔时间
 *
 * 预留扩展点。可能的用途：
 * - 追踪导弹：每帧调整飞行方向跟踪目标
 * - 距离衰减：飞行越远伤害越低
 * - 特殊弹道：如抛物线、波浪形等非常规轨迹
 */
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

/**
 * @brief 销毁前回调 - 在投射物被完全销毁之前自动调用
 *
 * 【设计意图】：将命中效果的生成分离到此统一位置，
 * 所有投射物类型（子弹、火箭、霰弹等）都自动获得命中反馈，
 * 无需在每个子类的 OnHit 中重复编写特效代码。
 *
 * 【执行的副作用】：
 * 1. 命中粒子特效 (ImpactParticles)：
 *    使用 SpawnEmitterAtLocation 在投射物当前位置生成一次性粒子爆发效果
 *    （如火花、血雾、墙灰等不同材质对应的特效）
 *
 * 2. 命中音效 (ImpactSound)：
 *    使用 PlaySoundAtLocation 在投射物当前位置播放音效
 *    （如不同表面的撞击声：金属声、肉声、混凝土声等）
 *
 * 注意：这些特效仅在本地播放，不会网络多播（因为每个客户端都会
 * 各自运行到此处，各自生成自己的特效实例）
 */
void AProjectile::Destroyed()
{
	Super::Destroyed();

	// 在投射物当前位置生成命中粒子特效
	if (ImpactParticles)
	{
		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			ImpactParticles,
			GetActorLocation(), // 在投射物的最终位置生成
			GetActorRotation()   // 使用投射物的当前旋转
		);
	}

	// 在投射物当前位置播放命中音效
	if (ImpactSound)
	{
		UGameplayStatics::PlaySoundAtLocation(
			this,
			ImpactSound,
			GetActorLocation()
		);
	}
}
