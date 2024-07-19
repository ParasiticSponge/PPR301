// Fill out your copyright notice in the Description page of Project Settings.


#include "CorrectCode.h"

// Sets default values
ACorrectCode::ACorrectCode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACorrectCode::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACorrectCode::Tick(float DeltaTime)
{
	UE_LOG(LogTemp, Warning, TEXT("code: %s"), *code);
	Super::Tick(DeltaTime);
	if (isDone)
	{
		if (code == correct_code)
		{
			hasWon = true;
			UE_LOG(LogTemp, Warning, TEXT("you won!"));
		}
		else
		{
			count = 0;
			code.Reset();
			isDone = false;
		}
	}
}

