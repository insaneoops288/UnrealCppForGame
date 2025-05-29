// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap27_OOP_abstract.generated.h"

//class FAnimal
//{
//public:
//	void Print()
//	{
//		UE_LOG(LogTemp, Warning, TEXT("Animal::Print()"));
//	}
//};

//class FAnimal
//{
//public:
//	virtual void Print()
//	{
//		UE_LOG(LogTemp, Warning, TEXT("Animal::Print()"));
//	}
//};

class FAnimal
{
public:
	virtual void Print() = NULL;
	// virtual void Print() = 0;
	// virtual void Print() = nullptr; // (X)
};

class FShape
{
public:
	virtual float GetArea() = 0;
	// virtual float GetArea() = NULL;
	// virtual float GetArea() = nullptr; // (X)
	virtual void Resize(float value) = 0;
	// virtual void Resize(float value) = NULL;
	// virtual void Resize(float value) = nullptr; // (X)
};

class FRectangle : public FShape
{
public:
	FRectangle(float Width, float Height) : Width(Width), Height(Height) {}

	float GetArea()
	{
		UE_LOG(LogTemp, Warning, TEXT("FRectangle::GetArea()"));
		return Width * Height;
	}

	void Resize(float FloatValue)
	{
		UE_LOG(LogTemp, Warning, TEXT("FRectangle::Resize()"));

		Width *= FloatValue;
		Height *= FloatValue;
	}
private:
	float Width;
	float Height;
};

class FCircle : public FShape
{
private:
	float Radius;
public:
	FCircle(float Radius) : Radius(Radius) {}

	float GetArea()
	{
		UE_LOG(LogTemp, Warning, TEXT("FCircle::GetArea()"));
		return 3.14f * Radius * Radius;
	}

	void Resize(float FloatValue)
	{
		UE_LOG(LogTemp, Warning, TEXT("FCircle::Resize()"));
		Radius *= FloatValue;
	}
};


class FLion : public FAnimal
{
public:
	void Print()
	{
		UE_LOG(LogTemp, Warning, TEXT("FLion::Print()"));
	}
};



UCLASS()
class UNREALCPPFORGAME_API AChap27_OOP_abstract : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap27_OOP_abstract();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
