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

void AXMBPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	SetHUDTime();

	CheckTimeSync(DeltaSeconds);
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

void AXMBPlayerController::SetHUDWeaponAmmo(int32 Ammo)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
	&& XMBHUD->CharacterOverlayWidget
	&& XMBHUD->CharacterOverlayWidget->WeaponAmmoAmount;
	if(bHUDValid)
	{
		FString AmmoText = FString::Printf(TEXT("%d"),Ammo);
		XMBHUD->CharacterOverlayWidget->WeaponAmmoAmount->SetText(FText::FromString(AmmoText));
	}
}

void AXMBPlayerController::SetHUDCarriedAmmo(int32 Ammo)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
	&& XMBHUD->CharacterOverlayWidget
	&& XMBHUD->CharacterOverlayWidget->CarriedAmmoAmount;
	if(bHUDValid)
	{
		FString AmmoText = FString::Printf(TEXT("%d"),Ammo);
		XMBHUD->CharacterOverlayWidget->CarriedAmmoAmount->SetText(FText::FromString(AmmoText));
	}
}

void AXMBPlayerController::SetHUDMatchCountdown(float CountdownTime)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
	&& XMBHUD->CharacterOverlayWidget
	&& XMBHUD->CharacterOverlayWidget->MatchCountdownText;
	if(bHUDValid)
	{
		int32 Minutes = FMath::FloorToInt(CountdownTime / 60.f);
		int32 Seconds = CountdownTime - Minutes * 60;
		
		FString MatchCountdownText = FString::Printf(TEXT("%02d:%02d"),Minutes,Seconds);
		XMBHUD->CharacterOverlayWidget->MatchCountdownText->SetText(FText::FromString(MatchCountdownText));
	}
}



void AXMBPlayerController::SetHUDTime()
{
	// int32 SecondsLeft = FMath::CeilToInt(MatchTime - GetWorld()->GetTimeSeconds());
	int32 SecondsLeft = FMath::CeilToInt(MatchTime - GetServerTime());
	if (CountdownInt != SecondsLeft)
	{
		SetHUDMatchCountdown(MatchTime - GetServerTime());
	}
	
	CountdownInt = SecondsLeft;
}

void AXMBPlayerController::CheckTimeSync(float DeltaSeconds)
{
	TimeSyncRunningTime += DeltaSeconds;
	if (IsLocalPlayerController() && TimeSyncRunningTime > TimeSyncFrequency)//设置与服务器的同步时间。每隔一定时间就必须要与服务器同步一次。
	{
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
		TimeSyncRunningTime = 0.f;
	}
}

void AXMBPlayerController::ServerRequestServerTime_Implementation(float TimeOfClientRequest)
{
	float ServerTimeOfReceipt = GetWorld()->GetTimeSeconds();
	ClientReportServerTime(TimeOfClientRequest, ServerTimeOfReceipt);
}

void AXMBPlayerController::ClientReportServerTime_Implementation(float TimeOfClientRequest,
	float TimeServerReceivedClientRequest)
{
	float RoundTripTime = GetWorld()->GetTimeSeconds() - TimeOfClientRequest;//从客户端向服务器发送RPC请求已经过去的时间

	float CurrentServerTime = TimeServerReceivedClientRequest + (0.5f * RoundTripTime);//服务器将请求发送回请求的时间 + 花费的时间

	ClientServerDelta = CurrentServerTime - GetWorld()->GetTimeSeconds();
}

float AXMBPlayerController::GetServerTime()
{
	// if (HasAuthority()) return  GetWorld()->GetTimeSeconds();
	return GetWorld()->GetTimeSeconds() + ClientServerDelta;
}

void AXMBPlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();
	if (IsLocalPlayerController())
	{
		ServerRequestServerTime(GetWorld()->GetTimeSeconds());
	}
}
