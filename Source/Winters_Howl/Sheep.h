// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Sheep.generated.h"

UCLASS()
class WINTERS_HOWL_API ASheep : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASheep();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* MeshComponent;

};
