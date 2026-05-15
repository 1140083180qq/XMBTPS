
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

	UPROPERTY(EditAnywhere)//可拾取物品的子类
	TArray<TSubclassOf<APickupActorBase>> PickupActorClasses;
	
	APickupActorBase* SpawnedPickupActor;//由这个Point生成的物品

	void PickupActorToSpawn();
	
	UFUNCTION()
	void StartSpawnPickupActorTimer(AActor* DestroyedActor);

	void SpawnPickupActorTimerFinished();
private:

	FTimerHandle SpawnPickupActorTimer;

	UPROPERTY(EditAnywhere)
	float SpawnPickupActorTimeMin;

	UPROPERTY(EditAnywhere)
	float SpawnPickupActorTimeMax;

};
