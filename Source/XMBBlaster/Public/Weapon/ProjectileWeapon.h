
#pragma once

#include "CoreMinimal.h"
#include "Actor/Projectile.h"
#include "Weapon/WeaponBase.h"
#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class XMBBLASTER_API AProjectileWeapon : public AWeaponBase
{
	GENERATED_BODY()

public:

protected:
	virtual void Fire(const FVector& HitTarget) override;

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> ProjectileClass;
	
};
