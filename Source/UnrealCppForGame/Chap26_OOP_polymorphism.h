// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap26_OOP_polymorphism.generated.h"

//class FAnimal
//{
//public:
//	void Speak();
//	void Eat();
//};

class FAnimal
{
public:
    virtual void Speak();
    virtual void Eat();
};

class FLion : public FAnimal
{
public:
	void Speak();
	void Eat();
};

class FTiger : public FAnimal
{
public:
	void Speak();
	void Eat();
	void Swim();
};


UCLASS()
class UNREALCPPFORGAME_API AChap26_OOP_polymorphism : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap26_OOP_polymorphism();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
