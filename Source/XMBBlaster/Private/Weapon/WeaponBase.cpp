
#include "Weapon/WeaponBase.h"

#include "Character/XMBCharacterBase.h"
#include "Net/UnrealNetwork.h"


AWeaponBase::AWeaponBase()
{
	bReplicates = true;//在这里设置了这个类为可复制的，所以他的变量才能设置为可复制

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	SetRootComponent(WeaponMesh);

	WeaponMesh->SetCollisionResponseToAllChannels(ECR_Block);
	WeaponMesh->SetCollisionResponseToChannel(ECC_Pawn,ECR_Ignore);
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	AreaSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AreaSphere"));
	AreaSphere->SetupAttachment(RootComponent);
	AreaSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	PickupWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("PickupWidget"));
	PickupWidget->SetupAttachment(RootComponent);
	
}

void AWeaponBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	//注册可复制的变量
	DOREPLIFETIME(AWeaponBase, WeaponState);
}

void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())//GetLocalRole() == ROLE_Authority
	{
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		AreaSphere->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
		
		//绑定重叠事件
		AreaSphere->OnComponentBeginOverlap.AddDynamic(this,&AWeaponBase::OnSphereOverlap);
		AreaSphere->OnComponentEndOverlap.AddDynamic(this,&AWeaponBase::OnSphereEndOverlap);
	}

	if (PickupWidget)
	{
		PickupWidget->SetVisibility(false);
	}
}

void AWeaponBase::ShowPickupWidget(bool bShowWidget)
{
	if (PickupWidget)
	{
		PickupWidget->SetVisibility(bShowWidget);
	}
}

void AWeaponBase::SetWeaponState(EWeaponState State)
{
	WeaponState = State;
	switch (WeaponState)
	{
	case EWeaponState::EWS_Equipped:
		ShowPickupWidget(false);
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	}
}

void AWeaponBase::OnRep_WeaponState()
{
	switch (WeaponState)
	{
	case EWeaponState::EWS_Equipped:
		ShowPickupWidget(false);
		break;
	}
}

void AWeaponBase::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AXMBCharacterBase* XMBCharacter = Cast<AXMBCharacterBase>(OtherActor);
	if (XMBCharacter && PickupWidget)
	{
		XMBCharacter->SetOverlappingWeapon(this);//调用角色内更改武器的函数，触发之后会将更新后的Weapon从Server复制给其他的Client
	}
}

void AWeaponBase::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AXMBCharacterBase* XMBCharacter = Cast<AXMBCharacterBase>(OtherActor);
	if (XMBCharacter && PickupWidget)
	{
		XMBCharacter->SetOverlappingWeapon(nullptr);
	}
}


