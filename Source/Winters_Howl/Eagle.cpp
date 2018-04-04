// Fill out your copyright notice in the Description page of Project Settings.

#include "Eagle.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AEagle::AEagle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh Component");
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void AEagle::BeginPlay()
{
	Super::BeginPlay();
	MoveSpeed = 5;
}

// Called every frame
void AEagle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

