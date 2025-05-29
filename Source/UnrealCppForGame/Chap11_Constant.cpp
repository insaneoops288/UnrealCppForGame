// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap11_Constant.h"

// Sets default values
AChap11_Constant::AChap11_Constant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap11_Constant::BeginPlay()
{
	Super::BeginPlay();

	const int32 IntValue1 = 1;
	// IntValue1 = 2; // (X)

	int32 const IntValue2 = 1;
	// IntValue2 = 5; // (X)

	int32 IntValue3 = 1;
	const int32* IntPtr1 = &IntValue3;

	// *IntPtr1 = 2; // 컴파일 에러
	IntValue3 = 2;

	int32 IntValue4 = 1;
	int32 IntValue5 = 2;

	int32* const IntPtr2 = &IntValue4;

	// IntPtr2 = &IntValue5; // (X) 

	int32 IntValue6 = 1;
	int32 IntValue7 = 2;
	const int32* const IntPtr3 = &IntValue6;

	// *IntPtr3 = 2; // (X) 
	// IntPtr3 = &IntValue7; // (X) 

	int32 Num = 10;
	int32* const Ptr = &Num; 
	int32& Ref = Num;

#define WIDTH 3

	int32 IntArr1[WIDTH]{};

	const int32 Width = 3;
	int32 IntArr2[Width]{};

	int32 IntArr3[EWidthHeight::Width]{};

	int32 IntValue8 = 10;

	const int32 IntValue9 = 20;       
	const int32 IntValue10 = IntValue8;

	constexpr int32 IntValue11 = 20; 
	// constexpr int32 IntValue12 = IntValue8; // 에러

	const int32 IntValue13 = 5;
	// int32* IntPtr13 = &IntValue13;
	// *IntPtr13 = 6;

	const int32 IntValue14 = 5;
	const int32* IntPtr14 = &IntValue14;
	// *IntPtr14 = 6;

	int32 IntValue15 = 5;
	const int32* IntPtr15 = &IntValue15;
	IntValue15 = 6;

	int32 IntValue16 = 5;
	const int32* IntPtr16 = &IntValue16;
	// *IntPtr16 = 6; //(X)

	int32 IntValue17 = 5;
	const int32* IntPtr17 = &IntValue17;
	int32 IntValue18 = 6;
	IntPtr17 = &IntValue18;

	int32 IntValue19 = 5;
	int32* const IntPtr19 = &IntValue19;
	// IntPtr19 = &IntValue18; // (X)

	int32 IntValue20 = 5;
	int32 IntValue21 = 6;
	int32* const IntPtr20 = &IntValue20;
	// IntPtr20 = &IntValue21;

	int32 IntValue22 = 5;
	int32* const IntPtr22 = &IntValue22;
	*IntPtr22 = 6;

	int32 IntValue23 = 5;
	int32 IntValue241 = 6;
	const int32* const IntPtr23 = &IntValue23;
	// *IntPtr23 = 10; // (X)
	// IntPtr23 = &IntValue241; // (X)

	int32 IntValue24 = 5;
	int32 IntValue25 = 10;

	const int32* IntPtr24 = &IntValue24;
	// *IntPtr24 = 10; // (X)

	int32* const IntPtr25 = &IntValue24;
	// IntPtr25 = &IntValue25; // (X)

	const int32* const IntPtr26 = &IntValue24;
	// *IntPtr26 = 10;          // (X)
	// IntPtr26 = &IntValue25;  // (X)


}

// Called every frame
void AChap11_Constant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChap11_Constant::ConstParameter(const int IntValue)
{
	// IntValue = 10; // (X)
}

int32 FAnimal::GetEyeSight() const
{
	// EyeSight = 200; // (X)
	return EyeSight;
}
