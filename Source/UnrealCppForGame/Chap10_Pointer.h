// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap10_Pointer.generated.h"

UCLASS()
class UNREALCPPFORGAME_API AChap10_Pointer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap10_Pointer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// int32* IntPtr6, IntPtr7; 
	int32* intPtr6;
	int32 IntPtr7;

	// int32* IntPtr61, * IntPtr71; 
	int32* IntPtr61;
	int32* IntPtr71;

	int32* IntPtr8; 
	int32* IntPtr9 = nullptr; 
	int32* IntPtr10 = NULL;

	int32 Add(const int32& Value1, const int32& Value2);

	int32 Minus(int32& Value1, int32& Value2);

};
