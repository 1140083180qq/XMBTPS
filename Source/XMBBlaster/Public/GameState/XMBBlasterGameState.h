// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"

#include "XMBBlasterGameState.generated.h"

class AXMBPlayerState;


/**
 * 
 */
UCLASS()
class XMBBLASTER_API AXMBBlasterGameState : public AGameState
{
	GENERATED_BODY()

public:

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void UpdateTopScore(AXMBPlayerState* ScoringPlayer);
	
	UPROPERTY(Replicated)
	TArray<AXMBPlayerState*> TopScoringPlayers;


private:
	float TopScore = 0.f;
	
	
};
