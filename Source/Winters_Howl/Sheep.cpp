// Fill out your copyright notice in the Description page of Project Settings.

#include "Sheep.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ASheep::ASheep()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Mesh Component");
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void ASheep::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASheep::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

