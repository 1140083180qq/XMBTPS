// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"

#include "XMBBlasterGameState.generated.h"

class AXMBPlayerState;


/**
 * @class AXMBBlasterGameState
 * @brief 游戏状态
 * 
 * 管理全局游戏状态数据：
 * - 追踪领先玩家的分数
 * - 维护最高分玩家列表
 * - 所有客户端共享此数据
 */
UCLASS()
class XMBBLASTER_API AXMBBlasterGameState : public AGameState
{
	GENERATED_BODY()

public:

	/** 设置网络复制属性 */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/**
	 * @brief 更新最高分排名
	 * @param ScoringPlayer - 刚刚获得分数的玩家
	 * 根据玩家分数更新TopScoringPlayers列表
	 */
	void UpdateTopScore(AXMBPlayerState* ScoringPlayer);
	
	/** 最高分玩家列表（所有客户端可见） */
	UPROPERTY(Replicated)
	TArray<AXMBPlayerState*> TopScoringPlayers;

	/*
	 * Team
	 */

	TArray<AXMBPlayerState*> RedTeam;
	TArray<AXMBPlayerState*> BlueTeam;

	UPROPERTY(ReplicatedUsing = OnRep_RedTeamScore)
	float RedTeamScore = 0.f;

	UPROPERTY(ReplicatedUsing = OnRep_BlueTeamScore)
	float BlueTeamScore = 0.f;
	
	UFUNCTION()
	void OnRep_RedTeamScore();

	UFUNCTION()
	void OnRep_BlueTeamScore();

private:
	/** 当前最高分记录 */
	float TopScore = 0.f;
	
	
};
