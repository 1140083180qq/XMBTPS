
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupActorSpawnPoint.generated.h"

class APickupActorBase;

UCLASS()
class XMBBLASTER_API APickupActorSpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:	

	APickupActorSpawnPoint();
	virtual void Tick(float DeltaTime) override;

	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<APickupActorBase>> PickupActorClasses;
	
	APickupActorBase* SpawnedPickupActor;

	void PickupActorToSpawn();

	void SpawnPickupActorTimerFinished();

	UFUNCTION()
	void StartSpawnPickupActorTimer(AActor* DestroyedActor);

	
private:

	FTimerHandle SpawnPickupActorTimer;

	UPROPERTY(EditAnywhere)
	float SpawnPickupActorTimeMin;

	UPROPERTY(EditAnywhere)
	float SpawnPickupActorTimeMax;

};
