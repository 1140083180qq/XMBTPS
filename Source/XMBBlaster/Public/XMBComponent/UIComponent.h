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

	/*XMBUITEST*/
	FORCEINLINE FHUDPackage GetHUDPackage() { return HUDPackage; }//返回
	FORCEINLINE bool GetbIsChange() { return bIsChange; }
	void SetbIsChange(bool InChange) { bIsChange = InChange; }
	/*XMBUITEST*/

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
	AWeaponBase* CachedEquippedWeapon;//当更换武器后才需要更换准心
	bool bIsChange = false;//此处用来被CombatComponent内的Tick判断是否HitResult.Actor以此改变准心颜色
	/*XMBUITEST*/

	/*
	 * HUD and crosshairs
	 */

	FHUDPackage HUDPackage;
	
	float CrosshairVelocityFactor;
	float CrosshairInAirFactor;
	float CrosshairAimFactor;
	float CrosshairShootingFactor;

	/**
	 *此处还涉及到了角色摄像机内的景深的聚焦
	 * Aiming and FOV//TODO:此处可以考虑肩射换成改变摄像机位置与FOV
	 */

	//在Beginplay时的FOV
	float DefaultFOV;

	//缩放FOV
	UPROPERTY(EditAnywhere, Category = Combat)
	float ZoomedFOV = 30.f;

	float CurrentFOV;//当前的FOV

	UPROPERTY(EditAnywhere, Category = Combat)
	float ZoomInterpSpeed = 20.f;

	void InterpFOV(float DeltaTime);
	
	bool bIsLocalControllered = false;

	
};
