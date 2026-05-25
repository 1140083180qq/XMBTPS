
#pragma once

#include "CoreMinimal.h"
#include "Casing.h"
#include "GameTypes/WeaponTypes.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Actor.h"

class AXMBPlayerController;
class AXMBCharacterBase;
#include "WeaponBase.generated.h"


/**
 * @enum EWeaponState
 * @brief 武器状态枚举
 */
UENUM(BlueprintType)
enum class EWeaponState : uint8
{
	EWS_Initial UMETA(DisplayName = "Initial State"),     // 初始状态
	EWS_Equipped UMETA(DisplayName = "Equipped"),         // 已装备状态
	EWS_Dropped UMETA(DisplayName = "Dropped"),           // 已丢弃状态
	EWS_EquippedSecondary UMETA(DisplayName = "Equipped Secondary"),//拾取另一把武器
	EWS_MAX UMETA(DisplayName = "DefaultMAX")             // 最大值占位符
};

UENUM(BlueprintType)
enum class EFireType : uint8
{
	EFT_HitScan UMETA(DisplayName = "Hit Scan Weapon"),
	EFT_Projectile UMETA(DisplayName = "Porjectile Weapon"),
	EFT_Shotgun UMETA(DisplayName = "Shotgun Weapon"),
	
	EFT_MAX UMETA(DisplayName = "DefaultMAX")
};




UCLASS()
class XMBBLASTER_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AWeaponBase();
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	/*
	 * 拾取武器
	 */
	
	/*** @brief 显示或隐藏拾取UI*/
	void ShowPickupWidget(bool bShowWidget);

	/*** @brief 设置武器状态*/
	void SetWeaponState(EWeaponState State);
	
	/** Owner变化时的回调（网络复制触发） */
	virtual void OnRep_Owner() override;
	
	/** 更新HUD上显示的弹药数量 */
	void SetHUDAmmo();

	/*** @brief 设置武器拥有者*/
	void SetWeaponOwner(ACharacter* Character);

	
	/*
	 * 开火
	 */

	/*@brief 开火（虚函数，子类可重写）*/
	virtual void Fire(const FVector& HitTarget);

	/** @return 弹药是否耗尽 */
	bool IsAmmoEmply();

	bool IsAmmoFull();

	

	/** 准心中心纹理 */
	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrosshairCenter;
	
	/** 准心左侧纹理 */
	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrosshairLeft;
	
	/** 准心右侧纹理 */
	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrosshairRight;
	
	/** 准心上侧纹理 */
	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrosshairTop;
	
	/** 准心下侧纹理 */
	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrosshairBottom;

	/**
	 * 瞄准时的FOV缩放参数
	 */

	/** 瞄准时的目标FOV */
	UPROPERTY(EditAnywhere)
	float ZoomedFOV = 30.f;

	/** FOV插值速度 */
	UPROPERTY(EditAnywhere)
	float ZoomInterpSpeed = 20.f;

	/**
	 * 控制开火的参数
	 */

	/** 连发间隔时间（秒） */
	UPROPERTY(EditAnywhere, Category = Combat)
	float FireDelay = 0.15f;
	
	/** 是否为全自动模式（true为全自动，false为半自动） */
	UPROPERTY(EditAnywhere, Category = Combat)
	bool bAutomatic = true;

	/** 丢弃武器（从角色手上掉落到地面） */
	void Dropped();

	/** @brief 添加弹药 */
	void AddAmmo(int32 AmmoToAdd);

	/** 装备武器时的音效 */
	UPROPERTY(EditAnywhere)
	USoundCue* EquipSound;

	/*
	 * 自定义深度
	 */
	void EnableCustomDepth(bool bEnable);


	/*
	 * 武器开火的弹道类型
	 */
	//用于决定武器的弹丸与弹道类型
	UPROPERTY(EditAnywhere)
	EFireType FireType;


	/*
	 * 散射
	 */
	UPROPERTY(EditAnywhere, Category = "Weapon Scatter")
	bool bUseScatter = false;//散射

	FVector TraceEndWithScatter( const FVector& HitTarget);



	/*
	 * 服务器延迟补偿
	 */
	UPROPERTY(Replicated, EditAnywhere)
	bool bUseServerSideRewind = false;
	
