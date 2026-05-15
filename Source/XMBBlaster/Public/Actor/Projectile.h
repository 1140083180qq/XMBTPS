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

	//碰撞盒组件
	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionBox;
	
	//投射物移动组件
	UPROPERTY(VisibleAnywhere)//将组件于子类内继承并实现，可以转化为自定义的ProjectileMovement
	UProjectileMovementComponent* ProjectileMovementComponent;
	UPROPERTY()
	UNiagaraComponent* TrailSystemComponent;
    
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ProjectileMesh;
	
	
	//命中时播放的粒子特效
	UPROPERTY(EditAnywhere, Category = Effect)
	UParticleSystem* ImpactParticles;

	//命中时播放的音效
	UPROPERTY(EditAnywhere, Category = Effect)
	USoundCue* ImpactSound;
	
	UPROPERTY(EditAnywhere, Category = Effect)
	UNiagaraSystem* TrailSystem;


	//XMBTODO:将来设置成先判断是否为投射物
	//用于子弹的伤害，仅用ApplyDamage
	UPROPERTY(EditAnywhere)
	float Damage = 20.f;

	
	//用于范围伤害
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Damage")
	float BaseDamage;//基础伤害

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Damage")
	float MiniDamage;//最小伤害
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Damage")
	float InRadius;//伤害内环的距离

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Damage")
	float OutRadius;//伤害外环的距离

	

private:
	UPROPERTY(EditAnywhere)
	UParticleSystem* Tracer;
	
	UPROPERTY()
	UParticleSystemComponent* TracerComponent;

	FTimerHandle DestroyTimer;

	UPROPERTY(EditAnywhere)
	float DestroyTime = 3.f;

	
};
