
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"
#include "PickupActorBase.generated.h"

class USphereComponent;
class UNiagaraSystem;
class UNiagaraComponent;

UCLASS()
class XMBBLASTER_API APickupActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	APickupActorBase();
	virtual void Tick(float DeltaTime) override;
	virtual void Destroyed() override;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere)//旋转速率
	float BaseTurnRate = 45.f;
	
private:
	UPROPERTY(EditAnywhere,Category = Properties)
	USphereComponent* OverlapSphere;

	UPROPERTY(EditAnywhere, Category = Properties)
	USoundCue* PickupSound;

	UPROPERTY(EditAnywhere, Category = Properties)
	UStaticMeshComponent* PickupMesh;

	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* PickupEffectComponent;

	UPROPERTY(EditAnywhere, Category = Properties)
	UNiagaraSystem* PickupEffect;

	FTimerHandle BindOverlapTimer;
	float BindOverlapTime = 0.25f;
	void BindOverlapTimerFinished();

};

