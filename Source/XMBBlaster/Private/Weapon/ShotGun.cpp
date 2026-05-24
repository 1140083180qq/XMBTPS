// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/ShotGun.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Character/XMBCharacterBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "XMBComponent/LagCompensationComponent.h"


void AShotGun::FireShotgun(const TArray<FVector_NetQuantize>& HitTargets)
{
	AWeaponBase::Fire(FVector());
	
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr) return;
	AController* InstigatorController =  OwnerPawn->GetController();

	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName("MuzzleFlash");
	if (MuzzleFlashSocket)//为何不能在这里直接检查InstigatorController
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		FVector Start = SocketTransform.GetLocation();

		TMap<AXMBCharacterBase*, uint32> HitMap;
		for (auto HitTarget : HitTargets)
		{
			FHitResult FireHit;
			WeaponTraceHit(Start, HitTarget, FireHit);

			AXMBCharacterBase* BlasterCharacter = Cast<AXMBCharacterBase>(FireHit.GetActor());
			if (BlasterCharacter)
			{
				if (HitMap.Contains(BlasterCharacter))
				{
					HitMap[BlasterCharacter]++;
				}
				else
				{
					HitMap.Emplace(BlasterCharacter,1);
				}

				if (ImpactParticles)
				{
					UGameplayStatics::SpawnEmitterAtLocation(
						GetWorld(),
						ImpactParticles,
						FireHit.ImpactPoint,
						FireHit.ImpactNormal.Rotation());	
				}
		
				if (HitSound)
				{
					UGameplayStatics::PlaySoundAtLocation(
						GetWorld(),
						HitSound,
						FireHit.ImpactPoint,
						.5f,
						FMath::FRandRange(-5.f, .5f)
						);
				}
			}
		}

		TArray<AXMBCharacterBase*> HitCharacters;
		
		for (auto HitPair :HitMap)
		{
			if (HitPair.Key && InstigatorController)
			{
				if (HasAuthority() && !bUseServerSideRewind)
				{
					UGameplayStatics::ApplyDamage(
					HitPair.Key,
					Damage * HitPair.Value,
					InstigatorController,
					this,
					UDamageType::StaticClass()
					);
				}
				
				//
				HitCharacters.Add(HitPair.Key);
			}
		}

		//TODO:为何bUseServerSideRewind=true时无法造成伤害
		if (!HasAuthority() && bUseServerSideRewind)
		{
			XMBOwnerCharacter = XMBOwnerCharacter == nullptr ? Cast<AXMBCharacterBase>(OwnerPawn) : XMBOwnerCharacter;
			XMBOwnerController = XMBOwnerController == nullptr ? Cast<AXMBPlayerController>(InstigatorController) : XMBOwnerController;
			if (XMBOwnerCharacter && XMBOwnerController && XMBOwnerCharacter->GetLagCompensation() && XMBOwnerCharacter->IsLocallyControlled() )
			{
				XMBOwnerCharacter->GetLagCompensation()->ShotgunServerScoreRequest(
					HitCharacters,
					Start,
					HitTargets,
					XMBOwnerController->GetServerTime() - XMBOwnerController->SingleTripTime
					);
			}
		}
	}
}

void AShotGun::ShotgunTraceEndWithScatter(const FVector& HitTarget, TArray<FVector_NetQuantize>& HitTargets)
{
	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName("MuzzleFlash");
	if (MuzzleFlashSocket == nullptr) return;
	
	FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
	FVector Start = SocketTransform.GetLocation();
	
	FVector ToTargetNormalized = (HitTarget - Start).GetSafeNormal();
	FVector SphereCenter = Start + ToTargetNormalized * DistanceToSphere;

	//上面都是计算发射位置
	//下面在循环内计算偏移后的终点
	
	for (uint32 i = 0; i < NumberOfPellets; i++)
	{
		FVector RandomVec = UKismetMathLibrary::RandomUnitVector() * FMath::FRandRange(0.f, SphereRadius);
		FVector EndLoc = SphereCenter + RandomVec;
		FVector ToEndLoc = EndLoc - Start;

		ToEndLoc = Start + ToEndLoc * TRACE_LENGTH / ToEndLoc.Size();
		
		HitTargets.Add(ToEndLoc);
	}
}


