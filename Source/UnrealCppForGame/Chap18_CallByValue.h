// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap18_CallByValue.generated.h"

UCLASS()
class UNREALCPPFORGAME_API AChap18_CallByValue : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap18_CallByValue();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SwapCallByValue(int32 Value1, int32 Value2);

	void SwapCallByAddress(int32* Value1, int32* Value2);

	void SwapCallByRererence(int32& Value1, int32& Value2);

	void CallByValue(int32 Value1);

	void CallByAddress(int32* Address1);

	void CallByReference(int32& Reference1);
};
