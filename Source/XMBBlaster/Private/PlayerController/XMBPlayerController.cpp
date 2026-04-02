// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController/XMBPlayerController.h"


void AXMBPlayerController::BeginPlay()
{
	Super::BeginPlay();

	XMBHUD = Cast<AXMBHUD>(GetHUD());
}


void AXMBPlayerController::SetHUDHealth(float Health, float MaxHealth)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;

	bool bHUDValid = XMBHUD &&XMBHUD->CharacterOverlayWidget &&
			XMBHUD->CharacterOverlayWidget->HealthBar && XMBHUD->CharacterOverlayWidget->HealthText;
	if (bHUDValid)
	{
		const float HealthPercent = Health / MaxHealth;
		XMBHUD->CharacterOverlayWidget->HealthBar->SetPercent(HealthPercent);
		FString HealthText = FString::Printf(TEXT("%d/%d"), FMath::CeilToInt(Health), FMath::CeilToInt(MaxHealth));
		XMBHUD->CharacterOverlayWidget->HealthText->SetText(FText::FromString(HealthText));
	}
}