// Fill out your copyright notice in the Description page of Project Settings.

#include "ABCharacterStatComponent.h"
#include "ABGameInstance.h"

// Sets default values for this component's properties
UABCharacterStatComponent::UABCharacterStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	bWantsInitializeComponent = true;
	// ...
	Level = 1;
}


void UABCharacterStatComponent::SetNewLevel(int32 NewLevel)
{
	auto ABGameInstance = Cast<UABGameInstance>
		(UGameplayStatics::GetGameInstance(GetWorld()));
	ABCHECK(ABGameInstance != nullptr);
	CurrentStatData = ABGameInstance->GetABCharacterData(NewLevel);
	if (CurrentStatData != nullptr) {
		Level = NewLevel;
		SetHP(CurrentStatData->MaxHP);
		CurrentHP = CurrentStatData->MaxHP;
	}
	else {
		ABLOG(Error, TEXT("Level (%d) data doesn't exist"), NewLevel);
	}
}

void UABCharacterStatComponent::SetDamage(float NewDamage)
{
	ABCHECK(CurrentStatData != nullptr);
	SetHP(FMath::Clamp<float>
		(CurrentHP - NewDamage, 0.0f, CurrentStatData->MaxHP));
}

float UABCharacterStatComponent::GetAttack()
{
	ABCHECK(CurrentStatData != nullptr, 0.0f);
	return CurrentStatData->Attack;
}

void UABCharacterStatComponent::SetHP(float NewHP)
{
	CurrentHP = NewHP;
	OnHPChanged.Broadcast();
	if (CurrentHP < KINDA_SMALL_NUMBER) {
		CurrentHP = 0.0f;
		OnHPIsZero.Broadcast();
	}
}

float UABCharacterStatComponent::GetHPRatio()
{
	ABCHECK(nullptr  != CurrentStatData, 0.0f);
	return (CurrentStatData->MaxHP < KINDA_SMALL_NUMBER) ? 0.0f : 
		(CurrentHP / CurrentStatData->MaxHP);
}

// Called when the game starts
void UABCharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();
	SetNewLevel(Level);
	// ...
	
}

void UABCharacterStatComponent::InitializeComponent()
{
	Super::InitializeComponent();
}



