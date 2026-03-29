// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "XMBComponent/CombatComponent.h"  
#include "Weapon/WeaponBase.h"             
#include "Components/ActorComponent.h"
#include "UI/HUD/XMBHUD.h"
#include "UIComponent.generated.h"

class AXMBPlayerController;
class AXMBCharacterBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class XMBBLASTER_API UUIComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UUIComponent();
	friend class AXMBCharacterBase;

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetHUDCrosshairs(float DeltaTime);

private:
	UPROPERTY()
	AXMBCharacterBase* Owner;

	AXMBPlayerController* XMBController;

	AXMBHUD* HUD;

	/*XMBUITEST*/
	UCombatComponent* CombatComp;        
	AWeaponBase* CachedEquippedWeapon;
	/*XMBUITEST*/

	/*
	 * HUD and crosshairs
	 */
	
	float CrosshairVelocityFactor;
	float CrosshaitInAirFactor;
};
