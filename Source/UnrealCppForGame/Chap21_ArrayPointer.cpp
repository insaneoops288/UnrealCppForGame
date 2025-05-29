// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap21_ArrayPointer.h"

// Sets default values
AChap21_ArrayPointer::AChap21_ArrayPointer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap21_ArrayPointer::BeginPlay()
{
	Super::BeginPlay();

	int32 IntArr1[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int32* IntPtr1 = IntArr1;

	int32 ArrayCount = sizeof(IntArr1) / sizeof(IntArr1[0]);

	for (int32 i = 0; i < ArrayCount; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), *(IntPtr1 + i));
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));

	for (int32 i = 0; i < ArrayCount; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), IntPtr1[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));

	for (int32 i = 0; i < ArrayCount; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d"), i[IntPtr1]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));

	IntPtr1 = &IntArr1[0];
	UE_LOG(LogTemp, Warning, TEXT("&IntArr1[0] : %#x"), &IntArr1[0]);

	IntPtr1 = &IntPtr1[0];
	UE_LOG(LogTemp, Warning, TEXT("&IntPtr1[0] : %#x"), &IntPtr1[0]);

	*IntPtr1 = IntArr1[0];
	UE_LOG(LogTemp, Warning, TEXT("IntArr1[0] : %d"), IntArr1[0]);

	*IntPtr1 = IntPtr1[0];
	UE_LOG(LogTemp, Warning, TEXT("IntPtr1[0] : %d"), IntPtr1[0]);

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 : %#x"), IntPtr1);

	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 + 1 : %#x"), IntPtr1 + 1);

	for (int32 i = 0; i < ArrayCount; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("&IntArr1[%d] : %#x"), i, &IntArr1[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));

	double DoubleValue1[5] = { 3.14, 3.14, 3.14, 3.14, 3.14 };

	int32 CountDouble = sizeof(DoubleValue1) / sizeof(DoubleValue1[0]);

	for (int32 i = 0; i < CountDouble; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("&DoubleValue1[%d] : %#x"), i, &DoubleValue1[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));

	FString StringValue1[] = { TEXT("철수"), TEXT("영희"), TEXT("영철"), TEXT("민준"), TEXT("지훈") };

	int32 CountString = sizeof(StringValue1) / sizeof(StringValue1[0]);

	for (int32 i = 0; i < CountString; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("&StringValue[%d] : %#x"), i, &StringValue1[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));

	int32 CountString0 = sizeof(StringValue1);
	int32 CountString1 = sizeof(StringValue1[0]);

	UE_LOG(LogTemp, Warning, TEXT("%d / %d"), CountString0, CountString1);

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));

	int32 IntArr3[3] = { 1, 2, 3 };

	int32(*ArrPtr3)[3];
	ArrPtr3 = &IntArr3;

	int32 CountArray = sizeof(IntArr3) / sizeof(IntArr3[0]);

	for (int i = 0; i < CountArray; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("(*ArrPtr3)[%d] : %d"), i, (*ArrPtr3)[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));

	int32 IntArr4[5] = { 1,2,3,4,5 };

	int32(*ArrPtr4)[5];
	ArrPtr4 = &IntArr4;

	UE_LOG(LogTemp, Warning, TEXT("ArrPtr4[0] address : %#x"), *ArrPtr4);
	UE_LOG(LogTemp, Warning, TEXT("ArrPtr4[1] address : %#x"), *(ArrPtr4 + 1));
	UE_LOG(LogTemp, Warning, TEXT("ArrPtr4[2] address : %#x"), *(ArrPtr4 + 2));
	UE_LOG(LogTemp, Warning, TEXT("ArrPtr4[3] address : %#x"), *(ArrPtr4 + 3));
	UE_LOG(LogTemp, Warning, TEXT("ArrPtr4[4] address : %#x"), *(ArrPtr4 + 4));

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));

	int32 CountArray1 = sizeof(IntArr4) / sizeof(IntArr4[0]);

	for (int32 i = 0; i < CountArray1; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("ArrPtr4[%d] address : %#x"), i, ArrPtr4[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));

	for (int32 i = 0; i < CountArray1; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("(*ArrPtr4)[%d] value : %d"), i, (*ArrPtr4)[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<------------------------------->"));


}

// Called every frame
void AChap21_ArrayPointer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

