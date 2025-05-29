// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap15_TMap.h"

// Sets default values
AChap15_TMap::AChap15_TMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap15_TMap::BeginPlay()
{
	Super::BeginPlay();

	TMap<FString, int32> AnimalMap1;

	AnimalMap1.Add(TEXT("Kangaroo"), 1);
	AnimalMap1.Add(TEXT("Hippo"), 2);
	AnimalMap1.Add(TEXT("Rabbit"), 3);

	for (TPair<FString, int32> Animal : AnimalMap1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal Key : %s, Value : %d"), *Animal.Key, Animal.Value);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	AnimalMap1.Add(TEXT("Rabbit"), 4);

	for (TPair<FString, int32> Animal : AnimalMap1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal Key : %s, Value : %d"), *Animal.Key, Animal.Value);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	AnimalMap1.Add(TEXT("Panda"));

	for (TPair<FString, int32> Animal : AnimalMap1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal Key : %s, Value : %d"), *Animal.Key, Animal.Value);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	AnimalMap1.Emplace(TEXT("Tiger"), 6);

	for (TPair<FString, int32> Animal : AnimalMap1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal Key : %s, Value : %d"), *Animal.Key, Animal.Value);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TMap<FString, int32> AnimalMap2;
	AnimalMap2.Emplace(TEXT("Lion"), 7);
	AnimalMap2.Emplace(TEXT("Monkey"), 8);
	AnimalMap2.Emplace(TEXT("Snake"), 9);

	AnimalMap1.Append(AnimalMap2);

	for (TPair<FString, int32> Animal : AnimalMap1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal Key : %s, Value : %d"), *Animal.Key, Animal.Value);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	for (auto Animal = AnimalMap1.CreateConstIterator(); Animal; ++Animal)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal Key : %s, Value : %d"), *Animal.Key(), Animal.Value());
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 AnimalCount = AnimalMap1.Num();
	UE_LOG(LogTemp, Warning, TEXT("AnimalCount : %d"), AnimalCount);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	bool bHasKangaroo = AnimalMap1.Contains(TEXT("Kangaroo"));
	UE_LOG(LogTemp, Warning, TEXT("bHasKangaroo : %s"), bHasKangaroo ? TEXT("true") : TEXT("false"));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString SearchForKangaroo = TEXT("Kangaroo");
	if (bHasKangaroo)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열은 \"%s\"키를 포함합니다. "), *SearchForKangaroo);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열은 \"%s\"키를 포함하지 않습니다. "), *SearchForKangaroo);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	bool bHasEagle = AnimalMap1.Contains(TEXT("Eagle"));
	UE_LOG(LogTemp, Warning, TEXT("bHasEagle : %s"), bHasEagle ? TEXT("true") : TEXT("false"));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString SearchForEagle = TEXT("Eagle");
	if (bHasEagle)
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열은 \"%s\"키를 포함합니다. "), *SearchForEagle);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("StringArr4배열은 \"%s\"키를 포함하지 않습니다. "), *SearchForEagle);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 KangarooValue1 = AnimalMap1[SearchForKangaroo];
	UE_LOG(LogTemp, Warning, TEXT("KangarooValue1 : %d"), KangarooValue1);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32* KangarooPtr3 = AnimalMap1.Find(SearchForKangaroo);
	UE_LOG(LogTemp, Warning, TEXT("KangarooPtr3 : %#x"), KangarooPtr3);

	int32* EaglePtr4 = AnimalMap1.Find(SearchForEagle);
	UE_LOG(LogTemp, Warning, TEXT("EaglePtr4 : %#x"), EaglePtr4);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32* KangarooPtr5 = AnimalMap1.Find(SearchForKangaroo);

	if (KangarooPtr5 != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalMap1배열에는 \"%s\"키가 있습니다. "), *SearchForKangaroo);
		UE_LOG(LogTemp, Warning, TEXT("KangarooPtr5 : %#x"), KangarooPtr5);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalMap1배열에는 \"%s\"키가 없습니다. "), *SearchForKangaroo);
		UE_LOG(LogTemp, Warning, TEXT("KangarooPtr5 : %#x"), KangarooPtr5);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32* EaglePtr6 = AnimalMap1.Find(SearchForEagle);

	if (EaglePtr6 != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalMap1배열에는 \"%s\"키가 있습니다. "), *SearchForEagle);
		UE_LOG(LogTemp, Warning, TEXT("EaglePtr6 : %#x"), EaglePtr6);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalMap1배열에는 \"%s\"키가 없습니다. "), *SearchForEagle);
		UE_LOG(LogTemp, Warning, TEXT("EaglePtr6 : %#x"), EaglePtr6);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 SearchForValue1 = 1;
	const FString* KeyKangarooPtr = AnimalMap1.FindKey(SearchForValue1);

	if (KeyKangarooPtr != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값에 해당하는 키는 \"%s\"입니다. "), SearchForValue1, **KeyKangarooPtr);
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값에 해당하는 키가 없습니다. "), SearchForValue1);
	}

	int32 SearchForValue2 = 100;
	const FString* KeyEaglePtr = AnimalMap1.FindKey(SearchForValue2);

	if (KeyEaglePtr != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값에 해당하는 키는 \"%s\"입니다. "), SearchForValue2, **KeyEaglePtr);
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("%d의 값에 해당하는 키가 없습니다. "), SearchForValue2);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	AnimalMap1.Remove("Hippo");

	for (auto Animal = AnimalMap1.CreateConstIterator(); Animal; ++Animal)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal Key : %s, Value : %d"), *Animal.Key(), Animal.Value());
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TMap<FString, int32> AnimalMap3 = AnimalMap1;

	UE_LOG(LogTemp, Warning, TEXT("이전 Count : %d"), AnimalMap3.Num());
	AnimalMap3.Empty();
	UE_LOG(LogTemp, Warning, TEXT("이후 Count : %d"), AnimalMap3.Num());

	TMap<FString, int32> AnimalMap4 = AnimalMap1;
	UE_LOG(LogTemp, Warning, TEXT("이전 Count : %d"), AnimalMap4.Num());
	AnimalMap4.Reset();
	UE_LOG(LogTemp, Warning, TEXT("이후 Count : %d"), AnimalMap4.Num());

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	AnimalMap1.KeySort([](const FString& A, const FString& B) { return A.Len() < B.Len(); });

	for (auto Animal = AnimalMap1.CreateConstIterator(); Animal; ++Animal)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal Key : %s, Value : %d"), *Animal.Key(), Animal.Value());
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	AnimalMap1.ValueSort([](int32 A, int32 B) { return A > B; });

	for (auto Animal = AnimalMap1.CreateConstIterator(); Animal; ++Animal)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal Key : %s, Value : %d"), *Animal.Key(), Animal.Value());
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TMap<FString, int32> AnimalMap5 = AnimalMap1;

	UE_LOG(LogTemp, Warning, TEXT("Before AnimalMap5.Num() : %d"), AnimalMap5.Num());

	TMap<FString, int32> AnimalMap6;

	AnimalMap6 = MoveTemp(AnimalMap5);

	UE_LOG(LogTemp, Warning, TEXT("After AnimalMap5.Num() : %d"), AnimalMap5.Num());
	UE_LOG(LogTemp, Warning, TEXT("After AnimalMap6.Num() : %d"), AnimalMap6.Num());

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TMap<FString, int32> AnimalMap7;
	AnimalMap7.Reserve(10);

	for (int32 i = 0; i < 10; ++i)
	{
		AnimalMap7.Add(FString::Printf(TEXT("Animal%d"), i), i);
	}

	for (auto Animal = AnimalMap7.CreateConstIterator(); Animal; ++Animal)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal Key : %s, Value : %d"), *Animal.Key(), Animal.Value());
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));










	
}

// Called every frame
void AChap15_TMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

