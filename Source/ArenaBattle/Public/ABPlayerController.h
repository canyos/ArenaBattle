// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"


/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AABPlayerController();
	virtual void PostInitializeComponents() override;
	virtual void Possess(APawn* aPawn) override;

	class UABHUDWidget* GetHUDWidget() const;
	bool NPCKill(class AABCharacter* KilledNPC)const;
	void AddGameScore() const;
	void ChangeInputMode(bool GameMode = true);
	void ShowResultUI();
	class AABPlayerState* GetPlayerState() { return ABPlayerState; }

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABHUDWidget> HUDWidgetClass;

	virtual void SetupInputComponent() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABGameplayWidget> MenuWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABGameplayResultWidget> ResultWidgetClass;

private:
	void OnGamePause();

private:
	UPROPERTY()
		class UABHUDWidget* HUDWidget;
	UPROPERTY()
		class AABPlayerState* ABPlayerState;
	UPROPERTY()
		class UABGameplayWidget* MenuWidget;
	UPROPERTY()
		class UABGameplayResultWidget* ResultWidget;


	FInputModeGameOnly GameInputMode;
	FInputModeUIOnly UIInputMode;

};