protected:
	virtual void BeginPlay() override;

	virtual void OnWeaponStateSet();
	virtual void OnEquippedState();
	virtual void OnDroppedState();
	virtual void OnEquippedSecondary();
	
	UFUNCTION()
	void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/** 碰撞体离开回调 */
	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	/** 造成伤害的来源Pawn */
	UPROPERTY()
	APawn* InstigatorPawn;


	/*
	* 散射
	*/
	UPROPERTY(EditAnywhere, Category = "Weapon Scatter")
	float DistanceToSphere = 800.f;

	UPROPERTY(EditAnywhere, Category = "Weapon Scatter")
	float SphereRadius = 75.f;



	UPROPERTY(EditAnywhere)
	float Damage = 20.f;



	/** 拥有此武器的角色缓存 */
	UPROPERTY()
	AXMBCharacterBase* XMBOwnerCharacter;

	/** 拥有此武器的玩家控制器缓存 */
	UPROPERTY()
	AXMBPlayerController* XMBOwnerController;

	/*
	 * Ping too high
	 */
	UFUNCTION()
	void OnPingTooHigh(bool bPingTooHigh);
	
private:
	/** 武器的骨骼网格体（模型） */
	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
	USkeletalMeshComponent* WeaponMesh;

	/** 碰撞球体（用于检测玩家接近以拾取武器） */
	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
	USphereComponent* AreaSphere;

	/** 当前武器状态（网络复制，变化时通知客户端） */
	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties", ReplicatedUsing = OnRep_WeaponState)
	EWeaponState WeaponState;

	/** 拾取提示UI组件 */
	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties")
	UWidgetComponent* PickupWidget;

	/** 武器开火动画 */
	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	UAnimationAsset* FireAnimation;
	
	/** 武器状态变化时的网络回调 */
	UFUNCTION()
	void OnRep_WeaponState();

	/** 弹壳类（生成抛出的弹壳） */
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACasing> CasingClass;

	/*
	 * 弹药系统
	 */

	/** 当前弹夹内剩余弹药数（网络复制） */
	UPROPERTY(EditAnywhere)//, ReplicatedUsing = OnRep_Ammo
	int32 Ammo;///不再复制OnRep_Ammo使用rpc更新

	/** 弹夹容量上限 */
	UPROPERTY(EditAnywhere)
	int32 MagCapacity;
	
	//未经服务器处理的子弹数量
	int32 Sequence = 0;//在SpendRound中增加，在ClientUpdateAmmo中减少

	UFUNCTION(Client,Reliable)
	void ClientUpdateAmmo(int32 ServerAmmo);

	UFUNCTION(Client,Reliable)
	void ClientAddAmmo(int32 AmmoToAdd);
	
	

	/** 消耗一发子弹 */
	void SpendRound();


	/** 弹药数量变化时的网络回调 */
	// UFUNCTION()/
	// void OnRep_Ammo();



	

	

	/** 武器类型（决定使用哪种弹药） */
	UPROPERTY(EditAnywhere)
	EWeaponType WeaponType;


	bool bDestroyWeapon = false;




	
	
public:
	/** @return 碰撞球体组件 */
	FORCEINLINE USphereComponent* GetAreaSphere() const { return AreaSphere; }
	
	/** @return 武器骨骼网格体 */
	FORCEINLINE USkeletalMeshComponent* GetWeaponMesh() const {return WeaponMesh; }
	
	/** @return 武器类型 */
	FORCEINLINE EWeaponType GetWeaponType() const { return WeaponType; }
	
	/** @return 当前弹药数量 */
	FORCEINLINE int32 GetAmmo() const { return Ammo; }
	
	/** @return 弹夹容量 */
	FORCEINLINE int32 GetMagCapacity() const { return MagCapacity; }

	FORCEINLINE bool GetWeaponDestroy() const { return bDestroyWeapon; }

	FORCEINLINE void SetWeaponDestroy(bool InbDestroy) { bDestroyWeapon = InbDestroy; }

	FORCEINLINE float GetDamage() const { return Damage; }
};

