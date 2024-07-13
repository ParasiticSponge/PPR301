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
		time += DeltaTime;
		if (!past)
		{
			start += 0.01f;
			if (start >= 0.6915f) start = meshPos[0];
			//keep track of last position
			landed = start;

			//FLinearColor position = FLinearColor(0, 0, meshPos[selectShape], 0.135468f);
			FLinearColor position = FLinearColor(0, 0, start, 0.135468f);

			dynamicMaterial->SetVectorParameterValue("Position", position);
			Mesh->SetMaterial(0, dynamicMaterial);

			FString print = MyCharacter.ToString();
			FString delta = FString::SanitizeFloat(time);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *delta);
		}
		if (time >= 3) past = true;
		if (past)
		{
			//distance between half a shape
			float num = ((meshPos[1] - meshPos[0]) / 2);
			//between the distance and the selected number on the left side
			bool bounds = landed >= meshPos[selectShape] && landed <= meshPos[selectShape] + num;

			//if bounds fall above array
			if (meshPos[selectShape] + num > 0.685382f)
			{
				bounds = landed >= meshPos[selectShape] && landed <= 0.685382f || landed >= meshPos[0] && landed <= meshPos[0] + (num - (0.685382f - meshPos[selectShape]));
			}

			//distance of 2 objects
			if (!bounds)
			{
				start += 0.01f;
				if (start >= 0.6915f) start = meshPos[0];

				//also move the landed shape as it cycles
				landed = start;

				FLinearColor position = FLinearColor(0, 0, start, 0.135468f);

				dynamicMaterial->SetVectorParameterValue("Position", position);
				Mesh->SetMaterial(0, dynamicMaterial);
				//UE_LOG(LogTemp, Warning, TEXT("%s"), *FString::SanitizeFloat(landed));
				//UE_LOG(LogTemp, Warning, TEXT("%s"), *FString::SanitizeFloat(start));
				time = 0;
				speed = DeltaTime;
				velocity = speed;
			}
			//once it's far enough
			else
			{
				float magnitude = 0;
				if (landed > meshPos[selectShape])
				{
					  magnitude = (0.6915f - landed) + (meshPos[selectShape] - meshPos[0]);
					  //UE_LOG(LogTemp, Warning, TEXT("OVERSHOT: %s"), *FString::SanitizeFloat(magnitude));
				}
				else magnitude = meshPos[selectShape] - landed;

				float getFrame = GetFrames(speed, magnitude);
				float incr = GetIncrementFactor(speed, magnitude, getFrame);
				float dist = GetDistance(speed, incr, getFrame);

				if (velocity <= 0) velocity = 0;
				velocity -= incr;

				if (start >= 0.6915f) start = meshPos[0];
				start += velocity;

				/*start += magnitude;
				if (start > landed + magnitude) start = landed + magnitude;*/

				//start no longer updates every frame to calculate lerping distance
				FLinearColor position = FLinearColor(0, 0, start, 0.135468f);

				dynamicMaterial->SetVectorParameterValue("Position", position);
				Mesh->SetMaterial(0, dynamicMaterial);

				/*if (start >= meshPos[selectShape] - 0.001f && start <= meshPos[selectShape] + 0.001f)
					start = meshPos[selectShape];*/
				//UE_LOG(LogTemp, Warning, TEXT("starting: %s"), *FString::SanitizeFloat(start));
				//UE_LOG(LogTemp, Warning, TEXT("expected: %s"), *FString::SanitizeFloat(meshPos[selectShape]));
				//UE_LOG(LogTemp, Warning, TEXT("magnitude: %s"), *FString::SanitizeFloat(magnitude));
			}
		}
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Player Location: %s"), *MyCharacter.ToString()));
}

float ARandomShape::GetFrames(float _speed, float distance)
{
	float frames = (distance / _speed) * ((_speed / distance) + 2);
	return floor(frames);
}
float ARandomShape::GetIncrementFactor(float _speed, float distance, float frames)
{
	float numerator = (distance - (_speed * floor(frames)));
	float denominator = Sigma(floor(frames), 0);
	float increment = FMath::Abs(numerator) / FMath::Abs(denominator);
	return increment;
}
float ARandomShape::Sigma(float _start, float _finish)
{
	float group = 0;
	//if start is lower than finish, make for loop add, else subtract
	for (int i = _start; _start < _finish ? i <= _finish : i >= _finish; _start < _finish ? i++ : i--)
	{
		group += i;
	}
	return group;
}

float ARandomShape::GetDistance(float _speed, float _increment, float frames)
{
	return -(Sigma(frames, 0) * _increment) + (_speed * frames);
}

//returns time (x)
float ARandomShape::easeOutQuart(float x)
{
	return 1 - FMath::Pow(1 - x, 4);
}
float ARandomShape::reverseEaseOutQuart(float x)
{
	//return 1 - FMath::Pow(x * (1.0f/9.0f), 4);
	return 1 - FMath::Pow(x * (1.0f / 5.0f), 4);
}
float ARandomShape::easeInQuart(float x)
{
	return x * x * x * x;
}

float ARandomShape::scaleEase(float _start, float _finish, float x)
{
	/*float magnitude = FMath::Abs(_finish - _start);
	float ryu = magnitude * x;
	return ryu += _start;*/
	float magnitude = 0;
	if (_finish < _start) magnitude = (0.6915f - _start) + (_finish - meshPos[0]);
	else magnitude = FMath::Abs(_finish - _start);
	float ryu = x * 0.01f;
	return ryu;
}

float ARandomShape::BoundBy(float _start, float _end, float _value)
{
	float magnitude = _end - _start;
	if (_value < _start) _value += (magnitude * ceil(FMath::Abs(((_value - _start) / magnitude))));
	if (_value > _end) _value -= (magnitude * floor((_value - _start) / magnitude));
	return _value;
}