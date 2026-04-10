// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/XMBCharacterBase.h"
#include "GameFramework/GameMode.h"
#include "BlasterGameMode.generated.h"

//自定义匹配状态
namespace  MatchState
{
	extern XMBBLASTER_API const FName Cooldown;//比赛时间结束，将决出胜者并停止游戏并停止游戏
}

/**
 * 
 */
UCLASS()
class XMBBLASTER_API ABlasterGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ABlasterGameMode();
	virtual void Tick(float DeltaSeconds) override;
	virtual void PlayerEliminated(AXMBCharacterBase* ElimmedCharacter, AXMBPlayerController* VictimController,AXMBPlayerController* AttackerController);
	virtual void RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController);

	UPROPERTY(EditDefaultsOnly)
	float WarmupTime = 5.f;//等待时间

	UPROPERTY(EditDefaultsOnly)
	float MatchTime = 10.f;//本局游戏时间

	UPROPERTY(EditDefaultsOnly)
	float CooldownTime = 5.f;//比赛开始前的冷却时间

	float LevelStartingTime = 0.f;

	FORCEINLINE float GetCountdownTime() const { return CountdownTime; }
	
protected:
	virtual void BeginPlay() override;
	virtual void OnMatchStateSet() override;

private:
	
	float CountdownTime = 0.f;
	
};

