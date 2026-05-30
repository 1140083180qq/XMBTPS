

#include "GameMode/CaptureTheFlagGameMode.h"

#include "CaptureTheFlag/FlagZone.h"
#include "GameState/XMBBlasterGameState.h"
#include "GameTypes/Team.h"
#include "Weapon/Flag.h"

void ACaptureTheFlagGameMode::PlayerEliminated(AXMBCharacterBase* ElimmedCharacter, AXMBPlayerController* VictimController, AXMBPlayerController* AttackerController)
{
	ABlasterGameMode::PlayerEliminated(ElimmedCharacter,VictimController,AttackerController);
}

void ACaptureTheFlagGameMode::FlagCaptured(AFlag* Flag, AFlagZone* Zone)
{
	bool bValidCapture = Flag->GetTeam() != Zone->Team;
	AXMBBlasterGameState* BGameState = Cast<AXMBBlasterGameState>(GameState);
	if (BGameState)
	{
		if (Zone->Team == ETeam::ET_BlueTeam)
		{
			BGameState->BlueTeamScores();
		}
		if (Zone->Team == ETeam::ET_RedTeam)
		{
			BGameState->RedTeamScores();
		}
	}
	
}
