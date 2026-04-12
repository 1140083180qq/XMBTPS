// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
// #include "UObject/ObjectInterface.h"  
#include "UObject/Interface.h"
#include "InteractWithCrosshairsInterface.generated.h"

/**
 * @class UInteractWithCrosshairsInterface
 * @brief 准心交互接口
 * 
 * 定义可与准心进行交互的对象接口。
 * 角色继承此接口后，射线检测可以识别该对象并改变准心的显示状态。
 */
UINTERFACE(MinimalAPI)
class UInteractWithCrosshairsInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * IInteractWithCrosshairsInterface
 * 准心交互接口的实现类
 * 实现此接口的Actor可以被准心射线检测识别，
 * 从而实现准心颜色变化、交互提示等功能。
 */
class XMBBLASTER_API IInteractWithCrosshairsInterface
{
	GENERATED_BODY()

public:
	// 可在此处添加接口方法（如 GetInteractableType 等）
};
