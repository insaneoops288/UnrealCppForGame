// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap23_OperatorOverLoading.generated.h"

class FPoint1
{
private:
	float XPosition;
	float YPosition;

public:
	FPoint1(float X, float Y) : XPosition(X), YPosition(Y) {}

	void ShowPosition()
	{
		UE_LOG(LogTemp, Warning, TEXT("XPosition : %f, YPosition : %f"), XPosition, YPosition);
	}
};

class FPoint2
{
private:
	float XPosition;
	float YPosition;
public:

	FPoint2(float X, float Y) : XPosition(X), YPosition(Y) {}

	FPoint2 Add(FPoint2& Position)
	{
		FPoint2 Pt(XPosition + Position.XPosition, YPosition + Position.YPosition);
		return Pt;
	}

	FPoint2 operator+(FPoint2& Position)
	{
		FPoint2 Pt(XPosition + Position.XPosition, YPosition + Position.YPosition);
		return Pt;
	}

	void ShowPosition()
	{
		UE_LOG(LogTemp, Warning, TEXT("XPosition : %f, YPosition : %f"), XPosition, YPosition);
	}
};

class FPoint3
{
private:
	float XPosition;
	float YPosition;
public:
	FPoint3(float X, float Y) : XPosition(X), YPosition(Y) {}

	FPoint3 Add(FPoint3& Position)
	{
		FPoint3 pt(XPosition + Position.XPosition, YPosition + Position.YPosition);
		return pt;
	}

	bool EqualTo(FPoint3& Position)
	{
		return ((XPosition == Position.XPosition) && (YPosition == Position.YPosition));
	}

	bool NotEqualTo(FPoint3& Position)
	{
		return !(*this == Position);
	}

	FPoint3 operator+(FPoint3& Position)
	{
		FPoint3 pt(XPosition + Position.XPosition, YPosition + Position.YPosition);
		return pt;
	}

	bool operator==(FPoint3& Position)
	{
		return ((XPosition == Position.XPosition) && (YPosition == Position.YPosition));
	}

	bool operator!=(FPoint3& Position)
	{
		return !(*this == Position);
	}

	void ShowPosition()
	{
		UE_LOG(LogTemp, Warning, TEXT("XPosition : %f, YPosition : %f"), XPosition, YPosition);
	}
};

class FPoint4
{
private:
	float XPosition;
	float YPosition;
public:
	FPoint4(float X, float Y) : XPosition(X), YPosition(Y) {}

	FPoint4 operator+(FPoint4& Position)
	{
		FPoint4 pt(XPosition + Position.XPosition, YPosition + Position.YPosition);
		return pt;
	}

	FPoint4 operator-(FPoint4& Position)
	{
		FPoint4 pt(XPosition - Position.XPosition, YPosition - Position.YPosition);
		return pt;
	}

	FPoint4 operator*(FPoint4& Position)
	{
		FPoint4 pt(XPosition * Position.XPosition, YPosition * Position.YPosition);
		return pt;
	}

	FPoint4 operator/(FPoint4& Position)
	{
		FPoint4 pt(XPosition / Position.XPosition, YPosition / Position.YPosition);
		return pt;
	}

	bool operator==(FPoint4& Position)
	{
		return ((XPosition == Position.XPosition) && (YPosition == Position.YPosition));
	}

	bool operator!=(FPoint4& Position)
	{
		return !(*this == Position);
	}

	FPoint4 operator++() 
	{
		++XPosition;
		++YPosition;
		return *this;
	}

	FPoint4 operator++(int32) 
	{
		FPoint4 Pt = *this;
		XPosition++;
		YPosition++;
		return Pt;
	}

	FPoint4 operator--() 
	{
		--XPosition;
		--YPosition;
		return *this;
	}

	FPoint4 operator--(int32) 
	{
		FPoint4 Pt = *this;
		XPosition--;
		YPosition--;
		return Pt;
	}

	void ShowPosition()
	{
		UE_LOG(LogTemp, Warning, TEXT("XPosition : %f, YPosition : %f"), XPosition, YPosition);
	}
};


UCLASS()
class UNREALCPPFORGAME_API AChap23_OperatorOverLoading : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap23_OperatorOverLoading();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
