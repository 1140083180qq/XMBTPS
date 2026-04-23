// Fill out your copyright notice in the Description page of Project Settings.


#include "XMBComponent/RocketMovementComponent.h"

UProjectileMovementComponent::EHandleBlockingHitResult URocketMovementComponent::HandleBlockingHit(
	const FHitResult& Hit, float TimeTick, const FVector& MoveDelta, float& SubTickTimeRemaining)
{
	// return Super::HandleBlockingHit(Hit, TimeTick, MoveDelta, SubTickTimeRemaining);
	return EHandleBlockingHitResult::AdvanceNextSubstep;//固定返回这一个值，保证火箭在接触到Owner时不会触发OnHit
}

void URocketMovementComponent::HandleImpact(const FHitResult& Hit, float TimeSlice, const FVector& MoveDelta)
{
	// Super::HandleImpact(Hit, TimeSlice, MoveDelta);
	//火箭弹药不会停下，他们应该在Collision发生碰撞时才会爆炸
}
