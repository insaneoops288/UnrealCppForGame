// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap14_TArray.h"

// Sets default values
AChap14_TArray::AChap14_TArray()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap14_TArray::BeginPlay()
{
	Super::BeginPlay();

	FString Name0 = TEXT("철수");
	FString Name1 = TEXT("영희");
	FString Name2 = TEXT("영철");
	FString Name3 = TEXT("지훈");
	FString Name4 = TEXT("민준");
	FString Name5 = TEXT("지희");

	TArray<FString> StringArr1;

	StringArr1.Add(TEXT("철수"));
	StringArr1.Add(TEXT("영희"));
	StringArr1.Add(TEXT("영철"));
	StringArr1.Add(TEXT("지훈"));
	StringArr1.Add(TEXT("민준"));
	StringArr1.Add(TEXT("지희"));

	for (int32 i = 0; i < StringArr1.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr1[%d] : %s"), i, *StringArr1[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TArray<FString> StringArr2;
	StringArr2.Add(TEXT("철수"));
	StringArr2.Emplace(TEXT("영희"));
	StringArr2.Emplace(TEXT("영철"));
	StringArr2.Emplace(TEXT("지훈"));
	StringArr2.Emplace(TEXT("민준"));
	StringArr2.Push(TEXT("지희"));

	for (int32 i = 0; i < StringArr2.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr2[%d] : %s"), i, *StringArr2[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("Init 함수는 배열을 요소 여러 개로 채웁니다."));

	TArray<int32> IntArr3;

	IntArr3.Init(10, 5);

	for (int32 i = 0; i < IntArr3.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr3[%d] : %d"), i, IntArr3[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("Append() 함수는 다른 TArray에 다수의 엘리먼트를 한번에 추가합니다."));

	TArray<FString> StringArr4;
	StringArr4.Add(TEXT("철수"));
	StringArr4.Emplace(TEXT("영희"));
	StringArr4.Push(TEXT("영철"));

	TArray<FString> StringArr5;

	StringArr5.Add(TEXT("영철"));
	StringArr5.Emplace(TEXT("지훈"));

	StringArr4.Append(StringArr5);

	for (int32 i = 0; i < StringArr4.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4[%d] : %s"), i, *StringArr4[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringArr4.AddUnique(TEXT("!"));

	for (int32 i = 0; i < StringArr4.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4[%d] : %s"), i, *StringArr4[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringArr4.AddUnique(TEXT("!"));

	for (int32 i = 0; i < StringArr4.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4[%d] : %s"), i, *StringArr4[i]);
	}
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringArr4.Insert(TEXT("아름"), 1);

	for (int32 i = 0; i < StringArr4.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4[%d] : %s"), i, *StringArr4[i]);
	}
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString Names[] = { TEXT("철수"), TEXT("영희"), TEXT("영철"), TEXT("민준"), TEXT("지훈") };

	StringArr4.SetNum(15);

	for (int32 i = 0; i < StringArr4.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4[%d] : %s"), i, *StringArr4[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringArr4.SetNum(3);

	for (int32 i = 0; i < StringArr4.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4[%d] : %s"), i, *StringArr4[i]);
	}
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringArr4.Reset();
	StringArr4.Add(TEXT("Tom"));
	StringArr4.Emplace(TEXT("Jane"));
	StringArr4.Push(TEXT("James"));
	StringArr4.Add(TEXT("Smith"));
	StringArr4.Emplace(TEXT("Joe"));
	StringArr4.Push(TEXT("John"));

	StringArr4.Sort();

	for (int32 i = 0; i < StringArr4.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4[%d] : %s"), i, *StringArr4[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 StringArr4Count = StringArr4.Num();

	UE_LOG(LogTemp, Warning, TEXT("StringArr4Count : %d"), StringArr4Count);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	bool bHasJames = StringArr4.Contains(TEXT("James"));
	UE_LOG(LogTemp, Warning, TEXT("bHasJames : %s"), bHasJames ? TEXT("true") : TEXT("false"));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));	

	bool bHasHelen = StringArr4.Contains(TEXT("Helen"));
	UE_LOG(LogTemp, Warning, TEXT("bHasHelen : %s"), bHasHelen ? TEXT("true") : TEXT("false"));
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString SearchForJames = TEXT("James");
	if (bHasJames)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열은 \"%s\"문자열을 포함합니다. "), *SearchForJames);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열은 \"%s\"문자열을 포함하지 않습니다. "), *SearchForJames);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString SearchForHelen = TEXT("Helen");
	if (bHasHelen)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열은 \"%s\"문자열을 포함합니다. "), *SearchForHelen);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열은 \"%s\"문자열을 포함하지 않습니다. "), *SearchForHelen);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 FindIndexJames1 = StringArr4.Find(TEXT("James"));
	UE_LOG(LogTemp, Warning, TEXT("FindIndexJames1 : %d"), FindIndexJames1);

	int32 FindIndexHelen2 = StringArr4.Find(TEXT("Helen"));
	UE_LOG(LogTemp, Warning, TEXT("FindIndexHelen2 : %d"), FindIndexHelen2);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (FindIndexJames1 >= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열에는 \"%s\"문자열이 %d번째 인덱스에 있습니다. "), *SearchForJames, FindIndexJames1);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열에는 \"%s\"문자열이 없습니다. %d인덱스입니다. "), *SearchForJames, FindIndexJames1);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (FindIndexHelen2 >= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열에는 \"%s\"문자열이 %d번째 인덱스에 있습니다. "), *SearchForHelen, FindIndexHelen2);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열에는 \"%s\"문자열이 없습니다. %d인덱스입니다. "), *SearchForHelen, FindIndexHelen2);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TArray<int32> IntArr6;
	int32 IntArr7[] = { 10, 20, 30, 5, 10, 15, 20, 25, 30 };

	IntArr6.Append(IntArr7, ARRAY_COUNT(IntArr7));

	for (int32 i = 0; i < IntArr6.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("이전 IntArr6[%d] : %d"), i, IntArr6[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	IntArr6.Remove(20);

	for (int32 i = 0; i < IntArr6.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("이후 IntArr6[%d] : %d"), i, IntArr6[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	IntArr6.RemoveSingle(30);

	for (int32 i = 0; i < IntArr6.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr6[%d] : %d"), i, IntArr6[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	IntArr6.RemoveAt(2);

	for (int32 i = 0; i < IntArr6.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("IntArr6[%d] : %d"), i, IntArr6[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("이전 Count : %d"), IntArr6.Num());

	IntArr6.Empty();

	UE_LOG(LogTemp, Warning, TEXT("이후 Count : %d"), IntArr6.Num());
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TArray<FString> StringArr6;
	StringArr6.Add(TEXT("Tom"));
	StringArr6.Add(TEXT("Jane"));
	StringArr6.Add(TEXT("John"));
	StringArr6.Add(TEXT("Smith"));

	FString JoinedString = TEXT("");

	for (FString& String : StringArr6)
	{
		JoinedString += String;
		JoinedString += TEXT(" ");
	}

	UE_LOG(LogTemp, Warning, TEXT("JoinedString : %s"), *JoinedString);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	JoinedString = TEXT("");

	for (int32 i = 0; i != StringArr6.Num(); ++i)
	{
		JoinedString += StringArr6[i];
		JoinedString += TEXT(" ");
	}

	UE_LOG(LogTemp, Warning, TEXT("JoinedString : %s"), *JoinedString);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	JoinedString = TEXT("");

	for (auto Iter = StringArr6.CreateConstIterator(); Iter; ++Iter)
	{
		JoinedString += *Iter;
		JoinedString += TEXT(" ");
	}

	UE_LOG(LogTemp, Warning, TEXT("JoinedString : %s"), *JoinedString);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringArr6.Sort();

	for (int32 i = 0; i < StringArr6.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr6[%d] : %s"), i, *StringArr6[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringArr6.Sort([](const FString& A, const FString& B) { return A.Len() < B.Len(); });

	for (int32 i = 0; i < StringArr6.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr6[%d] : %s"), i, *StringArr6[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringArr6.HeapSort([](const FString& A, const FString& B) { return A.Len() < B.Len(); });

	for (int32 i = 0; i < StringArr6.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr6[%d] : %s"), i, *StringArr6[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringArr6.StableSort([](const FString& A, const FString& B) { return A.Len() < B.Len(); });

	for (int32 i = 0; i < StringArr6.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr6[%d] : %s"), i, *StringArr6[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString* StringGetDataPtr1 = StringArr6.GetData();
	UE_LOG(LogTemp, Warning, TEXT("StringGetDataPtr1 : %#x"), StringGetDataPtr1);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringArr6[0] = StringArr6[0].ToUpper();

	UE_LOG(LogTemp, Warning, TEXT("StringArr6[0] : %s"), *StringArr6[0]);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	for (int32 i = 0; i < StringArr6.Num(); i++)
	{
		StringArr6[i] = StringArr6[i].ToUpper();
		UE_LOG(LogTemp, Warning, TEXT("StringArr6[%d] : %s"), i, *StringArr6[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringArr6[0] = StringArr6[0].ToLower();

	UE_LOG(LogTemp, Warning, TEXT("StringArr6[0] : %s"), *StringArr6[0]);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	for (int32 i = 0; i < StringArr6.Num(); i++)
	{
		StringArr6[i] = StringArr6[i].ToLower();
		UE_LOG(LogTemp, Warning, TEXT("StringArr6[%d] : %s"), i, *StringArr6[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	bool bContainsSmith = StringArr6.Contains(TEXT("smith"));
	bool bContainsJames = StringArr6.Contains(TEXT("james"));

	UE_LOG(LogTemp, Warning, TEXT("bContainsSmith : %s"), (bContainsSmith == true ? TEXT("true") : TEXT("false")));
	UE_LOG(LogTemp, Warning, TEXT("bContainsJames : %s"), (bContainsJames == true ? TEXT("true") : TEXT("false")));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));


}

// Called every frame
void AChap14_TArray::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

