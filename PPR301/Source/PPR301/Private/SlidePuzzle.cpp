// Fill out your copyright notice in the Description page of Project Settings.


#include "SlidePuzzle.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/Material.h"
#include <time.h>
#include <vector>
using std::vector;

// Sets default values
ASlidePuzzle::ASlidePuzzle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASlidePuzzle::BeginPlay()
{
	Super::BeginPlay();
	panels[0] = p1;
	panels[1] = p2;
	panels[2] = p3;
	panels[3] = p4;
	panels[4] = p5;
	panels[5] = p6;
	panels[6] = p7;
	panels[7] = p8;
	panels[8] = p9;

	GetPanels.Init(panels[0], rowLength * columnLength);
	for (int i = 0; i < 9; i++)
	{
		GetPanels[i] = panels[i];
	}

	//create a sequence starting at 0
	for (float i = 0; i <= (rowLength - 1) * columnLength; i+= rowLength)
	{
		for (float j = 0; j < columnLength; j++)
		{
			int index = (j + i);
			meshPos[index][0] = meshWin[index][0] = j/rowLength;
			meshPos[index][1] = meshWin[index][1] = (i/rowLength)/rowLength;
			UE_LOG(LogTemp, Warning, TEXT("init 1: %s"), *FString::SanitizeFloat(meshPos[index][0]));
			UE_LOG(LogTemp, Warning, TEXT("init 2: %s"), *FString::SanitizeFloat(meshPos[index][1]));
		}
	}

	for (int j = 0; j < 2; j++)
	{
		blank[j] = meshPos[(rowLength * columnLength) - 1][j];
		UE_LOG(LogTemp, Warning, TEXT("blank: %s"), *FString::SanitizeFloat(blank[0]));
		UE_LOG(LogTemp, Warning, TEXT("blank: %s"), *FString::SanitizeFloat(blank[1]));
	}
	ShuffleArray(meshPos);

	for (int i = 0; i < rowLength * columnLength; i++)
	{
		dynamicMaterial[i] = UMaterialInstanceDynamic::Create(texture, this);
		FLinearColor position = FLinearColor(0, 0, meshPos[i][0], meshPos[i][1]);
		dynamicMaterial[i]->SetVectorParameterValue("Position", position);

		TArray<UStaticMeshComponent*> Components;
		panels[i]->GetComponents<UStaticMeshComponent>(Components);
		for (int32 k = 0; k < Components.Num(); k++)
		{
			mesh[i] = Components[k];
		}

		mesh[i]->SetMaterial(0, dynamicMaterial[i]);
	}

	for (int i = 0; i < 9; i++)
	{
		FString ptr = GetPanels[i]->GetName();
		UE_LOG(LogTemp, Warning, TEXT("VALUE: %s"), *ptr);
	}
}

// Called every frame
void ASlidePuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ArrayEquals(meshPos, meshWin)) hasWon = true;
}

