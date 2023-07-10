// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/Services/BTT_DistanceFromPlayer.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"

void UBTT_DistanceFromPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	APawn* WraithPawn = Cast<APawn>(OwnerComp.GetAIOwner()->GetPawn());
	ACharacterController* Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	float DistBtwnWraithAndPlayer = FVector::Dist(WraithPawn->GetActorLocation(), Character->GetActorLocation());
	UE_LOG(LogTemp, Warning, TEXT("%f"), DistBtwnWraithAndPlayer);
	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(GetSelectedBlackboardKey(), DistBtwnWraithAndPlayer);
	
}
