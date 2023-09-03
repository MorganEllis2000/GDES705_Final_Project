// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/ShadowAIController.h"
#include "Codename_Lost/AI/ShadowCharacterController.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Codename_Lost/Actors/Controllers/CharacterController.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

AShadowAIController::AShadowAIController()
{
	SetupPerceptionSystem();


}

void AShadowAIController::BeginPlay()
{
	Super::BeginPlay();

	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if(AIBehaviorTree != nullptr)
	{
		RunBehaviorTree(AIBehaviorTree);
	}

	ShadowCharacterController = Cast<AShadowCharacterController>(this->GetCharacter());
	
}

void AShadowAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

/* Setup of the hearing and sight perceptions on the wraith AI*/
void AShadowAIController::SetupPerceptionSystem()
{
	UE_LOG(LogTemp, Warning, TEXT("Setting up perception system"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	perceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component"));
	SetPerceptionComponent(*perceptionComponent);

	if(SightConfig)
	{
		SightConfig->SightRadius = 500;
		SightConfig->LoseSightRadius = 550;
		SightConfig->PeripheralVisionAngleDegrees = 520;
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
		HearingConfig->DetectionByAffiliation.bDetectFriendlies = false;
		HearingConfig->DetectionByAffiliation.bDetectNeutrals = false;
		GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AShadowAIController::OnTargetDetected);
		GetPerceptionComponent()->ConfigureSense((*HearingConfig));
	}
}

/* If the AI has sensed something with its stimulus then it will update the corresponding blackboard values so that the AI
 * can investigate what it was that triggered its perception system
 */
void AShadowAIController::OnTargetDetected(TArray<AActor*> const& UpdatedActors)
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
			}else {
				UE_LOG(LogTemp, Warning, TEXT("NOTHING DETECTED"));
			}
		}
	}
}
