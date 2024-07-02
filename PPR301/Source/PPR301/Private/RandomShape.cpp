// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomShape.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/Material.h"

// Sets default values
ARandomShape::ARandomShape()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	selectShape = rand() % 5;
}

// Called when the game starts or when spawned
void ARandomShape::BeginPlay()
{
	Super::BeginPlay();
	dynamicMaterial = UMaterialInstanceDynamic::Create(board, this);
	FLinearColor position = FLinearColor(0, 0, meshPos[selectShape], -0.381866f);
	dynamicMaterial->SetVectorParameterValue("Position", position);

	TArray<UStaticMeshComponent*> Components;
	boardObj->GetComponents<UStaticMeshComponent>(Components);
	for (int32 i = 0; i < Components.Num(); i++)
	{
		Mesh = Components[i];
	}

	Mesh->SetMaterial(0, dynamicMaterial);


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
		time+= 0.01f;
		start+= 0.01f;
		if (time <= 3)
		{
			if (start >= 0.685382f) start = meshPos[0];

			//FLinearColor position = FLinearColor(0, 0, meshPos[selectShape], 0.135468f);
			FLinearColor position = FLinearColor(0, 0, start, 0.135468f);

			dynamicMaterial->SetVectorParameterValue("Position", position);
			Mesh->SetMaterial(0, dynamicMaterial);

			FString print = MyCharacter.ToString();
			//UE_LOG(LogTemp, Warning, TEXT("In Place"), *print);
			//UE_LOG(LogTemp, Warning, TEXT("IS: %s"), *print);
			FString delta = FString::SanitizeFloat(time);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *delta);
		}
		if (time > 3) 
		{
			FLinearColor position = FLinearColor(0, 0, start, 0.135468f);

			dynamicMaterial->SetVectorParameterValue("Position", position);
			Mesh->SetMaterial(0, dynamicMaterial);

			if (start >= meshPos[selectShape] - 0.01f && start <= meshPos[selectShape] + 0.01f)
				start = meshPos[selectShape];
		}
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Player Location: %s"), *MyCharacter.ToString()));
}

