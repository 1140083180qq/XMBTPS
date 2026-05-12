
#pragma once

#include "CoreMinimal.h"
#include "Actor/Pickups/PickupActorBase.h"
#include "AmmoPickup.generated.h"

enum class EWeaponType : uint8;
/**
 * 
 */
UCLASS()
class XMBBLASTER_API AAmmoPickup : public APickupActorBase
{
	GENERATED_BODY()
public:
	
protected:
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) ;

private:
	UPROPERTY(EditAnywhere)
	EWeaponType WeaponType;
	
	UPROPERTY(EditAnywhere)
	int32 AmmoAmount = 30;

	
	
};
