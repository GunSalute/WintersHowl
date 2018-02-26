// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Winters_HowlPlayerController.h"
#include "AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Winters_HowlCharacter.h"
#include "Sheep.h"

AWinters_HowlPlayerController::AWinters_HowlPlayerController()
{
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AWinters_HowlPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// keep updating the destination every tick while desired
	if (bMoveToMouseCursor)
	{
		SetNewMoveDestination();
	}
}

void AWinters_HowlPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("SetDestination", IE_Pressed, this, &AWinters_HowlPlayerController::OnSetDestinationPressed);
}

void AWinters_HowlPlayerController::SetNewMoveDestination()
{
	FHitResult Hit;
	GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	if (Hit.bBlockingHit)
	{
		APawn* const MyPawn = GetPawn();
		if (MyPawn)
		{
			UNavigationSystem* const NavSys = GetWorld()->GetNavigationSystem();
			float const Distance = FVector::Dist(Hit.ImpactPoint, MyPawn->GetActorLocation());
			//make a pray class..?
			// We need to issue move command only if far enough in order for walk animation to play correctly
			if (NavSys && (Distance < 200.f))
			{
				ASheep* SheepHit = Cast<ASheep>(Hit.GetActor());
				if (SheepHit)
				{
					SheepHit->Destroy();
				}
			}

			if (NavSys && (Distance > 120.0f))
			{
				NavSys->SimpleMoveToLocation(this, Hit.ImpactPoint);
				bMoveToMouseCursor = false;
			}
		}
	}
}

void AWinters_HowlPlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released
	bMoveToMouseCursor = true;
}