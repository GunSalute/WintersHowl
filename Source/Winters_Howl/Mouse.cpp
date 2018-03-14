// Fill out your copyright notice in the Description page of Project Settings.

#include "Mouse.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMouse::AMouse()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Mesh Component");
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void AMouse::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMouse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

