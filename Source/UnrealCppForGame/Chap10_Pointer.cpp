// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap10_Pointer.h"

// Sets default values
AChap10_Pointer::AChap10_Pointer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap10_Pointer::BeginPlay()
{
	Super::BeginPlay();
	
	// *intPtr8 = 10; 
	// *IntPtr9 = 20;
	// *IntPtr10 = 30;

	int32* IntPtr1 = nullptr;

	int32 IntValue1 = 10;
	IntPtr1 = &IntValue1;

	UE_LOG(LogTemp, Warning, TEXT("IntValue1 주소 : %#x"), &IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 주소 : %#x"), IntPtr1);
	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 주소 : %#x"), &IntPtr1);
	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 값 : %d"), *IntPtr1);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntArr1[] = { 10, 20, 30, 40, 50 };

	UE_LOG(LogTemp, Warning, TEXT("IntArr1[0] : %d, IntArr1[0] address : %#x"), *IntArr1, IntArr1);
	UE_LOG(LogTemp, Warning, TEXT("IntArr1[0] : %d, IntArr1[0] address : %#x"), IntArr1[0], &IntArr1[0]);
	UE_LOG(LogTemp, Warning, TEXT("IntArr1[1] : %d, IntArr1[1] address : %#x"), *(IntArr1 + 1), IntArr1 + 1);
	UE_LOG(LogTemp, Warning, TEXT("IntArr1[1] : %d, IntArr1[1] address : %#x"), IntArr1[1], &IntArr1[1]);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue2 = 10;
	int32* IntPtr2 = &IntValue2;

	UE_LOG(LogTemp, Warning, TEXT("&IntValue2 : %#x"), &IntValue2);
	UE_LOG(LogTemp, Warning, TEXT("*IntPtr2 : %d"), *IntPtr2);
	UE_LOG(LogTemp, Warning, TEXT("*&IntValue2 : %d"), *&IntValue2);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue3 = 10;
	int32* IntPtr3 = &IntValue3;

	TCHAR CharValue3 = 'L';
	TCHAR* CharPtr3 = &CharValue3;

	float FloatValue3 = 1.414f;
	float* FloatPtr3 = &FloatValue3;

	double DoubleValue3 = 3.1415;
	double* DoublePtr3 = &DoubleValue3;

	FString StringValue3 = TEXT("친구");
	FString* StringPtr3 = &StringValue3;

	bool BoolValue3 = true;
	bool* BoolPtr3 = &BoolValue3;

	UE_LOG(LogTemp, Warning, TEXT("sizeof(IntValue3) : %d bytes"), sizeof(IntValue3));
	UE_LOG(LogTemp, Warning, TEXT("sizeof(IntPtr3) : %d bytes"), sizeof(IntPtr3));

	UE_LOG(LogTemp, Warning, TEXT("sizeof(CharValue3) : %d bytes"), sizeof(CharValue3));
	UE_LOG(LogTemp, Warning, TEXT("sizeof(CharPtr3) : %d bytes"), sizeof(CharPtr3));

	UE_LOG(LogTemp, Warning, TEXT("sizeof(FloatValue3) : %d bytes"), sizeof(FloatValue3));
	UE_LOG(LogTemp, Warning, TEXT("sizeof(FloatPtr3) : %d bytes"), sizeof(FloatPtr3));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("sizeof(DoubleValue3) : %d bytes"), sizeof(DoubleValue3));
	UE_LOG(LogTemp, Warning, TEXT("sizeof(DoublePtr3) : %d bytes"), sizeof(DoublePtr3));

	UE_LOG(LogTemp, Warning, TEXT("sizeof(StringValue3) : %d bytes"), sizeof(StringValue3));
	UE_LOG(LogTemp, Warning, TEXT("sizeof(StringPtr3) : %d bytes"), sizeof(StringPtr3));

	UE_LOG(LogTemp, Warning, TEXT("sizeof(BoolValue3) : %d bytes"), sizeof(BoolValue3));
	UE_LOG(LogTemp, Warning, TEXT("sizeof(BoolPtr3) : %d bytes"), sizeof(BoolPtr3));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue4 = 10;
	int32* IntPtr4 = &IntValue4; 
	int32** IntDoublePtr4 = &IntPtr4; 

	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);
	UE_LOG(LogTemp, Warning, TEXT("&IntValue4 : %#x"), &IntValue4);

	UE_LOG(LogTemp, Warning, TEXT("IntPtr4 : %#x"), IntPtr4); 
	UE_LOG(LogTemp, Warning, TEXT("*IntPtr4 : %d"), *IntPtr4);
	UE_LOG(LogTemp, Warning, TEXT("&IntPtr4 : %#x"), &IntPtr4); 

	UE_LOG(LogTemp, Warning, TEXT("IntDoublePtr4 : %#x"), IntDoublePtr4); 
	UE_LOG(LogTemp, Warning, TEXT("&IntDoublePtr4 : %#x"), &IntDoublePtr4); 
	UE_LOG(LogTemp, Warning, TEXT("*IntDoublePtr4 : %#x"), *IntDoublePtr4); 
	UE_LOG(LogTemp, Warning, TEXT("**IntDoublePtr4 : %d"), **IntDoublePtr4);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntArr5[3] = { 10, 20, 30 };

	int32* IntPtr5 = IntArr5;

	UE_LOG(LogTemp, Warning, TEXT("IntArr5[0] : %d, IntArr5[1] : %d, IntArr5[2] : %d"), IntArr5[0], IntArr5[1], IntArr5[2]);
	UE_LOG(LogTemp, Warning, TEXT("IntPtr5[0] : %d, IntPtr5[1] : %d, IntPtr5[2] : %d"), IntPtr5[0], IntPtr5[1], IntPtr5[2]);
	UE_LOG(LogTemp, Warning, TEXT("*(IntArr5) : %d, *(IntArr5 + 1) : %d, *(IntArr5 + 2) : %d"), *(IntArr5), *(IntArr5 + 1), *(IntArr5 + 2));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue = 10;
	int32* IntPtr = &IntValue;

	UE_LOG(LogTemp, Warning, TEXT("IntValue : %d, IntValue address : %#x"), IntValue, &IntValue);
	UE_LOG(LogTemp, Warning, TEXT("IntValue : %d, IntValue address : %X"), IntValue, &IntValue);
	UE_LOG(LogTemp, Warning, TEXT("IntValue : %d, IntValue address : %p"), IntValue, &IntValue);
	UE_LOG(LogTemp, Warning, TEXT("IntValue : %d, IntValue address : %#010x"), IntValue, &IntValue);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	// int32 TestInt;
	// int32* TestPtr;
	int32* TestPtr1 = nullptr; 
	int32* TestPtr2 = NULL;  

	int32 IntValue13 = 5;
	int32* IntPtr13 = &IntValue13;
	UE_LOG(LogTemp, Warning, TEXT("IntPtr13 값 : %d, IntPtr13 주소 : %#x"), *IntPtr13, IntPtr13);

	*IntPtr13 = 15;
	UE_LOG(LogTemp, Warning, TEXT("IntPtr13 값 : %d, IntPtr13 주소 : %#x"), *IntPtr13, IntPtr13);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	// int32* IntPtr11 = 5;

	int32 IntValue14 = 1;
	int32& IntRef14 = IntValue14;

	UE_LOG(LogTemp, Warning, TEXT("이전 IntValue14 값 : %d"), IntValue14);
	UE_LOG(LogTemp, Warning, TEXT("이전 IntRef14 값 : %d"), IntRef14);
	UE_LOG(LogTemp, Warning, TEXT("이전 IntValue14 주소 : %#x"), &IntValue14);
	UE_LOG(LogTemp, Warning, TEXT("이전 IntRef14 주소 : %#x"), &IntRef14);

	IntRef14 = 2;

	UE_LOG(LogTemp, Warning, TEXT("이후 IntValue14 값 : %d"), IntValue14);
	UE_LOG(LogTemp, Warning, TEXT("이후 IntRef14 값 : %d"), IntRef14);
	UE_LOG(LogTemp, Warning, TEXT("이후 IntValue14 주소 : %#x"), &IntValue14);
	UE_LOG(LogTemp, Warning, TEXT("이후 IntRef14 주소 : %#x"), &IntRef14);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue15 = 1;
	int32& IntRef15 = IntValue15;

	// int32& IntRef16; // (X)

	int32 IntValue16 = 1;
	int32 IntValue17 = 2;

	int32& IntRef16 = IntValue16;

	IntRef16 = IntValue17;

	UE_LOG(LogTemp, Warning, TEXT("IntValue16 값 : %d, IntValue16 주소 : %#x"), IntValue16, &IntValue16);
	UE_LOG(LogTemp, Warning, TEXT("IntRef16 값 : %d, IntRef16 주소 : %#x"), IntRef16, &IntRef16);
	UE_LOG(LogTemp, Warning, TEXT("IntValue17 값 : %d, IntValue17 주소 : %#x"), IntValue17, &IntValue17);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	const int32 IntValue18 = 10;

	// int& Intref18 = IntValue18; // (X)
	const int32& IntRef19 = IntValue18;

	const int32& IntRef20 = 100;

	int32 IntValue21 = Add(1, 2);
	UE_LOG(LogTemp, Warning, TEXT("IntValue1 : %d"), IntValue21);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue22 = 1;
	int32 IntValue23 = 2;

	int32 IntValue24 = Minus(IntValue22, IntValue23);
	UE_LOG(LogTemp, Warning, TEXT("IntValue24 : %d"), IntValue24);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	// int32& IntRef21 = NULL; //(X)

	const int32& IntRef22 = NULL;
}

// Called every frame
void AChap10_Pointer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AChap10_Pointer::Add(const int32& Value1, const int32& Value2)
{
	return Value1 + Value2;
}

int32 AChap10_Pointer::Minus(int32& Value1, int32& Value2)
{
	return Value1 - Value2;
}

