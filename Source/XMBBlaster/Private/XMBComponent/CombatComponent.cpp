
#include "XMBComponent/CombatComponent.h"

#include "Character/XMBCharacterBase.h"
#include "Engine/SkeletalMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"


UCombatComponent::UCombatComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	BaseWalkSpeed = 600.f;
	AimWalkSpeed = 450.f;
	ShoulderAimWalkSpeed = 300.f;
}

void UCombatComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UCombatComponent, EquippedWeapon);
	DOREPLIFETIME(UCombatComponent, bAiming);
	DOREPLIFETIME(UCombatComponent, bShoulderAiming);
}

void UCombatComponent::EquipWeapon(AWeaponBase* WeaponToEquip)
{
	if (Owner == nullptr || WeaponToEquip == nullptr) return;

	EquippedWeapon = WeaponToEquip;
	EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);
	const USkeletalMeshSocket* HandSocket = Owner->GetMesh()->GetSocketByName(FName("RightHandSocket"));
	if (HandSocket)
	{
		HandSocket->AttachActor(EquippedWeapon, Owner->GetMesh());
	}
	EquippedWeapon->SetOwner(Owner);//SetOwner为复制的，所以当执行到此处时，不管是Client或Server，都会执行
	Owner->GetCharacterMovement()->bOrientRotationToMovement = false;
	Owner->bUseControllerRotationYaw = true;
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

void UCombatComponent::OnRep_EquippedWeapon()
{
	if (EquippedWeapon && Owner)
	{
		Owner->GetCharacterMovement()->bOrientRotationToMovement = false;
		Owner->bUseControllerRotationYaw = true;
	}
}

void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	if (Owner)
	{
		Owner->GetCharacterMovement()->MaxWalkSpeed = BaseWalkSpeed;
	}
}
