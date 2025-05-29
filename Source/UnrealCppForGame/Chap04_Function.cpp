// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap04_Function.h"

// Sets default values
AChap04_Function::AChap04_Function()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap04_Function::BeginPlay()
{
	Super::BeginPlay();
	
	int32 IntValue1 = 1024;
	int32 IntValue2 = 2048;
	Add(IntValue1, IntValue2);

	Add(1024, 4096);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue3 = 1024;
	int32 IntValue4 = 2048;
	int32 IntResult1 = Subtraction(IntValue3, IntValue4);
	UE_LOG(LogTemp, Warning, TEXT("Subtraction : %d"), IntResult1);

	int32 IntResult = Subtraction(4096, 2048);
	UE_LOG(LogTemp, Warning, TEXT("Subtraction : %d"), IntResult);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));


}

// Called every frame
void AChap04_Function::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChap04_Function::Add(int32 Value1, int32 Value2)
{
	int32 Result = Value1 + Value2;
	UE_LOG(LogTemp, Warning, TEXT("Addition : %d"), Result);
}

int32 AChap04_Function::Subtraction(int32 Value1, int32 Value2)
{
	int32 Result = Value1 - Value2;
	return Result;
}

