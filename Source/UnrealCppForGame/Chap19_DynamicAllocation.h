// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap19_DynamicAllocation.generated.h"

class FAnimal
{
public:
    FAnimal()
    {
        UE_LOG(LogTemp, Warning, TEXT("정적 메모리 할당 생성자. !!"));
    }

    ~FAnimal()
    {
        UE_LOG(LogTemp, Warning, TEXT("정적 메모리 할당 소멸자. !!"));
    }
};

class FLion
{
public:
    FLion()
    {
        UE_LOG(LogTemp, Warning, TEXT("new 연산자를 이용한 동적 할당 생성자. !!"));
    }

    ~FLion()
    {
        UE_LOG(LogTemp, Warning, TEXT("new 연산자를 이용한 동적 할당 소멸자. !!"));
    }
};

class FTiger
{
public:
    FTiger()
    {
        UE_LOG(LogTemp, Warning, TEXT("스마트 포인터로 동적으로 객체 생성한 생성자. !!"));
    }

    ~FTiger()
    {
        UE_LOG(LogTemp, Warning, TEXT("스마트 포인터로 동적으로 객체 생성한 소멸자. !!"));
    }
};




UCLASS()
class UNREALCPPFORGAME_API AChap19_DynamicAllocation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap19_DynamicAllocation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
