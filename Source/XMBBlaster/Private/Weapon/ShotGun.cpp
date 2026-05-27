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
		TMap<AXMBCharacterBase*, int32> HeadShotHitMap;
		for (auto HitTarget : HitTargets)
		{
			FHitResult FireHit;
			WeaponTraceHit(Start, HitTarget, FireHit);

			AXMBCharacterBase* BlasterCharacter = Cast<AXMBCharacterBase>(FireHit.GetActor());
			if (BlasterCharacter)
			{
				const bool bHeadShot = FireHit.BoneName.ToString() == FString("head");

				if (bHeadShot)
				{
					if (HeadShotHitMap.Contains(BlasterCharacter)) HeadShotHitMap[BlasterCharacter]++;
					else HeadShotHitMap.Emplace(BlasterCharacter,1);
				}
				else
				{
					if (HitMap.Contains(BlasterCharacter)) HitMap[BlasterCharacter]++;
					else HitMap.Emplace(BlasterCharacter,1);
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
		//maps character hit to total damage
		TMap<AXMBCharacterBase*, float> DamageMap;

		//calculate body shot damage by multiplaying times hit x damage - store in damagemap
		for (auto HitPair :HitMap)
		{
			if (HitPair.Key)
			{
				DamageMap.Emplace(HitPair.Key,HitPair.Value * Damage);

				HitCharacters.AddUnique(HitPair.Key);
			}
		}

		//calculate head shot damage by multiplying times hit x headshotdamage - store in damagemap
		for (auto HeadShotHipPair : HeadShotHitMap)
		{
			if (HeadShotHipPair.Key )
			{
				if (DamageMap.Contains(HeadShotHipPair.Key)) DamageMap[HeadShotHipPair.Key] += HeadShotHipPair.Value * HeadShotDamage;
				else DamageMap.Emplace(HeadShotHipPair.Key,HeadShotHipPair.Value * HeadShotDamage);
				
				HitCharacters.AddUnique(HeadShotHipPair.Key);
			}
		}

		// loop through damage map to get total damage for each character
		for (auto DamagePair : DamageMap)
		{
			if (DamagePair.Key && InstigatorController)
			{
				bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();
				if (HasAuthority() && bCauseAuthDamage)
				{
					UGameplayStatics::ApplyDamage(
					DamagePair.Key, //character that was hit
					DamagePair.Value, // Damage calculated in the two for loops above
					InstigatorController,
					this,
					UDamageType::StaticClass()
					);
				}
			}
		}

		

		
		if (!HasAuthority() && bUseServerSideRewind)
		{
			XMBOwnerCharacter = XMBOwnerCharacter == nullptr ? Cast<AXMBCharacterBase>(OwnerPawn) : XMBOwnerCharacter;
			XMBOwnerController = XMBOwnerController == nullptr ? Cast<AXMBPlayerController>(InstigatorController) : XMBOwnerController;
			if (XMBOwnerCharacter && XMBOwnerController && XMBOwnerCharacter->GetLagCompensation() && XMBOwnerCharacter->IsLocallyControlled() && XMBOwnerCharacter->IsLocallyControlled())
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


