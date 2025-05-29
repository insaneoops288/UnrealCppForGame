// Fill out your copyright notice in the Description page of Project Settings.


#include "Chap09_Struct.h"

// Sets default values
AChap09_Struct::AChap09_Struct()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChap09_Struct::BeginPlay()
{
	Super::BeginPlay();
	
	int32 IntValue1 = 3;
	UE_LOG(LogTemp, Warning, TEXT("IntValue1 값 : %d, IntValue1 주소 : %#x"), IntValue1, &IntValue1);

	int32* IntPtr1 = &IntValue1;
	UE_LOG(LogTemp, Warning, TEXT("IntPtr1 값 : %d, IntPtr1 주소 : %#x"), *IntPtr1, IntPtr1);

	int32& IntRef1 = IntValue1;
	UE_LOG(LogTemp, Warning, TEXT("IntRef1 값 : %d, IntRef1 주소 : %#x"), IntRef1, &IntRef1);

	int32 IntValue2 = *IntPtr1;
	UE_LOG(LogTemp, Warning, TEXT("IntValue2 값 : %d, IntValue2 주소 : %#x"), IntValue2, &IntValue2);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FStudentScore Stu0;

	FStudentScore Stu1;
	Stu1.Name = TEXT("철수");
	Stu1.Math = 90;
	Stu1.Korean = 95;
	Stu1.English = 85;
	Stu1.History = 90;

	FStudentScore Stu2 = { TEXT("철수"), 90, 80, 95, 75 };
	FStudentScore Stu3 = { TEXT("영희"), 95, 80, 90, 90 };

	UE_LOG(LogTemp, Warning, TEXT("Stu2.Name : %s, Stu2.Math : %d, Stu2.Korean : %d, Stu2.English : %d, Stu2.History : %d"),
		*Stu2.Name, Stu2.Math, Stu2.Korean, Stu2.English, Stu2.History);

	UE_LOG(LogTemp, Warning, TEXT("Stu3.Name : %s, Stu3.Math : %d, Stu3.Korean : %d, Stu3.English : %d, Stu3.History : %d"),
		*Stu3.Name, Stu3.Math, Stu3.Korean, Stu3.English, Stu3.History);

	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FStudentScore Stu4 = FStudentScore{ TEXT("영철"), 90, 80, 95, 75 };
	FStudentScore Stu5 = FStudentScore{ TEXT("민준"), 95, 80, 90, 90 };

	UE_LOG(LogTemp, Warning, TEXT("Stu4.Name : %s, Stu4.Math : %d, Stu4.Korean : %d, Stu4.English : %d, Stu4.History : %d"),
		*Stu4.Name, Stu4.Math, Stu4.Korean, Stu4.English, Stu4.History);

	UE_LOG(LogTemp, Warning, TEXT("Stu5.Name : %s, Stu5.Math : %d, Stu5.Korean : %d, Stu5.English : %d, Stu5.History : %d"),
		*Stu5.Name, Stu5.Math, Stu5.Korean, Stu5.English, Stu5.History);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	SetStudentInfo(Stu4);
	SetStudentInfo(Stu5);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FSchool School1 = { TEXT("서울"), {1, TEXT("민준")} };

	UE_LOG(LogTemp, Warning, TEXT("학교 위치 : %s"), *School1.Location);
	UE_LOG(LogTemp, Warning, TEXT("학생 번호 : %d, 학생 이름 : %s"), School1.Stu.Number, *School1.Stu.Name);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FStudentScore Stu6;
	UE_LOG(LogTemp, Warning, TEXT("Each %d, %d, %d, %d, %d"),
		sizeof(Stu6.Name), sizeof(Stu6.Math), sizeof(Stu6.Korean), sizeof(Stu6.English), sizeof(Stu6.History));

	UE_LOG(LogTemp, Warning, TEXT("Total : %d"), sizeof(Stu6));
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FStudentScore Stu7 = { TEXT("민준"), 90, 80, 95, 75 };

	UE_LOG(LogTemp, Warning, TEXT("Stu7.Name : %s, Stu7.Math : %d, Stu7.Korean : %d, Stu7.English : %d, Stu7.History : %d"),
		*Stu7.Name, Stu7.Math, Stu7.Korean, Stu7.English, Stu7.History);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FStudentScore Stu8;
	Stu8.Name = TEXT("지훈");
	Stu8.Math = 90;
	Stu8.Korean = 95;
	Stu8.English = 100;
	Stu8.History = 95;

	UE_LOG(LogTemp, Warning, TEXT("Stu8.Name : %s, Stu8.Math : %d, Stu8.Korean : %d, Stu8.English : %d, Stu8.History : %d"),
		*Stu8.Name, Stu8.Math, Stu8.Korean, Stu8.English, Stu8.History);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FAnimal Animal1 = { 5, 20 };
	ShowAnimal(&Animal1);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	ShowAnimal(Animal1);
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

	FFruit Fruit1 = { TEXT("사과"), 100 };
	FFruit FruitArray[] = { {TEXT("키위"), 200}, {TEXT("바나나"), 300} };
	UE_LOG(LogTemp, Warning, TEXT("<-------------------------------------------->"));

}

// Called every frame
void AChap09_Struct::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AChap09_Struct::SetStudentInfo(FStudentScore Stu)
{
	UE_LOG(LogTemp, Warning, TEXT("Stu.Name : %s, Stu.Math : %d, Stu.Korean : %d, Stu.English : %d, Stu.History : %d"),
		*Stu.Name, Stu.Math, Stu.Korean, Stu.English, Stu.History);
}

void AChap09_Struct::ShowAnimal(FAnimal* Animal)
{
	UE_LOG(LogTemp, Warning, TEXT("FamilyCount : %d, ToothCount : %d"), Animal->FamilyCount, Animal->ToothCount);
	UE_LOG(LogTemp, Warning, TEXT("FamilyCount : %d, ToothCount : %d"), (*Animal).FamilyCount, (*Animal).ToothCount);
	// UE_LOG(LogTemp, Warning, TEXT("FamilyCount : %d, ToothCount : %d"), *Animal.FamilyCount, *Animal.ToothCount); 
}

void AChap09_Struct::ShowAnimal(FAnimal& Animal)
{
	UE_LOG(LogTemp, Warning, TEXT("FamilyCount : %d, ToothCount : %d"), Animal.FamilyCount, Animal.ToothCount);
}

