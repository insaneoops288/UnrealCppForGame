// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap05_Array.h"

// Sets default values
AChap05_Array::AChap05_Array()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap05_Array::BeginPlay()
{
	Super::BeginPlay();

	int32 Score0 = 0;
	int32 Score1 = 1;
	int32 Score2 = 2;
	// ~
	int32 Score498 = 498;
	int32 Score499 = 499;
	int32 Score500 = 500;

	int32 Score[30]{};

	FString Names[5]{};

	Names[0] = TEXT("철수");
	Names[1] = TEXT("영희");
	Names[2] = TEXT("영철");
	Names[3] = TEXT("민준");
	Names[4] = TEXT("지훈");

	UE_LOG(LogTemp, Warning, TEXT("for 반복문"));

	int32 ArraySize = sizeof(Names) / sizeof(Names[0]);
	UE_LOG(LogTemp, Warning, TEXT("배열의 사이즈 : %d"), ArraySize);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d번째 이름 : %s"), i, *Names[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	FRectangle Rectangles[5]{};

	Rectangles[0].Width = 20;
	Rectangles[0].Height = 10;
	Rectangles[1].Width = 22;
	Rectangles[1].Height = 30;
	Rectangles[2].Width = 55;
	Rectangles[2].Height = 60;

	UE_LOG(LogTemp, Warning, TEXT("for 반복문"));

	ArraySize = sizeof(Rectangles) / sizeof(Rectangles[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Rectangles[%d] Width : %d, Height : %d"),
			i, Rectangles[i].Width, Rectangles[i].Height);
	}
	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	Rectangles[10].Width = 25;
	Rectangles[10].Height = 100;

	UE_LOG(LogTemp, Warning, TEXT("for 반복문"));

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Rectangles[%d] Width : %d, Height : %d"),
			i, Rectangles[i].Width, Rectangles[i].Height);
	}
	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	const FFruit Fruit2 = { TEXT("사과"), 10 };

	UE_LOG(LogTemp, Warning, TEXT("과일의 이름 : %s, 개수 : %d"), *Fruit2.Name, Fruit2.Count);

	 //Fruit2.Name = TEXT("바나나"); 
	 //Fruit2.Count = 30; 

	FFruit Fruit3 = { TEXT("바나나"), 30 };
	Fruit3.Name = TEXT("사과");
	Fruit3.Count = 50;

	UE_LOG(LogTemp, Warning, TEXT("과일의 이름 : %s, 개수 : %d"), *Fruit3.Name, Fruit3.Count);

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	const int32 IntValue1 = 1;

	int32 IntArr1[5]{};

	UE_LOG(LogTemp, Warning, TEXT("for 반복문"));

	ArraySize = sizeof(IntArr1) / sizeof(IntArr1[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr1[%d] : %d"), i, IntArr1[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

#define	ARRAY_LENGTH 5
	int32 IntArr2[ARRAY_LENGTH]{};

	UE_LOG(LogTemp, Warning, TEXT("for 반복문"));

	ArraySize = sizeof(IntArr2) / sizeof(IntArr2[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr2[%d] : %d"), i, IntArr2[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	enum EArrayLength { MaxArrayLength = 15 };
	int32 IntArr3[EArrayLength::MaxArrayLength]{};

	UE_LOG(LogTemp, Warning, TEXT("for 반복문"));

	ArraySize = sizeof(IntArr3) / sizeof(IntArr3[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr3[%d] : %d"), i, IntArr3[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	const int32 ArrayLength = 15;
	int32 IntArr4[ArrayLength]{};

	UE_LOG(LogTemp, Warning, TEXT("for 반복문"));

	ArraySize = sizeof(IntArr4) / sizeof(IntArr4[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr4[%d] : %d"), i, IntArr4[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	FString Friends1[5] = { TEXT("철수"), TEXT("영희"), TEXT("영철"), TEXT("민준"), TEXT("지훈") };

	UE_LOG(LogTemp, Warning, TEXT("for 반복문"));

	ArraySize = sizeof(Friends1) / sizeof(Friends1[0]);

	for (int i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d번째 친구 : %s"), i, *Friends1[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	FString Friends2[] = { TEXT("철수"), TEXT("영희"), TEXT("영철"), TEXT("민준"), TEXT("지훈") };

	UE_LOG(LogTemp, Warning, TEXT("for 반복문"));

	ArraySize = sizeof(Friends2) / sizeof(Friends2[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d번째 친구 : %s"), i, *Friends2[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	// FString Friends3[3] = {TEXT("철수"), TEXT("영희"), TEXT("영철"), TEXT("민준"), TEXT("지훈")}; // (X)

	int32 IntArr5[3]{};

	ArraySize = sizeof(IntArr5) / sizeof(IntArr5[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr5[%d] : %d"), i, IntArr5[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	int32 IntArr6[4] = { 10, 20, 30, 40 };

	ArraySize = sizeof(IntArr6) / sizeof(IntArr6[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr6[%d] : %d"), i, IntArr6[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	int32 IntArr7[10] = { 10, 20 };

	ArraySize = sizeof(IntArr7) / sizeof(IntArr7[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr7[%d] : %d"), i, IntArr7[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	int32 IntArr8[3]{ 10, 20, 30 };

	ArraySize = sizeof(IntArr8) / sizeof(IntArr8[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr8[%d] : %d"), i, IntArr8[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	int32 IntArr10[20]{};

	ArraySize = sizeof(IntArr10) / sizeof(IntArr10[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr10[%d] : %d"), i, IntArr10[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	int32 IntArr11[30] = {};

	ArraySize = sizeof(IntArr11) / sizeof(IntArr11[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr11[%d] : %d"), i, IntArr11[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	int32 IntArr12[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	ArraySize = sizeof(IntArr12) / sizeof(IntArr12[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr12[%d] : %d"), i, IntArr12[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------------------------->"));

	int32 IntArr13[]{ 1, 2, 3, 4, 5, 6, 7,  8, 9 };

	ArraySize = sizeof(IntArr13) / sizeof(IntArr13[0]);

	for (int32 i = 0; i < ArraySize; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr13[%d] : %d"), i, IntArr13[i]);
	}

}

// Called every frame
void AChap05_Array::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

