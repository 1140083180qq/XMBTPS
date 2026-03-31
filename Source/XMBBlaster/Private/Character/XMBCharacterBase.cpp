

#include "Character/XMBCharacterBase.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "XMBComponent/CombatComponent.h"

#include "Net/UnrealNetwork.h"
#include "XMBBlaster/XMBBlaster.h"


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

	UIComponent = CreateDefaultSubobject<UUIComponent>(TEXT("UIComponent"));
	UIComponent->SetIsReplicated(true);
	
	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 0.f, 650.f);

	//解决角色阻挡相机
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetCollisionObjectType(ECC_SkeletalMesh);
	
	GetMesh()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	
	
	TurningInPlace = ETurningInPlace::ETIP_NotTurning;

	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
                            
                            	// GetMesh()->bOnlyAllowAutonomousTickPose = true;
}

void AXMBCharacterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (CombatComponent)
	{
		CombatComponent->Owner = this;
	}

	if (UIComponent)
	{
		UIComponent->Owner = this;
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
	float Speed = CalculateSpeed();
	bool bIsInAir = GetCharacterMovement()->IsFalling();

	if (Speed == 0.f && !bIsInAir)//确保处于站立状态
	{
		bRotateRootBone = true;//允许根骨骼旋转
		FRotator CurrentAimRotation = FRotator(0.f	, GetBaseAimRotation().Yaw, 0.f);//获取当前相机瞄准方向的 Yaw
		FRotator DeltaAimRotation = UKismetMathLibrary::NormalizedDeltaRotator(CurrentAimRotation,StartingAimRotation);//DeltaAimRotation当前瞄准方向相对于锚点的差值
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
		bRotateRootBone = false;
		StartingAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);
		AO_Yaw = 0.f;
		bUseControllerRotationYaw = true;
		TurningInPlace = ETurningInPlace::ETIP_NotTurning;//有速度or在空中则不旋转
	}
	
	CalculateAO_Pitch();
}

void AXMBCharacterBase::CalculateAO_Pitch()
{
	//GetBaseAimRotation().Pitch 在本地客户端直接返回 [-90, 90]
	//但在 Simulated Proxy（其他玩家的角色）上，Pitch 值可能是 [270, 360)（表示往下看）而非 [-90, 0)。这个转换确保远程角色也使用 [-90, 90] 的统一范围。
	AO_Pitch = GetBaseAimRotation().Pitch;
	if (AO_Pitch > 90.f && !IsLocallyControlled())
	{
		//将Pitch从[270, 360) 转换为[-90,0)
		FVector2D InRange(270.f, 360.f);
		FVector2D OutRange(-90.f,0.f);
		AO_Pitch = FMath::GetMappedRangeValueClamped(InRange, OutRange, AO_Pitch);
	}
}

float AXMBCharacterBase::CalculateSpeed()
{
	FVector Velocity = GetVelocity();
	Velocity.Z = 0.f;
	return Velocity.Size();
}

void AXMBCharacterBase::TurnInPlace(float DeltaTime)
{
	// AO_Yaw > 90°  →  TurningInPlace = Right  →  播放右转动画
	//AO_Yaw < -90°  →  TurningInPlace = Left  →  播放左转动画
	
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
		InterpAO_Yaw = FMath::FInterpTo(InterpAO_Yaw, 0.f, DeltaTime, 4.f);//转身过程中：AO_Yaw 通过插值逐渐回到 0
		AO_Yaw = InterpAO_Yaw;
		if (FMath::Abs(AO_Yaw) < 15.f)//|AO_Yaw| < 15°  →  停止转身，更新锚点
		{
			TurningInPlace = ETurningInPlace::ETIP_NotTurning;//则停止旋转
			StartingAimRotation = FRotator(0.f, GetBaseAimRotation().Yaw, 0.f);//并且将当前瞄准的方向设置为起始方向
		}
	}
}

