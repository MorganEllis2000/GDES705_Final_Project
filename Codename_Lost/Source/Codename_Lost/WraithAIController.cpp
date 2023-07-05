// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "WraithAIController.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

void AWraithAIController::BeginPlay()
{
	Super::BeginPlay();
	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	
	if (AIBehaviorTree != nullptr) {
		RunBehaviorTree(AIBehaviorTree);

		GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
		GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
	}
}


void AWraithAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	////MoveToActor(PlayerPawn, 200);

	//if (LineOfSightTo(PlayerPawn)) {
	//	GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
	//	GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnowPlayerLoc"), PlayerPawn->GetActorLocation());
	//}
	//else {
	//	GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));
	//}
}

void AWraithAIController::MoveToRandomLocation() {
}