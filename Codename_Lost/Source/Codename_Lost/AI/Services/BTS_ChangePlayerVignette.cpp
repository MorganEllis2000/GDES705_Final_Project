// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/Services/BTS_ChangePlayerVignette.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "Codename_Lost/AI/WraithAIController.h"
#include "Codename_Lost/AI/ShadowAIController.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Components/PostProcessComponent.h"

UBTS_ChangePlayerVignette::UBTS_ChangePlayerVignette()
{
	NodeName = "Change Player Vignette";
}

void UBTS_ChangePlayerVignette::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	float DistToPlayer = OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsFloat("DistFromPlayer");
	ACharacterController* Player = Cast<ACharacterController>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if(Cast<AWraithAIController>(OwnerComp.GetAIOwner()))
	{
		AWraithAIController* Wraith = Cast<AWraithAIController>(OwnerComp.GetAIOwner());
		if(DistToPlayer > 500)
		{
			if(Player)
			{
				//Player->PostProcessComponent->Settings.VignetteIntensity = 10.f;
			}
		}
	} else if(Cast<AShadowAIController>(OwnerComp.GetAIOwner()))
	{
		AShadowAIController* Shadow = Cast<AShadowAIController>(OwnerComp.GetAIOwner());
		if(DistToPlayer > 500)
		{
			if(Player)
			{

			}
		}
	}
}
