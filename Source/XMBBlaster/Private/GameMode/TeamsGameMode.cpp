// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/TeamsGameMode.h"

#include "GameState/XMBBlasterGameState.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerState/XMBPlayerState.h"

ATeamsGameMode::ATeamsGameMode()
{
	bTeamsMatch = true;
}

void ATeamsGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	AXMBBlasterGameState* BGameState = Cast<AXMBBlasterGameState>(UGameplayStatics::GetGameState(this));
	if (BGameState)
	{
		AXMBPlayerState* BPState = NewPlayer->GetPlayerState<AXMBPlayerState>();
		if (BPState && BPState->GetTeam() == ETeam::ET_NoTeam)
		{
			if (BGameState->BlueTeam.Num() >= BGameState->RedTeam.Num())
			{
				BGameState->RedTeam.AddUnique(BPState);
				BPState->SetTeam(ETeam::ET_RedTeam);
			}
			else
			{
				BGameState->BlueTeam.AddUnique(BPState);
				BPState->SetTeam(ETeam::ET_BlueTeam);
			}
		}
	}
}


void ATeamsGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	AXMBBlasterGameState* BGameState = Cast<AXMBBlasterGameState>(UGameplayStatics::GetGameState(this));
	AXMBPlayerState* BPState = Exiting->GetPlayerState<AXMBPlayerState>();

	if (BGameState && BPState)
	{
		if (BGameState->RedTeam.Contains(BPState))
		{
			BGameState->RedTeam.Remove(BPState);
		}
		if (BGameState->BlueTeam.Contains(BPState))
		{
			BGameState->BlueTeam.Remove(BPState);
		}
	}
}




void ATeamsGameMode::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	AXMBBlasterGameState* BGameState = Cast<AXMBBlasterGameState>(UGameplayStatics::GetGameState(this));
	if (BGameState)
	{
		for (auto PState : BGameState->PlayerArray)
		{
			AXMBPlayerState* BPState = Cast<AXMBPlayerState>(PState.Get());
			if (BPState && BPState->GetTeam() == ETeam::ET_NoTeam)
			{
				if (BGameState->BlueTeam.Num() >= BGameState->RedTeam.Num())
				{
					BGameState->RedTeam.AddUnique(BPState);
					BPState->SetTeam(ETeam::ET_RedTeam);
				}
				else
				{
					BGameState->BlueTeam.AddUnique(BPState);
					BPState->SetTeam(ETeam::ET_BlueTeam);
				}
			}
		}
	}
}


float ATeamsGameMode::CalculateDamage(AController* Attacker, AController* Victim, float BaseDamage)
{
	AXMBPlayerState* AttackerPState = Attacker->GetPlayerState<AXMBPlayerState>();
	AXMBPlayerState* VictimPState = Victim->GetPlayerState<AXMBPlayerState>();
	
	if (AttackerPState == nullptr || VictimPState == nullptr) return BaseDamage;
	if (VictimPState == AttackerPState) return BaseDamage;
	if (AttackerPState->GetTeam() == VictimPState->GetTeam()) return 0.f;
	return BaseDamage;
}


void ATeamsGameMode::PlayerEliminated(AXMBCharacterBase* ElimmedCharacter,
	AXMBPlayerController* VictimController, AXMBPlayerController* AttackerController)
{
	Super::PlayerEliminated(ElimmedCharacter, VictimController, AttackerController);

	AXMBBlasterGameState* BGameState = Cast<AXMBBlasterGameState>(UGameplayStatics::GetGameState(this));
	AXMBPlayerState* AttackerPlayerState = AttackerController ? Cast<AXMBPlayerState>(AttackerController->PlayerState) : nullptr;
	if (BGameState && AttackerPlayerState)
	{
		if (AttackerPlayerState->GetTeam() == ETeam::ET_BlueTeam)
		{
			BGameState->BlueTeamScores();
		}
		if (AttackerPlayerState->GetTeam() == ETeam::ET_RedTeam)
		{
			BGameState->RedTeamScores();
		}
	}
	
}