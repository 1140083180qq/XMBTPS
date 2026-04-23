// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actor/Projectile.h"
#include "NiagaraFunctionLibrary.h"
#include "Sound/SoundCue.h"
#include "NiagaraComponent.h"
#include "Components/AudioComponent.h"
#include "XMBComponent/RocketMovementComponent.h"
#include "ProjectileRocket.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API AProjectileRocket : public AProjectile
{
	GENERATED_BODY()

public:
	AProjectileRocket();

	virtual void Destroyed() override;
	
protected:
	virtual void BeginPlay() override;
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;

	void DestroyTimerFinished();

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "DamageRadius")
	float InRadius;//伤害内环的距离

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "DamageRadius")
	float OutRadius;//伤害外环的距离

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "DamageRadius")
	float BaseDamage;//基础伤害

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "DamageRadius")
	float MiniDamage;//最小伤害

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* TrailSystem;

	UPROPERTY()
	UNiagaraComponent* TrailSystemComponent;

	UPROPERTY(EditAnywhere)
	USoundCue* ProjectileLoop;

	UPROPERTY()
	UAudioComponent* ProjectileLoopComponent;

	UPROPERTY(EditAnywhere)
	USoundAttenuation* LoopingSoundAttenuation;

	UPROPERTY(VisibleAnywhere)
	URocketMovementComponent* RocketMovementComponent;
	
	
private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RocketMesh;

	FTimerHandle DestroyTimer;

	UPROPERTY(EditAnywhere)
	float DestroyTime = 3.f;
};
