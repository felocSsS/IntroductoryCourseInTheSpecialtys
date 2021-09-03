// Copyright Epic Games, Inc. All Rights Reserved.

#include "IntroductoryCourseKPGameMode.h"
#include "IntroductoryCourseKPHUD.h"
#include "IntroductoryCourseKPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIntroductoryCourseKPGameMode::AIntroductoryCourseKPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AIntroductoryCourseKPHUD::StaticClass();
}
