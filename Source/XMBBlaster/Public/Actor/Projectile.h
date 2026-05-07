#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Sound/SoundCue.h"
#include "Projectile.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
/**
 * @class AProjectile
 * @brief 投射物基类
 * 
 * 用于表示游戏中发射的子弹、火箭等飞行道具。
 * 包含碰撞检测、轨迹特效、命中效果等功能。
 * 支持网络复制，所有客户端都能看到投射物。
 */
UCLASS()
class XMBBLASTER_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AProjectile();
	
	virtual void Tick(float DeltaTime) override;
	
	virtual void Destroyed() override;
	
protected:
	
	virtual void BeginPlay() override;

	void StartDestroyTimer();
	void DestroyTimerFinished();

	void SpawnTrailSystem();

	void ExplodeDamage();
	
	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	//投射物造成的伤害值
	UPROPERTY(EditAnywhere)
	float Damage = 20.f;

	//命中时播放的粒子特效
	UPROPERTY(EditAnywhere)
	UParticleSystem* ImpactParticles;

	//命中时播放的音效
	UPROPERTY(EditAnywhere)
	USoundCue* ImpactSound;

	//碰撞盒组件
	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionBox;
	
	//投射物移动组件
	UPROPERTY(VisibleAnywhere)//将组件于子类内继承并实现，可以转化为自定义的ProjectileMovement
	UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* TrailSystem;

	UPROPERTY()
	UNiagaraComponent* TrailSystemComponent;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ProjectileMesh;

	//将来设置成先判断是否为投射物
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "DamageRadius")
	float InRadius;//伤害内环的距离

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "DamageRadius")
	float OutRadius;//伤害外环的距离

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "DamageRadius")
	float BaseDamage;//基础伤害

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "DamageRadius")
	float MiniDamage;//最小伤害
	
private:
	/** 
	 * @brief 飞行轨迹特效（粒子系统）
	 */
	UPROPERTY(EditAnywhere)
	UParticleSystem* Tracer;

	/** 
	 * @brief 轨迹特效组件实例
	 * 运行时生成的粒子系统组件，用于显示飞行轨迹
	 */
	UPROPERTY()
	UParticleSystemComponent* TracerComponent;

	FTimerHandle DestroyTimer;

	UPROPERTY(EditAnywhere)
	float DestroyTime = 3.f;



};
