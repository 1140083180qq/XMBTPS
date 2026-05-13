// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actor/Pickups/PickupActorBase.h"
#include "JumpPickup.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API AJumpPickup : public APickupActorBase
{
	GENERATED_BODY()

protected:
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp,int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

private:

	UPROPERTY(EditAnywhere)
	float BuffJumpZVelocity = 4000.f;

	UPROPERTY(EditAnywhere)
	float BuffJumpTime = 30.f;

	
	
};
