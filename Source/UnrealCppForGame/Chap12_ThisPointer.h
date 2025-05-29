// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap12_ThisPointer.generated.h"

class FStudent1
{
private:
    int32 Age;
public:
    FStudent1(int32 Value)
    {
        Age = Value;
    }

    void SetInfo()
    {
        UE_LOG(LogTemp, Warning, TEXT("나이는 %d살입니다. "), Age);
    }
};

class FStudent2
{
private:
    int32 Age;
public:
    FStudent2(int32 Age)
    {
        this->Age = Age;
    }

    void SetInfo()
    {
        UE_LOG(LogTemp, Warning, TEXT("나이는 %d살입니다. "), this->Age);
    }
};

class FStudent3
{
private:
    int32 Age;

public:
    FStudent3(int32 Age)
    {
        this->Age = Age;
    }

    void SetInfo()
    {
        UE_LOG(LogTemp, Warning, TEXT("자신의 주소 : %#x"), this);
    }
};

class FLion
{
public:
    int32 Num = 10;

    void PrintThis()
    {
        UE_LOG(LogTemp, Warning, TEXT("자신의 주소 : %#x"), this);
    }

    FLion& ReturnThis()
    {
        return *this;
    }
};

class FTiger
{
public:
    FTiger()
    {
        UE_LOG(LogTemp, Warning, TEXT("타이거 클래스의 생성자입니다.  !!"));
    }

    FTiger& ReturnThis1()
    {
        return *this; 
    }

    FTiger ReturnThis2()
    {
        return *this; 
    }

    FTiger& ReturnThis3()
    {
        
    }

    FTiger* ReturnThis4()
    {
        return this; 
    }

    FTiger ReturnThis5()
    {
        
    }
};



UCLASS()
class UNREALCPPFORGAME_API AChap12_ThisPointer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap12_ThisPointer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
