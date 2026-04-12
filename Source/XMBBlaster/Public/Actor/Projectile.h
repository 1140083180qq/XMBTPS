#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Sound/SoundCue.h"
#include "Projectile.generated.h"

/**
 * @class AProjectile
 * @brief 投射物基类
 * 
 * 用于表示游戏中发射的子弹、火箭等飞行道具。
 * 包含碰撞检测、轨迹特效、命中效果等功能。
 * 支持网络复制，所有客户端都能看到投射物。
 */
UCLASS()
class XMBBLASTER_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	/** 
	 * @brief 构造函数
	 * 初始化投射物的基本组件和属性，包括：
	 * - 启用网络复制 (bReplicates = true)
	 * - 创建碰撞盒组件并设置碰撞属性
	 * - 创建投射物移动组件
	 */
	AProjectile();
	
	/** 
	 * @brief Tick函数
	 * @param DeltaTime - 帧间隔时间
	 * 每帧更新（当前为空实现，可在此添加持续效果）
	 */
	virtual void Tick(float DeltaTime) override;
	
	/** 
	 * @brief 销毁时调用
	 * 生成命中特效和音效，在投射物被销毁前执行
	 */
	virtual void Destroyed() override;
	
protected:
	
	/** 
	 * @brief 游戏开始时调用
	 * 生成轨迹特效，绑定碰撞事件（仅在服务器上绑定）
	 */
	virtual void BeginPlay() override;

	/**
	 * @brief 碰撞回调函数
	 * @param HitComp - 发生碰撞的组件（本对象的CollisionBox）
	 * @param OtherActor - 碰撞到的其他Actor
	 * @param OtherComp - 碰撞到的其他组件
	 * @param NormalImpulse - 碰撞法线冲量
	 * @param Hit - 碰撞结果信息
	 * 
	 * 当投射物击中物体时调用，触发销毁和特效
	 */
	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** 
	 * @brief 投射物造成的伤害值
	 * 可在编辑器中配置，默认值为20
	 */
	UPROPERTY(EditAnywhere)
	float Damage = 20.f;

private:
	/** 
	 * @brief 碰撞盒组件
	 * 用于检测碰撞，设为根组件
	 */
	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionBox;

	/** 
	 * @brief 投射物移动组件
	 * 控制飞行轨迹和速度，使投射物沿直线飞行
	 */
	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* ProjectileMovementComponent;

	/** 
	 * @brief 飞行轨迹特效（粒子系统）
	 * 在编辑器中配置，运行时生成并附加到碰撞盒
	 */
	UPROPERTY(EditAnywhere)
	UParticleSystem* Tracer;

	/** 
	 * @brief 轨迹特效组件实例
	 * 运行时生成的粒子系统组件，用于显示飞行轨迹
	 */
	UPROPERTY()
	UParticleSystemComponent* TracerComponent;

	/** 
	 * @brief 命中时播放的粒子特效
	 * 在编辑器中配置，投射物销毁时生成
	 */
	UPROPERTY(EditAnywhere)
	UParticleSystem* ImpactParticles;

	/** 
	 * @brief 命中时播放的音效
	 * 在编辑器中配置，投射物销毁时播放
	 */
	UPROPERTY(EditAnywhere)
	USoundCue* ImpactSound;

};
