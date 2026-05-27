// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/HitScanWeapon.h"

#include "Character/XMBCharacterBase.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameTypes/WeaponTypes.h"
#include "XMBBlaster/XMBBlaster.h"
#include "XMBComponent/LagCompensationComponent.h"


//TODO:BUG:在客户端进行开枪后，装填时子弹会一次装两颗,而且在客户端开火时会有两条弹道
void AHitScanWeapon::Fire(const FVector& HitTarget)
{
	Super::Fire(HitTarget);

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr)
	{
		return;
	}
	AController* InstigatorController = OwnerPawn->GetController();


	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName("MuzzleFlash");
	if (MuzzleFlashSocket) //为何不能在这里直接检查InstigatorController
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		FVector Start = SocketTransform.GetLocation();

		FHitResult FireHit;
		WeaponTraceHit(Start, HitTarget, FireHit);

		AXMBCharacterBase* BlasterCharacter = Cast<AXMBCharacterBase>(FireHit.GetActor());
		if (BlasterCharacter && InstigatorController)
		{
			bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();
			if (HasAuthority() && bCauseAuthDamage)
			{
				const float DamageToCause = FireHit.BoneName.ToString() == FString("head") ? HeadShotDamage : Damage;
				
				UGameplayStatics::ApplyDamage(
					BlasterCharacter,
					DamageToCause,
					InstigatorController,
					this,
					UDamageType::StaticClass());
			}

			if (!HasAuthority() && bUseServerSideRewind)
			{
				XMBOwnerCharacter = XMBOwnerCharacter == nullptr ? Cast<AXMBCharacterBase>(OwnerPawn) : XMBOwnerCharacter;
				XMBOwnerController = XMBOwnerController == nullptr ? Cast<AXMBPlayerController>(InstigatorController) : XMBOwnerController;
				if (XMBOwnerCharacter && XMBOwnerController && XMBOwnerCharacter->GetLagCompensation() &&
					XMBOwnerCharacter->IsLocallyControlled())
				{
					XMBOwnerCharacter->GetLagCompensation()->ServerScoreRequest(
						BlasterCharacter,
						Start,
						HitTarget,
						XMBOwnerController->GetServerTime() - XMBOwnerController->SingleTripTime,
						this
					);
				}
			}
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
				FireHit.ImpactPoint);
		}

		if (MuzzleFlash)
		{
			UGameplayStatics::SpawnEmitterAtLocation(
				GetWorld(),
				MuzzleFlash,
				SocketTransform);
		}

		if (FireSound)
		{
			UGameplayStatics::PlaySoundAtLocation(
				GetWorld(),
				FireSound,
				SocketTransform.GetLocation());
		}
	}
}


void AHitScanWeapon::WeaponTraceHit(const FVector& TraceStart, const FVector& HitTarget, FHitResult& OutHitResult)
{
	FHitResult FireHit;
	UWorld* World = GetWorld();

	if (World)
	{
		// FVector End = bUseScatter ? TraceEndWithScatter(TraceStart, HitTarget) : TraceStart + (HitTarget - TraceStart) * 1.25f;
		//此处只进行本地运算散步，所以只采取了原三元的false端(LocalFire)
		FVector End = TraceStart + (HitTarget - TraceStart) * 1.25f; //为何此处不使用三元

		World->LineTraceSingleByChannel(
			OutHitResult,
			TraceStart,
			End,
			ECC_Visibility
		);

		FVector BeamEnd = End;
		if (OutHitResult.bBlockingHit)
		{
			BeamEnd = OutHitResult.ImpactPoint;
		}
		else
		{
			OutHitResult.ImpactPoint = End;
		}

		//之前制作了LocalFire,开火时本地的开火与服务器的开火不一样，所以会有不一样的随机弹道偏移
		// DrawDebugSphere(GetWorld(), BeamEnd, 16.f, 12, FColor::Orange, true,3.f, 3.f);

		if (BeamParticles)
		{
			UParticleSystemComponent* Beam = UGameplayStatics::SpawnEmitterAtLocation(
				World,
				BeamParticles,
				TraceStart,
				FRotator::ZeroRotator,
				true
			);

			if (Beam)
			{
				Beam->SetVectorParameter(FName("Target"), BeamEnd);
			}
		}
	}
}
