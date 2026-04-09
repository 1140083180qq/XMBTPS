// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/XMBCharacterBase.h"
#include "GameFramework/GameMode.h"
#include "BlasterGameMode.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API ABlasterGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ABlasterGameMode();
	virtual void Tick(float DeltaSeconds) override;
	virtual void PlayerEliminated(AXMBCharacterBase* ElimmedCharacter, AXMBPlayerController* VictimController,AXMBPlayerController* AttackerController);
	virtual void RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController);

	UPROPERTY(EditDefaultsOnly)
	float WarmupTime = 10.f;//等待时间

	UPROPERTY(EditDefaultsOnly)
	float MatchTime = 120.f;//本局游戏时间

	float LevelStartingTime = 0.f;
	
protected:
	virtual void BeginPlay() override;
	virtual void OnMatchStateSet() override;

private:
	
	float CountdownTime = 0.f;
	
};

