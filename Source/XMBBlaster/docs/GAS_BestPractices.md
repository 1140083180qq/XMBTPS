# GAS (Gameplay Ability System) 最佳实践指南

> 本文档聚焦GAS的**网络同步与客户端预测**，结合项目中的代码示例讲解。

---

## 目录

1. [核心概念速查](#1-核心概念速查)
2. [客户端预测机制详解](#2-客户端预测机制详解)
3. [GA的网络执行策略](#3-ga的网络执行策略)
4. [AttributeSet的网络同步](#4-attributeset的网络同步)
5. [TargetData与服务器验证](#5-targetdata与服务器验证)
6. [AbilityTask的网络行为](#6-abilitytask的网络行为)
7. [ASC的放置位置与初始化时序](#7-asc的放置位置与初始化时序)
8. [GameplayCue的预测](#8-gameplaycue的预测)
9. [常见网络陷阱与解决方案](#9-常见网络陷阱与解决方案)
10. [生产项目最佳实践清单](#10-生产项目最佳实践清单)

---

## 1. 核心概念速查

### GAS的五大核心组件

| 组件 | 职责 | 网络角色 |
|------|------|----------|
| **AbilitySystemComponent (ASC)** | 管理一切：能力、效果、属性、标签 | 同步核心，所有GAS数据的网络入口 |
| **GameplayAbility (GA)** | 定义"能做什么"——冲刺、射击、技能 | 通过ASC的RPC在客户端/服务器激活 |
| **GameplayEffect (GE)** | 定义"怎么改属性"——伤害、Buff、Debuff | 服务器权威应用，支持预测性应用 |
| **AttributeSet** | 定义"有哪些属性"——HP、MP、力量 | 属性值通过OnRep同步 |
| **GameplayTag** | 状态标记系统——"正在冲刺"、"眩晕中" | 通过ASC同步，支持预测性添加/移除 |

### 网络模型一句话总结

> **服务器是权威，客户端是预测。预测成功则保留，预测失败则回滚。**

---

## 2. 客户端预测机制详解

### 什么是客户端预测？

玩家按下技能键后，不等服务器确认就先执行效果，然后等服务器确认/拒绝。

### 为什么需要？

网络延迟（RTT 50-200ms）会让操作有明显卡顿感。客户端预测让玩家感觉"即时响应"。

### PredictionKey —— 预测的核心

```
PredictionKey 是客户端和服务器之间的"对账凭证"

客户端：                          服务器：
生成 Key=17                       收到 Key=17
用 Key=17 标记所有预测效果         验证后确认 Key=17
  ├─ 预测应用 GE_SprintSpeed      发送确认给客户端
  ├─ 预测添加 Tag.Sprinting
  └─ 预测播放 Montage

收到确认：保留所有 Key=17 的效果
  或
收到拒绝：回滚所有 Key=17 的效果
```

### 什么可以被预测？

| 操作 | 可预测？ | 说明 |
|------|----------|------|
| GA激活 | ✅ | 客户端立即执行，服务器确认/拒绝 |
| GE应用 | ✅ | 属性变化被预测，等待服务器确认 |
| GE移除 | ✅ | 预测性移除效果 |
| Tag添加/移除 | ✅ | 通过GA的ActivationOwnedTags自动预测 |
| Montage播放 | ✅ | 客户端立即播放，服务器同步 |
| GameplayCue | ✅ | 客户端预测触发，避免重复播放 |
| 伤害数值 | ❌ | 必须服务器权威计算 |
| 死亡判定 | ❌ | 必须服务器权威判定 |

### 预测失败（回滚）的场景

```
常见回滚场景：
1. 客户端认为CD已结束，但服务器认为还在CD中
   → 原因：时钟不完全同步
   → 表现：技能闪一下然后取消

2. 客户端认为体力够，但服务器上体力不够
   → 原因：延迟期间消耗了体力
   → 表现：冲刺启动又立即停止

3. 客户端预测命中，但服务器判定未命中
   → 原因：目标位置延迟差异
   → 表现：命中反馈但无伤害数字
```

> **最佳实践**：确保客户端和服务器的 `CanActivateAbility` 逻辑完全一致，减少预测失败的概率。

---

## 3. GA的网络执行策略

### NetExecutionPolicy 选择指南

```cpp
// ✅ 最常用：客户端预测 + 服务器权威
// 适用：移动技能、攻击、状态切换
NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;

// 仅客户端执行，服务器不知道
// 适用：UI交互、纯装饰效果、本地提示
NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;

// 服务器发起，客户端跟随
// 适用：环境技能、NPC技能、服务器事件触发
NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;

// 仅服务器执行
// 适用：伤害计算GA、反作弊逻辑、AI决策
NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
```

### NetSecurityPolicy 选择指南

```cpp
// 客户端可以请求激活和取消（最灵活）
NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;

// 客户端只能请求激活，不能请求取消（防止客户端恶意取消CD）
NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnlyTermination;

// 只有服务器能执行（最安全）
NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ServerOnly;
```

### InstancingPolicy 对网络的影响

```cpp
// 每个Actor一个实例（推荐）
// 可以有成员变量保存状态（如ActiveEffectHandle）
// 网络同步更可预测
InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

// 无实例（使用CDO）
// 省内存，但不能有状态
// 适用于纯粹的"一次性"能力（如单次伤害）
InstancingPolicy = EGameplayAbilityInstancingPolicy::NonInstanced;
```

> **最佳实践**：对于有状态的能力（持续效果、需要EndAbility清理的），必须用 `InstancedPerActor`。

---

## 4. AttributeSet的网络同步

### 属性声明三件套

```cpp
// 1. 声明属性 + ReplicatedUsing
UPROPERTY(ReplicatedUsing=OnRep_Health)
FGameplayAttributeData Health;

// 2. 生成访问器宏
ATTRIBUTE_ACCESSORS(UMyAttributeSet, Health)

// 3. OnRep通知ASC
void UMyAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UMyAttributeSet, Health, OldHealth);
}
```

### 同步注册必须用 REPNOTIFY_Always

```cpp
// ✅ 正确
DOREPLIFETIME_CONDITION_NOTIFY(UMyAttributeSet, Health, COND_None, REPNOTIFY_Always);

// ❌ 错误 —— 值不变时不触发OnRep，导致ASC缓存不同步
DOREPLIFETIME(UMyAttributeSet, Health);
```

### PreAttributeChange vs PostGameplayEffectExecute

```
                    PreAttributeChange          PostGameplayEffectExecute
执行位置            客户端 + 服务器              仅服务器
用途                Clamp值到合法范围            游戏逻辑（伤害转换、死亡判定）
能做                修改NewValue（Clamp）        修改任意属性、发送事件
不能做              游戏逻辑！                   -
为什么              客户端也会调用会导致重复     只在服务器执行所以安全
```

### Meta Attribute（元属性）

```cpp
// 元属性不需要 ReplicatedUsing —— 它不参与网络同步
// 它只是一个临时中转值，在PostGameplayEffectExecute中消费
UPROPERTY(BlueprintReadOnly, Category="Damage")
FGameplayAttributeData Damage;  // 注意：没有 ReplicatedUsing

// 流程：
// 1. GE设置 Damage = 50
// 2. PostGameplayEffectExecute 读取 Damage=50
// 3. Health -= 50
// 4. Damage = 0 (清零)
// 5. Health的变化通过OnRep同步到客户端
```

> **最佳实践**：永远不要在 `PreAttributeChange` 中做死亡判定或发送事件。那是 `PostGameplayEffectExecute` 的职责。

---

## 5. TargetData与服务器验证

### 为什么需要TargetData？

射击类能力的流程：
1. 客户端做射线检测（即时反馈）
2. 将命中信息打包成TargetData
3. 发送给服务器验证
4. 服务器确认后应用伤害

### TargetData的网络流转

```cpp
// 客户端：发送TargetData到服务器
ASC->ServerSetReplicatedTargetData(
    Handle,
    PredictionKey,
    TargetDataHandle,    // 包含HitResult
    ApplicationTag,
    ScopedPredictionKey
);

// 服务器：绑定回调接收TargetData
ASC->AbilityTargetDataSetDelegate(Handle, PredictionKey)
    .AddUObject(this, &UMyAbility::OnTargetDataReady);
```

### 服务器验证清单

```cpp
void OnTargetDataReady(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag Tag)
{
    // ✅ 验证1：命中距离是否合理？
    // ✅ 验证2：射线路径上是否有遮挡？（防穿墙）
    // ✅ 验证3：目标是否是有效Actor？
    // ✅ 验证4：射击频率是否合法？（防加速外挂）
    // ✅ 验证5：命中位置是否在目标碰撞体内？

    // 不要信任客户端发来的任何数据！
    // 加入合理的容差（考虑网络延迟）
}
```

> **最佳实践**：对TargetData做服务器端回溯验证（Server-side rewind / Lag compensation），考虑延迟导致的位置偏差。

---

## 6. AbilityTask的网络行为

### 常用AbilityTask的网络特性

| Task | 网络行为 | 适用场景 |
|------|----------|----------|
| `PlayMontageAndWait` | 客户端预测播放 + 服务器同步 | 技能动画 |
| `WaitDelay` | 两端独立计时 | 延迟效果 |
| `WaitGameplayEvent` | 两端独立监听 | 动画通知、外部触发 |
| `WaitTargetData` | 客户端收集 → 服务器验证 | 目标选择 |
| `ApplyRootMotionConstantForce` | 预测性位移 + 服务器修正 | 冲刺、击退 |
| `WaitAbilityActivate` | 两端独立监听 | 连招系统 |

### PlayMontageAndWait 深入

```
Montage同步机制：
1. 服务器调用 PlayMontage
2. CharacterMovementComponent 将 Montage信息写入 RepAnimMontageInfo
3. 通过属性同步发送给所有客户端
4. 客户端收到后播放/同步到相同位置

预测行为：
- 客户端 LocalPredicted 能力中播放 Montage
- 服务器也播放同一个 Montage
- 如果位置偏差过大，客户端会跳帧修正

回调触发：
- OnCompleted: 两端独立触发（基于各自的动画播放状态）
- OnCancelled: 两端独立触发
- OnInterrupted: 服务器中断 → 同步到客户端 → 客户端触发
```

> **最佳实践**：Task的回调中不要假设只在某一端执行。用 `HasAuthority()` 区分服务器/客户端逻辑。

---

## 7. ASC的放置位置与初始化时序

### 两种模式对比

```
模式A：ASC在Character上
├── 简单直接
├── 角色死亡 → ASC销毁 → 所有状态丢失（CD、Buff等）
├── 适用：AI、简单项目
└── 初始化：
    服务器：PossessedBy → InitAbilityActorInfo(this, this)
    客户端：OnRep_PlayerState → InitAbilityActorInfo(this, this)

模式B：ASC在PlayerState上
├── 角色死亡 → ASC保留 → 状态不丢失
├── 重生时重新绑定Avatar
├── 适用：竞技游戏
└── 初始化：
    服务器：PossessedBy → InitAbilityActorInfo(PlayerState, this)
    客户端：OnRep_PlayerState → InitAbilityActorInfo(PlayerState, this)
    重生时：InitAbilityActorInfo(PlayerState, NewCharacter)
```

### 初始化时序的坑

```
❌ 在BeginPlay中初始化ASC
   原因：客户端的BeginPlay时PlayerState可能还没同步过来

❌ 在Constructor中调用InitAbilityActorInfo
   原因：此时Actor还没有被添加到World

❌ 假设客户端BeginPlay时ASC已就绪
   原因：属性同步有延迟，第一帧可能还是默认值

✅ 服务器在PossessedBy中初始化
✅ 客户端在OnRep_PlayerState中初始化
✅ 使用标志位防止重复初始化
```

---

## 8. GameplayCue的预测

### GameplayCue是什么？

GameplayCue是GAS中处理视觉/音效反馈的机制。它可以被预测性触发。

### 预测性Cue的工作方式

```
客户端                              服务器
═══════                            ═══════
1. 预测激活GA
2. 预测应用GE
3. GE触发 GameplayCue
4. 客户端立即播放特效
   (标记为"预测性Cue")
                        ──RPC──>   5. 服务器应用GE
                                   6. GE触发 GameplayCue
                        <──Multicast── 7. 广播Cue给所有客户端

8. 收到服务器Cue广播
   → 检测到已有预测性Cue
   → 跳过重复播放 ✅

如果预测失败（服务器拒绝）：
   → 移除预测性Cue效果
```

### Cue类型

```cpp
// 一次性Cue（爆炸、命中火花）
// 通过 GameplayCue.Execute 触发
GameplayCueTags: "GameplayCue.Damage.Hit"

// 持续性Cue（Buff光圈、燃烧效果）
// 通过 GameplayCue.Add / GameplayCue.Remove 触发
// 跟随GE的生命周期自动管理
GameplayCueTags: "GameplayCue.Buff.Shield"
```

> **最佳实践**：用GameplayCue而不是直接SpawnEmitter来做视效/音效，这样GAS会自动处理预测性触发和防重复。

---

## 9. 常见网络陷阱与解决方案

### 陷阱1：客户端直接修改属性

```cpp
// ❌ 错误：客户端直接SetHealth
AttributeSet->SetHealth(50.0f);

// ✅ 正确：通过GE修改属性（服务器权威）
ASC->ApplyGameplayEffectToSelf(DamageEffect, Level, Context);
```

### 陷阱2：在PreAttributeChange中做游戏逻辑

```cpp
// ❌ 错误：PreAttributeChange中判断死亡
void PreAttributeChange(const FGameplayAttribute& Attr, float& NewValue)
{
    if (Attr == GetHealthAttribute() && NewValue <= 0.0f)
    {
        Die(); // 客户端也会调用！导致重复死亡！
    }
}

// ✅ 正确：PostGameplayEffectExecute中判断（只在服务器执行）
void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    if (GetHealth() <= 0.0f)
    {
        // 发送死亡事件
    }
}
```

### 陷阱3：忘记调用ConsumeClientReplicatedTargetData

```cpp
// ❌ 错误：只发送TargetData，不通知结束
ASC->ServerSetReplicatedTargetData(Handle, Key, Data, Tag, PredKey);
// 服务器会一直等待更多数据...

// ✅ 正确：发送后立即通知结束
ASC->ServerSetReplicatedTargetData(Handle, Key, Data, Tag, PredKey);
ASC->ConsumeClientReplicatedTargetData(Handle, Key);
```

### 陷阱4：NonInstanced能力使用成员变量

```cpp
// ❌ 错误：NonInstanced能力不能有状态
InstancingPolicy = NonInstanced;
FActiveGameplayEffectHandle MyHandle; // 多个Actor共享CDO，数据会互相覆盖！

// ✅ 正确：改为InstancedPerActor，或把状态存在ASC/AttributeSet上
```

### 陷阱5：OnRep中遗漏GAMEPLAYATTRIBUTE_REPNOTIFY

```cpp
// ❌ 错误：空的OnRep
void OnRep_Health(const FGameplayAttributeData& Old) { }
// ASC不知道属性变了，UI不会更新

// ✅ 正确：通知ASC
void OnRep_Health(const FGameplayAttributeData& Old)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UMyAttributeSet, Health, Old);
}
```

### 陷阱6：同步模式选择不当

```cpp
// ❌ 对所有角色使用Full模式（性能灾难）
SetReplicationMode(EGameplayEffectReplicationMode::Full);

// ✅ 玩家角色用Mixed，AI用Minimal
// 玩家：GE同步给Owner，Tag/Cue同步给所有人
SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
// AI：只同步Tag/Cue（其他客户端不需要知道AI的GE细节）
SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
```

---

## 10. 生产项目最佳实践清单

### 架构

- [ ] ASC放在PlayerState上（竞技游戏）或Character上（简单项目）
- [ ] 使用 `Mixed` 同步模式给玩家，`Minimal` 给AI
- [ ] 继承自定义ASC基类，方便扩展
- [ ] 将AttributeSet按功能分组（CombatAttributeSet、MovementAttributeSet）

### 能力设计

- [ ] 优先使用 `LocalPredicted`，除非有安全性要求
- [ ] 使用 `InstancedPerActor` 除非确认不需要状态
- [ ] `CanActivateAbility` 逻辑在客户端和服务器保持一致
- [ ] 在 `EndAbility` 中清理所有应用的GE
- [ ] 使用 GameplayTag 而不是 bool 来管理状态

### 属性

- [ ] 所有同步属性使用 `REPNOTIFY_Always`
- [ ] OnRep中必须调用 `GAMEPLAYATTRIBUTE_REPNOTIFY`
- [ ] PreAttributeChange 只做 Clamp
- [ ] PostGameplayEffectExecute 做游戏逻辑
- [ ] 使用 Meta Attribute 处理伤害等中转值

### 网络

- [ ] 伤害等关键计算在服务器端完成
- [ ] TargetData 做服务器端验证（防作弊）
- [ ] 用 GameplayCue 处理视觉反馈（自动处理预测和防重复）
- [ ] 正确的初始化时序（PossessedBy / OnRep_PlayerState）
- [ ] 能力授予和GE应用只在服务器做

### 性能

- [ ] AI角色使用 `Minimal` 同步模式
- [ ] 限制同时激活的能力数量
- [ ] 使用 GameplayTag 查询代替遍历活跃GE
- [ ] 考虑使用 `LooseGameplayTags` 做不需要GE的标记

---

## 项目示例文件导航

| 文件 | 演示内容 |
|------|----------|
| `ExampleAttributeSet.h/cpp` | 属性同步、OnRep、Meta属性、Pre/Post钩子 |
| `ExampleAbilitySystemComponent.h/cpp` | ASC配置、同步模式、能力授予 |
| `GA_ExampleSprint.h/cpp` | 客户端预测完整流程、持续性能力 |
| `GA_ExampleFireWeapon.h/cpp` | TargetData、服务器验证、伤害流程 |
| `GA_ExampleDash.h/cpp` | AbilityTask、Montage同步、RootMotion预测 |
| `GASExampleCharacter.h/cpp` | ASC初始化时序、属性变化回调 |

---

## 推荐阅读

- Epic官方文档：Gameplay Ability System
- Unreal Source：`GameplayAbility.h`、`AbilitySystemComponent.h`
- GASDocumentation (GitHub): tranek/GASDocumentation —— 社区最全面的GAS文档
- Dan "Tranek" Abramov的GAS系列文章
