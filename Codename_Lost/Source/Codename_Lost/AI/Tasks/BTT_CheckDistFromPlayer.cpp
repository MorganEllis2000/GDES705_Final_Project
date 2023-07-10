// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_lost/AI/Tasks/BTT_CheckDistFromPlayer.h"
#include "AIController.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Kismet/GameplayStatics.h"

UBTT_CheckDistFromPlayer::UBTT_CheckDistFromPlayer()
{
	NodeName = TEXT("Check Distance Between Player");
}

void UBTT_CheckDistFromPlayer::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

}

EBTNodeResult::Type UBTT_CheckDistFromPlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APawn* WraithPawn = Cast<APawn>(OwnerComp.GetAIOwner()->GetPawn());
	ACharacterController* Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	DistBtwnWraithAndPlayer = FVector::Dist(WraithPawn->GetActorLocation(), Character->GetActorLocation());

	if(DistBtwnWraithAndPlayer < 50.f)
	{
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
