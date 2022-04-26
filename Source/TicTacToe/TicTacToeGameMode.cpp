// Copyright Epic Games, Inc. All Rights Reserved.

#include "TicTacToeGameMode.h"
#include "TicTacToeCharacter.h"

ATicTacToeGameMode::ATicTacToeGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATicTacToeCharacter::StaticClass();	
}
