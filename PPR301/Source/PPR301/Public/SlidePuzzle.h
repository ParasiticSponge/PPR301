// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SlidePuzzle.generated.h"

UCLASS()
class PPR301_API ASlidePuzzle : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASlidePuzzle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void PieceSwap(float list[][2], int from, int to);
	void PieceSwap(int list[], int from, int to);
	void CreateSequence(int arr[], int start);
	void RandomSequence(int arr[], int start);
	void ShuffleArray(float arr[][2]);
	bool ArrayEquals(float arr1[][2], float arr2[][2]);
	UFUNCTION(BlueprintCallable)
	void MovePanel(int x);
	int FindFirstIndex(float arr[][2], float x[]);
	bool NextToBlank(int x);

	int puzzleOrder[9];
	int puzzleWin[9];
	int rowLength = 3;
	int columnLength = 3;
	bool hasWon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* texture;

	UPROPERTY(EditAnywhere)
	class AActor* p1;
	UPROPERTY(EditAnywhere)
	class AActor* p2;
	UPROPERTY(EditAnywhere)
	class AActor* p3;
	UPROPERTY(EditAnywhere)
	class AActor* p4;
	UPROPERTY(EditAnywhere)
	class AActor* p5;
	UPROPERTY(EditAnywhere)
	class AActor* p6;
	UPROPERTY(EditAnywhere)
	class AActor* p7;
	UPROPERTY(EditAnywhere)
	class AActor* p8;
	UPROPERTY(EditAnywhere)
	class AActor* p9;

	UMaterialInstanceDynamic* dynamicMaterial[9];
	UStaticMeshComponent* mesh[9];

	class AActor* panels[9];
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PuzzleObject")
	TArray<AActor*> GetPanels;

	//position of numbers texture
	float meshWin[9][2];
	float meshPos[9][2];
	float blank[2];
};