void ASlidePuzzle::PieceSwap(float list[][2], int from, int to)
{
	for (int i = 0; i < 2; i++)
	{
		float _itemFrom = list[from][i];
		list[from][i] = list[to][i];
		list[to][i] = _itemFrom;
	}
}
void ASlidePuzzle::PieceSwap(int list[], int from, int to)
{
	float _itemFrom = list[from];
	list[from] = list[to];
	list[to] = _itemFrom;
}
void ASlidePuzzle::CreateSequence(int arr[], int start)
{
	int size = sizeof(arr);
	for (int i = 0; i < size; i++)
	{
		arr[i] = start;
		start++;
	}
}
void ASlidePuzzle::RandomSequence(int arr[], int start)
{
	int size = sizeof(arr);
	vector<int> numbers(size, 0);

	for (int i = 0; i < size; i++)
	{
		arr[i] = start;
		numbers[i] = start;
		start++;
	}
	for (int i = 0; i < size; i++)
	{
		//get percentage out of 100 and ratio it by length
		int rand = floor((FMath::RandRange(0, 100)) / 100 * numbers.size());
		arr[i] = numbers[rand];
		numbers.erase(numbers.begin() + rand);
	}
}
void ASlidePuzzle::ShuffleArray(float arr[][2])
{
	int size = rowLength * columnLength;
	vector<vector<float>> numbers(size, vector<float>(2));

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				UE_LOG(LogTemp, Warning, TEXT("ARR: %s"), *FString::SanitizeFloat(arr[i][j]));
				numbers[i][j] = arr[i][j];
			}
		}
		UE_LOG(LogTemp, Warning, TEXT("2: %s"), *FString::FromInt(size));
		for (int i = 0; i < size; i++)
		{
			//get percentage out of 100 and ratio it by length
			float rand = floor((FMath::RandRange(0.0f, 100.0f)) / 100 * (numbers.size() - 1));
			//UE_LOG(LogTemp, Warning, TEXT("RANDOM: %s"), *FString::FromInt(rand));
			arr[i][0] = numbers[rand][0];
			arr[i][1] = numbers[rand][1];
			//UE_LOG(LogTemp, Warning, TEXT("1st: %s"), *FString::SanitizeFloat(arr[i][0]));
			//UE_LOG(LogTemp, Warning, TEXT("2nd: %s"), *FString::SanitizeFloat(arr[i][1]));
			numbers.erase(numbers.begin() + rand);
		}
}
bool ASlidePuzzle::ArrayEquals(float arr1[][2], float arr2[][2])
{
	int rows_1 = sizeof arr1 / sizeof arr1[0];
	int cols_1 = sizeof arr1[0] / sizeof(int);
	int rows_2 = sizeof arr2 / sizeof arr2[0];
	int cols_2 = sizeof arr2[0] / sizeof(int);

	if (rows_1 != rows_2 || cols_1 != cols_2) return false;
	for (int i = 0; i < rows_1; i++)
	{
		for (int j = 0; j < cols_1; j++)
		{
			if (arr1[i][j] != arr2[i][j]) return false;
		}
	}
	return true;
}
void ASlidePuzzle::MovePanel(int x)
{
	UE_LOG(LogTemp, Warning, TEXT("Attempting to move..."));
	if (!NextToBlank(x)) return;
	UE_LOG(LogTemp, Warning, TEXT("MOVED"));

	//gets the index of the blank value
	int index = FindFirstIndex(meshPos, blank);
	//swap position information
	PieceSwap(meshPos, x, index);

	FLinearColor position = FLinearColor(0, 0, meshPos[x][0], meshPos[x][1]);
	dynamicMaterial[x]->SetVectorParameterValue("Position", position);
	position = FLinearColor(0, 0, meshPos[index][0], meshPos[index][1]);
	dynamicMaterial[index]->SetVectorParameterValue("Position", position);
}
int ASlidePuzzle::FindFirstIndex(float arr[][2], float x[])
{
	for (int i = 0; i < rowLength * columnLength; i++)
	{
		if (arr[i][0] == x[0] && arr[i][1] == x[1]) return i;
	}
	return -1;
}
bool ASlidePuzzle::NextToBlank(int x)
{
	int index = FindFirstIndex(meshPos, blank);
	int index2 = FindFirstIndex(meshPos, meshPos[x]);
	UE_LOG(LogTemp, Warning, TEXT("blank: %s"), *FString::FromInt(index));
	UE_LOG(LogTemp, Warning, TEXT("clicked: %s"), *FString::FromInt(index2));
	bool isNear = false;

	//if (x == 0)
	//	isNear = x == index + 1 ||
	//	x == index + rowLength;
	//else if (x == rowLength - 1)
	//	isNear = x == index - 1 ||
	//	x == index + rowLength;
	//else if (x == (rowLength * columnLength) - rowLength)
	//	isNear = x == index + 1 ||
	//	x == index - rowLength;
	//else if (x == (rowLength * columnLength) - 1)
	//	isNear = x == index - 1 ||
	//	x == index - rowLength;
	//else if (x < rowLength)
	//	isNear = x == index + 1 ||
	//	x == index - 1 ||
	//	x == index + rowLength;
	//else if (x > (rowLength * columnLength) - rowLength)
	//	isNear = x == index + 1 ||
	//	x == index - 1 ||
	//	x == index - rowLength;
	if (x % rowLength == 0)
		isNear = x == index - 1 ||
		x == index + rowLength ||
		x == index - rowLength;
	else if ((x + 1) % rowLength == 0)
		isNear = x == index + 1 ||
		x == index + rowLength ||
		x == index - rowLength;
	else
		isNear = x == index + 1 ||
		x == index - 1 ||
		x == index + rowLength ||
		x == index - rowLength;

	return isNear;
}

// void ASlidePuzzle::RemoveAt(int arr[], int x)
// {
//     // Search x in array
//     int i;
//     for (i = 0; i < n; i++) {
//         if (arr[i] == x) {
//             break;
//         }
//     }

//     // If x found in array
//     if (i < sizeof(arr)) {
//         // reduce size of array and move all
//         // elements one space ahead
//         for (int j = i; j < sizeof(arr) - 1; j++) {
//             arr[j] = arr[j + 1];
//         }
//     }
// }

// function PieceRotate(objectFrom, pieceFrom, rotationFrom, amount)
// {
// 	(number/360 - floor(number/360)) * 360;
// }
