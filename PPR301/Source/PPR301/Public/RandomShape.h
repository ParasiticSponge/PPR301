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
	float easeOutQuart(float x);
	float reverseEaseOutQuart(float x);
	float easeInQuart(float x);
	float scaleEase(float _start, float _finish, float x);
	float BoundBy(float _start, float _end, float _value);
	float GetFrames(float _speed, float distance);
	float GetIncrementFactor(float _speed, float distance, float frames);
	float Sigma(float _start, float _finish);
	float GetDistance(float _speed, float _increment, float frames);

	int selectShape = 0;
	float start = -0.307872f;
	float time = 0;
	float landed = 0;
	bool past;
	float velocity;
	float speed;
	FVector MyCharacter = FVector::Zero();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterial* board;
	UMaterialInstanceDynamic* dynamicMaterial;

	UPROPERTY(EditAnywhere)
	AActor* boardObj;
	UStaticMeshComponent* Mesh;

	float meshPos[5] = { -0.307872f, -0.121206f, 0.06546f, 0.262793f, 0.475141f };
};
