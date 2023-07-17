// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/Tasks/BTT_TeleportToRandomLocation.h"
#include "AIController.h"
#include "Codename_Lost/AI/WraithController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"

UBTT_TeleportToRandomLocation::UBTT_TeleportToRandomLocation()
{
	NodeName = TEXT("Teleport To Random Location");
}

EBTNodeResult::Type UBTT_TeleportToRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AWraithController* WraithController = Cast<AWraithController>(OwnerComp.GetAIOwner()->GetCharacter());
	UNavigationSystemV1* const nav_sys = UNavigationSystemV1::GetCurrent(GetWorld());
	ACharacterController* Character = Cast<ACharacterController>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	FVector StartPosition = WraithController->GetActorLocation();
	FNavLocation EndPosition = FNavLocation(StartPosition);
	nav_sys->GetRandomReachablePointInRadius(StartPosition, 5000.f, EndPosition);

	while (FVector::Dist(EndPosition.Location, Character->GetActorLocation()) < 3000.f)
	{
		nav_sys->GetRandomReachablePointInRadius(StartPosition, 5000.f, EndPosition);
	}

	//WraithController->SetActorLocation(EndPosition.Location);

	//WraithController->GetCharacterMovement()->MaxWalkSpeed = 1000;
	//UAIBlueprintHelperLibrary::SimpleMoveToLocation(OwnerComp.GetAIOwner(), EndPosition.Location);

	OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), EndPosition.Location);
	
	return EBTNodeResult::Succeeded;
	
}
