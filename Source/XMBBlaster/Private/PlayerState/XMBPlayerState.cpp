// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerState/XMBPlayerState.h"

#include "Net/UnrealNetwork.h"

void AXMBPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AXMBPlayerState, Defeats);
	
}

void AXMBPlayerState::AddToScore(float ScoreAmount)
{
	float NewScore = GetScore() + ScoreAmount;
	SetScore(NewScore);
	
	Character = Character == nullptr ? Cast<AXMBCharacterBase>(GetPawn()) : Character;
	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AXMBPlayerController>(Character->Controller) : Controller;
		if (Controller)
		{
			Controller->SetHUDScore(GetScore());
		}
	}
	
}

void AXMBPlayerState::AddToDefeats(int32 DefeatsAmount)
{
	Defeats += DefeatsAmount;
	Character = Character == nullptr ? Cast<AXMBCharacterBase>(GetPawn()) : Character;
	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AXMBPlayerController>(Character->Controller) : Controller;
		if (Controller)
		{
			Controller->SetHUDDefeats(Defeats);
		}
	}
}

void AXMBPlayerState::OnRep_Score()
{
	Super::OnRep_Score();

	Character = Character == nullptr ? Cast<AXMBCharacterBase>(GetPawn()) : Character;
	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AXMBPlayerController>(Character->Controller) : Controller;
		if (Controller)
		{
			Controller->SetHUDScore(GetScore());
		}
	}
}
void AXMBPlayerState::OnRep_Defeats()
{
	Character = Character == nullptr ? Cast<AXMBCharacterBase>(GetPawn()) : Character;
	if (Character)
	{
		Controller = Controller == nullptr ? Cast<AXMBPlayerController>(Character->Controller) : Controller;
		if (Controller)
		{
			Controller->SetHUDDefeats(Defeats);
		}
	}
}