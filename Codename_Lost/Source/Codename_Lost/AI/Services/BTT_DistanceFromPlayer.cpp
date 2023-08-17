// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/Services/BTT_DistanceFromPlayer.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Codename_Lost/AI/WraithController.h"
#include "Components/AudioComponent.h"

void UBTT_DistanceFromPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	APawn* WraithPawn = Cast<APawn>(OwnerComp.GetAIOwner()->GetPawn());
	AWraithController* WraithController = Cast<AWraithController>(OwnerComp.GetAIOwner()->GetCharacter());
	ACharacterController* Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	
	if(Character)
	{
		float dist = FVector::Dist(OwnerComp.GetAIOwner()->GetCharacter()->GetActorLocation(), Character->GetActorLocation());
		OwnerComp.GetBlackboardComponent()->SetValueAsFloat(GetSelectedBlackboardKey(), dist);
	} else
	{
		UE_LOG(LogTemp, Warning, TEXT("NO PLAYER FOUND"));
	}

}
