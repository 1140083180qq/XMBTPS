// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actor/Pickups/PickupActorBase.h"
#include "ShieldPickup.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API AShieldPickup : public APickupActorBase
{
	GENERATED_BODY()
public:

	
protected:
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp,int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	
private:
	
	UPROPERTY(EditAnywhere)
	float ShieldReplenishAmount = 25.f;

	UPROPERTY(EditAnywhere)
	float ShieldReplenishTime = 5.f;

};
