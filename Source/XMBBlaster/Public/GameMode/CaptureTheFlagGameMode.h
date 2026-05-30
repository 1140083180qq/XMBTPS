
#pragma once

#include "CoreMinimal.h"
#include "GameMode/TeamsGameMode.h"
#include "CaptureTheFlagGameMode.generated.h"

class AFlagZone;
class AFlag;
/**
 * 
 */
UCLASS()
class XMBBLASTER_API ACaptureTheFlagGameMode : public ATeamsGameMode
{
	GENERATED_BODY()

public:
	virtual void PlayerEliminated(AXMBCharacterBase* ElimmedCharacter, AXMBPlayerController* VictimController, AXMBPlayerController* AttackerController) override;
	void FlagCaptured(AFlag* Flag, AFlagZone* Zone);
	
	
};
