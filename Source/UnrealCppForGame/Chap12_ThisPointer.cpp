// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap12_ThisPointer.h"

// Sets default values
AChap12_ThisPointer::AChap12_ThisPointer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap12_ThisPointer::BeginPlay()
{
	Super::BeginPlay();

	FStudent1 Stu1(22);
	UE_LOG(LogTemp, Warning, TEXT("Stu1 : "));
	Stu1.SetInfo();

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("sizeof(Stu1) : %d"), sizeof(Stu1));
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FStudent2 Stu2(22);
	UE_LOG(LogTemp, Warning, TEXT("Stu2 : "));
	Stu2.SetInfo();

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FStudent3 Stu3(22);
	UE_LOG(LogTemp, Warning, TEXT("Stu3 : "));
	Stu3.SetInfo();

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FStudent3 Stu4(2);
	UE_LOG(LogTemp, Warning, TEXT("Stu4 주소 : %#x"), &Stu4);
	Stu4.SetInfo();

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue1 = 30;
	int32* IntPtr1 = &IntValue1;
	UE_LOG(LogTemp, Warning, TEXT("*IntPtr1 : %d"), *IntPtr1);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32& IntRef1 = *IntPtr1;
	int32* (&IntRef2) = IntPtr1;

	UE_LOG(LogTemp, Warning, TEXT("IntRef1 값 : %d, IntRef1 주소 : %#x"), IntRef1, &IntRef1);
	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 값 : %d, IntPtr1 주소 : %#x"), *IntPtr1, IntPtr1);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FLion Lion1;
	Lion1.PrintThis();

	FLion& LionRef = Lion1.ReturnThis();
	LionRef.PrintThis(); 

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("Lion1 주소 : %#x"), &Lion1);
	UE_LOG(LogTemp, Warning, TEXT("LionRef 주소 : %#x"), &LionRef);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FTiger Tiger1;
	FTiger Tiger2 = Tiger1.ReturnThis2();

	UE_LOG(LogTemp, Warning, TEXT("Tiger1 주소 : %#x"), &Tiger1.ReturnThis1());
	// UE_LOG(LogTemp, Warning, TEXT("Tiger1 주소 : %#x"), &Tiger1.ReturnThis2());
	UE_LOG(LogTemp, Warning, TEXT("Tiger2 주소 : %#x"), &Tiger2);
	UE_LOG(LogTemp, Warning, TEXT("Tiger1 주소 : %#x"), Tiger1.ReturnThis4());

}

// Called every frame
void AChap12_ThisPointer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

