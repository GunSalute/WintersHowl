// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Eagle.generated.h"

UCLASS()
class WINTERS_HOWL_API AEagle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEagle();
	//bool ISee
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* MeshComponent;
	
	float MoveSpeed;
	
};
