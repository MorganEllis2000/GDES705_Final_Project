// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/Tasks/BTT_ShadowAttack.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Codename_Lost/AI/WraithController.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Animation/AnimMontage.h"
#include "Codename_Lost/AI/ShadowCharacterController.h"
#include "Components/SphereComponent.h"

UBTT_ShadowAttack::UBTT_ShadowAttack()
{
	NodeName = TEXT("Shadow Attack");
}

void UBTT_ShadowAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
}

EBTNodeResult::Type UBTT_ShadowAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory); 

	if (OwnerComp.GetAIOwner() == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("No Owner"));
	}

	AActor* Actor = OwnerComp.GetOwner();
	APawn* Pawn = Cast<APawn>(OwnerComp.GetAIOwner()->GetPawn());
	AShadowCharacterController* ShadowController = Cast<AShadowCharacterController>(Pawn->GetController());
	AController* controller = Pawn->GetController();

	ACharacterController* Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	
	
	if (Character == nullptr && ShadowController == nullptr && Actor == nullptr) {
		return EBTNodeResult::Failed;
	}

	if (OwnerComp.GetAIOwner()->LineOfSightTo(Character))
	{
		
		if(Montage)
		{
			OwnerComp.GetAIOwner()->GetCharacter()->PlayAnimMontage(Montage);
			UE_LOG(LogTemp, Warning, TEXT("Playing montage"));
		} else
		{
			UE_LOG(LogTemp, Warning, TEXT("NO ANIM MONTAGE"))
		}
	}
	
	return EBTNodeResult::Succeeded;
}
