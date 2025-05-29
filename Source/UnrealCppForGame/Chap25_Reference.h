// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap25_Reference.generated.h"

UCLASS()
class UNREALCPPFORGAME_API AChap25_Reference : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap25_Reference();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;




public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int32 AddConst(const int32& Num1, const int32& Num2);

	int32 AddNonConst(int32& Num1, int32& Num2);

	void SwapByValue(int32 IntValue1, int32 IntValue2);

	void SwapByAddress(int32* IntValue1, int32* IntValue2);

	void SwapByReference(int32& IntValue1, int32& IntValue2);

	void PrintNumCallByValue(const int32 IntValue);

	void PrintNumCallByReference(const int32& IntValue);

	int32 AddNumReturnValue(int32& IntValue);

	int32& AddNumReturnReference(int32& IntValue);

};
