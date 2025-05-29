// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Chap08_Enum.generated.h"

//enum EColor
//{
//    Black,  // 0
//    Red,    // 1
//    Blue,   // 2
//    Green,  // 3
//    White,  // 4
//    Yellow, // 5
//    Max,    // 6    
//}; 

//enum EColor
//{
//    Black = -3,
//    Red,    // -2
//    Blue,   // -1
//    Green = 7,
//    White = 7,
//    Yellow, // 8
//    Max,
//};

enum EColor
{
    Black,  // 0
    Red,    // 1
    Blue,   // 2
    Green,  // 3
    White,  // 4
    Yellow, // 5
    Max,    // 6    
}; 

enum EMonth
{
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    Noverber,
    December,
    // Max,
};  

UENUM(BlueprintType)
enum class ERainbow : uint8
{
    Red UMETA(DisplayName = "Red"),
    Orange UMETA(DisplayName = "Orange"),
    Yellow UMETA(DisplayName = "Yellow"),
    Green UMETA(DisplayName = "Green"),
    Blue UMETA(DisplayName = "Blue"),
    Indigo UMETA(DisplayName = "Indigo"),
    Purple UMETA(DisplayName = "Purple"),
};

UENUM(BlueprintType)
enum class ERainbowOther : uint8
{
    Red UMETA(DisplayName = "Red"),
    Orange UMETA(DisplayName = "Orange"),
    Yellow UMETA(DisplayName = "Yellow"),
    Green UMETA(DisplayName = "Green"),
    Blue UMETA(DisplayName = "Blue"),
    Indigo UMETA(DisplayName = "Indigo"),
    Purple UMETA(DisplayName = "Purple"),
};



UCLASS()
class UNREALCPPFORGAME_API AChap08_Enum : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChap08_Enum();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<FString> Colors = { TEXT("Black"), TEXT("Red"), TEXT("Blue"), TEXT("Green"), TEXT("White"), TEXT("Yellow") };

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Status, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ERainbow> Rainbow;

    FString GetEnumDisplayNameToString(ERainbow EnumValue) const;

    /** https://forums.unrealengine.com/t/conversion-of-enum-to-string/337869/17 */

    template<typename T>
    FString EnumToFStringA(T Enum)
    {
#if !WITH_EDITOR
        return "";
#else
        static FString EnumName;
        static bool bEnumNameInit = false;

        // Init it once
        if (bEnumNameInit == false)
        {
            bEnumNameInit = true;

            FString FunctionSignature(__FUNCSIG__);
            UE_LOG(LogTemp, Display, TEXT("Enum funcsig: [%s]"), *FunctionSignature);

            int32 FirstIDX = FunctionSignature.Find(TEXT("(enum "), ESearchCase::CaseSensitive, ESearchDir::FromEnd);

            if (FirstIDX != INDEX_NONE)
            {
                FirstIDX = FirstIDX + 6;
                int32 LastIDX = (FunctionSignature.Len() - 1);

                if (FunctionSignature.IsValidIndex(FirstIDX) && FunctionSignature.IsValidIndex(LastIDX) && FirstIDX < LastIDX)
                {
                    EnumName = FunctionSignature.Mid(FirstIDX, LastIDX - FirstIDX);
                    UE_LOG(LogTemp, Display, TEXT("Enum name: [%s]"), *EnumName);
                }
            }
        }

        if (EnumName.IsEmpty())
            return FString("ENUM_Invalid");

        // const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, (const TCHAR *)(typeid(T).name()), true);
        const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, *EnumName, true);
        if (!EnumPtr)
            return FString("ENUM_Invalid");

#pragma warning(disable: 4996)
        return EnumPtr->GetDisplayNameTextByIndex(static_cast<int32>(Enum)).ToString();

#endif
    }


};
