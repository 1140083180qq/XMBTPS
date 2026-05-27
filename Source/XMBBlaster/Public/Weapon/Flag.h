// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponBase.h"
#include "Flag.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API AFlag : public AWeaponBase
{
	GENERATED_BODY()

public:
	AFlag();

	
private:
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* FlagMesh;
	
};
