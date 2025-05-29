// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap27_OOP_abstract.h"

// Sets default values
AChap27_OOP_abstract::AChap27_OOP_abstract()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap27_OOP_abstract::BeginPlay()
{
	Super::BeginPlay();
	
	FAnimal* Lion1 = new FLion();
	Lion1->Print();

	delete Lion1;

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FAnimal* Lion2 = new FLion();
	Lion2->Print();

	delete Lion2;

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	//FAnimal* Animal1 = new FAnimal();
	//delete Animal1;

	FAnimal* Animal2 = new FLion();
	Animal2->Print();

	delete Animal2;

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FShape* Shapes[]{ new FCircle(10), new FRectangle(20, 30) };

	for (FShape* Shape : Shapes)
	{
		Shape->Resize(2);
	}

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	for (FShape* Shape : Shapes)
	{
		UE_LOG(LogTemp, Warning, TEXT("Shape->GetArea() : %f"), Shape->GetArea());
	}

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	for (FShape* Shape : Shapes)
	{
		delete Shape;
	}

}

// Called every frame
void AChap27_OOP_abstract::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

