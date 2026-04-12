
// ============================================================
// @file Casing.cpp
// @brief 弹壳Actor实现 - 模拟武器开火后抛出的弹壳效果
//
// 【核心功能概述】：
// 弹壳是一个具有物理模拟的独立 Actor，用于增强射击的视觉真实感：
// 1. 具有静态网格体（弹壳3D模型）+ 物理碰撞 + 重力
// 2. 在生成时获得一个向前的初始冲量（ShellEjectionImpulse），模拟抛壳动作
// 3. 与其他物体碰撞时播放落地音效（ShellSound）
// 4. 碰撞或超时后自动销毁（InitialLifeSpan = 2秒）
//
// 【生命周期】：生成(WeaponBase.Fire) → 受物理+冲量飞行 → 碰撞/落地 → 播放音效 → 销毁
// ============================================================

#include "Weapon/Casing.h"

#include "Kismet/GameplayStatics.h"


/**
 * @brief 构造函数 - 初始化弹壳的物理属性和组件
 *
 * 【组件与属性配置】：
 *
 * 1. PrimaryComponentTick = false
 *    关闭 Tick（弹壳不需要每帧更新逻辑，
 *    完全由物理引擎驱动运动）
 *
 * 2. CasingMesh (UStaticMeshComponent) - 弹壳静态网格体
 *    作为根组件承载弹壳的3D模型。
 *    碰撞配置：
 *    - 忽略相机通道 (ECC_Camera)：防止弹壳影响相机碰撞检测
 *    - 启用物理模拟 (SimulatePhysics=true)：受物理引擎驱动
 *    - 启用重力 (EnableGravity=true)：自然下落
 *    - 启用刚体碰撞通知 (NotifyRigidBodyCollision=true)：
 *      使 OnComponentHit 回调能被触发（用于落地时播放声音）
 *
 * 3. ShellEjectionImpulse = 5.f
 *    弹壳抛出的初始冲量大小（牛顿·秒 或等效单位）。
 *    值越大弹壳飞得越远/快。在 BeginPlay 中沿 Actor 前方向施加此冲量
 *
 * 4. InitialLifeSpan = 2.f
 *    自动销毁倒计时（秒）。即使弹壳一直没碰到任何东西，
 *    2秒后也会自动销毁以释放资源，避免场景中积累过多弹壳 Actor
 */
ACasing::ACasing()
{
	PrimaryActorTick.bCanEverTick = false;// 无需Tick，纯物理驱动
	 

	// 创建弹壳静态网格体作为根组件
	CasingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CasingMesh"));
	SetRootComponent(CasingMesh);

	// 配置弹壳物理属性
	CasingMesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore); // 忽略相机碰撞
	CasingMesh->SetSimulatePhysics(true);   // 启用物理模拟
	CasingMesh->SetEnableGravity(true);      // 启用重力
	CasingMesh->SetNotifyRigidBodyCollision(true); // 启用碰撞事件通知

	// 抛壳力度（沿Actor前方向施加的初始冲量）
	ShellEjectionImpulse = 5.f;

	// 2秒后自动销毁（兜底清理机制）
	InitialLifeSpan = 2.f;
}


/**
 * @brief 游戏开始时初始化弹壳的运动状态
 *
 * 【逻辑说明】：
 * 1. 绑定碰撞回调：当弹壳碰到任何物体时调用 OnHit()
 * 2. 施加初始抛射冲量：沿弹壳 Actor 的正前方 (ForwardVector) 施加 ShellEjectionImpulse 大小的力
 *
 * 【为什么用 AddImpulse 而非 SetVelocity？】
 * Impulse 是瞬间的力冲击（类似"踢一脚"的效果），
 * 更符合现实中抛壳的物理行为——受到枪械内部机构的瞬时撞击后飞出。
 * 冲量会考虑弹壳的质量（来自物理材质设置），质量越大同冲量下速度越小
 */
void ACasing::BeginPlay()
{
	Super::BeginPlay();
	
	// 绑定碰撞事件到处理函数（用于落地时播放声音）
	CasingMesh->OnComponentHit.AddDynamic(this, &ACasing::OnHit);
	// 沿Actor前方施加初始抛射冲量，使弹壳从枪中"弹出"
	CasingMesh->AddImpulse(GetActorForwardVector() * ShellEjectionImpulse);
}

/**
 * @brief 弹壳碰撞回调 - 当弹壳与其他物体发生碰撞时触发
 * @param HitComp - 发生碰撞的组件（本对象的 CasingMesh）
 * @param OtherActor - 碰撞到的另一个 Actor（如地面、墙壁等）
 * @param OtherComp - 另一个 Actor 的碰撞组件
 * @param NormalImpulse - 碰撞法线方向的冲量大小
 * @param Hit - 详细的碰撞结果信息（位置、法线、材质等）
 *
 * 【逻辑说明】：
 * 1. 如果配置了落地/碰撞音效 (ShellSound)，在弹壳当前位置播放该音效
 *    使用 PlaySoundAtLocation 在世界空间中播放（位置式音频，非附着于Actor）
 * 2. 调用 Destroy() 销毁弹壳 Actor
 *    弹壳在首次碰撞后就立即销毁（不需要反复弹跳），这既是性能优化也是设计选择
 *
 * 【注意】：如果 InitialLifeSpan 先到期（2秒内未碰任何东西），
 * 引擎也会自动销毁弹壳，但不会经过此回调（无碰撞=不播放音效）
 */
void ACasing::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	// 如果配置了落地/碰撞音效则播放
	if (ShellSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, ShellSound, GetActorLocation());
	}
	
	// 立即销毁弹壳（首次碰撞即销毁，不等待后续弹跳）
	Destroy();
}
