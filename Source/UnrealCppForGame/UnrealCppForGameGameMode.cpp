// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealCppForGameGameMode.h"
#include "UnrealCppForGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealCppForGameGameMode::AUnrealCppForGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
