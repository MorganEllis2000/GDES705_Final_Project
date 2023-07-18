// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "Codename_Lost/AI/ShadowAIController.h"
#include "Codename_Lost/AI/ShadowCharacterController.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "BehaviorTree/BlackboardComponent.h"
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

void AShadowAIController::SetupPerceptionSystem()
{
	UE_LOG(LogTemp, Warning, TEXT("Setting up perception system"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	perceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component"));
	SetPerceptionComponent(*perceptionComponent);

	if(SightConfig)
	{
		SightConfig->SightRadius = 500.f;
		SightConfig->LoseSightRadius = SightConfig->SightRadius + 50.f;
		SightConfig->PeripheralVisionAngleDegrees = 90.f;
		SightConfig->SetMaxAge(1.f);
		SightConfig->AutoSuccessRangeFromLastSeenLocation = 520.f;
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
		GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AShadowAIController::OnTargetDetected);
		GetPerceptionComponent()->ConfigureSense((*HearingConfig));
	}
}

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
				GetBlackboardComponent()->SetValueAsBool(TEXT("SoundWasHeard"), Stimulus.WasSuccessfullySensed());
				GetBlackboardComponent()->SetValueAsVector(TEXT("SoundLocation"), Stimulus.StimulusLocation);
			} else if(Stimulus.Type.Name == "Default__AISense_Sight")
			{
				GetBlackboardComponent()->SetValueAsBool(TEXT("WasPlayerSeen"), Stimulus.WasSuccessfullySensed());
				GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
				GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLoc"), PlayerPawn->GetActorLocation());
			}
			
		}
	}
}
