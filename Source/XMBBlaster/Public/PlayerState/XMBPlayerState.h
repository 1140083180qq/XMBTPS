
#pragma once

#include "CoreMinimal.h"
#include "Character/XMBCharacterBase.h"
#include "GameFramework/PlayerState.h"
#include "XMBPlayerState.generated.h"

/**
 * @class AXMBPlayerState
 * @brief 玩家状态
 * 
 * 存储玩家的持久化游戏数据：
 * - 分数统计
 * - 击败数统计
 * - 数据在网络间自动同步
 */
UCLASS()
class XMBBLASTER_API AXMBPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	/** 设置网络复制属性 */
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	/**
	 * @brief 为玩家添加分数
	 * @param ScoreAmount - 要增加的分数值
	 */
	void AddToScore(float ScoreAmount);

	/**
	 * @brief 为玩家添加击败数
	 * @param DefeatsAmount - 要增加的击败数量
	 */
	void AddToDefeats(int32 DefeatsAmount);
	
	/*
	 * RPC回调
	 */
	
	/** 分数变化时的网络回调（重写父类虚函数） */
	virtual void OnRep_Score() override;

	/** 击败数变化时的网络回调 */
	UFUNCTION()
	virtual void OnRep_Defeats();
	

private:

	/** 缓存的角色指针 */
	UPROPERTY()
	AXMBCharacterBase* Character;
	
	/** 缓存的控制器指针 */
	UPROPERTY()
	AXMBPlayerController* Controller;

	/** 玩家击败数（网络复制） */
	UPROPERTY(ReplicatedUsing = OnRep_Defeats)
	int32 Defeats;

	
};