void AXMBCharacterBase::SimProxiesTurn()
{
	if (CombatComponent == nullptr || CombatComponent->EquippedWeapon == nullptr) return;
	
	bRotateRootBone = false;
	float Speed = CalculateSpeed();
	if (Speed > 0.f)
	{
		TurningInPlace = ETurningInPlace::ETIP_NotTurning;
		return;
	}

	
	ProxyRotationLastFrame = ProxyRotation;
	ProxyRotation = GetActorRotation();
	ProxyYaw = UKismetMathLibrary::NormalizedDeltaRotator(ProxyRotation, ProxyRotationLastFrame).Yaw;

	UE_LOG(LogTemp, Warning, TEXT("ProxyYaw: %f"), ProxyYaw);
	
	// ... 设置 TurningInPlace
	if (FMath::Abs(ProxyYaw) > TurnThreshold)
	{
		if (ProxyYaw > TurnThreshold)
		{
			TurningInPlace = ETurningInPlace::ETIP_Right;
		}
		else if (ProxyYaw < -TurnThreshold)
		{
			TurningInPlace = ETurningInPlace::ETIP_Left;
		}
		else
		{
			TurningInPlace = ETurningInPlace::ETIP_NotTurning;
		}
		return;
	}
	TurningInPlace = ETurningInPlace::ETIP_NotTurning;
}

void AXMBCharacterBase::HideCameraIfCharacterClose()
{
	if (!IsLocallyControlled()) return;

	if ((FollowCamera->GetComponentLocation() - GetActorLocation()).Size() < CameraThreshold)
	{
		//隐藏摄像机
		GetMesh()->SetVisibility(false);
		if (CombatComponent && CombatComponent->GetEquippedWeapon() && CombatComponent->EquippedWeapon->GetWeaponMesh())
		{
			CombatComponent->EquippedWeapon->GetWeaponMesh()->bOwnerNoSee = true;//bOwnerNoSee的作用是控制该组件是否对拥有者（Owner）不可见
		}
	}
	else
	{
		GetMesh()->SetVisibility(true);
		if (CombatComponent && CombatComponent->GetEquippedWeapon() && CombatComponent->EquippedWeapon->GetWeaponMesh())
		{
			CombatComponent->EquippedWeapon->GetWeaponMesh()->bOwnerNoSee = false;//bOwnerNoSee的作用是控制该组件是否对拥有者（Owner）不可见
		}
	}
		
	
}



FVector AXMBCharacterBase::GetHitTarget() const
{
	if (CombatComponent == nullptr) return FVector();
	return CombatComponent->HitTarget;
}

void AXMBCharacterBase::OnRep_ReplicatedMovement()
{
	Super::OnRep_ReplicatedMovement();
	
	SimProxiesTurn();
	TimeSinceLastMovementReplication = 0.f;
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

void AXMBCharacterBase::PlayFireMontage(bool bAiming)
{
	if (CombatComponent == nullptr || CombatComponent->EquippedWeapon == nullptr) return;

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && FireWeaponMontage)
	{
		AnimInstance->Montage_Play(FireWeaponMontage);
		FName SectionName;
		SectionName = bAiming ? FName("RifleAim") : FName("RifleHip");
		AnimInstance->Montage_JumpToSection(SectionName);
	}
}

void AXMBCharacterBase::PlayHitReactMontage()
{
	if (CombatComponent == nullptr || CombatComponent->EquippedWeapon == nullptr) return;

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && HitReactMontage)
	{
		AnimInstance->Montage_Play(HitReactMontage);
		FName SectionName("FromFront");
		AnimInstance->Montage_JumpToSection(SectionName);
	}
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

void AXMBCharacterBase::MulticastHit_Implementation()
{
	PlayHitReactMontage();
}

void AXMBCharacterBase::FireButtonPressed()
{
	CombatComponent->FireButtonPressed(true);
}

void AXMBCharacterBase::FireButtonReleased()
{
	CombatComponent->FireButtonPressed(false);
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

void AXMBCharacterBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (GetLocalRole() > ROLE_SimulatedProxy && IsLocallyControlled())
	{
		AimOffset(DeltaSeconds);
	}
	else
	{
		TimeSinceLastMovementReplication += DeltaSeconds;
		if (TimeSinceLastMovementReplication > 0.25f)
		{
			OnRep_ReplicatedMovement();
		}
		CalculateAO_Pitch();
	}
	
	HideCameraIfCharacterClose();
}


