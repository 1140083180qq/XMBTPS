
#include "XMBComponent/CombatComponent.h"

#include "Character/XMBCharacterBase.h"
#include "Engine/SkeletalMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"


UCombatComponent::UCombatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	BaseWalkSpeed = 600.f;
	AimWalkSpeed = 450.f;
	ShoulderAimWalkSpeed = 300.f;
}


void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	if (Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = BaseWalkSpeed;
		
		if (Owner->HasAuthority())
		{
			InitializeCarriedAmmo();
		}
	}
}

void UCombatComponent::TickComponent(float DeltaTime, enum ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (Owner && Owner->IsLocallyControlled())
	{
		FHitResult HitResult;
		TraceUnderCrosshairs(HitResult);
		HitTarget = HitResult.ImpactPoint;
	}
}

void UCombatComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UCombatComponent, EquippedWeapon);
	DOREPLIFETIME(UCombatComponent, bAiming);
	DOREPLIFETIME(UCombatComponent, bShoulderAiming);
	DOREPLIFETIME(UCombatComponent, bFireButtonPressed);
	DOREPLIFETIME_CONDITION(UCombatComponent, CarriedAmmo,COND_OwnerOnly);//添加这一个条件是为了不会复制到其他的客户端，仅会在激活的客户端执行
	DOREPLIFETIME(UCombatComponent, CombatState);
	
}

void UCombatComponent::TraceUnderCrosshairs(FHitResult& TraceHitResult)
{
	FVector2D ViewportSize;
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
	}

	FVector2D CrosshairLocation(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);//获取屏幕中心点
	FVector CrosshairWorldPosition;
	FVector CrosshairWorldDirection;
	bool bScreenToWorld = UGameplayStatics::DeprojectScreenToWorld(
		UGameplayStatics::GetPlayerController(this, 0),
		CrosshairLocation,
		CrosshairWorldPosition,
		CrosshairWorldDirection);
	
	if (bScreenToWorld)
	{
		FVector Start = CrosshairWorldPosition;

		if (Owner)
		{
			//TODO:此处可以换种方式:考虑摄像机臂的长度
			float DistanceToCharacter = (Owner->GetActorLocation() - Start).Size();
			Start += CrosshairWorldDirection * (DistanceToCharacter + 100.f);
			// DrawDebugSphere(GetWorld(),Start,16.f,12,FColor::Red,false);
		}
		
		FVector End = Start + CrosshairWorldDirection * TRACE_LENGTH;

		GetWorld()->LineTraceSingleByChannel(
			TraceHitResult,
			Start,
			End,
			ECC_Visibility);

		//此处需要通过更改UIComponent的bool值，再由此来控制其运行
		if (bool InChanged = TraceHitResult.GetActor() && TraceHitResult.GetActor()->Implements<UInteractWithCrosshairsInterface>())
		{
			if (Owner->GetUIComponent()->GetbIsChange() != InChanged)
			{
				// Owner->GetUIComponent()->GetHUDPackage().CrosshairsColor = FLinearColor::Red;
				Owner->GetUIComponent()->SetbIsChange(true);
			}
		}
		else
		{
			if (Owner->GetUIComponent()->GetbIsChange() != InChanged)
			{
				// Owner->GetUIComponent()->GetHUDPackage().CrosshairsColor = FLinearColor::Green;
				Owner->GetUIComponent()->SetbIsChange(false);
			}
		}
		
		if (!TraceHitResult.bBlockingHit)
		{
			TraceHitResult.ImpactPoint = End;
		}
	}
}


void UCombatComponent::Reload()
{
	if (CarriedAmmo > 0 && CombatState != ECombatState::ECS_Reloading)
	{
		ServerReload();
	}
}

void UCombatComponent::FinishReloading()
{
	if (Owner == nullptr) return;
	if (Owner->HasAuthority())
	{
		CombatState =ECombatState::ECS_Unoccupied;
	}
	if(bFireButtonPressed)
	{
		Fire();
	}
}


void UCombatComponent::ServerReload_Implementation()
{
	if (Owner == nullptr) return;

	CombatState = ECombatState::ECS_Reloading;
	HandleReload();
}

void UCombatComponent::HandleReload()
{
	Owner->PlayReloadMontage();
}

void UCombatComponent::EquipWeapon(AWeaponBase* WeaponToEquip)
{
	if (Owner == nullptr || WeaponToEquip == nullptr) return;
	 if (EquippedWeapon)
	 {
		 EquippedWeapon->Dropped();
	 }

	EquippedWeapon = WeaponToEquip;
	EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
	const USkeletalMeshSocket* HandSocket = Owner->GetMesh()->GetSocketByName(FName("RightHandSocket"));
	if (HandSocket)
	{
		HandSocket->AttachActor(EquippedWeapon, Owner->GetMesh());
	}
	EquippedWeapon->SetWeaponOwner(Owner);//SetOwner为复制的，所以当执行到此处时，不管是Client或Server，都会执行
	EquippedWeapon->SetHUDAmmo();//设置HUD的弹药

	if (CarriedAmmoMap.Contains(EquippedWeapon->GetWeaponType()))
	{
		CarriedAmmo = CarriedAmmoMap[WeaponToEquip->GetWeaponType()];
	}
	
	XMBController = XMBController == nullptr ? Cast<AXMBPlayerController>(Owner->Controller) : XMBController;
	if (XMBController)
	{
		XMBController->SetHUDCarriedAmmo(CarriedAmmo);
	}
	
	Owner->GetCharacterMovement()->bOrientRotationToMovement = false;
	Owner->bUseControllerRotationYaw = true;
}

