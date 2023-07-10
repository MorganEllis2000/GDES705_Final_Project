// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "WraithAIController.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "WraithController.h"


AWraithAIController::AWraithAIController()
{
	SetupPerceptionSystem();
}

void AWraithAIController::BeginPlay()
{
	Super::BeginPlay();
	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	
	if (AIBehaviorTree != nullptr) {
		RunBehaviorTree(AIBehaviorTree);

		GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
		GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
	}

	//GetBlackboardComponent()->SetValueAsVector(TEXT("PatrolLocation"), )
}

void AWraithAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AWraithAIController::OnTargetDetected(AActor* actor, FAIStimulus const stimulus)
{
	if (auto const character = Cast<ACharacterController>(actor)) {
		GetBlackboardComponent()->SetValueAsBool(TEXT("WasPlayerSeen"), stimulus.WasSuccessfullySensed());
		GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
		GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLoc"), PlayerPawn->GetActorLocation());
	}
}

void AWraithAIController::SetupPerceptionSystem()
{
	UE_LOG(LogTemp, Warning, TEXT("Setting up perception system"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	perceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component"));
	SetPerceptionComponent(*perceptionComponent);

	SightConfig->SightRadius = 500.f;
	SightConfig->LoseSightRadius = SightConfig->SightRadius + 800.f;
	SightConfig->PeripheralVisionAngleDegrees = 90.f;
	SightConfig->SetMaxAge(5.f);
	SightConfig->AutoSuccessRangeFromLastSeenLocation = 800.f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AWraithAIController::OnTargetDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);
}


