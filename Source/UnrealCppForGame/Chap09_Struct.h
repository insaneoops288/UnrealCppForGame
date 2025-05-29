// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap09_Struct.generated.h"

struct FStudentScore
{
	FString Name;
	int32 Math;
	int32 Korean;
	int32 English;
	int32 History;

	FStudentScore() {};

	FStudentScore(FString name, int32 math, int32 korean, int32 english, int32 history)
		: Name(name), Math(math), Korean(korean), English(english), History(history) {}
};

USTRUCT(BlueprintType)
struct FAnimal
{
	GENERATED_USTRUCT_BODY()

public:
	int32 FamilyCount;
	int32 ToothCount;
};

USTRUCT(BlueprintType)
struct FStudent
{
	GENERATED_USTRUCT_BODY()

public:
	int32 Number;
	FString Name;
};

USTRUCT(BlueprintType)
struct FSchool
{
	GENERATED_USTRUCT_BODY()

public:
	FString Location;
	FStudent Stu;
};

USTRUCT(BlueprintType)
struct FFruit
{
	GENERATED_USTRUCT_BODY()

public:
	FFruit() {}
	FFruit(FString name, int32 price) : Name(name), Price(price) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Name : %s, Price : %d"), *Name, Price);
	}

	FString Name;
	int32 Price;
};



UCLASS()
class UNREALCPPFORGAME_API AChap09_Struct : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap09_Struct();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetStudentInfo(FStudentScore Stu);

	void ShowAnimal(FAnimal* Animal);

	void ShowAnimal(FAnimal& Animal);

};
