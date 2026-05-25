// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actor/Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ProjectileBullet.generated.h"

/**
 * 子弹投射物类
 * 继承自AProjectile，实现具体的子弹伤害逻辑
 * 击中角色时会造成伤害
 */
UCLASS()
class XMBBLASTER_API AProjectileBullet : public AProjectile
{
	GENERATED_BODY()

public:
	AProjectileBullet();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	

protected:
	/**
	 * 碰撞回调函数（重写）
	 * 击中目标时应用伤害，然后调用父类的销毁逻辑
	 */
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;
	virtual void BeginPlay() override;
	
private:
};
