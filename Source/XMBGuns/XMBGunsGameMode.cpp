// Copyright Epic Games, Inc. All Rights Reserved.

#include "XMBGunsGameMode.h"
#include "XMBGunsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AXMBGunsGameMode::AXMBGunsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
