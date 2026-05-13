// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/Pickups/JumpPickup.h"

#include "Character/XMBCharacterBase.h"
#include "XMBComponent/BuffComponent.h"

void AJumpPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	AXMBCharacterBase* BlasterCharacter = Cast<AXMBCharacterBase>(OtherActor);
	if (BlasterCharacter)
	{
		UBuffComponent* BuffComp = BlasterCharacter->GetBuffComponent();
		if (BuffComp)
		{
			BuffComp->JumpBuff(BuffJumpZVelocity,BuffJumpTime);
		}
	}

	Destroy();
}
