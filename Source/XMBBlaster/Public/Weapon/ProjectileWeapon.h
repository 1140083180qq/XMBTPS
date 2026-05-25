
#pragma once

#include "CoreMinimal.h"
#include "Actor/Projectile.h"
#include "Weapon/WeaponBase.h"
#include "ProjectileWeapon.generated.h"

/**
 * @class AProjectileWeapon
 * @brief 投射物武器类
 * 
 * 继承自武器基类，实现发射投射物类型武器的功能：
 * - 在开火位置生成投射物Actor（子弹、火箭等）
 * - 投射物沿目标方向飞行并独立进行碰撞检测
 */
UCLASS()
class XMBBLASTER_API AProjectileWeapon : public AWeaponBase
{
	GENERATED_BODY()

public:

protected:
	/**
	 * @brief 开火（重写基类方法）
	 * @param HitTarget - 射线检测到的命中目标位置
	 * 生成投射物并向目标位置发射
	 */
	virtual void Fire(const FVector& HitTarget) override;

private:

	/** 要生成的投射物类（子弹等） */
	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> ServerSideRewindProjectileClass;
};
