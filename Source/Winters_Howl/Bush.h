// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bush.generated.h"

UCLASS()
class WINTERS_HOWL_API ABush : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABush();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* MeshComponent;
	
	
};
