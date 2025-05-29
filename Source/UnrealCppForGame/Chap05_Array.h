// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap05_Array.generated.h"

struct FRectangle
{
	int32 Width;
	int32 Height;
};

class FFruit
{
public:
	FString Name;
	int32 Count;
};



UCLASS()
class UNREALCPPFORGAME_API AChap05_Array : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap05_Array();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
