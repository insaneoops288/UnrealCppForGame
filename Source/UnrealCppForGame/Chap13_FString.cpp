// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap13_FString.h"

// Sets default values
AChap13_FString::AChap13_FString()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
// Called when the game starts or when spawned
void AChap13_FString::BeginPlay()
{
	Super::BeginPlay();
	
	for (int32 i = 33; i < 127; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d = %c"), i, i);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringValue1 = FString(TEXT("첫번째 문자열 선언방법."));
	UE_LOG(LogTemp, Warning, TEXT("StringValue1 : %s"), *StringValue1);

	FString StringValue2;
	StringValue2 = FString(TEXT("두번째 문자열 선언방법."));
	UE_LOG(LogTemp, Warning, TEXT("StringValue2 : %s"), *StringValue2);

	FString StringValue3(FString(TEXT("세번째 문자열 선언방법.")));
	UE_LOG(LogTemp, Warning, TEXT("StringValue3 : %s"), *StringValue3);

	FString StringValue4(StringValue3);
	UE_LOG(LogTemp, Warning, TEXT("네번째 문자열 선언방법 : %s"), *StringValue4);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringValue5 = TEXT("Red");

	UE_LOG(LogTemp, Warning, TEXT("StringValue5 : %s"), *StringValue5);

	StringValue5.Append(TEXT("Orange"));

	UE_LOG(LogTemp, Warning, TEXT("Append : %s"), *StringValue5);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringValue5.InsertAt(3, TEXT("Green"));

	UE_LOG(LogTemp, Warning, TEXT("InsertAt : %s"), *StringValue5); 
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringValue5.ReverseString();

	UE_LOG(LogTemp, Warning, TEXT("ReverseString : %s"), *StringValue5); 
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString Reverse = StringValue5.Reverse();

	UE_LOG(LogTemp, Warning, TEXT("Reverse : %s"), *Reverse); 
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringValue5 = TEXT("RedGreenOrange");
	UE_LOG(LogTemp, Warning, TEXT("StringValue5 : %s"), *StringValue5); 

	StringValue5.ReplaceInline(TEXT("Red"), TEXT("Black"));

	UE_LOG(LogTemp, Warning, TEXT("ReplaceInline : %s"), *StringValue5);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString ReplaceString = StringValue5.Replace(TEXT("Orange"), TEXT("White"));

	UE_LOG(LogTemp, Warning, TEXT("Replace : %s"), *ReplaceString); 
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringValue6 = FString(TEXT("let's study unreal"));
	UE_LOG(LogTemp, Warning, TEXT("StringValue6 : %s"), *StringValue6);

	FString StringForSearch0 = TEXT("let's");
	UE_LOG(LogTemp, Warning, TEXT("StringForSearch0 : %s"), *StringForSearch0);

	bool bStartsWith0 = StringValue6.StartsWith(StringForSearch0);
	if (bStartsWith0)
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 \"%s\"로 시작합니다."), *StringValue6, *StringForSearch0);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 \"%s\"로 시작하지 않습니다."), *StringValue6, *StringForSearch0);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringForSearch01 = TEXT("Korea");
	UE_LOG(LogTemp, Warning, TEXT("StringForSearch01 : %s"), *StringForSearch01);

	bool bStartsWith01 = StringValue6.StartsWith(StringForSearch01);
	if (bStartsWith01)
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 \"%s\"로 시작합니다."), *StringValue6, *StringForSearch01);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 \"%s\"로 시작하지 않습니다."), *StringValue6, *StringForSearch01);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

	FString StringForSearch1 = TEXT("unreal");
	UE_LOG(LogTemp, Warning, TEXT("StringForSearch1 : %s"), *StringForSearch1);

	bool bEndsWith1 = StringValue6.EndsWith(StringForSearch1);
	if (bEndsWith1)
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 \"%s\"로 끝납니다."), *StringValue6, *StringForSearch1);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 \"%s\"로 끝나지 않습니다. "), *StringValue6, *StringForSearch1);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringForSearch11 = TEXT("korea");
	UE_LOG(LogTemp, Warning, TEXT("StringForSearch11 : %s"), *StringForSearch11);

	bool bEndsWith11 = StringValue6.EndsWith(StringForSearch11);
	if (bEndsWith11)
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 \"%s\"로 끝납니다."), *StringValue6, *StringForSearch11);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 \"%s\"로 끝나지 않습니다. "), *StringValue6, *StringForSearch11);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

	bool bIsEmpty2 = StringValue6.IsEmpty();
	if (bIsEmpty2)
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 빈문자열입니다."), *StringValue6);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 빈문자열이 아닙니다."), *StringValue6);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringValue6.Empty();
	bool bIsEmpty21 = StringValue6.IsEmpty();
	if (bIsEmpty21)
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 빈문자열입니다."), *StringValue6);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"는 빈문자열이 아닙니다."), *StringValue6);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

	StringValue6 = FString(TEXT("let's study unreal"));
	FString StringForSearch2 = TEXT("unreal");
	UE_LOG(LogTemp, Warning, TEXT("StringForSearch2 : %s"), *StringForSearch2);

	bool bContains2 = StringValue6.Contains(StringForSearch2, ESearchCase::IgnoreCase, ESearchDir::FromStart);
	if (bContains2)
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"은 \"%s\"문자열을 포함합니다."), *StringValue6, *StringForSearch2);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"은 \"%s\"문자열을 포함하지 않습니다."), *StringValue6, *StringForSearch2);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringForSearch21 = TEXT("korea");
	UE_LOG(LogTemp, Warning, TEXT("StringForSearch21 : %s"), *StringForSearch21);

	bool bContains21 = StringValue6.Contains(StringForSearch21, ESearchCase::IgnoreCase, ESearchDir::FromStart);
	if (bContains21)
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"은 \"%s\"문자열을 포함합니다."), *StringValue6, *StringForSearch21);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"은 \"%s\"문자열을 포함하지 않습니다."), *StringValue6, *StringForSearch21);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

	FString StringForSearch3 = TEXT("unreal");
	UE_LOG(LogTemp, Warning, TEXT("StringForSearch3 : %s"), *StringForSearch3);

	int32 FindIndex = StringValue6.Find(StringForSearch3, ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE);

	if (FindIndex > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"문자열에서 \"%s\"문자열을 찾았습니다. Index : %d"), *StringValue6, *StringForSearch3, FindIndex);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"문자열에서 \"%s\"문자열을 찾지 못했습니다. Index : %d"), *StringValue6, *StringForSearch3, FindIndex);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringForSearch31 = TEXT("korea");
	UE_LOG(LogTemp, Warning, TEXT("StringForSearch31 : %s"), *StringForSearch31);

	int32 FindIndex1 = StringValue6.Find(StringForSearch31, ESearchCase::IgnoreCase, ESearchDir::FromStart, INDEX_NONE);

	if (FindIndex1 > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"문자열에서 \"%s\"문자열을 찾았습니다. Index : %d"), *StringValue6, *StringForSearch31, FindIndex1);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\"%s\"문자열에서 \"%s\"문자열을 찾지 못했습니다. Index : %d"), *StringValue6, *StringForSearch31, FindIndex1);
	}

	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

	FString StringValue7 = FString(TEXT("Korean "));
	FString StringValue8 = FString(TEXT("English "));

	FString StringValue9 = StringValue7 + StringValue8;
	StringValue9 += FString(TEXT("History"));
	UE_LOG(LogTemp, Warning, TEXT("StringValue9 : %s"), *StringValue9);

	FString ResultString9 = FString::Printf(TEXT("%s + %s = %s"), *StringValue7, *StringValue8, *(StringValue7 + StringValue8));
	UE_LOG(LogTemp, Warning, TEXT("ResultString9 : %s"), *ResultString9);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringValue10 = FString(TEXT("한국어, 영어, 중국어"));
	UE_LOG(LogTemp, Warning, TEXT("StringValue10 : %s"), *StringValue10);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("StringValue10 : %s"), *StringValue10);
	TArray<FString> SplitStrings;
	StringValue10.ParseIntoArray(SplitStrings, TEXT(","), false); 
	UE_LOG(LogTemp, Warning, TEXT("SplitStrings.Num : %d"), SplitStrings.Num());

	for (int32 i = 0; i < SplitStrings.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("SplitStrings[%d] : %s"), i, *SplitStrings[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	StringValue10 = FString(TEXT("한국어, 영어, 중국어"));
	UE_LOG(LogTemp, Warning, TEXT("StringValue10 : %s"), *StringValue10);

	SplitStrings.Empty();
	StringValue10.ParseIntoArray(SplitStrings, TEXT(","), true); 
	UE_LOG(LogTemp, Warning, TEXT("SplitStrings.Num : %d"), SplitStrings.Num());

	for (int32 i = 0; i < SplitStrings.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("SplitStrings[%d] : %s"), i, *SplitStrings[i]);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringValue11 = TEXT("철수");
	int32 IntValue14 = 450;

	TArray<FStringFormatArg> StringFormatArgs14;
	StringFormatArgs14.Add(FStringFormatArg(StringValue11));
	StringFormatArgs14.Add(FStringFormatArg(IntValue14));

	FString ResultString2 = FString::Format(TEXT("StringValue11 = {0}, IntValue14 = {1}"), StringFormatArgs14);
	UE_LOG(LogTemp, Warning, TEXT("ResultString2 : %s"), *ResultString2);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringValue12 = TEXT("영희");
	int32 IntValue15 = 450;
	FString ResultString15 = FString::Printf(TEXT("StringValue12 = %s, IntValue15 = %d"), *StringValue12, IntValue15);
	UE_LOG(LogTemp, Warning, TEXT("ResultString15 : %s"), *ResultString15);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntValue16 = 1024;
	FString StringValue13 = FString::Printf(TEXT("%d"), IntValue16);
	UE_LOG(LogTemp, Warning, TEXT("StringValue13 : %s"), *StringValue13);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	float FloatValue17 = 3.14159265f;
	FString StringValue14 = FString::Printf(TEXT("%f"), FloatValue17);
	UE_LOG(LogTemp, Warning, TEXT("StringValue14 : %s"), *StringValue14);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	float FloatValue18 = 1.414f;
	FString StringValue15 = FString::SanitizeFloat(FloatValue18);
	UE_LOG(LogTemp, Warning, TEXT("StringValue15 : %s"), *StringValue15);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringValue16 = FString(TEXT("3.14159265"));
	float FloatValue19 = FCString::Atof(*StringValue16.TrimQuotes());
	UE_LOG(LogTemp, Warning, TEXT("FloatValue19 : %f"), FloatValue19);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringValue161 = FString(TEXT("We are the world. !!"));
	float FloatValue191 = FCString::Atof(*StringValue161.TrimQuotes());
	UE_LOG(LogTemp, Warning, TEXT("FloatValue191 : %f"), FloatValue191);
	UE_LOG(LogTemp, Warning, TEXT("<----------------->"));

	FString StringValue18 = FString(TEXT("korea"));
	FString StringValue19 = FString(TEXT("KOREA"));

	bool bEqualTo18 = (StringValue18 == StringValue19);
	UE_LOG(LogTemp, Warning, TEXT("bEqualTo18 : %s"), bEqualTo18 ? TEXT("true") : TEXT("false"));

	bool bEquals18 = StringValue18.Equals(StringValue19, ESearchCase::IgnoreCase);
	UE_LOG(LogTemp, Warning, TEXT("bEquals18 : %s"), bEquals18 ? TEXT("true") : TEXT("false"));

	bool bEquals19 = StringValue18.Equals(StringValue19, ESearchCase::CaseSensitive);
	UE_LOG(LogTemp, Warning, TEXT("bEquals19 : %s"), bEquals19 ? TEXT("true") : TEXT("false"));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 bCompare18 = StringValue18.Compare(StringValue19, ESearchCase::IgnoreCase);
	UE_LOG(LogTemp, Warning, TEXT("bCompare18 : %d"), bCompare18);

	int32 bCompare19 = StringValue18.Compare(StringValue19, ESearchCase::CaseSensitive);
	UE_LOG(LogTemp, Warning, TEXT("bCompare19 : %d"), bCompare19);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringValue20 = FString(TEXT("우리는"));
	StringValue20 += FString(TEXT(" 언리얼을"));

	FString ResultString24 = StringValue20 + FString(TEXT(" 공부합니다. !!"));
	UE_LOG(LogTemp, Warning, TEXT("ResultString24 : %s"), *ResultString24);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StringValue21 = FString::Printf(TEXT("FString : %s, int32 : %d, float : %f"), TEXT("언리얼"), 1024, 3.14159265f);
	UE_LOG(LogTemp, Warning, TEXT("StringValue21 : %s"), *StringValue21);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));



}

// Called every frame
void AChap13_FString::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

