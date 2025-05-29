// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap26_OOP_polymorphism.h"

// Sets default values
AChap26_OOP_polymorphism::AChap26_OOP_polymorphism()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap26_OOP_polymorphism::BeginPlay()
{
	Super::BeginPlay();

	FLion Lion1;
	Lion1.Speak();
	Lion1.Eat();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FTiger Tiger1;
	Tiger1.Speak();
	Tiger1.Eat();
	Tiger1.Swim();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FAnimal* Lion2 = new FLion();
	Lion2->Speak();
	Lion2->Eat();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FAnimal* Tiger2 = new FTiger();
	Tiger2->Speak();
	Tiger2->Eat();
	// Tiger2->Swim(); 

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FAnimal* Lion3 = new FLion();
	Lion3->Speak();
	Lion3->Eat();

	FAnimal* Tiger3 = new FTiger();
	Tiger3->Speak();
	Tiger3->Eat();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));


}

// Called every frame
void AChap26_OOP_polymorphism::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void FAnimal::Speak()
{
	UE_LOG(LogTemp, Warning, TEXT("FAnimal::Speak()"));
}

void FAnimal::Eat()
{
	UE_LOG(LogTemp, Warning, TEXT("FAnimal::Eat()"));
}

void FLion::Speak()
{
	UE_LOG(LogTemp, Warning, TEXT("FLion::Speak()"));
}

void FLion::Eat()
{
	UE_LOG(LogTemp, Warning, TEXT("FLion::Eat()"));
}

void FTiger::Speak()
{
	UE_LOG(LogTemp, Warning, TEXT("FTiger::Speak()"));
}

void FTiger::Eat()
{
	UE_LOG(LogTemp, Warning, TEXT("FTiger::Eat()"));
}

void FTiger::Swim()
{
	UE_LOG(LogTemp, Warning, TEXT("FTiger::Swim()"));
}
