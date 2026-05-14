

#include "Actor/Pickups/PickupActorSpawnPoint.h"

#include "Actor/Pickups/PickupActorBase.h"


APickupActorSpawnPoint::APickupActorSpawnPoint()
{
	PrimaryActorTick.bCanEverTick = true;

}


void APickupActorSpawnPoint::BeginPlay()
{
	Super::BeginPlay();

	StartSpawnPickupActorTimer((AActor*)nullptr);
	
}


void APickupActorSpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void APickupActorSpawnPoint::PickupActorToSpawn()
{
	int32 NumPickupClasses = PickupActorClasses.Num();
	if (NumPickupClasses > 0)
	{
		int32 Selection = FMath::RandRange(0, NumPickupClasses - 1);
		SpawnedPickupActor = GetWorld()->SpawnActor<APickupActorBase>(
			PickupActorClasses[Selection],
			GetActorTransform()
		);

		if (HasAuthority() && SpawnedPickupActor)
		{
			SpawnedPickupActor->OnDestroyed.AddDynamic(this, &APickupActorSpawnPoint::StartSpawnPickupActorTimer);
		}
	}
}


void APickupActorSpawnPoint::SpawnPickupActorTimerFinished()
{
	if (HasAuthority())
	{
		PickupActorToSpawn();
	}
}


void APickupActorSpawnPoint::StartSpawnPickupActorTimer(AActor* DestroyedActor)
{
	const float SpawnTime = FMath::FRandRange(SpawnPickupActorTimeMin, SpawnPickupActorTimeMax);
	GetWorldTimerManager().SetTimer(
		SpawnPickupActorTimer,
		this,
		&APickupActorSpawnPoint::SpawnPickupActorTimerFinished,
		SpawnTime);
	
}
