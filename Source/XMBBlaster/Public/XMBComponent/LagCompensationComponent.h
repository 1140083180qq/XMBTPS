
#pragma once

#include "CoreMinimal.h"
#include "Character/XMBCharacterBase.h"

#include "Components/ActorComponent.h"
#include "LagCompensationComponent.generated.h"


class AWeaponBase;
class AXMBCharacterBase;
class AXMBPlayerController;

USTRUCT(BlueprintType)
struct FBoxInformation
{
	GENERATED_BODY()

	UPROPERTY()
	FVector BoxLocation;

	UPROPERTY()
	FRotator BoxRotation;

	UPROPERTY()
	FVector BoxExtent;
	
};

USTRUCT(BlueprintType)
struct FFramePackage
{
	GENERATED_BODY()

	UPROPERTY()
	float Time;

	UPROPERTY()
	TMap<FName, FBoxInformation> HitBoxInfo;

	UPROPERTY()
	AXMBCharacterBase* Character;
	
};


USTRUCT(BlueprintType)
struct FServerSideRewindResult
{
	GENERATED_BODY()

	UPROPERTY()
	bool bHitConfirmed;

	UPROPERTY()
	bool bHeadShot;
	
};

USTRUCT(BlueprintType)
struct FShotgunServerSideRewindResult
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<AXMBCharacterBase*, uint32> HeadShots;

	UPROPERTY()
	TMap<AXMBCharacterBase*, uint32> BodyShots;
	
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class XMBBLASTER_API ULagCompensationComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	ULagCompensationComponent();
	friend AXMBCharacterBase;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void ShowFramePackage(const FFramePackage& Package, const FColor Color);

	/*
	 * HitScan
	 */
	FServerSideRewindResult ServerSideRewind(AXMBCharacterBase* HitCharacter, const FVector_NetQuantize& TraceStart,const FVector_NetQuantize& HitLocation, float HitTime);

	UFUNCTION(Server, Reliable)
	void ServerScoreRequest(AXMBCharacterBase* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize& HitLocation, float HitTime, AWeaponBase* DamageCauser);
	
	/*
	 * Projectile
	 */
	FServerSideRewindResult ProjectileServerSideRewind(AXMBCharacterBase* HitCharacter,const FVector_NetQuantize& TraceStart,const FVector_NetQuantize100& InitialVelocity,float HitTime);

	UFUNCTION(Server, Reliable)
	void ProjectileServerScoreRequest(
		AXMBCharacterBase* HitCharacter,const FVector_NetQuantize& TraceStart,const FVector_NetQuantize100& InitialVelocity,float HitTime);
	/*
	 * Shotgun
	 */
	FShotgunServerSideRewindResult ShotgunServerSideRewind(const TArray<AXMBCharacterBase*>& HitCharacters,const FVector_NetQuantize& TraceStart, const TArray<FVector_NetQuantize>& HitLocations, float HitTime);
	
	UFUNCTION(Server, Reliable)
	void ShotgunServerScoreRequest(const TArray<AXMBCharacterBase*>& HitCharacters, const FVector_NetQuantize& TraceStart, const TArray<FVector_NetQuantize>& HitLocations, float HitTime);

	

	
	
protected:
	virtual void BeginPlay() override;

	void SaveFramePackage(FFramePackage& Package);

	FFramePackage InterpBetweenFrames(const FFramePackage& OlderFrame, const FFramePackage& YoungerFrame, float HitTime);
	void CacheBoxPosition(AXMBCharacterBase* HitCharacter, FFramePackage& OutFramePackage);
	void MoveBoxes(AXMBCharacterBase* HitCharacter, const FFramePackage& Package);
	void ResetHitBoxes(AXMBCharacterBase* HitCharacter, const FFramePackage& Package);
	void EnableCharacterMeshCollision(AXMBCharacterBase* HitCharacter, ECollisionEnabled::Type CollisionEnabled);
	
	void SaveFramePackage();

	FFramePackage GetFrameToCheck(AXMBCharacterBase* HitCharacter, float HitTime);

	/*
	 * HitScan
	 */
	FServerSideRewindResult ConfirmHit(const FFramePackage& Package, AXMBCharacterBase* HitCharacter, const FVector_NetQuantize& TraceStart, const FVector_NetQuantize& HitLocation);

	/*
	 * Projectile
	 */
	FServerSideRewindResult ProjectileConfirmHit(const FFramePackage& Package,AXMBCharacterBase* HitCharacter,const FVector_NetQuantize& TraceStart,const FVector_NetQuantize100& InitialVelocity,float HitTime);
	
	/*
	 * Shotgun 
	 */
	FShotgunServerSideRewindResult ShotgunConfirmHit(const TArray<FFramePackage>& FramePackages,const FVector_NetQuantize& TraceStart, const TArray<FVector_NetQuantize>& HitLocations);
	
private:
	UPROPERTY()
	AXMBCharacterBase* Owner;

	UPROPERTY()
	AXMBPlayerController* OwnerController;

	/*
	 * 历史帧数保存记录
	 */
	
	TDoubleLinkedList<FFramePackage> FrameHistory;

	UPROPERTY(EditAnywhere,Category = "Frame")
	float MaxRecordTime = 4.f;

	
	
	

};


