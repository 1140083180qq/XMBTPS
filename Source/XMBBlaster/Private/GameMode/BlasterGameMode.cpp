// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/BlasterGameMode.h"

#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"
#include "PlayerState/XMBPlayerState.h"

void ABlasterGameMode::PlayerEliminated(AXMBCharacterBase* ElimmedCharacter, AXMBPlayerController* VictimController,
                                        AXMBPlayerController* AttackerController)
{
	AXMBPlayerState* AttackerPlayerState = AttackerController ? Cast<AXMBPlayerState>(AttackerController->PlayerState) : nullptr;
	AXMBPlayerState* VictimPlayerState = VictimController ? Cast<AXMBPlayerState>(VictimController->PlayerState) : nullptr;
	if (AttackerPlayerState && AttackerPlayerState != VictimPlayerState)
	{
		AttackerPlayerState->AddToScore(1.f);
	}

	if (VictimPlayerState)
	{
		VictimPlayerState->AddToDefeats(1.f);
	}
	
	if (ElimmedCharacter)
	{
		ElimmedCharacter->Elim();
	}
}

void ABlasterGameMode::RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController)
{
	if (ElimmedCharacter)
	{
		ElimmedCharacter->Reset();//需要了解这个函数
		ElimmedCharacter->Destroy();
	}

	if (ElimmedController)
	{
		TArray<AActor*> PlayerStarts;
		UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(),PlayerStarts);//TODO:看看有没有别的办法可以优化这里的逻辑
		int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
		
		RestartPlayerAtPlayerStart(ElimmedController, PlayerStarts[Selection]);
	}
}
