// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/XMBCharacterBase.h"
#include "GameFramework/GameMode.h"
#include "BlasterGameMode.generated.h"

/** 自定义匹配状态扩展 */
namespace  MatchState
{
	/** 比赛时间结束，将决出胜者并停止游戏 */
	extern XMBBLASTER_API const FName Cooldown;
}

/**
 * @class ABlasterGameMode
 * @brief 主游戏模式
 * 
 * 控制游戏流程和规则：
 * - 游戏阶段管理（热身 -> 比赛中 -> 冷却）
 * - 玩家淘汰处理
 * - 重生逻辑
 * - 计时控制
 */
UCLASS()
class XMBBLASTER_API ABlasterGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ABlasterGameMode();
	
	/** 每帧更新，处理计时和比赛阶段切换 */
	virtual void Tick(float DeltaSeconds) override;
	
	/**
	 * @brief 处理玩家被淘汰事件
	 * @param ElimmedCharacter - 被淘汰的角色
	 * @param VictimController - 受害者的控制器
	 * @param AttackerController - 攻击者的控制器
	 */
	virtual void PlayerEliminated(AXMBCharacterBase* ElimmedCharacter, AXMBPlayerController* VictimController, AXMBPlayerController* AttackerController);
	
	/**
	 * @brief 请求重生角色
	 * @param ElimmedCharacter - 被淘汰的角色
	 * @param ElimmedController - 对应的控制器
	 */
	virtual void RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController);


	
	/** 热身等待时长（秒） */
	UPROPERTY(EditDefaultsOnly, Category = Match)
	float WarmupTime = 5.f;

	/** 正式比赛时长（秒） */
	UPROPERTY(EditDefaultsOnly, Category = Match)
	float MatchTime = 10.f;

	/** 比赛结束后的冷却时长（秒） */
	UPROPERTY(EditDefaultsOnly, Category = Match)
	float CooldownTime = 5.f;
	
	/** 关卡开始时刻（服务器时间） */
	float LevelStartingTime = 0.f;


	void PlayerLeftGame(AXMBPlayerState* PlayerLeaving);
	
protected:
	/** 游戏开始时初始化计时器等 */
	virtual void BeginPlay() override;
	
	/** 比赛状态变化时的回调 */
	virtual void OnMatchStateSet() override;


	
private:
	/** 当前倒计时的剩余时间 */
	float CountdownTime = 0.f;

	
	
public:
	/** @return 获取当前倒计时剩余时间 */
	FORCEINLINE float GetCountdownTime() const { return CountdownTime; }
	
};
