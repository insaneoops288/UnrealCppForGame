// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap01_Variable.generated.h"

UCLASS()
class UNREALCPPFORGAME_API AChap01_Variable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap01_Variable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variable", meta = (AllowPrivateAccess = true))
	int32 ThisIsMyFirstVariable;

	int32 A;

	// int32 1Score; // (X)

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Variable", meta = (AllowPrivateAccess = true))
	int32 _ThisIsMySecondVariable;

	// int32 operator; // (X)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variable", meta = (AllowPrivateAccess = true))
	int32 IntValue1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variable", meta = (AllowPrivateAccess = true))
	float FloatValue1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variable", meta = (AllowPrivateAccess = true))
	FString StringValue1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Variable", meta = (AllowPrivateAccess = true))
	int32 IntValue2;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Variable", meta = (AllowPrivateAccess = true))
	float FloatValue2;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Variable", meta = (AllowPrivateAccess = "true"))
	FString StringValue2;

	int32 IntValue3, IntValue4;
	int32 IntValue5;
	int32 IntValue6;





};
