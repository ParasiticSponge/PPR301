// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CorrectCode.generated.h"

UCLASS()
class PPR301_API ACorrectCode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACorrectCode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Code")
	FString code = "";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Count")
	int count = 0;

	FString correct_code = "215166104";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MaxCount")
	int max_count = 9;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DoneCode")
	bool isDone = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Won")
	bool hasWon;
};
