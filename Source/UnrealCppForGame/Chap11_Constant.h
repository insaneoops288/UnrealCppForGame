// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap11_Constant.generated.h"

class FLion
{
public:
	FLion() : Num(1)
	{
		// const int32 Num  = 1;
	}
private:
	const int32 Num;
};

class FTiger
{
public:
	//FTiger()
	//{
	//	Num = 1;  // 컴파일 에러
	//	// const int32 Num;
	//	// Num = 1;
	//}
private:
	const int32 Num;
};

enum EWidthHeight
{
	Width = 3,
	Height = 5,
	// PI = 3.14 // (X)
};

class FAnimal
{
public:
	int32 GetEyeSight() const;
private:
	int32 EyeSight = 100;
};


UCLASS()
class UNREALCPPFORGAME_API AChap11_Constant : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap11_Constant();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ConstParameter(const int IntValue);

};
