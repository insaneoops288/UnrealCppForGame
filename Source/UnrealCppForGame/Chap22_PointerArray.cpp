// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap22_PointerArray.h"

// Sets default values
AChap22_PointerArray::AChap22_PointerArray()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap22_PointerArray::BeginPlay()
{
	Super::BeginPlay();

	for (int32 i = 2; i <= 9; i++)
	{
		for (int32 j = 1; j <= 9; j++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%d X %d = %d"), i, j, i * j);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 IntDoubleArr[3][4] =
	{
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132}
	};

	UE_LOG(LogTemp, Warning, TEXT("IntDoubleArr[0][0] : %d"), IntDoubleArr[0][0]);
	UE_LOG(LogTemp, Warning, TEXT("IntDoubleArr[1][2] : %d"), IntDoubleArr[1][2]);
	UE_LOG(LogTemp, Warning, TEXT("IntDoubleArr[2][0] : %d"), IntDoubleArr[2][0]);
	UE_LOG(LogTemp, Warning, TEXT("IntDoubleArr[2][3] : %d"), IntDoubleArr[2][3]);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 Row = sizeof(IntDoubleArr) / sizeof(IntDoubleArr[0]);
	UE_LOG(LogTemp, Warning, TEXT("Row : %d"), Row);

	int32 Column = sizeof(IntDoubleArr[0]) / sizeof(int32);
	UE_LOG(LogTemp, Warning, TEXT("Column : %d"), Column);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	for (int32 i = 0; i < Row; i++)
	{
		for (int32 j = 0; j < Column; j++)
		{
			UE_LOG(LogTemp, Warning, TEXT("IntDoubleArr[%d][%d] : %d"), i, j, IntDoubleArr[i][j]);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	for (int32 i = Row - 1; i >= 0; i--)
	{
		for (int32 j = Column - 1; j >= 0; j--)
		{
			UE_LOG(LogTemp, Warning, TEXT("IntDoubleArr[%d][%d] : %d"), i, j, IntDoubleArr[i][j]);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 IntValue1 = 100;
	int32 IntValue2 = 200;
	int32 IntValue3 = 300;

	int32 IntArr1[3] = { IntValue1, IntValue2, IntValue3 };

	int32 ArraySize1 = sizeof(IntArr1) / sizeof(IntArr1[0]);

	for (int32 i = 0; i < ArraySize1; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("&IntArr1[%d] address : %#x, IntArr1[%d] value : %d"),
			i, &IntArr1[i], i, IntArr1[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32* IntPtrArr[3] = { &IntValue1, &IntValue2, &IntValue3 };

	int32 ArraySize2 = sizeof(IntPtrArr) / sizeof(IntPtrArr[0]);

	for (int i = 0; i < ArraySize2; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntPtrArr[%d] address : %#x, IntPtrArr[%d] value : %d"),
			i, IntPtrArr[i], i, *IntPtrArr[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 IntArr2[5] = { 1, 2, 3, 4, 5 };
	int32 IntArr3[6] = { 10, 20, 30, 40, 50, 60 };
	int32 IntArr4[7] = { 100, 200, 300, 400, 500, 600, 700 };

	int32* IntPtrArr1[3] = { IntArr2, IntArr3, IntArr4 };

	int32 ArraySize3 = sizeof(IntPtrArr1) / sizeof(IntPtrArr1[0]);
	int32 ArraySize4 = sizeof(IntArr2) / sizeof(IntArr2[0]);
	int32 ArraySize5 = sizeof(IntArr3) / sizeof(IntArr3[0]);
	int32 ArraySize6 = sizeof(IntArr4) / sizeof(IntArr4[0]);

	int32 SubArraySize[3] = { ArraySize4, ArraySize5, ArraySize6 };

	for (int32 i = 0; i < ArraySize3; i++)
	{
		for (int32 j = 0; j < SubArraySize[i]; j++)
		{
			UE_LOG(LogTemp, Warning, TEXT("IntPtrArr1[%d][%d] : %d"), i, j, IntPtrArr1[i][j]);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FString Names[5] = { TEXT("Tom"), TEXT("John"), TEXT("Jane"), TEXT("Smith"), TEXT("James") };
	FString Nations[3] = { TEXT("Korea"), TEXT("Japan"), TEXT("China") };
	FString Animals[6] = { TEXT("Tiger"), TEXT("Lion"), TEXT("Dog"), TEXT("Cat"), TEXT("Ant"), TEXT("Pig") };

	FString* IntPtrArr3[3] = { Names, Nations, Animals };

	int32 ArraySize7 = sizeof(IntPtrArr3) / sizeof(IntPtrArr3[0]);
	int32 ArraySize8 = sizeof(Names) / sizeof(Names[0]);
	int32 ArraySize9 = sizeof(Nations) / sizeof(Nations[0]);
	int32 ArraySize10 = sizeof(Animals) / sizeof(Animals[0]);

	int32 StrArraySize[3] = { ArraySize8, ArraySize9, ArraySize10 };

	for (int32 i = 0; i < ArraySize7; i++)
	{
		for (int32 j = 0; j < StrArraySize[i]; j++)
		{
			UE_LOG(LogTemp, Warning, TEXT("IntPtrArr3[%d][%d] : %s"), i, j, *IntPtrArr3[i][j]);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));


}

// Called every frame
void AChap22_PointerArray::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

