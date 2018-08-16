// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UnrealTestingGroundsGameMode.h"
#include "UnrealTestingGroundsHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealTestingGroundsGameMode::AUnrealTestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behaviour/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealTestingGroundsHUD::StaticClass();
}
