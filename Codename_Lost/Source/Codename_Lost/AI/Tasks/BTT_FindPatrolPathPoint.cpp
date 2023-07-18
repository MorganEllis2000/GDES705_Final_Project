// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "BTT_FindPatrolPathPoint.h"
#include "Codename_Lost/AI/WraithAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Codename_Lost/AI/ShadowAIController.h"
#include "Codename_Lost/AI/ShadowCharacterController.h"
#include "Codename_Lost/AI/WraithController.h"

UBTT_FindPatrolPathPoint::UBTT_FindPatrolPathPoint()
{
	NodeName = TEXT("Find Patrol Path Point");
}

EBTNodeResult::Type UBTT_FindPatrolPathPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	/*

	AWraithController* const WraithController = Cast<AWraithController>(WraithAIController->GetPawn());
	FVector const PatrolPoint = WraithController->GetPatrolPath()->GetPatrolPoint(index);*/

	if(Cast<AWraithController>(OwnerComp.GetAIOwner()->GetPawn()))
	{
		AWraithAIController* const WraithAIController = Cast<AWraithAIController>(OwnerComp.GetAIOwner());
		int const index = WraithAIController->GetBlackboardComponent()->GetValueAsInt(TEXT("PatrolPathIndex"));

		AWraithController* const WraithController = Cast<AWraithController>(WraithAIController->GetPawn());
		FVector const PatrolPoint = WraithController->GetPatrolPath()->GetPatrolPoint(index);

		FVector const GlobalPoint = WraithController->GetPatrolPath()->GetActorTransform().TransformPosition(PatrolPoint);

		WraithAIController->GetBlackboardComponent()->SetValueAsVector(TEXT("PatrolLocation"), GlobalPoint);
		
		UE_LOG(LogTemp, Warning, TEXT("Wraith"));
	} else if(Cast<AShadowCharacterController>(OwnerComp.GetAIOwner()->GetPawn()))
	{
		AShadowAIController* const ShadowAIController = Cast<AShadowAIController>(OwnerComp.GetAIOwner());
		int const index = ShadowAIController->GetBlackboardComponent()->GetValueAsInt(TEXT("PatrolPathIndex"));

		AShadowCharacterController* const ShadowCharacterController = Cast<AShadowCharacterController>(ShadowAIController->GetPawn());
		FVector const PatrolPoint = ShadowCharacterController->GetPatrolPath()->GetPatrolPoint(index);

		FVector const GlobalPoint = ShadowCharacterController->GetPatrolPath()->GetActorTransform().TransformPosition(PatrolPoint);

		ShadowAIController->GetBlackboardComponent()->SetValueAsVector(TEXT("PatrolLocation"), GlobalPoint);
		
		UE_LOG(LogTemp, Warning, TEXT("Shadow"));
	}
	
	

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}
