// Fill out your copyright notice in the Description page of Project Settings.

#include "BTService_Detect.h"
#include "ABAIController.h"
#include "ABCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"

UBTService_Detect::UBTService_Detect() {
	NodeName = TEXT("Detect");
	Interval = 1.0f;
}
void UBTService_Detect::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) {
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* ControllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (ControllingPawn == nullptr)
		return;

	UWorld* World = ControllingPawn->GetWorld();
	FVector Center = ControllingPawn->GetActorLocation();//�߰��� ��ġ
	float DetectRadius = 600.0f;//�ݰ�

	if (World == nullptr)
		return;

	TArray<FOverlapResult> OverlapResults;//������ ĳ���� ���� �����ϴ� �ڷᱸ��
	FCollisionQueryParams CollisionQueryParam(NAME_None, false, ControllingPawn);
	bool bResult = World->OverlapMultiByChannel(
		OverlapResults,
		Center,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(DetectRadius),
		CollisionQueryParam
	);

	if (bResult) {//�ֺ��� ĳ���Ͱ� ������
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(AABAIController::TargetKey, nullptr);
		//target�� null����
		for (const auto& OverlapResult : OverlapResults) {
			AABCharacter* ABCharacter = Cast<AABCharacter>(OverlapResult.GetActor());
			if (ABCharacter && ABCharacter->GetController()->IsPlayerController()) { // ����� �����ϴ� �Ÿ�
				// Target�� ABCharacter�� ����
				OwnerComp.GetBlackboardComponent()->SetValueAsObject(AABAIController::TargetKey, ABCharacter);

				// AI �ֺ��� ��� �� �׸���
				DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Green, false, 0.2f);

				// ĳ���� �ֺ��� �Ķ� �� �׸���
				DrawDebugPoint(World, ABCharacter->GetActorLocation(), 10.0f, FColor::Blue, false, 0.2f);

				// �̵� ��� ǥ��
				DrawDebugLine(World, ControllingPawn->GetActorLocation(), ABCharacter->GetActorLocation(), FColor::Blue, false, 0.2f);

				return; // ù ��°�� ������ �÷��̾� ĳ���͸� Ÿ������ �����ϰ� �Լ� ����
			}
		}
	}
	else {
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(AABAIController::TargetKey, nullptr);

	}

	DrawDebugSphere(World, Center, DetectRadius, 16, FColor::Red, false, 0.2f);
}


