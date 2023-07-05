// Created by: Morgan Ellis (Producer/Programmer), Mohammad Alsamman (Game/Level Designer), Dharani Sasirega (3D Designer)


#include "PatrolPath.h"

// Sets default values
APatrolPath::APatrolPath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

FVector APatrolPath::GetPatrolPoint(int const index) const
{
	return PatrolPoints[index];
}

int APatrolPath::num() const
{
	return PatrolPoints.Num();
}

