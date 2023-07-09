// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "BTS_SetPatrolLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "Codename_Lost/AI/WraithController.h"

UBTS_SetPatrolLocation::UBTS_SetPatrolLocation()
{
	NodeName = TEXT("Update New Patrol Target Location");
	//APawn* WraithPawn = Cast<APawn>(OwnerComp.GetAIOwner()->GetPawn());
}

void UBTS_SetPatrolLocation::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	
	//AWraithController* OwnerController = Cast<AWraithController>(OwnerComp.GetOwner());
	//APawn* WraithPawn = Cast<APawn>(OwnerComp.GetAIOwner()->GetPawn());
	//float DistFromWraithToPatrolPoint = FVector::Dist(WraithPawn->GetActorLocation(), OwnerController->CurrentPatrolPointLocationd);

	//if (DistFromWraithToPatrolPoint < 50.f) {
	//	OwnerController->CurrentPatrolPointLocation = OwnerController->PatrolPoints[FMath::RandRange(0, PatrolPoints.Num())]->GetActorLocation()
	//	OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), OwnerController->CurrentPatrolPointLocationd);
	//}

	

	
}
