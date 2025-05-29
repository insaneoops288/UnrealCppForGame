// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap23_OperatorOverLoading.h"

// Sets default values
AChap23_OperatorOverLoading::AChap23_OperatorOverLoading()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap23_OperatorOverLoading::BeginPlay()
{
	Super::BeginPlay();

	FPoint1 A1(10, 10);
	FPoint1 B1(20, 20);
	A1.ShowPosition();
	B1.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("<더하기 연산자 오버로딩>"));
	FPoint2 A2(10, 10);
	FPoint2 B2(20, 20);

	A2.ShowPosition();
	B2.ShowPosition();

	FPoint2 C21 = A2 + B2; 
	FPoint2 C22 = A2.operator+(B2);
	C21.ShowPosition();
	C22.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("<비교 연산자 오버로딩>"));
	FPoint3 A3(10, 10);
	FPoint3 B3(20, 20);

	A3.ShowPosition();
	B3.ShowPosition();

	if (A3 == B3)
	{
		UE_LOG(LogTemp, Warning, TEXT("A3 와 B3는 같은 객체입니다."));
	}
	else if (A3 != B3)
	{
		UE_LOG(LogTemp, Warning, TEXT("A3 와 B3는 같은 객체가 아닙니다."));
	}

	if (A3.operator==(B3))
	{
		UE_LOG(LogTemp, Warning, TEXT("A3 와 B3는 같은 객체입니다."));
	}
	else if (A3.operator!=(B3))
	{
		UE_LOG(LogTemp, Warning, TEXT("A3 와 B3는 같은 객체가 아닙니다."));
	}

	FString EqualTo = TEXT("A3 와 B3는 같은 객체입니다.");
	FString NotEqualTo = TEXT("A3 와 B3는 같은 객체가 아닙니다.");

	FString EqualToMessage = (A3 == B3 ? EqualTo : NotEqualTo);
	UE_LOG(LogTemp, Warning, TEXT("EqualToMessage : %s"), *EqualToMessage);
	EqualToMessage = (A3.operator==(B3) ? EqualTo : NotEqualTo);
	UE_LOG(LogTemp, Warning, TEXT("EqualToMessage : %s"), *EqualToMessage);

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	FPoint4 A4(10, 10);
	FPoint4 B4(20, 20);

	A4.ShowPosition();
	B4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<더하기 연산자 오버로딩>"));
	FPoint4 C41 = A4 + B4;
	C41.ShowPosition();

	FPoint4 C42 = A4.operator+(B4);
	C42.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	A4.ShowPosition();
	B4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<빼기 연산자 오버로딩>"));
	FPoint4 C43 = A4 - B4;
	C43.ShowPosition();

	FPoint4 C44 = A4.operator-(B4);
	C44.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	A4.ShowPosition();
	B4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<곱하기 연산자 오버로딩>"));
	FPoint4 C45 = A4 * B4;
	C45.ShowPosition();

	FPoint4 C46 = A4.operator*(B4);
	C46.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	A4.ShowPosition();
	B4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<나누기 연산자 오버로딩>"));
	FPoint4 C47 = A4 / B4;
	C47.ShowPosition();

	FPoint4 C48 = A4.operator/(B4);
	C48.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	A4.ShowPosition();
	B4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<같은지 연산자 오버로딩>"));
	FString EqualTo1 = TEXT("A4 와 B4는 같은 객체입니다.");
	FString NotEqualTo1 = TEXT("A4 와 B4는 같은 객체가 아닙니다.");

	EqualToMessage = (A4 == B4 ? EqualTo1 : NotEqualTo1);
	UE_LOG(LogTemp, Warning, TEXT("EqualToMessage : %s"), *EqualToMessage);
	EqualToMessage = (A4.operator==(B4) ? EqualTo1 : NotEqualTo1);
	UE_LOG(LogTemp, Warning, TEXT("EqualToMessage : %s"), *EqualToMessage);


	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	A4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<후치 증가연산자 오버로딩>"));
	A4++;
	A4.ShowPosition();
	A4.operator++(0);
	A4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	A4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<전치 증가연산자 오버로딩>"));
	++A4;
	A4.ShowPosition();
	A4.operator++();
	A4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	A4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<후치 감소연산자 오버로딩>"));
	A4--;
	A4.ShowPosition();
	A4.operator--(0);
	A4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

	A4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<전치 감소연산자 오버로딩>"));
	--A4;
	A4.ShowPosition();
	A4.operator--();
	A4.ShowPosition();

	UE_LOG(LogTemp, Warning, TEXT("<--------------------------->"));

}

// Called every frame
void AChap23_OperatorOverLoading::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

