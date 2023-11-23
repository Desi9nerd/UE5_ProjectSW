// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectSWGameMode.h"
#include "ProjectSWCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectSWGameMode::AProjectSWGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
