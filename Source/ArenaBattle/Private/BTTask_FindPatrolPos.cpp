// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_FindPatrolPos.h"
#include "ABAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_FindPatrolPos::UBTTask_FindPatrolPos() {
	NodeName = TEXT("FindPatrolPos"); //�½�ũ �̸� �ٸ��ɷ� ǥ��
}

EBTNodeResult::Type UBTTask_FindPatrolPos::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {
	EBTNodeResult::Type Result = Super::ExecuteTask(OwnerComp, NodeMemory);

	auto ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();//�����ϴ� �� ��������
	if (ControllingPawn == nullptr)
		return EBTNodeResult::Failed;

	//�׺���̼� �ý��� ��������
	UNavigationSystem* NavSystem = UNavigationSystem::GetNavigationSystem(ControllingPawn->GetWorld());
	if (NavSystem == nullptr)
		return EBTNodeResult::Failed;

	//ó�� ��ġ
	FVector Origin = OwnerComp.GetBlackboardComponent()->GetValueAsVector(AABAIController::HomePosKey);
	FNavLocation NextPatrol; //���� ���

	if (NavSystem->GetRandomPointInNavigableRadius(Origin, 500.0f, NextPatrol)) {
		//���� ����Ʈ ���������ϸ� �� ���� �� ���� ��ȯ
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(AABAIController::PatrolPosKey, NextPatrol.Location);
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
