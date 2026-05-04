// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/HitScanWeapon.h"
#include "ShotGun.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API AShotGun : public AHitScanWeapon
{
	GENERATED_BODY()

public:
	void virtual Fire(const FVector& HitTarget) override;


protected:
	

private:

	UPROPERTY(EditAnywhere, Category = "Weapon Scatter")
	uint32 NumberOfPellets = 10;

	
};
