// Copyright Epic Games, Inc. All Rights Reserved.

#include "capmanGameMode.h"
#include "capmanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AcapmanGameMode::AcapmanGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
