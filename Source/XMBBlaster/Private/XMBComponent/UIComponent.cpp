// Fill out your copyright notice in the Description page of Project Settings.


#include "XMBComponent/UIComponent.h"

#include "Camera/CameraComponent.h"
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
	HUDPackage = FHUDPackage();
	
	if (Owner)
	{
		bIsLocalControllered = Owner->IsLocallyControlled();
		CombatComp = Owner->GetCombatComponent();
		
		if (Owner->GetFollowCamera())
		{
			DefaultFOV = Owner->GetFollowCamera()->FieldOfView;
			CurrentFOV = DefaultFOV;
		}
	}
}

void UUIComponent::TickComponent(float DeltaTime, enum ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (Owner && bIsLocalControllered)
	{
		InterpFOV(DeltaTime);
		SetHUDCrosshairs(DeltaTime);
	}
	
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
				CachedEquippedWeapon = EquippedWeapon;
				if (CachedEquippedWeapon)
				{
					HUDPackage.CrosshairCenter = EquippedWeapon->CrosshairCenter;
					HUDPackage.CrosshairLeft   = EquippedWeapon->CrosshairLeft;
					HUDPackage.CrosshairRight  = EquippedWeapon->CrosshairRight;
					HUDPackage.CrosshairTop    = EquippedWeapon->CrosshairTop;
					HUDPackage.CrosshairBottom = EquippedWeapon->CrosshairBottom;
				}
				else
				{
					HUDPackage = FHUDPackage();
				}
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
				CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 2.25f, DeltaTime, 2.25f);
			}
			else
			{
				CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 0.f, DeltaTime, 30.f);
			}
				
			if (CombatComp->IsAiming())
			{
				CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor,0.9f, DeltaTime, 0.3f);	
			}
			else
			{
				CrosshairAimFactor = FMath::FInterpTo(CrosshairAimFactor,0.f, DeltaTime, 0.3f);
			}

			if (CachedEquippedWeapon && CombatComp->IsFireButtonPressed())
			{
				CrosshairShootingFactor += 0.75f;
			}

			if (bIsChange)
			{
				HUDPackage.CrosshairsColor = FLinearColor::Red;
			}
			else
			{
				HUDPackage.CrosshairsColor = FLinearColor::White;
			}

			CrosshairShootingFactor = FMath::FInterpTo(CrosshairShootingFactor,0.f,DeltaTime,40.f);
				
			HUDPackage.CrosshairSpread = 0.5f + CrosshairVelocityFactor + CrosshairInAirFactor - CrosshairAimFactor + CrosshairShootingFactor;
			
			HUD->SetHUDPackage(HUDPackage);
		}
	}
}

void UUIComponent::InterpFOV(float DeltaTime)
{
	// if (CombatComp->GetEquippedWeapon() == nullptr) return;
	if (CachedEquippedWeapon == nullptr) return;

	if (CombatComp->IsAiming())
	{
		//获取到武器设置的FOV
		CurrentFOV = FMath::FInterpTo(CurrentFOV, CachedEquippedWeapon->ZoomedFOV,DeltaTime,CachedEquippedWeapon->ZoomInterpSpeed);
	}
	else
	{
		CurrentFOV = FMath::FInterpTo(CurrentFOV,DefaultFOV,DeltaTime,ZoomInterpSpeed);
	}

	if (Owner && Owner->GetFollowCamera())
	{
		Owner->GetFollowCamera()->SetFieldOfView(CurrentFOV);
	}
}

