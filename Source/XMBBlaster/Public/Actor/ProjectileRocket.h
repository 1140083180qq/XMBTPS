// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actor/Projectile.h"
// #include "NiagaraFunctionLibrary.h"
// #include "Sound/SoundCue.h"
// #include "NiagaraComponent.h"
// #include "Components/AudioComponent.h"
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

	UPROPERTY(EditAnywhere)
	USoundCue* ProjectileLoop;

	UPROPERTY()
	UAudioComponent* ProjectileLoopComponent;

	UPROPERTY(EditAnywhere)
	USoundAttenuation* LoopingSoundAttenuation;

	UPROPERTY(VisibleAnywhere)
	URocketMovementComponent* RocketMovementComponent;
	
	
private:


	
};
