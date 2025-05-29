// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap01_Variable.h"

// Sets default values
AChap01_Variable::AChap01_Variable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap01_Variable::BeginPlay()
{
	Super::BeginPlay();

	IntValue1 = 1024;
	FloatValue1 = 3.14f;
	StringValue1 = TEXT("언리얼");

	UE_LOG(LogTemp, Log, TEXT("IntValue1 : %d"), IntValue1);
	UE_LOG(LogTemp, Log, TEXT("FloatValue1 : %f"), FloatValue1);

	FString FStringValue = TEXT("We study Unreal. !!");
	const TCHAR* TCharValue = *FStringValue;

	UE_LOG(LogTemp, Log, TEXT("FStringValue : %s"), *FStringValue);

	for (int32 i = 0; i < FStringValue.Len(); i++)
	{
		UE_LOG(LogTemp, Log, TEXT("TCharValue[%d] : %c"), i, TCharValue[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Log, TEXT("FStringValue : %s"), *StringValue1);

	UE_LOG(LogTemp, Log, TEXT("IntValue1 : %d"), IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("FloatValue1 : %f"), FloatValue1);

	UE_LOG(LogTemp, Error, TEXT("StringValue1 : %s"), *StringValue1);

	IntValue1 = 2048;
	FloatValue1 = 2048.0f;
	StringValue1 = TEXT("언리얼!");

	UE_LOG(LogTemp, Log, TEXT("IntValue1 : %d"), IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("FloatValue1 : %f"), FloatValue1);
	UE_LOG(LogTemp, Error, TEXT("StringValue1 : %s"), *StringValue1);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("IntValue1 : %d"), IntValue1));
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("FloatValue1 : %f"), FloatValue1));
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("StringValue1 : %s"), *StringValue1));
	}


	
}

// Called every frame
void AChap01_Variable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

