// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap03_Operator.h"

// Sets default values
AChap03_Operator::AChap03_Operator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap03_Operator::BeginPlay()
{
	Super::BeginPlay();

	int32 IntValue1 = 10;
	int32 IntValue2 = 3;

	int32 Addition = IntValue1 + IntValue2;
	UE_LOG(LogTemp, Warning, TEXT("더하기 : %d + %d = %d"), IntValue1, IntValue2, Addition);

	int32 Subtraction = IntValue1 - IntValue2;
	UE_LOG(LogTemp, Warning, TEXT("빼기 : %d - %d = %d"), IntValue1, IntValue2, Subtraction);

	int32 Multiplication = IntValue1 * IntValue2;
	UE_LOG(LogTemp, Warning, TEXT("곱하기 : %d X %d = %d"), IntValue1, IntValue2, Multiplication);

	int32 Division = IntValue1 / IntValue2;
	UE_LOG(LogTemp, Warning, TEXT("나누기 : %d / %d = %d"), IntValue1, IntValue2, Division);

	int32 Remainder = IntValue1 % IntValue2;
	UE_LOG(LogTemp, Warning, TEXT("나머지 : %d %% %d = %d"), IntValue1, IntValue2, Remainder);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	float Division1 = IntValue1 / IntValue2;
	UE_LOG(LogTemp, Warning, TEXT("나누기1 : %d / %d = %f"), IntValue1, IntValue2, Division1);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	float Division2 = (float)IntValue1 / (float)IntValue2;
	UE_LOG(LogTemp, Warning, TEXT("나누기2 : %f / %f = %f"), (float)IntValue1, (float)IntValue2, Division2);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue3 = 1.414f;
	UE_LOG(LogTemp, Warning, TEXT("IntValue3 : %d"), IntValue3);
	float FloatValue3 = 1024;
	UE_LOG(LogTemp, Warning, TEXT("FloatValue3 : %f"), FloatValue3);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 Math = 90;
	int32 History = 95;
	int32 English = 84;

	int32 Total = Math + History + English;

	float Average = (float)Total / 3;
	UE_LOG(LogTemp, Warning, TEXT("평균 : %f / 3 = %f"), (float)Total, Average);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue4 = 35;
	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);
	IntValue4 = IntValue4 + 5;
	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	IntValue4++;
	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);
	++IntValue4;
	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);
	IntValue4 += 1;
	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);
	IntValue4 = IntValue4 + 1;
	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	IntValue4--;
	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);
	--IntValue4;
	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);
	IntValue4 -= 1;
	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);
	IntValue4 = IntValue4 - 1;
	UE_LOG(LogTemp, Warning, TEXT("IntValue4 : %d"), IntValue4);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int IntValue5 = 10;
	int IntValue6;

	IntValue6 = ++IntValue5;
	UE_LOG(LogTemp, Warning, TEXT("IntValue5 : %d"), IntValue5);
	UE_LOG(LogTemp, Warning, TEXT("IntValue6 : %d"), IntValue6);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	IntValue5 = 10;

	IntValue6 = IntValue5++;
	UE_LOG(LogTemp, Warning, TEXT("IntValue5 : %d"), IntValue5);
	UE_LOG(LogTemp, Warning, TEXT("IntValue6 : %d"), IntValue6);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue7 = 20;
	int32 IntValue8 = 15;

	// FString Result1 = IntValue7;
	FString Result2 = IntValue7 + TEXT(" 값 비교");
	FString Result3 = FString::FromInt(IntValue7) + TEXT(" 값 비교");
	// UE_LOG(LogTemp, Warning, TEXT("Result1 : %s"), *Result1);
	UE_LOG(LogTemp, Warning, TEXT("Result2 : %s"), *Result2);
	UE_LOG(LogTemp, Warning, TEXT("Result3 : %s"), *Result3);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString IntValue7Value = FString::FromInt(IntValue7);
	FString IntValue8Value = FString::FromInt(IntValue8);

	FString Result = TEXT("");

	if (IntValue7 > IntValue8)
	{
		Result = IntValue7Value + TEXT("의 값은 ") + IntValue8Value + TEXT("의 값보다 큽니다.");
		UE_LOG(LogTemp, Warning, TEXT("Result : %s"), *Result);
	}

	if (IntValue7 < IntValue8)
	{
		Result = IntValue7Value + TEXT("의 값은 ") + IntValue8Value + TEXT("의 값보다 작습니다.");
		UE_LOG(LogTemp, Warning, TEXT("Result : %s"), *Result);
	}

	if (IntValue7 >= IntValue8)
	{
		Result = IntValue7Value + TEXT("의 값은 ") + IntValue8Value + TEXT("의 값보다 크거나 같습니다.");
		UE_LOG(LogTemp, Warning, TEXT("Result : %s"), *Result);
	}

	if (IntValue7 <= IntValue8)
	{
		Result = IntValue7Value + TEXT("의 값은 ") + IntValue8Value + TEXT("의 값보다 작거나 같습니다.");
		UE_LOG(LogTemp, Warning, TEXT("Result : %s"), *Result);
	}

	if (IntValue7 == IntValue8)
	{
		Result = IntValue7Value + TEXT("의 값은 ") + IntValue8Value + TEXT("의 값과 같습니다.");
		UE_LOG(LogTemp, Warning, TEXT("Result : %s"), *Result);
	}

	if (IntValue7 != IntValue8)
	{
		Result = IntValue7Value + TEXT("의 값은 ") + IntValue8Value + TEXT("의 값과 다릅니다.");
		UE_LOG(LogTemp, Warning, TEXT("Result : %s"), *Result);
	}
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));


	int32 IntValue9 = 10;

	bool BoolValue1 = IntValue9 >= 1 && IntValue9 <= 10;
	UE_LOG(LogTemp, Warning, TEXT("BoolValue1 : %d"), BoolValue1 ? 1 : 0);

	bool BoolValue2 = IntValue9 == 2 || IntValue9 == 10;
	UE_LOG(LogTemp, Warning, TEXT("BoolValue2 : %d"), BoolValue2 ? 1 : 0);

	bool BoolValue3 = !BoolValue2;
	UE_LOG(LogTemp, Warning, TEXT("BoolValue3 : %d"), BoolValue3 ? 1 : 0);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("BoolValue1 : %s"), BoolValue1 ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Warning, TEXT("BoolValue1 : %d"), BoolValue1 ? 1 : 0);
	UE_LOG(LogTemp, Warning, TEXT("BoolValue2 : %s"), BoolValue2 ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Warning, TEXT("BoolValue2 : %d"), BoolValue2 ? 1 : 0);
	UE_LOG(LogTemp, Warning, TEXT("BoolValue3 : %s"), BoolValue3 ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Warning, TEXT("BoolValue3 : %d"), BoolValue3 ? 1 : 0);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue10 = 30 + 2 * 3;
	UE_LOG(LogTemp, Warning, TEXT("30 + 2 * 3 : %d"), IntValue10);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	IntValue10 = (30 + 2) * 3;
	UE_LOG(LogTemp, Warning, TEXT("(30 + 2) * 3 : %d"), IntValue10);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	IntValue10 = 30 + (2 * 3);
	UE_LOG(LogTemp, Warning, TEXT("30 + (2 * 3) : %d"), IntValue10);

	IntValue10 = 30 + 2 * 3;
	UE_LOG(LogTemp, Warning, TEXT("30 + 2 * 3 : %d"), IntValue10);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

}

// Called every frame
void AChap03_Operator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

