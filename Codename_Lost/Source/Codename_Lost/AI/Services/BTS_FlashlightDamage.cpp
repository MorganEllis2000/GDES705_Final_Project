// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/Services/BTS_FlashlightDamage.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Codename_Lost/AI/WraithController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"


UBTS_FlashlightDamage::UBTS_FlashlightDamage()
{
	NodeName = TEXT("Flashlight Damage Ammount");
}

void UBTS_FlashlightDamage::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	APawn* WraithPawn = Cast<APawn>(OwnerComp.GetAIOwner()->GetPawn());
	AWraithController* WraithController = Cast<AWraithController>(WraithPawn->GetController());
	
	
}