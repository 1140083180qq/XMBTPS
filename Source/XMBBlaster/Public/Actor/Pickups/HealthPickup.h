// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actor/Pickups/PickupActorBase.h"
#include "HealthPickup.generated.h"


/**
 * 
 */
UCLASS()
class XMBBLASTER_API AHealthPickup : public APickupActorBase
{
	GENERATED_BODY()

public:
	AHealthPickup();


protected:
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp,int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	
private:
	//TODO:可以在此处添加更多的效果或者音效
	UPROPERTY(EditAnywhere)
	float HealAmount = 50.f;

	UPROPERTY(EditAnywhere)
	float HealingTime = 5.f;

	
	
	
};
