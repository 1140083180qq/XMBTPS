// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/LobbyGameMode.h"

#include "GameFramework/PlayerState.h"
#include "GameFramework/GameStateBase.h"

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	int32 NumberOfPlayers =  GetGameState<AGameStateBase>()->PlayerArray.Num();
	if (NumberOfPlayers == 2)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			bUseSeamlessTravel = true;
			World->ServerTravel(FString("/Game/Maps/BlasterMap?listen"));
		}
	}


	

	//打印出当前房间有多少人、谁加入了房间
	// if (GameState)
	// {
	// 	int32 NumberOfPlayers =  GameState.Get()->PlayerArray.Num();
	//
	// 	if (GEngine)
	// 	{
	// 		GEngine->AddOnScreenDebugMessage(
	// 			-1,
	// 			15.f,
	// 			FColor::Yellow,
	// 			FString::Printf(TEXT("Players in game: %d"), NumberOfPlayers)
	// 		);
	//
	// 		APlayerState* PlayerState = NewPlayer->GetPlayerState<APlayerState>();
	// 		if (PlayerState)
	// 		{
	// 			FString PlayerName = PlayerState->GetPlayerName();
	// 			GEngine->AddOnScreenDebugMessage(
	// 			-1,
	// 			60.f,
	// 			FColor::Cyan,
	// 			FString::Printf(TEXT("%s has Joined the game!"), *PlayerName));
	// 		}
	// 	}
	// }
}

void ALobbyGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	//打印出当前房间有多少人、谁退出了房间
	// APlayerState* PlayerState = Exiting->GetPlayerState<APlayerState>();
	// if (PlayerState)
	// {
	// 	FString PlayerName = PlayerState->GetPlayerName();
	// 	GEngine->AddOnScreenDebugMessage(
	// 	-1,
	// 	60.f,
	// 	FColor::Cyan,
	// 	FString::Printf(TEXT("%s has Exiting the game!"), *PlayerName));
	//
	// 	int32 NumberOfPlayers =  GameState.Get()->PlayerArray.Num();
	// 	if (GEngine)
	// 	{
	// 		GEngine->AddOnScreenDebugMessage(
	// 			-1,
	// 			15.f,
	// 			FColor::Yellow,
	// 			FString::Printf(TEXT("Players in game: %d"), NumberOfPlayers - 1)
	// 		);
	// 	}
	// }
}
