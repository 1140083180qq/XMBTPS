// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController/XMBPlayerController.h"

#include "Character/XMBCharacterBase.h"


void AXMBPlayerController::BeginPlay()
{
	Super::BeginPlay();

	XMBHUD = Cast<AXMBHUD>(GetHUD());
}

void AXMBPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AXMBCharacterBase* XMBCharacter = Cast<AXMBCharacterBase>(InPawn);
	if (XMBCharacter)
	{
		SetHUDHealth(XMBCharacter->GetHealth(), XMBCharacter->GetMaxHealth());
	}
	
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

void AXMBPlayerController::SetHUDScore(float Score)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
	&& XMBHUD->CharacterOverlayWidget
	&& XMBHUD->CharacterOverlayWidget->ScoreAmount;
	if(bHUDValid)
	{
	FString ScoreText = FString::Printf(TEXT("%d"),FMath::FloorToInt(Score));
	XMBHUD->CharacterOverlayWidget->ScoreAmount->SetText(FText::FromString(ScoreText));
	}
}

void AXMBPlayerController::SetHUDDefeats(int32 Defeats)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
	&& XMBHUD->CharacterOverlayWidget
	&& XMBHUD->CharacterOverlayWidget->DefeatsAmount;
	if(bHUDValid)
	{
		FString DefeatsText = FString::Printf(TEXT("%d"),Defeats);
		XMBHUD->CharacterOverlayWidget->DefeatsAmount->SetText(FText::FromString(DefeatsText));
	}
}
