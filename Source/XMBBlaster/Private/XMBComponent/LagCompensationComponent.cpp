#include "XMBComponent/LagCompensationComponent.h"
#include "Character/XMBCharacterBase.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"


ULagCompensationComponent::ULagCompensationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void ULagCompensationComponent::BeginPlay()
{
	Super::BeginPlay();
}

void ULagCompensationComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                              FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	SaveFramePackage();
}


void ULagCompensationComponent::ServerScoreRequest_Implementation(AXMBCharacterBase* HitCharacter,
                                                                  const FVector_NetQuantize& TraceStart,
                                                                  const FVector_NetQuantize& HitLocation, float HitTime,
                                                                  AWeaponBase* DamageCauser)
{
	FServerSideRewindResult Confirm = ServerSideRewind(HitCharacter, TraceStart, HitLocation, HitTime);

	if (Owner && HitCharacter && Confirm.bHitConfirmed && DamageCauser)
	{
		UGameplayStatics::ApplyDamage(
			HitCharacter,
			DamageCauser->GetDamage(),
			Owner->Controller,
			DamageCauser,
			UDamageType::StaticClass()
		);
	}
}

void ULagCompensationComponent::ShotgunServerScoreRequest_Implementation(
	const TArray<AXMBCharacterBase*>& HitCharacters, const FVector_NetQuantize& TraceStart,
	const TArray<FVector_NetQuantize>& HitLocations, float HitTime)
{
	FShotgunServerSideRewindResult Confirm = ShotgunServerSideRewind(HitCharacters, TraceStart, HitLocations, HitTime);

	for (auto& HitCharacter : HitCharacters)
	{
		if (HitCharacter == nullptr || HitCharacter->GetEquippedWeapon() == nullptr || Owner == nullptr)
		{
			continue;
		}
		float TotalDamage = 0;
		if (Confirm.HeadShots.Contains(HitCharacter))
		{
			float HeadShotDamage = Confirm.HeadShots[HitCharacter] * Owner->GetEquippedWeapon()->GetDamage();
			TotalDamage += HeadShotDamage;
		}
		if (Confirm.BodyShots.Contains(HitCharacter))
		{
			float BodyShotDamage = Confirm.BodyShots[HitCharacter] * Owner->GetEquippedWeapon()->GetDamage();
			TotalDamage += BodyShotDamage;
		}

		UGameplayStatics::ApplyDamage(
			HitCharacter,
			TotalDamage,
			Owner->Controller,
			Owner->GetEquippedWeapon(),
			UDamageType::StaticClass()
		);
	}
}


void ULagCompensationComponent::SaveFramePackage()
{
	Owner = Owner == nullptr ? Cast<AXMBCharacterBase>(GetOwner()) : Owner;
	if (Owner == nullptr || !Owner->HasAuthority())
	{
		return;
	}
	//针对链表中存储的第一个元素
	if (FrameHistory.Num() <= 1)
	{
		FFramePackage ThisFrame;
		SaveFramePackage(ThisFrame);
		FrameHistory.AddHead(ThisFrame);
	}
	else
	{
		float HistoryLength = FrameHistory.GetHead()->GetValue().Time - FrameHistory.GetTail()->GetValue().Time;
		while (HistoryLength > MaxRecordTime)
		{
			FrameHistory.RemoveNode(FrameHistory.GetTail());
			HistoryLength = FrameHistory.GetHead()->GetValue().Time - FrameHistory.GetTail()->GetValue().Time;
		}
		FFramePackage ThisFrame;
		SaveFramePackage(ThisFrame);
		FrameHistory.AddHead(ThisFrame);
	}
}


