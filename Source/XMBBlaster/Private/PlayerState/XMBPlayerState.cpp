// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerState/XMBPlayerState.h"

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
