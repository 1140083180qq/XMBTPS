

#include "Character/XMBCharacterBase.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "XMBComponent/CombatComponent.h"
#include "Net/UnrealNetwork.h"


AXMBCharacterBase::AXMBCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetMesh());
	CameraBoom->TargetArmLength = 600.f;
	CameraBoom->bUsePawnControlRotation = true;
	
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	OverheadWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("OverheadWidget"));
	OverheadWidget->SetupAttachment(GetMesh());

	CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));
	CombatComponent->SetIsReplicated(true);

	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;
}

void AXMBCharacterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (CombatComponent)
	{
		CombatComponent->Owner = this;
	}
}

void AXMBCharacterBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AXMBCharacterBase, OverlappingWeapon,COND_OwnerOnly);//添加一个条件，只能让Owner同步。触发时也只能让Owner看到
	
}

void AXMBCharacterBase::EquipButtonPressed()
{
	if (CombatComponent)
	{
		//有权则在服务器上运行
		if (HasAuthority())
		{
			CombatComponent->EquipWeapon(OverlappingWeapon);
		}
		else
		{
			ServerEquipButtonPressed();
		}
	}
}

//连接服务器需要实现_Implementation
void AXMBCharacterBase::ServerEquipButtonPressed_Implementation()
{
	//不用检查Authority因为仅在Server执行
	if (CombatComponent)
	{
		CombatComponent->EquipWeapon(OverlappingWeapon);
	}
}

void AXMBCharacterBase::SetOverlappingWeapon(AWeaponBase* Weapon)
{
	if (OverlappingWeapon)
	{
		OverlappingWeapon->ShowPickupWidget(false);
	}
	
	OverlappingWeapon = Weapon;
	if (IsLocallyControlled())
	{
		if (OverlappingWeapon)
		{
			OverlappingWeapon->ShowPickupWidget(true);
		}
	}
}

void AXMBCharacterBase::OnRep_OverlappingWeapon(AWeaponBase* LastWeapon)
{
	//如果重叠结束，此处的OverlappingWeapon未nullptr，则无法设置ShowPickupWidget
	//所以需要一个用来存储武器的变量，于是可以传入LastWeapon
	if (OverlappingWeapon)
	{
		OverlappingWeapon->ShowPickupWidget(true);
	}
	if (LastWeapon)
	{
		LastWeapon->ShowPickupWidget(false);
	}
}

void AXMBCharacterBase::CrouchButtonPressed()
{
	if (bIsCrouched)
	{
		UnCrouch();
	}
	else
	{
		Crouch();
	}
}

void AXMBCharacterBase::AimButtonPressed()
{
	if (CombatComponent) CombatComponent->bAiming = true;
}

void AXMBCharacterBase::AimButtonReleased()
{
	if (CombatComponent) CombatComponent->bAiming = false;
}

void AXMBCharacterBase::ShoulderAimButtonPressed()
{
	if (CombatComponent) CombatComponent->bShoulderAiming = true;
}

void AXMBCharacterBase::ShoulderAimButtonReleased()
{
	if (CombatComponent) CombatComponent->bShoulderAiming = false;
}


bool AXMBCharacterBase::IsWeaponEquipped()
{
	return (CombatComponent && CombatComponent->EquippedWeapon);
}


bool AXMBCharacterBase::IsAiming()
{
	return (CombatComponent && CombatComponent->bAiming);
}

bool AXMBCharacterBase::IsShoulderAiming()
{
	return (CombatComponent && CombatComponent->bShoulderAiming);
}


