// Fill out your copyright notice in the Description page of Project Settings.

#include "AiPatrol.h"


// Sets default values
AAiPatrol::AAiPatrol()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAiPatrol::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAiPatrol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAiPatrol::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

