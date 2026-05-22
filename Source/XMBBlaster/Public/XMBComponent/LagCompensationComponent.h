
#pragma once

#include "CoreMinimal.h"
#include "Character/XMBCharacterBase.h"
#include "Components/ActorComponent.h"
#include "LagCompensationComponent.generated.h"


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

	TMap<FName, FBoxInformation> HitBoxInfo;
	
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class XMBBLASTER_API ULagCompensationComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	ULagCompensationComponent();
	friend AXMBCharacterBase;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
protected:
	virtual void BeginPlay() override;


private:
	UPROPERTY()
	AXMBCharacterBase* Owner;

	UPROPERTY()
	AXMBPlayerController* OwnerController;
	
	

};
