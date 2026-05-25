
// ============================================================
// @file ProjectileBullet.cpp
// @brief 子弹投射物实现 - 继承投射物基类，实现具体的子弹伤害逻辑
//
// 【核心功能概述】：
// 本类继承 AProjectile（投射物基类），是游戏中实际使用的子弹类型。
 /* 唯一的职责是重写 OnHit() 方法，在碰撞时对目标造成伤害：
 *
 * 1. 获取发射者信息（Owner → Controller）用于伤害归属判定
 * 2. 使用 ApplyDamage 对被击中的 Actor 造成点数值伤害（Damage = 20）
  3. 调用父类 OnHit 触发销毁和命中特效/音效*/
//
// 【调用链路】：
// CombatComponent.Fire() → ServerFire() → MulticastFire() → WeaponBase.Fire()
// → ProjectileWeapon.Fire() → SpawnActor<AProjectileBullet>()
// → [子弹飞行] → OnHit() [击中某物] → ApplyDamage() + Super.OnHit()
// ============================================================

#include "Actor/ProjectileBullet.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

AProjectileBullet::AProjectileBullet()
{
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->SetIsReplicated(true);
	ProjectileMovementComponent->InitialSpeed = InitialSpeed;
	ProjectileMovementComponent->MaxSpeed = InitialSpeed;
	
}

#if WITH_EDITOR
void AProjectileBullet::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName = PropertyChangedEvent.Property != nullptr ? PropertyChangedEvent.Property->GetFName() : NAME_None;
	if (PropertyName ==  GET_MEMBER_NAME_CHECKED(AProjectileBullet, InitialSpeed))
	{
		if (ProjectileMovementComponent)
		{
			ProjectileMovementComponent->InitialSpeed = InitialSpeed;
			ProjectileMovementComponent->MaxSpeed = InitialSpeed;
		}
	}
}
#endif

/**
 * @brief 碰撞回调 - 子弹击中目标时应用伤害并触发销毁/特效
 *
 * @param HitComp - 发生碰撞的组件（本对象的 CollisionBox）
 * @param OtherActor - 碰撞到的另一个 Actor（被击中的目标）
 * @param OtherComp - 另一个 Actor 的碰撞组件
 * @param NormalImpulse - 碰撞法线冲量
 * @param Hit - 详细碰撞结果信息
 *
 * 【完整执行流程】：
 *
 * 步骤1: 获取发射者的角色引用
 * 从 GetOwner() 获取拥有此投射物的角色（AXMBCharacterBase），
 * Owner 在 ProjectileWeapon::Fire() 的 SpawnParams.Owner 中设置
 *
 * 步骤2: 获取发射者的控制器引用
 * 通过角色的 GetController() 获取 AXMBPlayerController
 *
 * 步骤3: 应用伤害
 * UGameplayStatics::ApplyDamage 参数详解：
 * - OtherActor: 被伤害的目标 Actor（如被击中的敌人角色）
 * - Damage: 伤害量（继承自 AProjectile.Damage，默认值20，可在蓝图中配置）
 * - OwnerController: 造成伤害的控制器（用于确定"谁杀的谁"——击杀信息的归属）
 * - this: 造成伤害的 Actor（即这颗子弹本身，用于伤害类型和衰减计算）
 * - UDamageType::StaticClass(): 伤害类型类（默认通用伤害，可扩展为火焰/爆炸等类型）
 *
 * ApplyDamage 内部会：
 * a. 调用目标 Actor 的 TakeDamage() 方法
 * b. 触发角色的 ReceiveDamage() 回调
 * c. 如果血量归零则触发淘汰逻辑（Elim）
 * d. 广播伤害事件给所有相关系统
 *
 * 步骤4: 调用父类 OnHit()
 * 必须在伤害处理完成后才调用 Super::OnHit()，
 * 因为父类的实现会 Destroy() 这颗子弹，
 * 一旦销毁后本对象的所有操作都将失效
 */
void AProjectileBullet::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                              FVector NormalImpulse, const FHitResult& Hit)
{
	// 步骤1: 获取发射子弹的角色（Owner 在 SpawnActor 时通过 SpawnParams.Owner 设置）
	ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (OwnerCharacter)
	{
		// 步骤2: 获取发射者的控制器（用于伤害归属判定）
		AController* OwnerController = OwnerCharacter->GetController();
		if (OwnerController)
		{
			// 步骤3: 对被击中的 Actor 应用点数伤害
			// Damage 值来自父类 AProjectile（默认20，蓝图可覆盖）
			// OwnerController 用于记录"谁是攻击者"
			// this (子弹自身) 作为伤害来源 Actor
			UGameplayStatics::ApplyDamage(
				OtherActor,                    // 受害者：被击中的目标
				Damage,                         // 伤害量
				OwnerController,                // 攻击者控制器（击杀归属）
				this,                           // 伤害来源Actor（这颗子弹）
				UDamageType::StaticClass());     // 伤害类型（默认通用型）
		}
	}
	
	// 步骤4: 调用父类的碰撞处理（生成命中特效/音效 + 销毁子弹）
	// ★ 必须放在最后！因为 Super::OnHit() 会执行 Destroy() 销毁本对象
	Super::OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
}

void AProjectileBullet::BeginPlay()
{
	Super::BeginPlay();

	FPredictProjectilePathParams PathParams;
	PathParams.bTraceWithChannel = true;
	PathParams.bTraceWithCollision = true;
	PathParams.DrawDebugTime = 5.f;
	PathParams.DrawDebugType = EDrawDebugTrace::ForDuration;
	PathParams.LaunchVelocity = GetActorForwardVector() * InitialSpeed;
	PathParams.MaxSimTime = 4.f;
	PathParams.ProjectileRadius = 5.f;
	PathParams.SimFrequency = 30.f;
	PathParams.StartLocation = GetActorLocation();
	PathParams.TraceChannel = ECC_Visibility;
	PathParams.ActorsToIgnore.Add(this);
	
	FPredictProjectilePathResult PathResult;
	
	UGameplayStatics::PredictProjectilePath(this, PathParams, PathResult);
}
