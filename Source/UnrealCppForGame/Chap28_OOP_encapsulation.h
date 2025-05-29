// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap28_OOP_encapsulation.generated.h"

class FDate
{
    int32 Year;

public:
    int32 Month;
    int32 Day;
};

class FCalendar
{
private:
    int32 Year;
    int32 Month;
    int32 Day;
public:
    void SetDate(int32 year, int32 month, int32 day)
    {
        Year = year;
        Month = month;
        Day = day;

        UE_LOG(LogTemp, Warning, TEXT("Year : %d, Month : %d, Day : %d"), Year, Month, Day);
    }
    void SetYear(int32 year)
    {
        Year = year;
        UE_LOG(LogTemp, Warning, TEXT("Year : %d"), Year);
    }
protected:
};

class FParentClass
{
private:
    int32 IntValueA;
    int32 IntValueB;
public:
    void SetIntValueA(int32 Value)
    {
        if (Value > 50)
        {
            Value = 50;
        }

        IntValueA = Value;
    }

    void SetIntValueB(int32 Value)
    {
        if (Value > 100)
        {
            Value = 100;
        }

        IntValueB = Value;
    }

    int32 GetIntValueA()
    {
        return IntValueA;
    }
    
    int32 GetIntValueB()
    {
        return IntValueB;
    }
};

class FChildClass : FParentClass
{
public:
    void SetValue(int32 Value1, int32 Value2)
    {
        FParentClass::SetIntValueA(Value1);
        FParentClass::SetIntValueB(Value2);
    }
    void GetValue()
    {
        UE_LOG(LogTemp, Warning, TEXT("IntValueA : %d"), FParentClass::GetIntValueA());
        UE_LOG(LogTemp, Warning, TEXT("IntValueB : %d"), FParentClass::GetIntValueB());
    }
};




UCLASS()
class UNREALCPPFORGAME_API AChap28_OOP_encapsulation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap28_OOP_encapsulation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
