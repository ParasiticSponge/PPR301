// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "CorrectShape.generated.h"

/**
 *
 */
UCLASS()
class PPR301_API ACorrectShape : public ATriggerBox
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	ACorrectShape();
	bool win = false;
	bool wrong = false;

	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UPROPERTY(EditAnywhere)
	class AActor* cube;
	UPROPERTY(EditAnywhere)
	class AActor* circle;
	UPROPERTY(EditAnywhere)
	class AActor* triangle;
	UPROPERTY(EditAnywhere)
	class AActor* hour;
	UPROPERTY(EditAnywhere)
	class AActor* star;

	UPROPERTY(EditAnywhere)
	class ARandomShape* rando;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AGameModeBase> gameMode;

	class AActor* selected;
};
