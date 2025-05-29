// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap17_Constructor.generated.h"

class FApple
{
public:
	FApple()
	{
		UE_LOG(LogTemp, Warning, TEXT("사과 생성자. !!"));
	}

	~FApple()
	{
		UE_LOG(LogTemp, Warning, TEXT("사과 소멸자. !!"));
	}
};

class FBanana
{
public:
	FBanana()
	{
		UE_LOG(LogTemp, Warning, TEXT("바나나 생성자. !!"));
		Seed = 0;
		Count = 0;
	}

	FBanana(int32 seed, int32 count)
	{
		UE_LOG(LogTemp, Warning, TEXT("바나나 생성자 오버로딩 . !!"));
		Seed = seed;
		Count = count;
	}

	FBanana(int32 seed, FString color = TEXT("White"))
	{
		UE_LOG(LogTemp, Warning, TEXT("바나나 디폴트 매개변수 생성자. !!"));
		Seed = seed;
	}

	~FBanana()
	{
		UE_LOG(LogTemp, Warning, TEXT("바나나 소멸자. !!"));
	}
private:
	int32 Seed;
	int32 Count;
	FString Color;
};

class FMelon
{
public:
	FMelon() : Seed(2), Count(15)
	{
		UE_LOG(LogTemp, Warning, TEXT("멜론 생성자. !!"));
		UE_LOG(LogTemp, Warning, TEXT("Seed : %d, Count : %d"), Seed, Count);
	}

	FMelon(int32 seed, int32 count)
	{
		UE_LOG(LogTemp, Warning, TEXT("멜론 생성자 오버로딩. !!"));
		Seed = seed;
		Count = count;
		UE_LOG(LogTemp, Warning, TEXT("Seed : %d, Count : %d"), Seed, Count);
	}
	~FMelon()
	{
		UE_LOG(LogTemp, Warning, TEXT("멜론 소멸자. !!"));
	}
private:
	int32 Seed;
	int32 Count;
};

class FWaterMelon
{
public:
	FWaterMelon() : Seed(2), Count(15)
	{
		UE_LOG(LogTemp, Warning, TEXT("수박 생성자. !!"));
		UE_LOG(LogTemp, Warning, TEXT("Seed : %d, Count : %d"), Seed, Count);
	}

	FWaterMelon(int32 seed, int32 count) : Seed(seed), Count(count)
	{
		UE_LOG(LogTemp, Warning, TEXT("수박 생성자 오버로딩. !!"));
		UE_LOG(LogTemp, Warning, TEXT("Seed : %d, Count : %d"), Seed, Count);
	}
	~FWaterMelon()
	{
		UE_LOG(LogTemp, Warning, TEXT("수박 소멸자. !!"));
	}

private:
	int32 Seed;
	int32 Count;
};

class FLemon
{
public:
	FLemon()
	{
		UE_LOG(LogTemp, Warning, TEXT("레몬 생성자. !!"));
	}
	~FLemon()
	{
		UE_LOG(LogTemp, Warning, TEXT("레몬 소멸자. !!"));
	}
};

class FTime1
{
public:
	FTime1()
	{
		Hour = 0;
		Minute = 0;
		Second = 0;

		UE_LOG(LogTemp, Warning, TEXT("FTime1 %d시 : %d분 : %d초입니다."), Hour, Minute, Second);
	}

	FTime1(int32 second)
	{
		Second = second;

		UE_LOG(LogTemp, Warning, TEXT("FTime1 %d시 : %d분 : %d초입니다."), Hour, Minute, Second);
	}

	FTime1(int32 minute, int32 second)
	{
		Minute = minute;
		Second = second;

		UE_LOG(LogTemp, Warning, TEXT("FTime1 %d시 : %d분 : %d초입니다."), Hour, Minute, Second);
	}

	FTime1(int32 hour, int32 minute, int32 second)
	{
		Hour = hour;
		Minute = minute;
		Second = second;

		UE_LOG(LogTemp, Warning, TEXT("FTime1 %d시 : %d분 : %d초입니다."), Hour, Minute, Second);
	}

private:
	int32 Hour;
	int32 Minute;
	int32 Second;
};

class FTime2
{
public:
	FTime2() : Hour(0), Minute(0), Second(0)
	{
		UE_LOG(LogTemp, Warning, TEXT("FTime2 %d시 : %d분 : %d초입니다."), Hour, Minute, Second);
	}

	FTime2(int32 second) : Second(second)
	{
		UE_LOG(LogTemp, Warning, TEXT("FTime2 %d시 : %d분 : %d초입니다."), Hour, Minute, Second);
	}

	FTime2(int32 minute, int32 second) : Minute(minute), Second(second)
	{
		UE_LOG(LogTemp, Warning, TEXT("FTime2 %d시 : %d분 : %d초입니다."), Hour, Minute, Second);
	}

	FTime2(int32 hour, int32 minute, int32 second) : Hour(hour), Minute(minute), Second(second)
	{
		UE_LOG(LogTemp, Warning, TEXT("FTime2 %d시 : %d분 : %d초입니다."), Hour, Minute, Second);
	}
private:
	int32 Hour;
	int32 Minute;
	int32 Second;
};



UCLASS()
class UNREALCPPFORGAME_API AChap17_Constructor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap17_Constructor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
