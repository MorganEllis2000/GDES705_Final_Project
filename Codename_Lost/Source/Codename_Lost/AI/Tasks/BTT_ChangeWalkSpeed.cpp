// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/Tasks/BTT_ChangeWalkSpeed.h"
#include "Codename_Lost/AI/WraithController.h"
#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"

UBTT_ChangeWalkSpeed::UBTT_ChangeWalkSpeed()
{
	NodeName = "Change Wraith Walk Speed";
}

EBTNodeResult::Type UBTT_ChangeWalkSpeed::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//AWraithController* WraithController = Cast<AWraithController>(OwnerComp.GetAIOwner()->GetCharacter());
	//WraithController->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;

	OwnerComp.GetAIOwner()->GetCharacter()->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	return EBTNodeResult::Succeeded;
}
