// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Flag.h"

AFlag::AFlag()
{
	FlagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlagMesh"));
	SetRootComponent(FlagMesh);

	GetAreaSphere()->SetupAttachment(FlagMesh);
	GetPickupWidget()->SetupAttachment(FlagMesh);

	FlagMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	FlagMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
}

void AFlag::Dropped()
{
	SetWeaponState(EWeaponState::EWS_Dropped); // 切换到丢弃状态（启用物理）

	// 从角色骨骼插槽分离武器，保持世界坐标系的位置和旋转
	FDetachmentTransformRules DetachRules(EDetachmentRule::KeepWorld, true);
	FlagMesh->DetachFromComponent(DetachRules);

	SetOwner(nullptr); // 解除拥有者关系（触发 OnRep_Owner 清理缓存）
	XMBOwnerCharacter = nullptr; // 清空角色缓存
	XMBOwnerController = nullptr; // 清空控制器缓存
}

void AFlag::OnEquippedState()
{
	// 装备状态下禁用拾取相关功能
	ShowPickupWidget(false);                    // 隐藏拾取提示
	GetAreaSphere()->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 关闭拾取检测
	
	// 武器变为"附着模式"：无物理、无重力、无碰撞
	FlagMesh->SetSimulatePhysics(false);      // 关闭物理模拟
	FlagMesh->SetEnableGravity(false);         // 关闭重力
	FlagMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 关闭碰撞
	EnableCustomDepth(false);
}

void AFlag::OnDroppedState()
{
	// 丢弃状态下仅在服务器端重新开启拾取碰撞（避免客户端冲突）
	if (HasAuthority())
	{
		GetAreaSphere()->SetCollisionEnabled(ECollisionEnabled::QueryOnly); // 仅射线检测（不物理碰撞）
	}
	// 武器变为"物理模式"：可落地、可碰撞
	FlagMesh->SetSimulatePhysics(true);       // 启用物理模拟（可被推动、弹跳）
	FlagMesh->SetEnableGravity(true);          // 启用重力（自然下落）
	FlagMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics); // 启用完整碰撞

	FlagMesh->SetCustomDepthStencilValue(CUSTOM_DEPTH_BLUE);
	FlagMesh->MarkRenderStateDirty();
	EnableCustomDepth(true);
}
