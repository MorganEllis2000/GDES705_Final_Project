// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "WraithAIController.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Codename_Lost/AI/WraithController.h"
#include "Perception/AISenseConfig_Hearing.h"


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

	WraithController = Cast<AWraithController>(this->GetCharacter());
}

void AWraithAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if(WraithController)
	{
		GetBlackboardComponent()->SetValueAsFloat(TEXT("LightDamage"), WraithController->TimeLightShinedOnSelf);
	} else
	{
		UE_LOG(LogTemp, Warning, TEXT("NO CONTROLLER"));
	}
	
}

/*void AWraithAIController::OnTargetDetected(AActor* actor, FAIStimulus const stimulus)
{
	if (auto const character = Cast<ACharacterController>(actor))
	{
		GetBlackboardComponent()->SetValueAsBool(TEXT("WasPlayerSeen"), stimulus.WasSuccessfullySensed());
		GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
		GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLoc"), PlayerPawn->GetActorLocation());
	}
}*/
void AWraithAIController::OnTargetDetected(TArray<AActor*> const& UpdatedActors)
{
	for(int i = 0; i < UpdatedActors.Num(); i++)
	{
		FActorPerceptionBlueprintInfo info;
		GetPerceptionComponent()->GetActorsPerception(UpdatedActors[i], info);
		for(int j = 0; j < info.LastSensedStimuli.Num(); ++j)
		{
			FAIStimulus const Stimulus = info.LastSensedStimuli[j];
			if(Stimulus.Tag == "Noise")
			{
				GetBlackboardComponent()->SetValueAsBool(TEXT("SoundWasHeard"), false);
				GetBlackboardComponent()->ClearValue(TEXT("SoundLocation"));
				GetBlackboardComponent()->SetValueAsBool(TEXT("SoundWasHeard"), Stimulus.WasSuccessfullySensed());
				GetBlackboardComponent()->SetValueAsVector(TEXT("SoundLocation"), Stimulus.StimulusLocation);
			} else if(Stimulus.Type.Name == "Default__AISense_Sight")
			{

				if(UpdatedActors[i]->ActorHasTag("Player"))
				{
					GetBlackboardComponent()->SetValueAsBool(TEXT("WasPlayerSeen"), Stimulus.WasSuccessfullySensed());
					GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
					GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLoc"), PlayerPawn->GetActorLocation());
				} 
			}
			
		}
	}
}

void AWraithAIController::SetupPerceptionSystem()
{
	UE_LOG(LogTemp, Warning, TEXT("Setting up perception system"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	perceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component"));
	SetPerceptionComponent(*perceptionComponent);

	if(SightConfig)
	{
		SightConfig->SightRadius = SightRadius;
		SightConfig->LoseSightRadius = SightConfig->SightRadius + 50.f;
		SightConfig->PeripheralVisionAngleDegrees = SightFOV;
		SightConfig->SetMaxAge(1.f);
		SightConfig->AutoSuccessRangeFromLastSeenLocation = SightConfig->SightRadius + 20;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

		GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
		//GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AWraithAIController::OnTargetDetected);
		GetPerceptionComponent()->ConfigureSense(*SightConfig);
	}

	HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("Hearing Config"));
	if(HearingConfig)
	{
		HearingConfig->HearingRange = 3000.f;
		HearingConfig->DetectionByAffiliation.bDetectEnemies = true;
		HearingConfig->DetectionByAffiliation.bDetectFriendlies = true;
		HearingConfig->DetectionByAffiliation.bDetectNeutrals = true;
		GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AWraithAIController::OnTargetDetected);
		GetPerceptionComponent()->ConfigureSense((*HearingConfig));
	}
}


