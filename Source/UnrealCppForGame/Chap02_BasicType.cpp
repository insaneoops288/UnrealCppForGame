// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap02_BasicType.h"

// Sets default values
AChap02_BasicType::AChap02_BasicType()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap02_BasicType::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("bool size : %d"), sizeof(bool));
	UE_LOG(LogTemp, Warning, TEXT("TCHAR size : %d"), sizeof(TCHAR));
	UE_LOG(LogTemp, Warning, TEXT("uint8 size : %d"), sizeof(uint8));
	UE_LOG(LogTemp, Warning, TEXT("int8 size : %d"), sizeof(int8));
	UE_LOG(LogTemp, Warning, TEXT("uint16 size : %d"), sizeof(uint16));
	UE_LOG(LogTemp, Warning, TEXT("int16 size : %d"), sizeof(int16));
	UE_LOG(LogTemp, Warning, TEXT("uint32 size : %d"), sizeof(uint32));
	UE_LOG(LogTemp, Warning, TEXT("int32 size : %d"), sizeof(int32));
	UE_LOG(LogTemp, Warning, TEXT("uint64 size : %d"), sizeof(uint64));
	UE_LOG(LogTemp, Warning, TEXT("int64 size : %d"), sizeof(int64));
	UE_LOG(LogTemp, Warning, TEXT("long size : %d"), sizeof(long));
	UE_LOG(LogTemp, Warning, TEXT("float size : %d"), sizeof(float));
	UE_LOG(LogTemp, Warning, TEXT("double size : %d"), sizeof(double));
	UE_LOG(LogTemp, Warning, TEXT("FString size : %d"), sizeof(FString));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TCHAR CharValue2 = 'A';
	UE_LOG(LogTemp, Warning, TEXT("CharValue2 : %c"), CharValue2);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue2 = 1;
	UE_LOG(LogTemp, Warning, TEXT("IntValue2 : %d"), IntValue2);

	int32 IntValue3(2);
	UE_LOG(LogTemp, Warning, TEXT("IntValue3 : %d"), IntValue3);

	int32 IntValue4 = { 3 };
	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);

	int32 IntValue5{ 4 };
	UE_LOG(LogTemp, Warning, TEXT("IntValue5 : %d"), IntValue5);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	bool BoolValue1 = true;
	UE_LOG(LogTemp, Warning, TEXT("BoolValue1 %s"), BoolValue1 ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Warning, TEXT("BoolValue1 %d"), BoolValue1 ? 1 : 0);

	bool BoolValue2 = false;
	UE_LOG(LogTemp, Warning, TEXT("BoolValue2 %s"), BoolValue2 ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Warning, TEXT("BoolValue2 %d"), BoolValue2 ? 1 : 0);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	float FloatValue1 = 3.1415926535897932384626433832795028f;
	UE_LOG(LogTemp, Warning, TEXT("FloatValue1 : %f"), FloatValue1);

	double DoubleValue1 = 3.1415926535897932384626433832795028;
	UE_LOG(LogTemp, Warning, TEXT("DoubleValue1 : %lf"), DoubleValue1);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("FloatValue1 : %.20f"), FloatValue1);
	UE_LOG(LogTemp, Warning, TEXT("DoubleValue1 : %.20lf"), DoubleValue1);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

}

// Called every frame
void AChap02_BasicType::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

