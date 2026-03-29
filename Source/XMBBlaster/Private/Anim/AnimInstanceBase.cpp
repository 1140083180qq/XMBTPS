// Fill out your copyright notice in the Description page of Project Settings.


#include "Anim/AnimInstanceBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TurningInPlace.h"
#include "Kismet/KismetMathLibrary.h"

void UAnimInstanceBase::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	XMBCharacter = Cast<AXMBCharacterBase>(TryGetPawnOwner());
}

void UAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (XMBCharacter == nullptr)
	{
		XMBCharacter = Cast<AXMBCharacterBase>(TryGetPawnOwner());
	}
	
	if (XMBCharacter == nullptr)
	{
		return;
	}
	
	FVector Velocity = XMBCharacter->GetVelocity();
	Velocity.Z = 0.f;
	Speed = Velocity.Size();

	bIsInAir = XMBCharacter->GetCharacterMovement()->IsFalling();

	bIsAccelerating = XMBCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f;
	bIsWeaponEquipped = XMBCharacter->IsWeaponEquipped();
	bIsCrouched = XMBCharacter->bIsCrouched; //character内的crouch是属于原生的
	bAiming = XMBCharacter->IsAiming();
	bShoulderAiming = XMBCharacter->IsShoulderAiming();
	TurningInPlace = XMBCharacter->GetTurningInPlace();

	//TODO:此处为Update，需要考虑将武器制作为“仅在装备、更换、丢弃时才对此进行更新"
	EquippedWeapon = XMBCharacter->GetEquippedWeapon();

	//Offset Yaw for Strafing
	FRotator AimRotation = XMBCharacter->GetBaseAimRotation();//获取瞄准方向
	FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(XMBCharacter->GetVelocity());//计算运动方向。表示角色实际移动的方向。从角色的速度FVector创建一个FRotator、将X方向转换为FRotator角度
	FRotator DeltaRot = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation);//计算旋转差值。角色移动方向与瞄准方向之间的差值。这个差值用于实现"身体跟随脚部"的效果
	DeltaRotation = FMath::RInterpTo(DeltaRotation, DeltaRot, DeltaSeconds, 10.f);//使用旋转插值平滑过渡到目标差值。使动画更自然
	YawOffset = DeltaRotation.Yaw;//提取Yaw轴的偏移量。目的是 使用动画蓝图中的混合空间让上半身相对下半身有一定角度的扭转
	
	CharacterRotationLastFrame = CharacterRotation;
	CharacterRotation = XMBCharacter->GetActorRotation();
	const FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(CharacterRotation, CharacterRotationLastFrame);//保存上一帧的角色旋转，获取当前帧的角色旋转，计算两帧之间的旋转变化量
	const float Target = Delta.Yaw / DeltaSeconds;//计算Yaw方向的角速度，这里是获取到角色转身的速度
	const float Interp = FMath::FInterpTo(Lean, Target, DeltaSeconds, 6.f);//平滑过渡Lean值，使得角色偏移时更自然
	Lean = FMath::Clamp(Interp, -90.f, 90.f);//限制Lean的值

	AO_Yaw = XMBCharacter->GetAO_Yaw();
	AO_Pitch = XMBCharacter->GetAO_Pitch();
	if (bIsWeaponEquipped && EquippedWeapon && EquippedWeapon->GetWeaponMesh() && XMBCharacter->GetMesh())
	{
		LeftHandTransform = EquippedWeapon->GetWeaponMesh()->GetSocketTransform(FName("LeftHandSocket"),RTS_World);
		FVector OutPosition;
		FRotator OutRotation;
		XMBCharacter->GetMesh()->TransformToBoneSpace(FName("hand_r"),LeftHandTransform.GetLocation(),FRotator::ZeroRotator,OutPosition,OutRotation);
		LeftHandTransform.SetLocation(OutPosition);
		LeftHandTransform.SetRotation(FQuat(OutRotation));

		// if (XMBCharacter->IsLocallyControlled())//如此判断是为了减少网络传输，只需要将枪口的转向传输即可
		// {
		// 	bLocallyControlled = true;
			//进行枪口与准心的偏移修复//XMBTODO:此处短暂的解决办法为对插槽进行旋转
			FTransform RightHandTransform = EquippedWeapon->GetWeaponMesh()->GetSocketTransform(FName("hand_r"),RTS_World);
			RightHandRotation = UKismetMathLibrary::FindLookAtRotation(RightHandTransform.GetLocation(), RightHandTransform.GetLocation() + (RightHandTransform.GetLocation() - XMBCharacter->GetHitTarget()));
			// RightHandRotation.Roll -= 90.f;
			// RightHandRotation.Yaw -= 90.f;
		// }
	}
	
}
