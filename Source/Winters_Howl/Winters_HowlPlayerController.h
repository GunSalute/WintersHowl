// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Winters_HowlPlayerController.generated.h"

UCLASS()
class AWinters_HowlPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AWinters_HowlPlayerController();

protected:
	/** True if the controlled character should navigate to the mouse cursor. */
	bool bMoveToMouseCursor;

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface

	/** Navigate player to the given world location. */
	void SetNewMoveDestination();

	/** Input handlers for SetDestination action. */
	void OnSetDestinationPressed();
};


