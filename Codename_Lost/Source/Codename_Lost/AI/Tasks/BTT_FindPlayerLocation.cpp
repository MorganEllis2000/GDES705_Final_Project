// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "BTT_FindPlayerLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Codename_Lost/AI/WraithAIController.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"

UBTT_FindPlayerLocation::UBTT_FindPlayerLocation(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Find Player Location");
}

EBTNodeResult::Type UBTT_FindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory)
{
	// get player character and the NPC's controller
	ACharacterController* const player = Cast<ACharacterController>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	auto const cont = Cast<AWraithAIController>(owner_comp.GetAIOwner());

	// get player location to use as an origin
	FVector const player_location = player->GetActorLocation();
	cont->GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), player_location);


	// finish with success
	FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}
