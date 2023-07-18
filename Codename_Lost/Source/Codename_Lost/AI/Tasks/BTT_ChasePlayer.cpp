// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/Tasks/BTT_ChasePlayer.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Codename_Lost/AI/WraithAIController.h"
#include "Codename_Lost/AI/WraithController.h"


UBTT_ChasePlayer::UBTT_ChasePlayer()
{
	NodeName = TEXT("Chase Player");
}

EBTNodeResult::Type UBTT_ChasePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//AWraithAIController* const AIController = Cast<AWraithAIController>(OwnerComp.GetAIOwner());
	AIController = OwnerComp.GetAIOwner();
	FVector const PlayerLocation = AIController->GetBlackboardComponent()->GetValueAsVector(TEXT("PlayerLocation"));

	UAIBlueprintHelperLibrary::SimpleMoveToLocation(AIController, PlayerLocation);
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}
