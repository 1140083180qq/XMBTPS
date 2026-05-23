// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponBase.h"
#include "Sound/SoundCue.h"
#include "HitScanWeapon.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API AHitScanWeapon : public AWeaponBase
{
	GENERATED_BODY()

public:
	virtual void Fire(const FVector& HitTarget) override;
	

	
protected:
	

	void WeaponTraceHit(const FVector& TraceStart, const FVector& HitTarget, FHitResult& OutHitResult);

	UPROPERTY(EditAnywhere)
	UParticleSystem* ImpactParticles;

	UPROPERTY(EditAnywhere)
	UParticleSystem* BeamParticles;

	UPROPERTY(EditAnywhere)
	UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere)
	USoundCue* FireSound;

	UPROPERTY(EditAnywhere)
	USoundCue* HitSound;
	
private:
	

	
};
