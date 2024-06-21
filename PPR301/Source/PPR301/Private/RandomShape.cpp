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

	selectShape = rand() % 5;

	FLinearColor position = FLinearColor(0, 0, meshPos[selectShape], -0.381866f);
	board->SetVectorParameterValueEditorOnly("Position", position);

	FString print = FString::FromInt(selectShape);
	UE_LOG(LogTemp, Warning, TEXT("IS: %s"), *print);
}

// Called every frame
void ARandomShape::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MyCharacter = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	if (MyCharacter.X >= 4250)
	{
		start++;
		if (start == 1)
		{
			FLinearColor position = FLinearColor(0, 0, meshPos[selectShape], 0.135468f);
			board->SetVectorParameterValueEditorOnly("Position", position);
			FString print = MyCharacter.ToString();
			//UE_LOG(LogTemp, Warning, TEXT("In Place"), *print);
			//UE_LOG(LogTemp, Warning, TEXT("IS: %s"), *print);
		}
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Player Location: %s"), *MyCharacter.ToString()));
}

