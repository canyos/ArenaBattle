// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "Components/ActorComponent.h"
#include "ABCharacterStatComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnHPIsZeroDelegate);
DECLARE_MULTICAST_DELEGATE(FOnHPChangedDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ARENABATTLE_API UABCharacterStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UABCharacterStatComponent();
	void SetNewLevel(int32 NewLevel);
	void SetDamage(float NewDamage);
	float GetAttack();
	FOnHPIsZeroDelegate OnHPIsZero;

	void SetHP(float NewHP);
	float GetHPRatio();
	FOnHPChangedDelegate OnHPChanged;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void InitializeComponent() override;
	
private:
	struct FABCharacterData* CurrentStatData = nullptr;
	UPROPERTY(EditInstanceOnly, Category = stat, Meta = (AllowPricvateAccess = true))
		int32 Level;
	UPROPERTY(Transient, VisibleAnywhere, Category = Stat, Meta = (AllowPricvateAccess = true))
		float CurrentHP;
	
};
