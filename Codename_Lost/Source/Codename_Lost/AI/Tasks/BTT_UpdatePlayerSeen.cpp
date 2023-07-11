// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/Tasks/BTT_UpdatePlayerSeen.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTT_UpdatePlayerSeen::UBTT_UpdatePlayerSeen()
{
	NodeName = TEXT("Set Player Seen");
}

EBTNodeResult::Type UBTT_UpdatePlayerSeen::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), true);
	return EBTNodeResult::Succeeded;
}
