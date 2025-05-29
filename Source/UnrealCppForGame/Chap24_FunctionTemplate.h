// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap24_FunctionTemplate.generated.h"

UCLASS()
class UNREALCPPFORGAME_API AChap24_FunctionTemplate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap24_FunctionTemplate();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int32 AddInt(int32 Value1, int32 Value2);

	float AddFloat(float Value1, float Value2);

	double AddDouble(double Value1, double Value2);

	int32 Add(int32 Value1, int32 Value2);

	float Add(float Value1, float Value2);

	double Add(double Value1, double Value2);

	template <typename T>
	T AddFunction(T T1, T T2)
	{
		return T1 + T2;
	}

	template <class N>
	N AddFunctionNew(N N1, N N2)
	{
		return N1 + N2;
	}

	template<typename T1, typename T2>
	void ShowInfo(T1 Value1, T2 Value2)
	{
		// UE_LOG(LogTemp, Warning, TEXT("T1 : %T1"));
	}

	template<>
	void ShowInfo<double, FString>(double Value1, FString Value2)
	{
		UE_LOG(LogTemp, Warning, TEXT("Value1 : %lf, Value2 : %s"), Value1, *Value2);
	}

	template<typename T>
	T Max(T Value1, T Value2)
	{
		return (Value1 > Value2 ? Value1 : Value2);
	}


};
