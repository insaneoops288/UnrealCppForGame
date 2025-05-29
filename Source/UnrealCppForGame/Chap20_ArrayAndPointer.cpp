// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap20_ArrayAndPointer.h"

// Sets default values
AChap20_ArrayAndPointer::AChap20_ArrayAndPointer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap20_ArrayAndPointer::BeginPlay()
{
	Super::BeginPlay();

	int32 IntValue1 = 10;

	int32* IntPtr1 = &IntValue1;

	// IntPtr1 = &IntValue1;

	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 value : %d"), *IntPtr1);

	*IntPtr1 = 20;

	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 value : %d"), *IntPtr1);
	UE_LOG(LogTemp, Warning, TEXT("<------------------------>"));

	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 address : %#x"), IntPtr1);

	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 + 1 address : %#x"), IntPtr1 + 1);
	UE_LOG(LogTemp, Warning, TEXT("<------------------------>"));

	int32 IntArr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	UE_LOG(LogTemp, Warning, TEXT("IntArr1[0] value : %d"), *IntArr1);
	UE_LOG(LogTemp, Warning, TEXT("IntArr1[0] value : %d"), IntArr1[0]);

	UE_LOG(LogTemp, Warning, TEXT("IntArr1[1] value : %d"), *(IntArr1 + 1));
	UE_LOG(LogTemp, Warning, TEXT("IntArr1[1] value : %d"), IntArr1[1]);

	UE_LOG(LogTemp, Warning, TEXT("IntArr1[0] address : %#x"), IntArr1);
	UE_LOG(LogTemp, Warning, TEXT("IntArr1[0] address : %#x"), &IntArr1[0]);

	UE_LOG(LogTemp, Warning, TEXT("IntArr1[1] address : %#x"), IntArr1 + 1);
	UE_LOG(LogTemp, Warning, TEXT("IntArr1[1] address : %#x"), &IntArr1[1]);
	UE_LOG(LogTemp, Warning, TEXT("<------------------------>"));

	UE_LOG(LogTemp, Warning, TEXT("IntArr1[1] address : %#x"), &IntArr1[0] + 1);
	UE_LOG(LogTemp, Warning, TEXT("<------------------------>"));

	for (int32 i : IntArr1)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr1[%d] address : %#x"), i, &IntArr1[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------>"));

	TCHAR CharValue2 = 'L';
	int32 IntValue2 = 1024;
	double DoubleValue2 = 3.14;

	UE_LOG(LogTemp, Warning, TEXT("CharValue2 size : %d"), sizeof(CharValue2));
	UE_LOG(LogTemp, Warning, TEXT("CharValue2 ptr size : %d"), sizeof(&CharValue2));

	UE_LOG(LogTemp, Warning, TEXT("IntValue2 size : %d"), sizeof(IntValue2));
	UE_LOG(LogTemp, Warning, TEXT("IntValue2 ptr size : %d"), sizeof(&IntValue2));

	UE_LOG(LogTemp, Warning, TEXT("DoubleValue2 size : %d"), sizeof(DoubleValue2));
	UE_LOG(LogTemp, Warning, TEXT("DoubleValue2 ptr size : %d"), sizeof(&DoubleValue2));

	UE_LOG(LogTemp, Warning, TEXT("<------------------------>"));

	int32 IntArr2[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int32 ArraySize = sizeof(IntArr2) / sizeof(IntArr2[0]);
	UE_LOG(LogTemp, Warning, TEXT("ArraySize : %d"), sizeof(IntArr2) / sizeof(IntArr2[0]));

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("address type[%d] : %#x"), i, &IntArr2[i]);
		UE_LOG(LogTemp, Warning, TEXT("address type[%d] : %#x"), i, IntArr2 + i);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------>"));

	for (int i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr2[%d] : %d"), i, IntArr2[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------>"));

	for (int i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("*(IntArr2 + %d) : %d"), i, *(IntArr2 + i));
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------>"));

	for (int32* Ptr = IntArr2; Ptr < IntArr2 + ArraySize; Ptr++)
	{
		UE_LOG(LogTemp, Warning, TEXT("*Ptr : %d, Ptr address ; %#x"), *Ptr, Ptr);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------>"));

}

// Called every frame
void AChap20_ArrayAndPointer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

