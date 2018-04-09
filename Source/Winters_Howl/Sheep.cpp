// Fill out your copyright notice in the Description page of Project Settings.

#include "Sheep.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ASheep::ASheep()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh Component");
	RootComponent = MeshComponent;

	//float TimeSeen = DeltaTime;
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

	//if (ISee Sheep)
	//{
		//TimeSeen += DeltaTime;
		//if (TimeSeen >= 2)
		//{
			//MoveToActor/Attack
		//}

		//else TimeSeen = 0;
}

