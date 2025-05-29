// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap16_TSet.h"

// Sets default values
AChap16_TSet::AChap16_TSet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap16_TSet::BeginPlay()
{
	Super::BeginPlay();

	TSet<FString> AnimalSet1;
	AnimalSet1.Add(TEXT("Kangaroo"));
	AnimalSet1.Add(TEXT("Hippo"));
	AnimalSet1.Add(TEXT("Rabbit"));

	for (FString Animal : AnimalSet1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal : %s"), *Animal);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	AnimalSet1.Add(TEXT("Panda"));
	AnimalSet1.Add(TEXT("Tiger"));

	for (FString Animal : AnimalSet1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal : %s"), *Animal);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	AnimalSet1.Emplace(TEXT("Lion"));

	for (FString Animal : AnimalSet1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal : %s"), *Animal);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TSet<FString> AnimalSet2;
	AnimalSet2.Emplace(TEXT("Monkey"));
	AnimalSet2.Emplace(TEXT("Snake"));
	AnimalSet2.Emplace(TEXT("Wolf"));
	AnimalSet2.Emplace(TEXT("Cheetah"));

	AnimalSet1.Append(AnimalSet2);

	for (FString Animal : AnimalSet1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal : %s"), *Animal);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 AnimalSet1Count = AnimalSet1.Num();

	UE_LOG(LogTemp, Warning, TEXT("AnimalSet1Count : %d"), AnimalSet1Count);


	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString SearchForKangaroos = TEXT("Kangaroo");
	bool bHasKangaroo = AnimalSet1.Contains(SearchForKangaroos);
	FString SearchForEagle = TEXT("Eagle");
	bool bHasEagle = AnimalSet1.Contains(SearchForEagle);

	UE_LOG(LogTemp, Warning, TEXT("bHasKangaroo : %d"), bHasKangaroo);
	UE_LOG(LogTemp, Warning, TEXT("bHasKangaroo : %s"), bHasKangaroo ? TEXT("true") : TEXT("false"));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	UE_LOG(LogTemp, Warning, TEXT("bHasEagle : %d"), bHasEagle);
	UE_LOG(LogTemp, Warning, TEXT("bHasEagle : %s"), bHasEagle ? TEXT("true") : TEXT("false"));

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (bHasKangaroo)
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalSet1컨테이너에는 \"%s\"문자열을 포함합니다. "), *SearchForKangaroos);
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalSet1컨테이너에는 \"%s\"문자열이 없습니다. "), *SearchForKangaroos);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (bHasEagle)
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalSet1컨테이너에는 \"%s\"문자열을 포함합니다. "), *SearchForEagle);
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalSet1컨테이너에는 \"%s\"문자열이 없습니다. "), *SearchForEagle);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FString SearchForKangaroo1 = TEXT("Kangaroo");
	FString SearchForEagle1 = TEXT("Eagle");
	FString* KangarooPtr1 = AnimalSet1.Find(SearchForKangaroo1);
	FString* EaglePtr1 = AnimalSet1.Find(SearchForEagle1);

	UE_LOG(LogTemp, Warning, TEXT("KangarooPtr1 : %#x"), KangarooPtr1);
	UE_LOG(LogTemp, Warning, TEXT("EaglePtr1 : %#x"), EaglePtr1);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (KangarooPtr1 != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalSet1컨테이너는 \"%s\"키를 포함합니다. "), *SearchForKangaroo1);
		UE_LOG(LogTemp, Warning, TEXT("KangarooPtr1 : %#x"), KangarooPtr1);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalSet1컨테이너는 \"%s\"키를 포함하지 않습니다. "), *SearchForKangaroo1);
		UE_LOG(LogTemp, Warning, TEXT("KangarooPtr1 : %#x"), KangarooPtr1);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	if (EaglePtr1 != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalSet1컨테이너는 \"%s\"키를 포함합니다. "), *SearchForEagle1);
		UE_LOG(LogTemp, Warning, TEXT("EaglePtr1 : %#x"), EaglePtr1);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimalSet1컨테이너는 \"%s\"키를 포함하지 않습니다. "), *SearchForEagle1);
		UE_LOG(LogTemp, Warning, TEXT("EaglePtr1 : %#x"), EaglePtr1);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TArray<FString> AnimalArray1 = AnimalSet1.Array();

	for (FString Animal : AnimalArray1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal TArray : %s"), *Animal);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 RemovedAmountHippo = AnimalSet1.Remove(TEXT("Hippo"));

	UE_LOG(LogTemp, Warning, TEXT("RemovedAmountHippo : %d"), RemovedAmountHippo);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	int32 RemovedAmountEagle = AnimalSet1.Remove(TEXT("Eagle"));

	UE_LOG(LogTemp, Warning, TEXT("RemovedAmountEagle : %d"), RemovedAmountEagle);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TSet<FString> AnimalSet3 = AnimalSet1;

	UE_LOG(LogTemp, Warning, TEXT("이전 AnimalSet3.Num() : %d"), AnimalSet3.Num());
	AnimalSet3.Empty();

	UE_LOG(LogTemp, Warning, TEXT("이후 AnimalSet3.Num() : %d"), AnimalSet3.Num());

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	AnimalSet1.Sort([](const FString& A, const FString& B) { return A < B; });

	for (FString Animal : AnimalSet1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal : %s"), *Animal);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	AnimalSet1.Sort([](const FString& A, const FString& B) { return A.Len() < B.Len(); });
 
	for (FString Animal : AnimalSet1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal : %s"), *Animal);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	AnimalSet1.Reset();
	AnimalSet1.Reserve(10);
	UE_LOG(LogTemp, Warning, TEXT("이전 AnimalSet1 Count : %d"), AnimalSet1.Num());

	for (int32 i = 0; i < 10; ++i)
	{
		AnimalSet1.Add(FString::Printf(TEXT("Animal%d"), i));
	}

	for (FString Animal : AnimalSet1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Animal : %s"), *Animal);
	}

	UE_LOG(LogTemp, Warning, TEXT("이후 AnimalSet1 Count : %d"), AnimalSet1.Num());

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TSet<FString> AnimalSet4;
	AnimalSet4.Emplace(TEXT("Kangaroo"));
	AnimalSet4.Emplace(TEXT("Hippo"));
	AnimalSet4.Emplace(TEXT("Rabbit"));
	AnimalSet4.Emplace(TEXT("Panda"));
	AnimalSet4.Emplace(TEXT("Tiger"));
	AnimalSet4.Emplace(TEXT("Lion"));
	AnimalSet4.Emplace(TEXT("Monkey"));
	AnimalSet4.Emplace(TEXT("Snake"));
	AnimalSet4.Emplace(TEXT("Wolf"));

	TSet<FString> AnimalSet5;
	AnimalSet5.Emplace(TEXT("Monkey"));
	AnimalSet5.Emplace(TEXT("Snake"));
	AnimalSet5.Emplace(TEXT("Wolf"));
	AnimalSet5.Emplace(TEXT("Cheetah"));
	AnimalSet5.Emplace(TEXT("Horse"));
	AnimalSet5.Emplace(TEXT("Hamster"));
	AnimalSet5.Emplace(TEXT("Penguin"));
 
	TSet<FString> AnimalSet6 = AnimalSet4.Union(AnimalSet5);

	for (FString Animal : AnimalSet6)
	{
		UE_LOG(LogTemp, Warning, TEXT("합집합 : %s"), *Animal);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TSet<FString> AnimalSet7 = AnimalSet4.Intersect(AnimalSet5);

	for (FString Animal : AnimalSet7)
	{
		UE_LOG(LogTemp, Warning, TEXT("교집합 : %s"), *Animal);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	TSet<FString> AnimalSet8 = AnimalSet4.Difference(AnimalSet5);

	for (FString Animal : AnimalSet8)
	{
		UE_LOG(LogTemp, Warning, TEXT("차집합 : %s"), *Animal);
	}

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

}

// Called every frame
void AChap16_TSet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

