// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap17_Constructor.h"

// Sets default values
AChap17_Constructor::AChap17_Constructor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap17_Constructor::BeginPlay()
{
	Super::BeginPlay();

	FApple Apple1;
	FApple Apple2 = FApple();

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FBanana Banana1;
	FBanana Banana2(5, 10);
	FBanana Banana3(5, TEXT("노란색"));
	FBanana Banana4 = FBanana(5, 10);
	FBanana Banana5 = FBanana(5, TEXT("하얀색"));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FMelon Melon1;
	FMelon Melon2(5, 10);
	FMelon Melon3 = FMelon();
	FMelon Melon4 = FMelon(5, 10);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FWaterMelon WaterMelon1;
	FWaterMelon WaterMelon2(5, 20);
	FWaterMelon WaterMelon3 = FWaterMelon();
	FWaterMelon WaterMelon4 = FWaterMelon(5, 20);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FLemon* Lemon3 = new FLemon();

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	delete Lemon3;

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FTime1 Time1A = FTime1();
	FTime1 Time1B = FTime1(30);
	FTime1 Time1C = FTime1(5, 31);
	FTime1 Time1D = FTime1(1, 15, 59);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FTime2 Time2A = FTime2();
	FTime2 Time2B = FTime2(50);
	FTime2 Time2C = FTime2(12, 6);
	FTime2 Time2D = FTime2(3, 25, 13);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));
}

// Called every frame
void AChap17_Constructor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

