
#pragma once

#include "CoreMinimal.h"
#include "Character/XMBCharacterBase.h"
#include "GameFramework/PlayerState.h"
#include "XMBPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API AXMBPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	void AddToScore(float ScoreAmount);
	void AddToDefeats(int32 DefeatsAmount);
	/*
	 * Replication notifies
	 */
	virtual void OnRep_Score() override;

	UFUNCTION()
	virtual void OnRep_Defeats();
	

private:

	UPROPERTY()
	AXMBCharacterBase* Character;
	
	UPROPERTY()
	AXMBPlayerController* Controller;

	UPROPERTY(ReplicatedUsing = OnRep_Defeats)
	int32 Defeats;

	
	
};

