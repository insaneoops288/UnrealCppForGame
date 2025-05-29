// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap04_Function.generated.h"

UCLASS()
class UNREALCPPFORGAME_API AChap04_Function : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap04_Function();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Add(int32 Value1, int32 Value2);

	int32 Subtraction(int32 Value1, int32 Value2);
};
