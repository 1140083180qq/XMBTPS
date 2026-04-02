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
	bRotateRootBone = XMBCharacter->ShouldRotateRootBone();
	EquippedWeapon = XMBCharacter->GetEquippedWeapon();//TODO:此处为Update，需要考虑将武器制作为"仅在装备、更换、丢弃时才对此进行更新"
	bElimmed = XMBCharacter->IsElimmed();

	//--------------------------------重点
	/**
	假设玩家按 W（前进）+ D（右移），同时鼠标向右偏转看：

	GetBaseAimRotation() = (0, 45, 0)  ← 相机朝右前方 45°
	GetVelocity() = (100, 100, 0)     ← 实际移动方向（右前方）
	MakeRotFromX(velocity) = (0, 45, 0) ← 速度方向转成的旋转
	NormalizedDeltaRotator(movement, aim) = (0, 0, 0)  ← 差值为 0（方向一致）

	假设玩家按 W（前进），但鼠标向右偏 30° 看：
	AimRotation = (0, 30, 0)
	Velocity = (0, 100, 0)           ← 向前走
	MovementRotation = (0, 0, 0)     ← 向前
	DeltaRot = (0, -30, 0)           ← 身体需要向右偏 30°
	YawOffset = -30                   ← 动画蓝图中上半身向右转 30°
		*/
	//Strafing(横移)的核心计算，作用是让上半身朝瞄准方向、下半身朝移动方向，两者之间有一个 Yaw 偏移。
	FRotator AimRotation = XMBCharacter->GetBaseAimRotation();//获取瞄准方向
	FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(XMBCharacter->GetVelocity());//计算运动方向。表示角色实际移动的方向。从角色的速度FVector创建一个FRotator、将X方向转换为FRotator角度
	FRotator DeltaRot = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation);//计算旋转差值。角色移动方向与瞄准方向之间的差值。这个差值用于实现"身体跟随脚部"的效果
	DeltaRotation = FMath::RInterpTo(DeltaRotation, DeltaRot, DeltaSeconds, 10.f);//使用旋转插值平滑过渡到目标差值。使动画更自然
	YawOffset = DeltaRotation.Yaw;//提取Yaw轴的偏移量。目的是 使用动画蓝图中的混合空间让上半身相对下半身有一定角度的扭转
	
	/**
	Delta = 当前帧角色旋转 - 上一帧角色旋转（帧间旋转差）
	Target = Delta.Yaw / DeltaSeconds
	这是 Yaw 轴的角速度（°/秒）
	例如一帧转了 2°，帧间隔 0.016s，则角速度 = 2 / 0.016 = 125°/s
	Interp = FInterpTo(Lean, Target, 6.f)
	以速率 6 平滑过渡到目标角速度
	Lean = Clamp(Interp, -90, 90)
	限制在 [-90, 90] 范围内
	正值 = 向右转（身体右倾），负值 = 向左转（身体左倾）
	*/
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
			FRotator LookAtRotation =UKismetMathLibrary::FindLookAtRotation(RightHandTransform.GetLocation(), RightHandTransform.GetLocation() + (RightHandTransform.GetLocation() - XMBCharacter->GetHitTarget()));
			RightHandRotation = FMath::RInterpTo(RightHandRotation, LookAtRotation, DeltaSeconds, 10.f);
			// RightHandRotation.Roll -= 90.f;
			// RightHandRotation.Yaw -= 90.f;
		// }
	}
	
}
