#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"
#include "Casing.generated.h"

/**
 * @class ACasing
 * @brief 弹壳类
 * 
 * 模拟武器开火后抛出的弹壳：
 * - 具有物理碰撞和弹跳效果
 * - 落地时播放声音
 * - 自动销毁（由蓝图或定时器控制生命周期）
 */
UCLASS()
class XMBBLASTER_API ACasing : public AActor
{
	GENERATED_BODY()
	
public:	
	/** 构造函数，初始化网格体和物理属性 */
	ACasing();
	
protected:
	/** 游戏开始时设置初始抛射力和旋转 */
	virtual void BeginPlay() override;

	/**
	 * @brief 碰撞回调（弹壳碰到物体时触发）
	 * @param HitComp - 发生碰撞的组件
	 * @param OtherActor - 碰撞到的Actor
	 * @param OtherComp - 碰撞到的其他组件
	 * @param NormalImpulse - 碰撞法线冲量
	 * @param Hit - 碰撞结果详细信息
	 */
	UFUNCTION()
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


private:
	/** 弹壳的静态网格体 */
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* CasingMesh;

	/** 弹壳抛出时的初始冲量大小（决定抛射力度） */
	UPROPERTY(EditAnywhere)
	float ShellEjectionImpulse;

	/** 弹壳落地/碰撞时的音效 */
	UPROPERTY(EditAnywhere)
	USoundCue* ShellSound;
};