void UCombatComponent::OnRep_EquippedWeapon()
{
	if (EquippedWeapon && Owner)
	{

		EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
		const USkeletalMeshSocket* HandSocket = Owner->GetMesh()->GetSocketByName(FName("RightHandSocket"));
		if (HandSocket)
		{
			HandSocket->AttachActor(EquippedWeapon, Owner->GetMesh());
		}
		
		Owner->GetCharacterMovement()->bOrientRotationToMovement = false;
		Owner->bUseControllerRotationYaw = true;
		
	}
}

void UCombatComponent::OnRep_CarriedAmmo()
{
	XMBController = XMBController == nullptr ? Cast<AXMBPlayerController>(Owner->Controller) : XMBController;
	if (XMBController)
	{
		XMBController->SetHUDCarriedAmmo(CarriedAmmo);
	}
}

void UCombatComponent::OnRep_CombatState()
{
	switch (CombatState)
	{
		case ECombatState::ECS_Reloading: 
			HandleReload();
			break;
		case ECombatState::ECS_Unoccupied: 
			if(bFireButtonPressed)
			{
				Fire();
			}
			break;
	}
}


void UCombatComponent::InitializeCarriedAmmo()
{
	CarriedAmmoMap.Emplace(EWeaponType::EWT_AssaultRifle, StartingArAmmo);
}

void UCombatComponent::SetAiming(bool bIsAiming)
{
	bAiming = bIsAiming;
	ServerSetAiming(bIsAiming);
	if (Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = bIsAiming ? AimWalkSpeed : BaseWalkSpeed;
	}
}

void UCombatComponent::ServerSetAiming_Implementation(bool bIsAiming)
{
	bAiming = bIsAiming;
	if (Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = bIsAiming ? AimWalkSpeed : BaseWalkSpeed;
	}
}

void UCombatComponent::SetShoulderAiming(bool bIsShoulderAiming)
{
	bShoulderAiming = bIsShoulderAiming;
	ServerSetShoulderAiming(bIsShoulderAiming);
	if (Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = bIsShoulderAiming ? ShoulderAimWalkSpeed : BaseWalkSpeed;
	}
}

void UCombatComponent::ServerSetShoulderAiming_Implementation(bool bIsShoulderAiming)
{
	bShoulderAiming = bIsShoulderAiming;
	if (Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = bIsShoulderAiming ? ShoulderAimWalkSpeed : BaseWalkSpeed;
	}
}



void UCombatComponent::StartFireTimer()
{
	if (EquippedWeapon == nullptr || Owner == nullptr) return;

	Owner->GetWorldTimerManager().SetTimer(
		FireTimer,
		this,
		&UCombatComponent::FireTimerFinished,
		EquippedWeapon->FireDelay
		);
}

void UCombatComponent::FireTimerFinished()
{
	if (EquippedWeapon == nullptr) return;
	
	bCanFire = true;
	if (bFireButtonPressed && EquippedWeapon->bAutomatic)
	{
		Fire();
	}
}

bool UCombatComponent::CanFire()
{
	if (EquippedWeapon == nullptr) return false;
	// return !EquippedWeapon->IsAmmoEmply() || !bCanFire;
	// return !EquippedWeapon->IsAmmoEmply() && bCanFire;
	return !EquippedWeapon->IsAmmoEmply() && bCanFire && CombatState == ECombatState::ECS_Unoccupied;
}

void UCombatComponent::Fire()
{
	if (EquippedWeapon == nullptr) return;
	
	// if (CanFire())
	if (bCanFire)
	{
		bCanFire = false;
		ServerFire(HitTarget);
		StartFireTimer();
	}
}

void UCombatComponent::FireButtonPressed(bool bPressed)
{
	bFireButtonPressed = bPressed;
	if (bFireButtonPressed)
	{
		// ServerFire(HitTarget);
		Fire();
	}
}

//若客户端执行了这个函数，不会传递给其他客户端，必须由客户端(调用)->服务器(执行并传播)->其他客户端(执行)
void UCombatComponent::ServerFire_Implementation(const FVector_NetQuantize& TraceHitTarget)
{
	//若是服务器调用，则同步到其他客户端。
	MulticastFire(TraceHitTarget);
}

void UCombatComponent::MulticastFire_Implementation(const FVector_NetQuantize& TraceHitTarget)
{
	if (EquippedWeapon == nullptr) return;
	if (Owner && CombatState == ECombatState::ECS_Unoccupied)//若在换蛋时仍按着鼠标，若没进入这个状态，则无法开火
	{
		Owner->PlayFireMontage(bFireButtonPressed);
		EquippedWeapon->Fire(TraceHitTarget);
	}
}

