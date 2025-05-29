// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap07_IterationStatements.h"

// Sets default values
AChap07_IterationStatements::AChap07_IterationStatements()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap07_IterationStatements::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("< 0 ~ 9 for 반복문 >"));
	for (int32 i = 0; i < 10; i++) 
	{
		UE_LOG(LogTemp, Warning, TEXT("i : %d"), i);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("< 0 ~ 10 for 반복문 >"));
	for (int32 i = 0; i <= 10; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("i : %d"), i);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("< 0 ~ 10 for 반복문 >"));
	for (int32 i = 0; i <= 10; ++i) 
	{
		UE_LOG(LogTemp, Warning, TEXT("i : %d"), i);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("< 10 ~ 1 for 반복문 >"));
	for (int32 i = 10; i > 0; i--)
	{
		UE_LOG(LogTemp, Warning, TEXT("i : %d"), i);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("< 1 ~ 9 for 반복문 홀수>"));
	for (int32 i = 1; i < 10; i = i + 2)
	{
		UE_LOG(LogTemp, Warning, TEXT("i : %d"), i);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	for (int32 i = 2; i <= 9; i++)
	{
		for (int32 j = 1; j <= 9; j++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%d X %d = %d"), i, j, i * j);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TArray<int32> IntArray1 = { 10, 20, 30, 5, 10, 15, 20, 25, 30 };

	UE_LOG(LogTemp, Warning, TEXT("< for 반복문 > "));
	for (int32 i = 0; i < IntArray1.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArray1[%d] : %d"), i, IntArray1[i])
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("< foreach 반복문 > "));

	for (int32 Num : IntArray1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Num : %d"), Num);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("< for 반복문 > "));
	TArray<FString> Names = { TEXT("영희"), TEXT("철수"), TEXT("은희"), TEXT("은채"), TEXT("민준") };
	for (int32 i = 0; i < Names.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d번째 이름 : %s"), i, *Names[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("< foreach 반복문 > "));
	for (FString Name : Names)
	{
		UE_LOG(LogTemp, Warning, TEXT("이름 : %s"), *Name);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("< foreach 반복문 > "));
	for (FString& Name : Names)
	{
		UE_LOG(LogTemp, Warning, TEXT("이름 : %s"), *Name);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("< foreach 반복문 > "));
	for (auto& Name : Names)
	{
		UE_LOG(LogTemp, Warning, TEXT("이름 : %s"), *Name);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("< foreach 반복문 > "));
	for (auto Name : Names)
	{
		UE_LOG(LogTemp, Warning, TEXT("이름 : %s"), *Name);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue3 = 10;

	UE_LOG(LogTemp, Warning, TEXT("< while 반복문 > "));

	while (IntValue3 > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntValue3 : %d"), IntValue3);

		IntValue3--; 
	}
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue5 = 1;
	int32 OddSum = 0;

	while (IntValue5 <= 100)
	{
		if (IntValue5 % 2 == 1)
		{
			OddSum += IntValue5;
		}

		++IntValue5;
	}

	UE_LOG(LogTemp, Warning, TEXT("홀수의 합 : %d"), OddSum);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue6 = -20;

	do
	{
		UE_LOG(LogTemp, Warning, TEXT("IntValue6 : %d"), IntValue6);

		IntValue6--;
	} while (IntValue6 > 0);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	for (int32 i = 0; i < 1000000; i++)
	{
		if (i == 100)
		{
			break;
		}

		UE_LOG(LogTemp, Warning, TEXT("break : %d"), i);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	for (int32 i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}

		UE_LOG(LogTemp, Warning, TEXT("홀수 : %d"), i);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	for (int32 i = 0; i < 100; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}

		UE_LOG(LogTemp, Warning, TEXT("짝수 : %d"), i);
	}
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

}

// Called every frame
void AChap07_IterationStatements::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

