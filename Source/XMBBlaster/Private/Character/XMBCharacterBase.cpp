

#include "Character/XMBCharacterBase.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "XMBComponent/CombatComponent.h"
#include "Net/UnrealNetwork.h"


AXMBCharacterBase::AXMBCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
	NetUpdateFrequency = 66.f;
	MinNetUpdateFrequency = 33.f;

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
	GetCharacterMovement()->RotationRate = FRotator(0.f, 0.f, 650.f);

	//解决角色阻挡相机
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	

	TurningInPlace = ETurningInPlace::ETIP_NotTurning;
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

void AXMBCharacterBase::AimOffset(float DeltaTime)
{
	if (CombatComponent && CombatComponent->EquippedWeapon == nullptr) return;
	FVector Velocity = GetVelocity();
	Velocity.Z = 0.f;
	float Speed = Velocity.Size();
	bool bIsInAir = GetCharacterMovement()->IsFalling();

	if (Speed == 0.f && !bIsInAir)//确保处于站立状态
	{
		FRotator CurrentAimRotation = FRotator(0.f	, GetBaseAimRotation().Yaw, 0.f);
		FRotator DeltaAimRotation = UKismetMathLibrary::NormalizedDeltaRotator(CurrentAimRotation,StartingAimRotation);
		AO_Yaw = DeltaAimRotation.Yaw;
		if (TurningInPlace == ETurningInPlace::ETIP_NotTurning)
		{
			InterpAO_Yaw = AO_Yaw;//当角色没有转身时，将插值设置为当前的旋转量
		}
		bUseControllerRotationYaw = true;
		TurnInPlace(DeltaTime);
	}
	if (Speed > 0.f	|| bIsInAir)
	{
		StartingAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		AO_Yaw = 0.f;
		bUseControllerRotationYaw = true;
		TurningInPlace = ETurningInPlace::ETIP_NotTurning;//有速度or在空中则不旋转
	}
	
	AO_Pitch = GetBaseAimRotation().Pitch;
	if (AO_Pitch > 90.f && !IsLocallyControlled())
	{
		//将Pitch从[270, 360) 转换为[-90,0)
		FVector2D InRange(270.f, 360.f);
		FVector2D OutRange(-90.f,0.f);
		AO_Pitch = FMath::GetMappedRangeValueClamped(InRange, OutRange, AO_Pitch);
	}
}

void AXMBCharacterBase::TurnInPlace(float DeltaTime)
{
	
	// UE_LOG(LogTemp, Warning, TEXT("AO_Yaw: %f"), AO_Yaw)
	if (AO_Yaw > 90.f)//玩家视角转向右边90
	{
		TurningInPlace = ETurningInPlace::ETIP_Right;
	}
	else if (AO_Yaw < -90.f)//玩家视角转向左边90
	{
		TurningInPlace = ETurningInPlace::ETIP_Left;
	}
	if (TurningInPlace != ETurningInPlace::ETIP_NotTurning)
	{
		InterpAO_Yaw = FMath::FInterpTo(InterpAO_Yaw, 0.f, DeltaTime, 2.f);//更改插值(角色在转身的时候，我们需要改变着一个值，使其与AO_Yaw一致)
		AO_Yaw = InterpAO_Yaw;
		if (FMath::Abs(AO_Yaw) < 15.f)//若旋转角度已经变换到小于这个角度
		{
			TurningInPlace = ETurningInPlace::ETIP_NotTurning;//则停止旋转
			StartingAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);//并且将当前瞄准的方向设置为起始方向
		}
	}
}

void AXMBCharacterBase::Jump()
{
	if (bIsCrouched)
	{
		UnCrouch();
	}
	else
	{
		Super::Jump();
	}
}



AWeaponBase* AXMBCharacterBase::GetEquippedWeapon()
{
	if (CombatComponent == nullptr) return nullptr;
	return CombatComponent->EquippedWeapon;
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
	if (CombatComponent) CombatComponent->SetAiming(true);
}

void AXMBCharacterBase::AimButtonReleased()
{
	if (CombatComponent) CombatComponent->SetAiming(false);
}

void AXMBCharacterBase::ShoulderAimButtonPressed()
{
	if (CombatComponent) CombatComponent->SetShoulderAiming(true);
}

void AXMBCharacterBase::ShoulderAimButtonReleased()
{
	if (CombatComponent) CombatComponent->SetShoulderAiming(false);
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

// void AXMBCharacterBase::Tick(float DeltaSeconds)
// {
// 	Super::Tick(DeltaSeconds);
//
// 	AimOffset(DeltaSeconds);
// }