FFramePackage ULagCompensationComponent::GetFrameToCheck(AXMBCharacterBase* HitCharacter, float HitTime)
{
	bool bReturn =
		HitCharacter == nullptr
		|| HitCharacter->GetLagCompensation() == nullptr
		|| HitCharacter->GetLagCompensation()->FrameHistory.GetHead() == nullptr
		|| HitCharacter->GetLagCompensation()->FrameHistory.GetTail() == nullptr;
	if (bReturn)
	{
		return FFramePackage();
	}

	//Frame package that we check to verify a hit
	FFramePackage FrameToCheck;
	bool bShouldInterpolate = true;

	//Frame history of the HitCharacter
	const TDoubleLinkedList<FFramePackage>& History = HitCharacter->GetLagCompensation()->FrameHistory;
	const float OldestHistoryTime = History.GetTail()->GetValue().Time;
	const float NewestHistoryTime = History.GetHead()->GetValue().Time;

	if (OldestHistoryTime > HitTime)
	{
		//too far back - too laggy to do serverside rewind
		return FFramePackage();
	}

	if (OldestHistoryTime == HitTime)
	{
		FrameToCheck = History.GetTail()->GetValue();
		bShouldInterpolate = false;
	}

	if (NewestHistoryTime <= HitTime)
	{
		FrameToCheck = History.GetHead()->GetValue();
		bShouldInterpolate = false;
	}

	TDoubleLinkedList<FFramePackage>::TDoubleLinkedListNode* Younger = History.GetHead();
	TDoubleLinkedList<FFramePackage>::TDoubleLinkedListNode* Older = Younger;

	while (Older->GetValue().Time > HitTime) //is Older still younger than HitTime?
	{
		// March back until : OlderTimer < HitTime < YoungerTime
		if (Older->GetNextNode() == nullptr)
		{
			break;
		}
		Older = Older->GetNextNode();
		if (Older->GetValue().Time > HitTime)
		{
			Younger = Older;
		}
	}

	if (Older->GetValue().Time == HitTime) // Highly unlikely, but we found out frame to check
	{
		FrameToCheck = Older->GetValue();
		bShouldInterpolate = false;
	}

	if (bShouldInterpolate)
	{
		//Interpolate between Younger and Older
		FrameToCheck = InterpBetweenFrames(Older->GetValue(), Younger->GetValue(), HitTime);
	}

	FrameToCheck.Character = HitCharacter;
	return FrameToCheck;
}


FServerSideRewindResult ULagCompensationComponent::ServerSideRewind(AXMBCharacterBase* HitCharacter,
                                                                    const FVector_NetQuantize& TraceStart,
                                                                    const FVector_NetQuantize& HitLocation,
                                                                    float HitTime)
{
	FFramePackage FrameToCheck = GetFrameToCheck(HitCharacter, HitTime);
	return ConfirmHit(FrameToCheck, HitCharacter, TraceStart, HitLocation);
}


FShotgunServerSideRewindResult ULagCompensationComponent::ShotgunServerSideRewind(
	const TArray<AXMBCharacterBase*>& HitCharacters, const FVector_NetQuantize& TraceStart,
	const TArray<FVector_NetQuantize>& HitLocations, float HitTime)
{
	TArray<FFramePackage> FramesToCheck;
	for (AXMBCharacterBase* HitCharacter : HitCharacters)
	{
		FramesToCheck.Add(GetFrameToCheck(HitCharacter, HitTime)); //TODO:这里的这个HitTime是否需要考虑霰弹枪的弹丸速度？
	}
	return ShotgunConfirmHit(FramesToCheck, TraceStart, HitLocations);
}


FFramePackage ULagCompensationComponent::InterpBetweenFrames(const FFramePackage& OlderFrame,
                                                             const FFramePackage& YoungerFrame, float HitTime)
{
	const float Distance = YoungerFrame.Time - OlderFrame.Time;
	const float InterpFraction = FMath::Clamp((HitTime - OlderFrame.Time) / Distance, 0.f, 1.f);

	FFramePackage InterpFramePackage;
	InterpFramePackage.Time = HitTime;

	for (auto& YoungerPair : YoungerFrame.HitBoxInfo)
	{
		const FName& BoxInfoName = YoungerPair.Key;

		const FBoxInformation& OlderBox = OlderFrame.HitBoxInfo[BoxInfoName];
		const FBoxInformation& YoungerBox = YoungerFrame.HitBoxInfo[BoxInfoName];

		FBoxInformation InterpBoxInfo;

		InterpBoxInfo.BoxLocation = FMath::VInterpTo(OlderBox.BoxLocation, YoungerBox.BoxLocation, 1.f, InterpFraction);
		InterpBoxInfo.BoxRotation = FMath::RInterpTo(OlderBox.BoxRotation, YoungerBox.BoxRotation, 1.f, InterpFraction);
		InterpBoxInfo.BoxExtent = YoungerBox.BoxExtent;

		InterpFramePackage.HitBoxInfo.Add(BoxInfoName, InterpBoxInfo);
		//TODO:此处的InterpFramePackage也要添加Character
	}

	return InterpFramePackage;
}


