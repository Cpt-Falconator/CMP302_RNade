// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CMP302_RNadeGameMode.h"
#include "CMP302_RNadeHUD.h"
#include "CMP302_RNadeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACMP302_RNadeGameMode::ACMP302_RNadeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACMP302_RNadeHUD::StaticClass();
}
