// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController/XMBPlayerController.h"

#include "OnlineSubsystemTypes.h"
#include "Character/XMBCharacterBase.h"
#include "GameFramework/GameMode.h"
#include "GameMode/BlasterGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"


void AXMBPlayerController::BeginPlay()
{
	Super::BeginPlay();

	XMBHUD = Cast<AXMBHUD>(GetHUD());
	ServerCheckMatchState();
	
}

void AXMBPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AXMBPlayerController, MatchState);
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

	if (bInitializeCharcterOverlay)
	{
		PollInit();
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
	else
	{
		bInitializeCharcterOverlay = true;
		HUdHealth = Health;
		HUDMaxHealth = MaxHealth;
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
	else
	{
		bInitializeCharcterOverlay = true;
		HUDScore = Score;
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
	else
	{
		bInitializeCharcterOverlay = true;
		HUDDefeats = Defeats;
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
		if (CountdownTime < 0.f)
		{
			XMBHUD->CharacterOverlayWidget->MatchCountdownText->SetText(FText());
			return;
		}
		
		int32 Minutes = FMath::FloorToInt(CountdownTime / 60.f);
		int32 Seconds = CountdownTime - Minutes * 60;
		
		FString MatchCountdownText = FString::Printf(TEXT("%02d:%02d"),Minutes,Seconds);
		XMBHUD->CharacterOverlayWidget->MatchCountdownText->SetText(FText::FromString(MatchCountdownText));
	}
}

void AXMBPlayerController::SetHUDTime()
{
	float TimeLeft = 0.f;
	if (MatchState == MatchState::WaitingToStart) TimeLeft = WarmupTime - GetServerTime() + LevelStartingTime;
	else if (MatchState == MatchState::InProgress) TimeLeft = WarmupTime + MatchTime - GetServerTime() + LevelStartingTime;
	else if (MatchState == MatchState::Cooldown) TimeLeft = CooldownTime + WarmupTime + MatchTime - GetServerTime() + LevelStartingTime;

	int32 SecondsLeft = FMath::CeilToInt(TimeLeft);

	if (HasAuthority())
	{
		BlasterGameMode = BlasterGameMode == nullptr ? Cast<ABlasterGameMode>(UGameplayStatics::GetGameMode(this)) : BlasterGameMode;
		if (BlasterGameMode)
		{
			SecondsLeft = FMath::CeilToInt(BlasterGameMode->GetCountdownTime() + LevelStartingTime);
		}
	}
	
	if (CountdownInt != SecondsLeft)
	{
		if (MatchState == MatchState::WaitingToStart || MatchState == MatchState::Cooldown)
		{
			SetHUDAnnouncementCountdown(TimeLeft);
		}
		if (MatchState == MatchState::InProgress)
		{
			SetHUDMatchCountdown(TimeLeft);
		}
	}
	
	CountdownInt = SecondsLeft;
}

void AXMBPlayerController::SetHUDAnnouncementCountdown(float CountdownTime)
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	bool bHUDValid = XMBHUD 
	&& XMBHUD->AnnouncementWidget
	&& XMBHUD->AnnouncementWidget->WarmupTime;
	if(bHUDValid)
	{
		if (CountdownTime < 0.f)
		{
			XMBHUD->AnnouncementWidget->WarmupTime->SetText(FText());
			return;
		}
		
		int32 Minutes = FMath::FloorToInt(CountdownTime / 60.f);
		int32 Seconds = CountdownTime - Minutes * 60;
		
		FString CountdownText = FString::Printf(TEXT("%02d:%02d"),Minutes,Seconds);
		XMBHUD->AnnouncementWidget->WarmupTime->SetText(FText::FromString(CountdownText));
	}
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

void AXMBPlayerController::OnMatchStateSet(FName State)
{
	MatchState = State;

	if (MatchState == MatchState::InProgress) HandleMatchHasStarted();
	else if (MatchState == MatchState::Cooldown)
	{
		HandleCooldown();
	}

}

void AXMBPlayerController::OnRep_MatchState()
{
	if (MatchState == MatchState::InProgress) HandleMatchHasStarted();
	else if (MatchState == MatchState::Cooldown)
	{
		HandleCooldown();
	}
}

void AXMBPlayerController::HandleMatchHasStarted()
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	if (XMBHUD)
	{
		if (XMBHUD->CharacterOverlayWidget == nullptr) XMBHUD->AddCharacterOverlayWidget();
		if (XMBHUD->AnnouncementWidget)//if (XMBHUD->AnnouncementWidget)
		{
			XMBHUD->AnnouncementWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

void AXMBPlayerController::HandleCooldown()
{
	XMBHUD = XMBHUD == nullptr ? Cast<AXMBHUD>(GetHUD()) : XMBHUD;
	if(XMBHUD)
	{
		XMBHUD->CharacterOverlayWidget->RemoveFromParent();
		bool bHUDValid = XMBHUD->AnnouncementWidget
		&& XMBHUD->AnnouncementWidget->AnnouncementText
		&& XMBHUD->AnnouncementWidget->InfoText;
		
		if (bHUDValid)//if (XMBHUD->AnnouncementWidget)
		{
			XMBHUD->AnnouncementWidget->SetVisibility(ESlateVisibility::Visible);
			FString AnnouncementText("New Match Starts In:");
			XMBHUD->AnnouncementWidget->AnnouncementText->SetText(FText::FromString(AnnouncementText));
			XMBHUD->AnnouncementWidget->InfoText->SetText(FText());
		}
	}

	//更改角色输入的条件bDisableGameplay用来判断角色是否能进行输入
	AXMBCharacterBase* XMBCharacter = Cast<AXMBCharacterBase>(GetPawn());
	if (XMBCharacter && XMBCharacter->GetCombatComponent())
	{
		//XMB:此处我觉得不应该在比赛处于Cooldown时对玩家的输入进行限制
		// XMBCharacter->bDisableGameplay = true;
		// XMBCharacter->GetCombatComponent()->FireButtonPressed(false);
	}
}

void AXMBPlayerController::PollInit()
{
	if (CharacterOverlayWidget == nullptr)
	{
		if (XMBHUD && XMBHUD->CharacterOverlayWidget)
		{
			CharacterOverlayWidget = XMBHUD->CharacterOverlayWidget;
			if (CharacterOverlayWidget)
			{
				SetHUDHealth(HUdHealth,HUDMaxHealth);
				SetHUDScore(HUDScore);
				SetHUDDefeats(HUDDefeats);
			}
		}
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

void AXMBPlayerController::ServerCheckMatchState_Implementation()
{
	ABlasterGameMode* GameMode = Cast<ABlasterGameMode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		WarmupTime = GameMode->WarmupTime;
		MatchTime = GameMode->MatchTime;
		LevelStartingTime = GameMode->LevelStartingTime;
		CooldownTime = GameMode->CooldownTime;
		MatchState = GameMode->GetMatchState();
		ClientJoinMidgame(MatchState,WarmupTime,MatchTime,LevelStartingTime,CooldownTime);
	}
	
}

void AXMBPlayerController::ClientJoinMidgame_Implementation(FName StateOfMatch,float WarmUp,float Match,float StartingTime,float InCooldownTime)
{
	WarmupTime = WarmUp;
	MatchTime = Match;
	LevelStartingTime = StartingTime;
	CooldownTime = InCooldownTime;
	MatchState = StateOfMatch;
	OnMatchStateSet(MatchState);

	if (XMBHUD && MatchState == MatchState::WaitingToStart)//此处为等待开始；若为中期加入则不会执行此处判断
	{
		XMBHUD->AddAnnouncement();
	}
}



