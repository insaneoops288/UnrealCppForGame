// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap25_Reference.h"

// Sets default values
AChap25_Reference::AChap25_Reference()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap25_Reference::BeginPlay()
{
	Super::BeginPlay();

	int32 IntValue1 = 1;
	int32& IntRef1 = IntValue1;
	UE_LOG(LogTemp, Warning, TEXT("IntValue1 값 : %d, IntValue1 주소 : %#x"), IntValue1, &IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("IntRef1 값 : %d, IntRef1 주소 : %#x"), IntRef1, &IntRef1);

	IntRef1 = 2;
	UE_LOG(LogTemp, Warning, TEXT("IntValue1 값 : %d, IntValue1 주소 : %#x"), IntValue1, &IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("IntRef1 값 : %d, IntRef1 주소 : %#x"), IntRef1, &IntRef1);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 IntValue2 = 1;
	int32& IntRef2 = IntValue2;

	// int32& IntRef3; 

	int32 IntValue4 = 1;
	int32 IntValue5 = 2;

	int32& IntRef5 = IntValue4;
	IntRef5 = IntValue5;

	UE_LOG(LogTemp, Warning, TEXT("IntValue4 값 : %d, IntValue4 주소 : %#x"), IntValue4, &IntValue4);
	UE_LOG(LogTemp, Warning, TEXT("IntRef5 값 : %d, IntRef5 주소 : %#x"), IntRef5, &IntRef5);
	UE_LOG(LogTemp, Warning, TEXT("IntValue5 값 : %d, IntValue5 주소 : %#x"), IntValue5, &IntValue5);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	const int32 IntValue6 = 10; 
	// int32& IntRef6 = IntValue6; 
	const int32& IntRef6 = IntValue6;
	const int32& IntRef7 = 100; 

	UE_LOG(LogTemp, Warning, TEXT("AddConst(1, 2) : %d"), AddConst(1, 2));

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 IntValue8 = 1;
	int32 IntValue9 = 2;

	UE_LOG(LogTemp, Warning, TEXT("AddNonConst(IntValue8, IntValue9) : %d"), AddNonConst(IntValue8, IntValue9));

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	// int32& IntRef10 = NULL; 
	const int32& IntRef10 = NULL;

	// const int32& IntRef11 = nullptr; 

	int32 IntValue11 = 1;
	int32 IntValue12 = 2;
	int32 IntValue13 = 1;
	int32 IntValue14 = 2;
	int32 IntValue15 = 1;
	int32 IntValue16 = 2;

	SwapByValue(IntValue11, IntValue12);
	UE_LOG(LogTemp, Warning, TEXT("IntValue11 : %d, IntValue12 : %d"), IntValue11, IntValue12);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	SwapByAddress(&IntValue13, &IntValue14);
	UE_LOG(LogTemp, Warning, TEXT("IntValue13 : %d, IntValue14 : %d"), IntValue13, IntValue14);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------->"));

	SwapByReference(IntValue15, IntValue16);
	UE_LOG(LogTemp, Warning, TEXT("IntValue15 : %d, IntValue16 : %d"), IntValue15, IntValue16);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 IntValue17 = 1;

	PrintNumCallByValue(IntValue17);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------->"));

	int32 IntValue18 = 1;

	PrintNumCallByReference(IntValue18);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 IntValue19 = 1;
	int32 IntValue20 = AddNumReturnValue(IntValue19); 

	UE_LOG(LogTemp, Warning, TEXT("이전 IntValue19 값 : %d, IntValue19 주소 : %#x"), IntValue19, &IntValue19);
	UE_LOG(LogTemp, Warning, TEXT("이전 IntValue20 값 : %d, IntValue20 주소 : %#x"), IntValue20, &IntValue20);

	IntValue19++;

	UE_LOG(LogTemp, Warning, TEXT("이후 IntValue19 값 : %d, IntValue19 주소 : %#x"), IntValue19, &IntValue19);
	UE_LOG(LogTemp, Warning, TEXT("이후 IntValue20 값 : %d, IntValue20 주소 : %#x"), IntValue20, &IntValue20);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 IntValue21 = 1;
	int32 IntValue22 = AddNumReturnReference(IntValue21);

	UE_LOG(LogTemp, Warning, TEXT("이전 IntValue21 값 : %d, IntValue21 주소 : %#x"), IntValue21, &IntValue21);
	UE_LOG(LogTemp, Warning, TEXT("이전 IntValue22 값 : %d, IntValue22 주소 : %#x"), IntValue22, &IntValue22);

	IntValue21++;

	UE_LOG(LogTemp, Warning, TEXT("이후 IntValue21 값 : %d, IntValue21 주소 : %#x"), IntValue21, &IntValue21);
	UE_LOG(LogTemp, Warning, TEXT("이후 IntValue22 값 : %d, IntValue22 주소 : %#x"), IntValue22, &IntValue22);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	IntValue21 = 1;

	int32& IntRef21 = AddNumReturnReference(IntValue21);

	UE_LOG(LogTemp, Warning, TEXT("이전 IntValue21 값 : %d, IntValue21 주소 : %#x"), IntValue21, &IntValue21);
	UE_LOG(LogTemp, Warning, TEXT("이전 IntRef21 값 : %d, IntRef21 주소 : %#x"), IntRef21, &IntRef21);

	IntRef21++;

	UE_LOG(LogTemp, Warning, TEXT("이후 IntValue21 값 : %d, IntValue21 주소 : %#x"), IntValue21, &IntValue21);
	UE_LOG(LogTemp, Warning, TEXT("이후 IntRef21 값 : %d, IntRef21 주소 : %#x"), IntRef21, &IntRef21);

	IntValue21++;

	UE_LOG(LogTemp, Warning, TEXT("이후 IntValue21 값 : %d, IntValue21 주소 : %#x"), IntValue21, &IntValue21);
	UE_LOG(LogTemp, Warning, TEXT("이후 IntRef21 값 : %d, IntRef21 주소 : %#x"), IntRef21, &IntRef21);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));


}

// Called every frame
void AChap25_Reference::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AChap25_Reference::AddConst(const int32& Num1, const int32& Num2)
{
	return Num1 + Num2;
}

int32 AChap25_Reference::AddNonConst(int32& Num1, int32& Num2)
{
	return Num1 + Num2;
}

void AChap25_Reference::SwapByValue(int32 IntValue1, int32 IntValue2)
{
	int32 Temp = IntValue1;
	IntValue1 = IntValue2;
	IntValue2 = Temp;
}

void AChap25_Reference::SwapByAddress(int32* IntValue1, int32* IntValue2)
{
	int32 Temp = *IntValue1;
	*IntValue1 = *IntValue2;
	*IntValue2 = Temp;
}

void AChap25_Reference::SwapByReference(int32& IntValue1, int32& IntValue2)
{
	int32 Temp = IntValue1;
	IntValue1 = IntValue2;
	IntValue2 = Temp;
}

void AChap25_Reference::PrintNumCallByValue(const int32 IntValue)
{
	UE_LOG(LogTemp, Warning, TEXT("IntValue : %d"), IntValue);
}

void AChap25_Reference::PrintNumCallByReference(const int32& IntValue)
{
	UE_LOG(LogTemp, Warning, TEXT("IntValue : %d"), IntValue);
}

int32 AChap25_Reference::AddNumReturnValue(int32& IntValue)
{
	IntValue++;
	return IntValue;
}

int32& AChap25_Reference::AddNumReturnReference(int32& IntValue)
{
	IntValue++;
	return IntValue;
}



