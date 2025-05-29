// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap08_Enum.h"

// Sets default values
AChap08_Enum::AChap08_Enum()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap08_Enum::BeginPlay()
{
	Super::BeginPlay();
	
	int32 IntValue1 = 30;
	int32* IntPtr1 = &IntValue1;

	UE_LOG(LogTemp, Warning, TEXT("IntValue1 값 : %d, IntValue1 주소 : %X"), IntValue1, &IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("IntValue1 값 : %d, IntValue1 주소 : %p"), IntValue1, &IntValue1);
	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 : 값 %d, IntPtr1 주소 : %#010x"), *IntPtr1, IntPtr1);
	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 : 값 %d, IntPtr1 주소 : %#x"), *IntPtr1, IntPtr1);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	EColor Color1 = EColor::White;
	EColor Color2(EColor::Blue);
	EColor Color3{ EColor::Red };

	UE_LOG(LogTemp, Warning, TEXT("White : %d"), (int32)Color1);
	UE_LOG(LogTemp, Warning, TEXT("Blue : %d"), (int32)Color2);
	UE_LOG(LogTemp, Warning, TEXT("Red : %d"), (int32)Color3);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 IntBlack = EColor::Black;
	int32 IntRed = EColor::Red;
	int32 IntBlue = EColor::Blue;
	int32 IntGreen = EColor::Green;
	int32 IntWhite = EColor::White;
	int32 IntYellow = EColor::Yellow;

	UE_LOG(LogTemp, Warning, TEXT("EColor::Black : %d"), EColor::Black);
	UE_LOG(LogTemp, Warning, TEXT("EColor::Red : %d"), EColor::Red);
	UE_LOG(LogTemp, Warning, TEXT("EColor::Blue : %d"), EColor::Blue);
	UE_LOG(LogTemp, Warning, TEXT("EColor::Green : %d"), EColor::Green);
	UE_LOG(LogTemp, Warning, TEXT("EColor::White : %d"), EColor::White);
	UE_LOG(LogTemp, Warning, TEXT("EColor::Yellow : %d"), EColor::Yellow);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("Black : %d"), Black);
	UE_LOG(LogTemp, Warning, TEXT("Red : %d"), Red);
	UE_LOG(LogTemp, Warning, TEXT("Blue : %d"), Blue);
	UE_LOG(LogTemp, Warning, TEXT("Green : %d"), Green);
	UE_LOG(LogTemp, Warning, TEXT("White : %d"), White);
	UE_LOG(LogTemp, Warning, TEXT("Yellow : %d"), Yellow);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	// Blue = 3; // (X)

	EColor Color4 = static_cast<EColor>(5);
	UE_LOG(LogTemp, Warning, TEXT("Color4 : %d"), Color4);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	IntBlack = static_cast<EColor>(0);
	IntRed = static_cast<EColor>(1);
	IntBlue = static_cast<EColor>(2);
	IntGreen = static_cast<EColor>(3);
	IntWhite = static_cast<EColor>(4);
	IntYellow = static_cast<EColor>(5);

	UE_LOG(LogTemp, Warning, TEXT("IntBlack : %d"), IntBlack);
	UE_LOG(LogTemp, Warning, TEXT("IntRed : %d"), IntRed);
	UE_LOG(LogTemp, Warning, TEXT("IntBlue : %d"), IntBlue);
	UE_LOG(LogTemp, Warning, TEXT("IntGreen : %d"), IntGreen);
	UE_LOG(LogTemp, Warning, TEXT("IntWhite : %d"), IntWhite);
	UE_LOG(LogTemp, Warning, TEXT("IntYellow : %d"), IntYellow);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString StrBlack = Colors[EColor::Black];
	FString StrRed = Colors[EColor::Red];
	FString StrBlue = Colors[EColor::Blue];
	FString StrGreen = Colors[EColor::Green];
	FString StrWhite = Colors[EColor::White];
	FString StrYellow = Colors[EColor::Yellow];

	UE_LOG(LogTemp, Warning, TEXT("StrBlack : %s"), *StrBlack);
	UE_LOG(LogTemp, Warning, TEXT("StrRed : %s"), *StrRed);
	UE_LOG(LogTemp, Warning, TEXT("StrBlue : %s"), *StrBlue);
	UE_LOG(LogTemp, Warning, TEXT("StrGreen : %s"), *StrGreen);
	UE_LOG(LogTemp, Warning, TEXT("StrWhite : %s"), *StrWhite);
	UE_LOG(LogTemp, Warning, TEXT("StrYellow : %s"), *StrYellow);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	for (int i = 0; i < EColor::Max; i++)
	{
		EColor Color = static_cast<EColor>(i);
		FString StrName = Colors[i];

		UE_LOG(LogTemp, Warning, TEXT("Color : %d , StrName : %s"), Color, *StrName);
	}
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	EMonth Month = EMonth::July;

	switch (Month)
	{
	case EMonth::January:
	case EMonth::February:
	case EMonth::December:
		UE_LOG(LogTemp, Warning, TEXT("겨울"));
		break;
	case EMonth::March:
	case EMonth::April:
	case EMonth::May:
		UE_LOG(LogTemp, Warning, TEXT("봄"));
		break;
	case EMonth::June:
	case EMonth::July:
	case EMonth::August:
		UE_LOG(LogTemp, Warning, TEXT("여름"));
		break;
	case EMonth::September:
	case EMonth::October:
	case EMonth::Noverber:
		UE_LOG(LogTemp, Warning, TEXT("가을"));
		break;
	default:
		break;
	}
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	const UEnum* RainbowPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("ERainbow"), true);

	if (RainbowPtr != nullptr)
	{
		for (int32 i = 0; i < RainbowPtr->NumEnums(); i++)
		{
			ERainbow GetRainbowEnum = (ERainbow)(RainbowPtr->GetValueByIndex(i));
			FString RainbowEnum = RainbowPtr->GetNameByIndex(i).ToString();
			int32 RainbowValue = (int32)GetRainbowEnum;
			FString RainbowString = RainbowPtr->GetDisplayNameTextByIndex(static_cast<int32>(GetRainbowEnum)).ToString();
			UE_LOG(LogTemp, Warning, TEXT("Enum : %s, Value : %d, String : %s"), *RainbowEnum, RainbowValue, *RainbowString);
			FString RainbowAll = FString::Printf(TEXT("Enum : %s, Value : %d, String : %s"), *RainbowEnum, RainbowValue, *RainbowString);
			UE_LOG(LogTemp, Warning, TEXT("%s"), *RainbowAll);
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	const FString EnumString = *GetEnumDisplayNameToString(ERainbow::Blue);
	UE_LOG(LogTemp, Warning, TEXT("EnumString : %s"), *EnumString);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString EnumString1 = EnumToFStringA(ERainbow::Blue);
	UE_LOG(LogTemp, Warning, TEXT("EnumString1 : %s"), *EnumString1);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString EnumString2 = EnumToFStringA(EColor::Green);
	UE_LOG(LogTemp, Warning, TEXT("EnumString2 : %s"), *EnumString2);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));


}

// Called every frame
void AChap08_Enum::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AChap08_Enum::GetEnumDisplayNameToString(ERainbow EnumValue) const
{
	const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("ERainbow"), true);

	if (EnumPtr == nullptr)
	{
		return FString("Invalid");
	}

	return EnumPtr->GetDisplayNameTextByIndex(static_cast<int32>(EnumValue)).ToString();
}

