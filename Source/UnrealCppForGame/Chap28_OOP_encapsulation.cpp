// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap28_OOP_encapsulation.h"

// Sets default values
AChap28_OOP_encapsulation::AChap28_OOP_encapsulation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap28_OOP_encapsulation::BeginPlay()
{
	Super::BeginPlay();
	
	FDate Date;
	Date.Month = 8;
	Date.Day = 28;
	// Today.m_Year = 2023;  

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FCalendar Calendar;
	Calendar.SetDate(2023, 8, 4);
	Calendar.SetYear(2023);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FChildClass Child1;

	Child1.SetValue(100, 200);
	Child1.GetValue();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));


}

// Called every frame
void AChap28_OOP_encapsulation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

