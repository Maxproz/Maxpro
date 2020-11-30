// Copyright Epic Games, Inc. All Rights Reserved.

#include "MaxproGameMode.h"
#include "MaxproCharacter.h"

AMaxproGameMode::AMaxproGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AMaxproCharacter::StaticClass();	
}
