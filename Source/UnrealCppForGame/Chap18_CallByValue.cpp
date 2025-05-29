// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap18_CallByValue.h"

// Sets default values
AChap18_CallByValue::AChap18_CallByValue()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap18_CallByValue::BeginPlay()
{
	Super::BeginPlay();

	int32 IntValue1 = 1;
	int32 IntValue2 = 2;

	UE_LOG(LogTemp, Warning, TEXT("값에 의한 호출"));

	UE_LOG(LogTemp, Warning, TEXT("이전 CallByValue IntValue1 : %d"), IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("이전 CallByValue IntValue2 : %d"), IntValue2);

	SwapCallByValue(IntValue1, IntValue2);

	UE_LOG(LogTemp, Warning, TEXT("이후 CallByValue IntValue1 : %d"), IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("이후 CallByValueIntValue2 : %d"), IntValue2);
	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

	UE_LOG(LogTemp, Warning, TEXT("주소에 의한 호출"));

	UE_LOG(LogTemp, Warning, TEXT("이전 CallByAddress IntValue1 : %d"), IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("이전 CallByAddress IntValue2 : %d"), IntValue2);
	
	SwapCallByAddress(&IntValue1, &IntValue2);

	UE_LOG(LogTemp, Warning, TEXT("이후 CallByAddress IntValue1 : %d"), IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("이후 CallByAddress IntValue2 : %d"), IntValue2);
	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

	IntValue1 = 1;
	IntValue2 = 2;

	UE_LOG(LogTemp, Warning, TEXT("이전 CallByRererence IntValue1 : %d"), IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("이전 CallByRererence IntValue2 : %d"), IntValue2);

	SwapCallByRererence(IntValue1, IntValue2);

	UE_LOG(LogTemp, Warning, TEXT("이후 CallByRererence IntValue1 : %d"), IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("이후 CallByRererence IntValue2 : %d"), IntValue2);
	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

	UE_LOG(LogTemp, Warning, TEXT("값에 의한 호출"));

	int32 IntValue3 = 10;
	UE_LOG(LogTemp, Warning, TEXT("CallByValue IntValue3 : %d, IntValue3 address : %#x"), IntValue3, &IntValue3);

	CallByValue(IntValue3);

	UE_LOG(LogTemp, Warning, TEXT("CallByValue IntValue3 : %d, IntValue3 address : %#x"), IntValue3, &IntValue3);
	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

	UE_LOG(LogTemp, Warning, TEXT("주소에 의한 호출"));

	int32 IntValue4 = 10;
	UE_LOG(LogTemp, Warning, TEXT("CallByAddress IntValue4 : %d, IntValue4 address : %#x"), IntValue4, &IntValue4);

	CallByAddress(&IntValue4);
	UE_LOG(LogTemp, Warning, TEXT("CallByAddress IntValue4 : %d, IntValue4 address : %#x"), IntValue4, &IntValue4);
	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

	UE_LOG(LogTemp, Warning, TEXT("참조에 의한 호출"));

	int32 IntValue5 = 10;
	UE_LOG(LogTemp, Warning, TEXT("CallByReference IntValue5 : %d, IntValue5 address : %#x"), IntValue5, &IntValue5);

	CallByReference(IntValue5);

	UE_LOG(LogTemp, Warning, TEXT("CallByReference IntValue5 : %d, IntValue5 address : %#x"), IntValue5, &IntValue5);
	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

}

// Called every frame
void AChap18_CallByValue::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChap18_CallByValue::SwapCallByValue(int32 Value1, int32 Value2)
{
	int32 Temp = Value1;
	Value1 = Value2;
	Value2 = Temp;
}

void AChap18_CallByValue::SwapCallByAddress(int32* Value1, int32* Value2)
{
	int32 Temp = *Value1;
	*Value1 = *Value2;
	*Value2 = Temp;
}

void AChap18_CallByValue::SwapCallByRererence(int32& Value1, int32& Value2)
{
	int32 Temp = Value1;
	Value1 = Value2;
	Value2 = Temp;
}

void AChap18_CallByValue::CallByValue(int32 Value1)
{
	Value1 = 20;
	UE_LOG(LogTemp, Warning, TEXT("CallByValue Value1 : %d, Value1 address : %#x"), Value1, &Value1);
}

void AChap18_CallByValue::CallByAddress(int32* Address1)
{
	*Address1 = 20;
	UE_LOG(LogTemp, Warning, TEXT("CallByAddress Address1 : %d, Address1 address : %#x"), *Address1, Address1);
}

void AChap18_CallByValue::CallByReference(int32& Reference1)
{
	Reference1 = 20;
	UE_LOG(LogTemp, Warning, TEXT("CallByReference Reference1 : %d, Reference1 address : %#x"), Reference1, &Reference1);
}

