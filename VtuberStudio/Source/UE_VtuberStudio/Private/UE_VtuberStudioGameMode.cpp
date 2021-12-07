// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_VtuberStudioGameMode.h"
#include "UE_VtuberStudioCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_VtuberStudioGameMode::AUE_VtuberStudioGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
