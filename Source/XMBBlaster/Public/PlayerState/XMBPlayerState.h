
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
	virtual void OnRep_Score() override;
	void AddToScore(float ScoreAmount);

private:

	AXMBCharacterBase* Character;
	AXMBPlayerController* Controller;	
	
};
