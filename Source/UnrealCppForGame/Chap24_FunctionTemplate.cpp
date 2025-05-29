// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap24_FunctionTemplate.h"

// Sets default values
AChap24_FunctionTemplate::AChap24_FunctionTemplate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap24_FunctionTemplate::BeginPlay()
{
	Super::BeginPlay();
	
	int32 IntValue1 = AddInt(1, 2);
	UE_LOG(LogTemp, Warning, TEXT("AddInt : %d"), IntValue1);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	float FloatValue1 = AddFloat(1.414f, 3.1415f);
	UE_LOG(LogTemp, Warning, TEXT("AddFloat : %f"), FloatValue1);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	double DoubleValue1 = AddDouble(1.414, 3.1415);
	UE_LOG(LogTemp, Warning, TEXT("AddDouble : %lf"), DoubleValue1);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 IntValue2 = Add(1024, 2048);
	UE_LOG(LogTemp, Warning, TEXT("Add : %d"), IntValue2);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	float FloatValue2 = Add(1.414f, 3.1415f);
	UE_LOG(LogTemp, Warning, TEXT("Add : %f"), FloatValue2);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	double DoubleValue2 = Add(1.414, 3.1415);
	UE_LOG(LogTemp, Warning, TEXT("Add : %lf"), DoubleValue2);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 IntValue3 = 1024;
	int32 IntValue4 = 2048;

	int32 IntResult = AddFunction<int32>(IntValue3, IntValue4);
	UE_LOG(LogTemp, Warning, TEXT("IntResult : %d"), IntResult);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	float FloatValue3 = 1.414f;
	float Floatvalue4 = 3.1415f;
	float FloatResult = AddFunction<float>(FloatValue3, Floatvalue4);
	UE_LOG(LogTemp, Warning, TEXT("FloatResult : %f"), FloatResult);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	double DoubleValue3 = 1.414;
	double DoubleValue4 = 3.1415;
	double DoubleResult = AddFunction<double>(DoubleValue3, DoubleValue4);
	UE_LOG(LogTemp, Warning, TEXT("DoubleResult : %lf"), DoubleResult);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FString StringValue3 = TEXT("철수");
	FString StringValue4 = TEXT("영희");
	FString StringResult = AddFunction<FString>(StringValue3, StringValue4);
	UE_LOG(LogTemp, Warning, TEXT("StringResult : %s"), *StringResult);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	IntResult = AddFunction(IntValue3, IntValue4);
	UE_LOG(LogTemp, Warning, TEXT("IntResult : %d"), IntResult);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FloatResult = AddFunction(FloatValue3, Floatvalue4);
	UE_LOG(LogTemp, Warning, TEXT("FloatResult : %f"), FloatResult);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	DoubleResult = AddFunction(DoubleValue3, DoubleValue4);
	UE_LOG(LogTemp, Warning, TEXT("DoubleResult : %lf"), DoubleResult);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	ShowInfo<int32, FString>(10, TEXT("철수"));
	ShowInfo<FString, float>(TEXT("영희"), 3.1415f);
	ShowInfo<FString, FString>(TEXT("민수"), TEXT("서준"));
	ShowInfo<double, float>(1.1414, 3.1415f);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	ShowInfo<double, FString>(1.1414, TEXT("철수"));
	ShowInfo<double, FString>(3.1415, TEXT("영희"));

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	int32 IntValue5 = Max(1024, 2048);
	UE_LOG(LogTemp, Warning, TEXT("IntValue5 : %d"), IntValue5);

	float FloatValue5 = Max(1.414f, 3.1415f);
	UE_LOG(LogTemp, Warning, TEXT("FloatValue5 : %f"), FloatValue5);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FString StringValue5 = Max(TEXT("민준"), TEXT("지희"));
	UE_LOG(LogTemp, Warning, TEXT("StringValue5 : %s"), *StringValue5);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

}

// Called every frame
void AChap24_FunctionTemplate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AChap24_FunctionTemplate::AddInt(int32 Value1, int32 Value2)
{
	int32 Value = Value1 + Value2;
	return Value;
}

float AChap24_FunctionTemplate::AddFloat(float Value1, float Value2)
{
	float Value = Value1 + Value2;
	return Value;
}

double AChap24_FunctionTemplate::AddDouble(double Value1, double Value2)
{
	double Value = Value1 + Value2;
	return Value;
}

int32 AChap24_FunctionTemplate::Add(int32 Value1, int32 Value2)
{
	int32 Value = Value1 + Value2;
	return Value;
}

float AChap24_FunctionTemplate::Add(float Value1, float Value2)
{
	float Value = Value1 + Value2;
	return Value;
}

double AChap24_FunctionTemplate::Add(double Value1, double Value2)
{
	double Value = Value1 + Value2;
	return Value;
}