FServerSideRewindResult ULagCompensationComponent::ConfirmHit(const FFramePackage& Package,
                                                              AXMBCharacterBase* HitCharacter,
                                                              const FVector_NetQuantize& TraceStart,
                                                              const FVector_NetQuantize& HitLocation)
{
	if (HitCharacter == nullptr)
	{
		return FServerSideRewindResult();
	}

	FFramePackage CurrentFrame;
	CacheBoxPosition(HitCharacter, CurrentFrame);
	MoveBoxes(HitCharacter, Package);
	EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::NoCollision);

	// Enable collision for the head first
	UBoxComponent* HeadBox = HitCharacter->HitCollisionBoxes[FName("head")];
	HeadBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	HeadBox->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	FHitResult ConfirmHitResult;
	const FVector TraceEnd = TraceStart + (HitLocation - TraceStart) * 1.25f;
	UWorld* World = GetWorld();
	if (World)
	{
		World->LineTraceSingleByChannel(
			ConfirmHitResult,
			TraceStart,
			TraceEnd,
			ECC_Visibility
		);

		if (ConfirmHitResult.bBlockingHit) //we hit the head , return early
		{
			ResetHitBoxes(HitCharacter, CurrentFrame);
			EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::QueryAndPhysics);
			return FServerSideRewindResult{true, true};
		}
		// didn`t hit head, check the rest of the boxes
		for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
		{
			if (HitBoxPair.Value != nullptr)
			{
				HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				HitBoxPair.Value->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
			}
		}

		World->LineTraceSingleByChannel(ConfirmHitResult,
		                                TraceStart,
		                                TraceEnd,
		                                ECC_Visibility
		);

		if (ConfirmHitResult.bBlockingHit)
		{
			ResetHitBoxes(HitCharacter, CurrentFrame);
			EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::QueryAndPhysics);
			return FServerSideRewindResult{true, false};
		}
	}

	ResetHitBoxes(HitCharacter, CurrentFrame);
	EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::QueryAndPhysics);
	return FServerSideRewindResult{false, false};
}


