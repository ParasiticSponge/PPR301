// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomShape.generated.h"

UCLASS()
class PPR301_API ARandomShape : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARandomShape();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int selectShape = 0;
	int start = 0;
	FVector MyCharacter = FVector::Zero();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstanceDynamic* board;

	float meshPos[5] = { 0.0, 0.185f, 0.375f, 0.575f, 0.785f};
};
