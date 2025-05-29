// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap06_ConditionalStatements.h"

// Sets default values
AChap06_ConditionalStatements::AChap06_ConditionalStatements()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap06_ConditionalStatements::BeginPlay()
{
	Super::BeginPlay();
	
	int32 IntValue1 = 150;
	int32 IntValue2 = 100;
	if (IntValue1 > IntValue2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 큽니다."), IntValue1, IntValue2);
	}
	if (IntValue1 < IntValue2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 작습니다."), IntValue1, IntValue2);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (IntValue1 > IntValue2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 큽니다."), IntValue1, IntValue2);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 작거나 같습니다."), IntValue1, IntValue2);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (IntValue1 > IntValue2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 큽니다."), IntValue1, IntValue2);
	}
	else if (IntValue1 == IntValue2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값과 같습니다."), IntValue1, IntValue2);
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 작습니다."), IntValue1, IntValue2);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (IntValue1 > IntValue2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 큽니다."), IntValue1, IntValue2);
	}
	else
	{
		if (IntValue1 == IntValue2)
		{
			UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값과 같습니다."), IntValue1, IntValue2);
		}
		else 
		{
			UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 작습니다."), IntValue1, IntValue2);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (IntValue1 > IntValue2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 큽니다."), IntValue1, IntValue2);
	}
	else if (IntValue1 == IntValue2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값과 같습니다."), IntValue1, IntValue2);
	}
	else if (IntValue1 < IntValue2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 작습니다."), IntValue1, IntValue2);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (IntValue1 >= 10)
	{
		if (IntValue1 <= 20)
		{
			UE_LOG(LogTemp, Warning, TEXT("%d의 값은 10과 20 사이에 있습니다."), IntValue1);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%d의 값은 20보다 큽니다."), IntValue1);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue3 = 200;

	switch (IntValue3)
	{
	case 100: 
		UE_LOG(LogTemp, Warning, TEXT("IntValue3변수의 값은 %d입니다. "), IntValue3);
		break;
	case 200:
		UE_LOG(LogTemp, Warning, TEXT("IntValue3변수의 값은 %d입니다. "), IntValue3);
		break;
	case 300:
		UE_LOG(LogTemp, Warning, TEXT("IntValue3변수의 값은 %d입니다. "), IntValue3);
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("조건식에 맞는 값이 없습니다."));
		break;
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 Month = 12;

	switch (Month)
	{
	case 1:
	case 2:
	case 12:
		UE_LOG(LogTemp, Warning, TEXT("%d월는 겨울입니다."), Month);
		break;
	case 3:
	case 4:
	case 5:
		UE_LOG(LogTemp, Warning, TEXT("%d월는 봄입니다."), Month);
		break;
	case 6:
	case 7:
	case 8:
		UE_LOG(LogTemp, Warning, TEXT("%d월는 여름입니다."), Month);
		break;
	case 9:
	case 10:
	case 11:
		UE_LOG(LogTemp, Warning, TEXT("%d월는 가을입니다."), Month);
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("잘못된 선택입니다."));
		break;
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (IntValue1 > IntValue2)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 큽니다."), IntValue1, IntValue2);
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값은 %d의 값보다 작거나 같습니다."), IntValue1, IntValue2);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString IntValue1Value = FString::FromInt(IntValue1);
	FString IntValue2Value = FString::FromInt(IntValue2);

	FString Great = IntValue1Value + TEXT("의 값은 ") + IntValue2Value + TEXT("의 값보다 큽니다.");
	FString Less = IntValue1Value + TEXT("의 값은 ") + IntValue2Value + TEXT("의 값보다 작습니다.");

	FString Result = (IntValue1 > IntValue2) ? Great : Less;
	UE_LOG(LogTemp, Warning, TEXT("ResultMessage : %s"), *Result);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue4 = 15;
	int32 IntValue5 = 17;
	int32 BigNumber;

	if (IntValue4 > IntValue5)
	{
		BigNumber = IntValue4;
	}
	else
	{
		BigNumber = IntValue5;
	}

	UE_LOG(LogTemp, Warning, TEXT("%d와 %d중에 큰수는 %d"), IntValue4, IntValue5, BigNumber);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	BigNumber = (IntValue4 > IntValue5) ? IntValue4 : IntValue5;
	UE_LOG(LogTemp, Warning, TEXT("%d와 %d중에 큰수는 %d"), IntValue4, IntValue5, BigNumber);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

}

// Called every frame
void AChap06_ConditionalStatements::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