FShotgunServerSideRewindResult ULagCompensationComponent::ShotgunConfirmHit(const TArray<FFramePackage>& FramePackages,
                                                                            const FVector_NetQuantize& TraceStart,
                                                                            const TArray<FVector_NetQuantize>&
                                                                            HitLocations)
{
	for (auto& Frame : FramePackages)
	{
		if (Frame.Character == nullptr)
		{
			return FShotgunServerSideRewindResult();
		}
	}

	FShotgunServerSideRewindResult ShotgunResult;
	TArray<FFramePackage> CurrentFrames;

	for (auto& Frame : FramePackages)
	{
		FFramePackage CurrentFrame;
		CurrentFrame.Character = Frame.Character;
		CacheBoxPosition(Frame.Character, CurrentFrame);
		MoveBoxes(Frame.Character, Frame);
		EnableCharacterMeshCollision(Frame.Character, ECollisionEnabled::NoCollision);
		CurrentFrames.Add(CurrentFrame);
	}
	//此处可合并
	for (auto& Frame : FramePackages)
	{
		// Enable collision for the head first
		UBoxComponent* HeadBox = Frame.Character->HitCollisionBoxes[FName("head")];
		HeadBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		HeadBox->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	}


	//Check for head shots
	UWorld* World = GetWorld();

	for (auto& HitLocation : HitLocations)
	{
		FHitResult ConfirmHitResult;
		const FVector TraceEnd = TraceStart + (HitLocation - TraceStart) * 1.25f;
		if (World)
		{
			World->LineTraceSingleByChannel(
				ConfirmHitResult,
				TraceStart,
				TraceEnd,
				ECC_Visibility
			);

			AXMBCharacterBase* BlasterCharacter = Cast<AXMBCharacterBase>(ConfirmHitResult.GetActor());
			if (BlasterCharacter)
			{
				if (ShotgunResult.HeadShots.Contains(BlasterCharacter))
				{
					ShotgunResult.HeadShots[BlasterCharacter]++;
				}
				else
				{
					ShotgunResult.HeadShots.Emplace(BlasterCharacter, 1);
				}
			}
		}
	}


	//Enable collision for all boxes, the disable for head box
	for (auto& Frame : FramePackages)
	{
		for (auto& HitBoxPair : Frame.Character->HitCollisionBoxes)
		{
			if (HitBoxPair.Value != nullptr)
			{
				HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				HitBoxPair.Value->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
			}
		}
		UBoxComponent* HeadBox = Frame.Character->HitCollisionBoxes[FName("head")];
		HeadBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	//Check for body shots
	for (auto& HitLocation : HitLocations)
	{
		FHitResult ConfirmHitResult;
		const FVector TraceEnd = TraceStart + (HitLocation - TraceStart) * 1.25f;

		if (World)
		{
			World->LineTraceSingleByChannel(
			ConfirmHitResult,
			TraceStart,
			TraceEnd,
			ECC_Visibility
		);

			AXMBCharacterBase* BlasterCharacter = Cast<AXMBCharacterBase>(ConfirmHitResult.GetActor());
			if (BlasterCharacter)
			{
				if (ShotgunResult.BodyShots.Contains(BlasterCharacter))
				{
					ShotgunResult.BodyShots[BlasterCharacter]++;
				}
				else
				{
					ShotgunResult.BodyShots.Emplace(BlasterCharacter, 1);
				}
			}
		}
		}
		

	for (auto& Frame : CurrentFrames)
	{
		ResetHitBoxes(Frame.Character, Frame);
		EnableCharacterMeshCollision(Frame.Character, ECollisionEnabled::QueryAndPhysics);
	}


	return ShotgunResult;
}


void ULagCompensationComponent::CacheBoxPosition(AXMBCharacterBase* HitCharacter, FFramePackage& OutFramePackage)
{
	if (HitCharacter == nullptr)
	{
		return;
	}

	for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
	{
		if (HitBoxPair.Value != nullptr)
		{
			FBoxInformation BoxInfo;
			BoxInfo.BoxLocation = HitBoxPair.Value->GetComponentLocation();
			BoxInfo.BoxRotation = HitBoxPair.Value->GetComponentRotation();
			BoxInfo.BoxExtent = HitBoxPair.Value->GetScaledBoxExtent();
			OutFramePackage.HitBoxInfo.Add(HitBoxPair.Key, BoxInfo);
		}
	}
}


void ULagCompensationComponent::MoveBoxes(AXMBCharacterBase* HitCharacter, const FFramePackage& Package)
{
	if (HitCharacter == nullptr)
	{
		return;
	}

	for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
	{
		if (HitBoxPair.Value != nullptr)
		{
			HitBoxPair.Value->SetWorldLocation(Package.HitBoxInfo[HitBoxPair.Key].BoxLocation);
			HitBoxPair.Value->SetWorldRotation(Package.HitBoxInfo[HitBoxPair.Key].BoxRotation);
			HitBoxPair.Value->SetBoxExtent(Package.HitBoxInfo[HitBoxPair.Key].BoxExtent);
		}
	}
}


void ULagCompensationComponent::ResetHitBoxes(AXMBCharacterBase* HitCharacter, const FFramePackage& Package)
{
	if (HitCharacter == nullptr)
	{
		return;
	}

	for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
	{
		if (HitBoxPair.Value != nullptr)
		{
			HitBoxPair.Value->SetWorldLocation(Package.HitBoxInfo[HitBoxPair.Key].BoxLocation);
			HitBoxPair.Value->SetWorldRotation(Package.HitBoxInfo[HitBoxPair.Key].BoxRotation);
			HitBoxPair.Value->SetBoxExtent(Package.HitBoxInfo[HitBoxPair.Key].BoxExtent);

			HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}


void ULagCompensationComponent::EnableCharacterMeshCollision(AXMBCharacterBase* HitCharacter,
                                                             ECollisionEnabled::Type CollisionEnabled)
{
	if (HitCharacter && HitCharacter->GetMesh())
	{
		HitCharacter->GetMesh()->SetCollisionEnabled(CollisionEnabled);
	}
}


void ULagCompensationComponent::SaveFramePackage(FFramePackage& Package)
{
	Owner = Owner == nullptr ? Cast<AXMBCharacterBase>(GetOwner()) : Owner;
	if (Owner)
	{
		Package.Time = GetWorld()->GetTimeSeconds();
		Package.Character = Owner;
		for (auto& BoxPair : Owner->HitCollisionBoxes)
		{
			FBoxInformation BoxInformation;
			BoxInformation.BoxLocation = BoxPair.Value->GetComponentLocation();
			BoxInformation.BoxRotation = BoxPair.Value->GetComponentRotation();
			BoxInformation.BoxExtent = BoxPair.Value->GetScaledBoxExtent();
			Package.HitBoxInfo.Add(BoxPair.Key, BoxInformation);
		}
	}
}


void ULagCompensationComponent::ShowFramePackage(const FFramePackage& Package, const FColor Color)
{
	for (auto& BoxInfo : Package.HitBoxInfo)
	{
		DrawDebugBox(
			GetWorld(),
			BoxInfo.Value.BoxLocation,
			BoxInfo.Value.BoxExtent,
			FQuat(BoxInfo.Value.BoxRotation),
			Color,
			false,
			5.f);
	}
}
