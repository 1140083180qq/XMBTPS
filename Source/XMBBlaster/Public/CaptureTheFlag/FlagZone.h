
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlagZone.generated.h"

enum class ETeam : uint8;
class USphereComponent;

UCLASS()
class XMBBLASTER_API AFlagZone : public AActor
{
	GENERATED_BODY()
	
public:	
	AFlagZone();

	UPROPERTY(EditAnywhere)
	ETeam Team;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:

	UPROPERTY(EditAnywhere)
	USphereComponent* ZoneSphere;



};
