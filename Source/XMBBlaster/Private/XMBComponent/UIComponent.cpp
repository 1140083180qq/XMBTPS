// Fill out your copyright notice in the Description page of Project Settings.


#include "XMBComponent/UIComponent.h"

#include "Character/XMBCharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerController/XMBPlayerController.h"


UUIComponent::UUIComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	/*XMBUITEST*/
	CombatComp = nullptr;
	CachedEquippedWeapon = nullptr;
	/*XMBUITEST*/
}

void UUIComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (Owner)
	{
		CombatComp = Owner->GetCombatComponent();
	}
}

void UUIComponent::TickComponent(float DeltaTime, enum ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	SetHUDCrosshairs(DeltaTime);
	
}

void UUIComponent::SetHUDCrosshairs(float DeltaTime)
{
	if (Owner == nullptr || Owner->Controller == nullptr) return;

	XMBController = XMBController == nullptr ? Cast<AXMBPlayerController>(Owner->Controller) : XMBController;
	if (XMBController)
	{
		HUD = HUD == nullptr ? Cast<AXMBHUD>(XMBController->GetHUD()) : HUD;
		if (HUD)
		{
			CombatComp = Owner->GetCombatComponent();
			AWeaponBase* EquippedWeapon = CombatComp ? CombatComp->GetEquippedWeapon() : nullptr;

			if (CachedEquippedWeapon != EquippedWeapon)
			{
				FHUDPackage HUDPackage = FHUDPackage();
				if (EquippedWeapon)
				{
					HUDPackage.CrosshairCenter = EquippedWeapon->CrosshairCenter;
					HUDPackage.CrosshairLeft   = EquippedWeapon->CrosshairLeft;
					HUDPackage.CrosshairRight  = EquippedWeapon->CrosshairRight;
					HUDPackage.CrosshairTop    = EquippedWeapon->CrosshairTop;
					HUDPackage.CrosshairBottom = EquippedWeapon->CrosshairBottom;
				}

				//计算Crosshair的spread
				//可以在这里考虑对角色移动速度的上限进行修改
				//[0,600] -> [0,1]
				FVector2D WalkSpeedRange(0.f,Owner->GetCharacterMovement()->MaxWalkSpeed);
				FVector2D VelocityMultiplierRange(0.f,1.f);
				FVector Velocity = Owner->GetVelocity();
				Velocity.Z = 0.f	;
				
				CrosshairVelocityFactor = FMath::GetMappedRangeValueClamped(WalkSpeedRange, VelocityMultiplierRange, Velocity.Size());

				if (Owner->GetCharacterMovement()->IsFalling())
				{
					CrosshaitInAirFactor = FMath::FInterpTo(CrosshaitInAirFactor, 2.25f, DeltaTime, 2.25f);
				}
				else
				{
					CrosshaitInAirFactor = FMath::FInterpTo(CrosshaitInAirFactor, 0.f, DeltaTime, 30.f);
				}
				
				HUDPackage.CrosshairSpread = CrosshairVelocityFactor + CrosshaitInAirFactor;
				
				// FHUDPackage 是局部变量，指针成员默认零初始化，无需 else 清空
				HUD->SetHUDPackage(HUDPackage);
			}
		}
	}
	
}

