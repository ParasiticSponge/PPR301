// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomShape.h"

// Sets default values
ARandomShape::ARandomShape()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARandomShape::BeginPlay()
{
	Super::BeginPlay();
	randomShape = rand() % 5;
	FString print = FString::FromInt(randomShape);
	UE_LOG(LogTemp, Warning, TEXT("IS: %s"), *print);
}

// Called every frame
void ARandomShape::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

