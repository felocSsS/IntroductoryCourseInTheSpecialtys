// Copyright Epic Games, Inc. All Rights Reserved.

#include "IntroductoryCourseKPGameMode.h"
#include "IntroductoryCourseKPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIntroductoryCourseKPGameMode::AIntroductoryCourseKPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
