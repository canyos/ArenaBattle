// Fill out your copyright notice in the Description page of Project Settings.

#include "ABPlayerController.h"


void AABPlayerController::PostInitializeComponents() {
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}
void AABPlayerController::Possess(APawn * aPawn)
{
	ABLOG_S(Warning);
	Super::Possess(aPawn);
}

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();
	FInputModeGameOnly InputMode; //UI를 배제하고 게임에게만 입력전달
	SetInputMode(InputMode);
}
