// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap19_DynamicAllocation.h"

// Sets default values
AChap19_DynamicAllocation::AChap19_DynamicAllocation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap19_DynamicAllocation::BeginPlay()
{
	Super::BeginPlay();

	int32 IntValue1 = 10;

	// int32 IntArr1[intValue1]{};
	int32 IntArr1[10]{}; 

	int32 IntValue2 = 10;

	int32* IntPtr2 = new int32[IntValue2];

	int32* IntPtr3 = new int32;
	int32* IntPtr4 = new int32(3);
	int32* IntPtr5 = new int32{ 5 };
	int32* IntPtr6 = new int32();

	int32* IntArr3 = new int32[5];

	delete IntPtr3;
	delete IntPtr4;
	delete IntPtr5;
	delete IntPtr6;

	delete[] IntArr3;

	int32* IntPtr7;
	int32 ArrayLength = 10;

	IntPtr7 = new int32[ArrayLength];

	for (int32 i = 0; i < ArrayLength; i++)
	{
		IntPtr7[i] = i;
	}

	for (int32 i = 0; i < ArrayLength; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntPtr7[%d] : %d"), i, IntPtr7[i]);
	}

	delete[] IntPtr7;

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------------->"));

	FAnimal Animal1;

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------------->"));

	FLion* Lion1 = new FLion();

	delete Lion1;

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------------->"));

	TUniquePtr<FTiger> UniquePtr0 = MakeUnique<FTiger>();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------------->"));


}

// Called every frame
void AChap19_DynamicAllocation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

