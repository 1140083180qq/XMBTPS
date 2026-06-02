# XMBBlaster 网络延迟补偿系统技术文档

## 目录
1. [系统概述](#1-系统概述)
2. [核心数据结构](#2-核心数据结构)
3. [系统架构](#3-系统架构)
4. [工作流程](#4-工作流程)
5. [核心算法详解](#5-核心算法详解)
6. [三种武器类型的实现差异](#6-三种武器类型的实现差异)
7. [代码调用链路](#7-代码调用链路)
8. [性能优化与注意事项](#8-性能优化与注意事项)
9. [关联系统A：角色碰撞盒体系（AXMBCharacterBase）](#9-关联系统a角色碰撞盒体系axmbcharacterbase)
10. [关联系统B：时间同步系统（AXMBPlayerController）](#b-关联系统b时间同步系统axmbplayercontroller)
11. [关联系统C：武器系统与延迟补偿的集成](#11-关联系统c武器系统与延迟补偿的集成)
12. [关联系统D：高Ping动态禁用机制](#12-关联系统d-highping动态禁用机制)
13. [完整端到端数据流图](#13-完整端到端数据流图)

---

## 1. 系统概述

### 1.1 什么是网络延迟补偿？

在网络游戏中，由于网络传输存在延迟（通常为50-200ms），客户端看到的游戏状态与服务器的实际状态存在**时间差**。当玩家在客户端瞄准并射击一个目标时，该目标在服务器上可能已经移动到了其他位置。

**网络延迟补偿（Lag Compensation）** 通过 **服务端回溯（Server-Side Rewind）** 技术解决这个问题：
- 当服务器收到客户端的开火请求时，不是使用当前的服务器状态进行命中判定
- 而是将被击中的角色**"时光倒流"**回到客户端开火那一刻的状态
- 在那个历史状态下重新进行命中判定

### 1.2 本项目的实现特点

| 特性 | 说明 |
|------|------|
| **实现方式** | Server-Side Rewind（服务端回溯） |
| **存储结构** | 双向链表（TDoubleLinkedList） |
| **记录内容** | 角色各部位碰撞盒的位置、旋转、范围 |
| **最大回溯时间** | 4秒（可配置：`MaxRecordTime`） |
| **支持武器类型** | 即时命中武器、投射物武器、霰弹枪 |
| **插值算法** | 线性插值（支持亚帧精度） |

---

## 2. 核心数据结构

### 2.1 FBoxInformation - 碰撞盒信息

```cpp
USTRUCT(BlueprintType)
struct FBoxInformation
{
    GENERATED_BODY()

    UPROPERTY()
    FVector BoxLocation;      // 碰撞盒世界坐标位置

    UPROPERTY()
    FRotator BoxRotation;     // 碰撞盒世界坐标旋转

    UPROPERTY()
    FVector BoxExtent;        // 碰撞盒半尺寸范围
};
```

**用途**：存储角色单个身体部位（如头部、躯干、手臂等）碰撞盒在某一时刻的空间状态。

### 2.2 FFramePackage - 帧数据包

```cpp
USTRUCT(BlueprintType)
struct FFramePackage
{
    GENERATED_BODY()

    UPROPERTY()
    float Time;                                    // 该帧的时间戳（服务器时间）

    UPROPERTY()
    TMap<FName, FBoxInformation> HitBoxInfo;       // 所有碰撞盒的信息映射

    UPROPERTY()
    AXMBCharacterBase* Character;                  // 所属角色指针
};
```

**用途**：表示角色在某一瞬间的完整碰撞状态快照。这是整个回溯系统的基本单位。

**碰撞盒命名规范**（定义于 `XMBCharacterBase.h`）：
- `head` - 头部
- `pelvis` - 骨盆
- `spine_02` / `spine_03` - 脊柱
- `upperarm_l` / `upperarm_r` - 上臂（左/右）
- `lowerarm_l` / `lowerarm_r` - 下臂（左/右）
- `hand_l` / `hand_r` - 手部（左/右）
- `thigh_l` / `thigh_r` - 大腿（左/右）
- `calf_l` / `calf_r` - 小腿（左/右）
- `foot_l` / `foot_r` - 脚部（左/右）

### 2.3 FServerSideRewindResult - 回溯结果

```cpp
USTRUCT(BlueprintType)
struct FServerSideRewindResult
{
    GENERATED_BODY()

    UPROPERTY()
    bool bHitConfirmed;    // 是否确认命中
    
    UPROPERTY()
    bool bHeadShot;        // 是否为爆头
};
```

**用途**：用于 HitScan 和 Projectile 武器的单次命中判定返回值。

### 2.4 FShotgunServerSideRewindResult - 霰弹枪回溯结果

```cpp
USTRUCT(BlueprintType)
struct FShotgunServerSideRewindResult
{
    GENERATED_BODY()

    UPROPERTY()
    TMap<AXMBCharacterBase*, uint32> HeadShots;   // 每个角色的爆头命中次数

    UPROPERTY()
    TMap<AXMBCharacterBase*, uint32> BodyShots;    // 每个角色的身体命中次数
};
```

**用途**：霰弹枪一次发射多颗弹丸，需要统计对每个目标的多次命中情况。

---

## 3. 系统架构

### 3.1 组件关系图

```
┌─────────────────────────────────────────────────────────────┐
│                      AXMBCharacterBase                       │
│                                                              │
│  ┌─────────────────────────────────────────────────────┐    │
│  │          ULagCompensationComponent                  │    │
│  │                                                      │    │
│  │  ┌───────────────────────────────────────────┐      │    │
│  │  │     FrameHistory (TDoubleLinkedList)       │      │    │
│  │  │                                           │      │    │
│  │  │   Head ──► Frame[0] (最新)               │      │    │
│  │  │              │                            │      │    │
│  │  │              ▼                            │      │    │
│  │  │           Frame[1]                        │      │    │
│  │  │              │                            │      │    │
│  │  │              ▼                            │      │    │
│  │  │             ...                           │      │    │
│  │  │              │                            │      │    │
│  │  │              ▼                            │      │    │
│  │  │           Frame[N] (最旧, ≥4秒前)         │      │    │
│  │  │            Tail                           │      │    │
│  └───────────────────────────────────────────────────┘      │    │
│  └─────────────────────────────────────────────────────┘    │
│                                                              │
│  ┌────────────────────┐  ┌──────────────────────────────┐   │
│  │  HitCollisionBoxes  │  │         武器系统              │   │
│  │  ┌────────────────┐│  │  • AHitScanWeapon             │   │
│  │  │ head (UBox*)   ││  │  • AProjectileWeapon          │   │
│  │  │ pelvis         ││  │  • AShotGun                   │   │
│  │  │ spine_02/03    ││  └──────────────────────────────┘   │
│  │  │ upperarm_l/r   ││                                       │
│  │  │ lowerarm_l/r   ││                                       │
│  │  │ hand_l/r       ││                                       │
│  │  │ thigh_l/r      ││                                       │
│  │  │ calf_l/r       ││                                       │
│  │  │ foot_l/r       ││                                       │
│  └────────────────────┘                                        │
└─────────────────────────────────────────────────────────────┘
```

### 3.2 核心成员变量

```cpp
class ULagCompensationComponent : public UActorComponent
{
private:
    UPROPERTY()
    AXMBCharacterBase* Owner;                    // 拥有者角色

    UPROPERTY()
    AXMBPlayerController* OwnerController;        // 拥有者控制器

    TDoubleLinkedList<FFramePackage> FrameHistory; // 帧历史记录（双向链表）

    UPROPERTY(EditAnywhere, Category = "Frame")
    float MaxRecordTime = 4.f;                    // 最大记录时长（秒）
};
```

**设计选择说明**：
- 使用 `TDoubleLinkedList` 而非 `TArray`：链表在头部插入/删除的时间复杂度为 O(1)，适合每帧添加新帧并移除过期旧帧的场景
- `MaxRecordTime = 4.f`：可覆盖绝大多数网络延迟场景（正常延迟 < 500ms）

---

## 4. 工作流程

### 4.1 总体流程图

```
┌────────────────────────────────────────────────────────────────────────┐
│                          完整的命中判定流程                              │
├────────────────────────────────────────────────────────────────────────┤
│                                                                        │
│  【客户端】                     【服务器】                               │
│                                                                        │
│  ① 玩家点击鼠标                                                       │
│     ↓                                                                  │
│  ② 本地射线检测                                                        │
│     ↓                                                                  │
│  ③ 计算命中时间:                                                       │
│     HitTime = ServerTime - SingleTripTime                             │
│     ↓                                                                  │
│  ④ 发送 RPC: ServerScoreRequest(HitChar, Start, End, HitTime)         │
│     ══════════════════════════════════════►                           │
│                                   │                                     │
│                                   ▼                                     │
│                          ⑤ 接收 RPC                                    │
│                                   │                                     │
│                                   ▼                                     │
│                          ⑥ GetFrameToCheck()                           │
│                          从 FrameHistory 中查找                         │
│                          HitTime 对应的帧                               │
│                                   │                                     │
│                                   ▼                                     │
│                          ⑦ ConfirmHit()                                │
│                          a) CacheBoxPosition() ← 保存当前位置           │
│                          b) MoveBoxes()      → 移动到历史位置           │
│                          c) 射线检测                                      │
│                          d) ResetHitBoxes()  → 恢复当前位置             │
│                                   │                                     │
│                                   ▼                                     │
│                          ⑧ 返回命中结果                                 │
│                                   │                                     │
│                          ⑨ ApplyDamage() → 应用伤害                    │
│                                                                        │
└────────────────────────────────────────────────────────────────────────┘
```

### 4.2 阶段一：帧数据采集（服务器端持续执行）

**触发时机**：每帧 TickComponent

```cpp
void ULagCompensationComponent::TickComponent(float DeltaTime, ...)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    SaveFramePackageServer();  // 每帧保存当前状态
}
```

**SaveFramePackageServer 流程**：

```cpp
void ULagCompensationComponent::SaveFramePackageServer()
{
    if (Owner == nullptr || !Owner->HasAuthority()) return;
    
    // 仅在服务器端执行
    
    if (FrameHistory.Num() <= 1)
    {
        // 初始状态：直接添加第一帧
        FFramePackage ThisFrame;
        SaveFramePackage(ThisFrame);
        FrameHistory.AddHead(ThisFrame);
    }
    else
    {
        // 清理超过 MaxRecordTime 的旧帧
        float HistoryLength = Head.Time - Tail.Time;
        while (HistoryLength > MaxRecordTime)
        {
            FrameHistory.RemoveNode(Tail);  // 移除最旧的帧
            HistoryLength = Head.Time - Tail.Time;
        }
        
        // 添加新帧到链表头部
        FFramePackage ThisFrame;
        SaveFramePackage(ThisFrame);
        FrameHistory.AddHead(ThisFrame);    // O(1) 插入
    }
}
```

**SaveFramePackage 内部逻辑**：

```cpp
void ULagCompensationComponent::SaveFramePackage(FFramePackage& Package)
{
    Owner = Owner == nullptr ? Cast<AXMBCharacterBase>(GetOwner()) : Owner;
    if (Owner)
    {
        Package.Time = GetWorld()->GetTimeSeconds();  // 记录服务器时间戳
        Package.Character = Owner;
        
        // 遍历所有碰撞盒，记录其当前状态
        for (auto& BoxPair : Owner->HitCollisionBoxes)
        {
            FBoxInformation BoxInformation;
            BoxInformation.BoxLocation = BoxPair.Value->GetComponentLocation();
            BoxInformation.BoxRotation = BoxPair.Value->GetComponentRotation();
            BoxInformation.BoxExtent = BoxPair.Value->GetScaledBoxExtent();
            Package.HitBoxInfo.Add(BoxPair.Key, BoxInformation);
        }
    }
}
```

### 4.3 阶段二：客户端发起命中请求

以 HitScanWeapon 为例：

```cpp
// HitScanWeapon.cpp - Fire() 函数
void AHitScanWeapon::Fire(const FVector& HitTarget)
{
    Super::Fire(HitTarget);
    
    // ... 执行本地射线检测 ...
    
    AXMBCharacterBase* BlasterCharacter = Cast<AXMBCharacterBase>(FireHit.GetActor());
    if (BlasterCharacter && InstigatorController)
    {
        bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();
        
        // 服务器端且是主机：直接应用伤害（无需回溯）
        if (HasAuthority() && bCauseAuthDamage)
        {
            // 直接造成伤害...
        }
        
        // 客户端：发送 RPC 到服务器进行回溯验证
        if (!HasAuthority() && bUseServerSideRewind)
        {
            XMBOwnerCharacter->GetLagCompensation()->ServerScoreRequest(
                BlasterCharacter,
                Start,           // 射线起点
                HitTarget,       // 命中点
                XMBOwnerController->GetServerTime() - XMBOwnerController->SingleTripTime
                // ↑ 关键：计算出开枪时刻的服务器时间
            );
        }
    }
}
```

**关键公式**：
```
HitTime = ServerTime - SingleTripTime
```

其中：
- `ServerTime`：当前估计的服务器时间（通过同步获得）
- `SingleTripTime`：客户端到服务器的**单向延迟**（RTT/2）

### 4.4 阶段三：服务端帧检索与插值

**GetFrameToCheck 函数详解**：

```cpp
FFramePackage ULagCompensationComponent::GetFrameToCheck(
    AXMBCharacterBase* HitCharacter, 
    float HitTime)
{
    // 1. 安全检查
    if (/* 无效状态 */) return FFramePackage();
    
    const TDoubleLinkedList<FFramePackage>& History = 
        HitCharacter->GetLagCompensation()->FrameHistory;
    
    const float OldestTime = Tail.Time;   // 最旧帧时间
    const float NewestTime = Head.Time;   // 最新帧时间
    
    // 2. 边界检查
    if (OldestTime > HitTime)
    {
        // 目标时间太旧，超出记录范围 → 无法回溯
        return FFramePackage();  
    }
    
    if (OldestTime == HitTime)
    {
        // 精确匹配最旧帧
        return Tail.Value;
    }
    
    if (NewestTime <= HitTime)
    {
        // HitTime >= 最新帧时间，使用最新帧
        // （这种情况很少见，意味着负延迟或极低延迟）
        return Head.Value;
    }
    
    // 3. 在链表中搜索：找到 Older < HitTime < Younger 的两个相邻帧
    TDoubleLinkedList<FFramePackage>::TDoubleLinkedListNode* Younger = Head;
    TDoubleLinkedList<FFramePackage>::TDoubleLinkedListNode* Older = Younger;
    
    while (Older->GetValue().Time > HitTime)
    {
        if (Older->GetNextNode() == nullptr) break;
        Older = Older->GetNextNode();
        if (Older->GetValue().Time > HitTime)
        {
            Younger = Older;  // Younger 始终保持 Time > HitTime
        }
    }
    
    // 4. 如果精确匹配某一帧，无需插值
    if (Older->GetValue().Time == HitTime)
    {
        return Older->GetValue();
    }
    
    // 5. 线性插值获取精确时刻的状态
    if (bShouldInterpolate)
    {
        return InterpBetweenFrames(Older.Value, Younger.Value, HitTime);
    }
}
```

**帧搜索示意图**：

```
时间轴 ◄─────────────────────────────────────────────►
      
       Tail                    HitTime                Head
       │                        │                      │
       ▼                        ▼                      ▼
  ────[Frame Old]──────────────●────────────[Frame Young]──▶
                              │
                     Older.Frame.Time < HitTime < Younger.Frame.Time
                              
                     在此区间内进行线性插值
```

### 4.5 阶段四：帧间插值算法

```cpp
FFramePackage ULagCompensationComponent::InterpBetweenFrames(
    const FFramePackage& OlderFrame,    // 时间较早的帧
    const FFramePackage& YoungerFrame,  // 时间较新的帧
    float HitTime)                      // 目标时间
{
    // 计算两帧之间的时间差
    const float Distance = YoungerFrame.Time - OlderFrame.Time;
    
    // 计算 HitTime 在两帧之间的比例 [0, 1]
    const float InterpFraction = FMath::Clamp(
        (HitTime - OlderFrame.Time) / Distance, 
        0.f, 
        1.f
    );
    
    FFramePackage InterpFramePackage;
    InterpFramePackage.Time = HitTime;
    
    // 对每个碰撞盒分别进行插值
    for (auto& YoungerPair : YoungerFrame.HitBoxInfo)
    {
        const FName& BoxName = YoungerPair.Key;
        
        const FBoxInformation& OlderBox = OlderFrame.HitBoxInfo[BoxName];
        const FBoxInformation& YoungerBox = YoungerPair.Value;
        
        FBoxInformation InterpBoxInfo;
        
        // 位置线性插值
        InterpBoxInfo.BoxLocation = FMath::VInterpTo(
            OlderBox.BoxLocation, 
            YoungerBox.BoxLocation, 
            1.f, 
            InterpFraction
        );
        
        // 旋转线性插值
        InterpBoxInfo.BoxRotation = FMath::RInterpTo(
            OlderBox.BoxRotation, 
            YoungerBox.BoxRotation, 
            1.f, 
            InterpFraction
        );
        
        // 范围不变（假设碰撞盒大小固定）
        InterpBoxInfo.BoxExtent = YoungerBox.BoxExtent;
        
        InterpFramePackage.HitBoxInfo.Add(BoxName, InterpBoxInfo);
    }
    
    return InterpFramePackage;
}
```

**插值数学原理**：

```
对于任意属性 P（可以是位置分量或旋转角度）：

        P_younger - P_older
P = P_older + ───────────────── × (HitTime - T_older)
           T_younger - T_older

简化后：
P = P_older × (1 - α) + P_younger × α

其中 α = (HitTime - T_older) / (T_younger - T_older)
```

### 4.6 阶段五：碰撞盒回溯与命中判定

**ConfirmHit 函数完整流程（HitScan武器）**：

```cpp
FServerSideRewindResult ULagCompensationComponent::ConfirmHit(
    const FFramePackage& Package,        // 回溯到的目标帧
    AXMBCharacterBase* HitCharacter,     // 被击中角色
    const FVector_NetQuantize& TraceStart,  // 射线起点
    const FVector_NetQuantize& HitLocation) // 客户端报告的命中点
{
    // ═══════════════════════════════════════
    // 步骤 1：保存当前碰撞盒状态（用于后续恢复）
    // ═══════════════════════════════════════
    FFramePackage CurrentFrame;
    CacheBoxPosition(HitCharacter, CurrentFrame);
    
    // ═══════════════════════════════════════
    // 步骤 2：将碰撞盒移动到历史位置
    // ═══════════════════════════════════════
    MoveBoxes(HitCharacter, Package);
    
    // ═══════════════════════════════════════
    // 步骤 3：禁用角色 Mesh 碰撞（避免干扰）
    // ═══════════════════════════════════════
    EnableCharacterMeshCollision(HitCharacter, ECollisionEnabled::NoCollision);
    
    // ═══════════════════════════════════════
    // 步骤 4：优先检测头部（爆头判定）
    // ═══════════════════════════════════════
    UBoxComponent* HeadBox = HitCharacter->HitCollisionBoxes[FName("head")];
    HeadBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    HeadBox->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
    
    // 执行射线检测
    const FVector TraceEnd = TraceStart + (HitLocation - TraceStart) * 1.25f;
    // 注意：TraceEnd 延长25%是为了确保能检测到边缘命中
    
    bool bIsHit = World->LineTraceSingleByChannel(ConfirmHitResult, TraceStart, TraceEnd, ECC_HitBox);
    
    if (ConfirmHitResult.bBlockingHit)
    {
        // ★ 命中头部 → 返回爆头
        ResetHitBoxes(HitCharacter, CurrentFrame);  // 恢复碰撞盒
        EnableCharacterMeshCollision(...);          // 恢复 Mesh 碰撞
        return {true, true};  // bHitConfirmed=true, bHeadShot=true
    }
    
    // ═══════════════════════════════════════
    // 步骤 5：未击中头部，检测所有其他部位
    // ═══════════════════════════════════════
    for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
    {
        HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        HitBoxPair.Value->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block);
    }
    
    World->LineTraceSingleByChannel(ConfirmHitResult, TraceStart, TraceEnd, ECC_HitBox);
    
    if (ConfirmHitResult.bBlockingHit)
    {
        // ★ 命中身体
        ResetHitBoxes(HitCharacter, CurrentFrame);
        EnableCharacterMeshCollision(...);
        return {true, false};  // bHitConfirmed=true, bHeadShot=false
    }
    
    // ═══════════════════════════════════════
    // 步骤 6：未命中 → 恮复并返回
    // ═══════════════════════════════════════
    ResetHitBoxes(HitCharacter, CurrentFrame);
    EnableCharacterMeshCollision(...);
    return {false, false};  // 未命中
}
```

**辅助函数说明**：

```cpp
// 保存当前碰撞盒状态
void CacheBoxPosition(AXMBCharacterBase* HitCharacter, FFramePackage& OutFramePackage)
{
    for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
    {
        if (HitBoxPair.Value != nullptr)
        {
            FBoxInformation BoxInfo;
            BoxInfo.BoxLocation = HitBoxPair.Value->GetComponentLocation();
            BoxInfo.BoxRotation = HitBoxPair.Value->GetComponentRotation();
            BoxInfo.BoxExtent = HitBoxPair.Value->GetScaledBoxExtent();
            OutFramePackage.HitBoxInfo.Add(HitBoxPair.Key, BoxInfo);
        }
    }
}

// 将碰撞盒移动到指定帧的位置
void MoveBoxes(AXMBCharacterBase* HitCharacter, const FFramePackage& Package)
{
    for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
    {
        if (HitBoxPair.Value != nullptr)
        {
            const FBoxInformation* BoxValue = Package.HitBoxInfo.Find(HitBoxPair.Key);
            if (BoxValue)
            {
                HitBoxPair.Value->SetWorldLocation(BoxValue->BoxLocation);
                HitBoxPair.Value->SetWorldRotation(BoxValue->BoxRotation);
                HitBoxPair.Value->SetBoxExtent(BoxValue->BoxExtent);
            }
        }
    }
}

// 恢复碰撞盒到原始位置并禁用碰撞
void ResetHitBoxes(AXMBCharacterBase* HitCharacter, const FFramePackage& Package)
{
    for (auto& HitBoxPair : HitCharacter->HitCollisionBoxes)
    {
        if (HitBoxPair.Value != nullptr)
        {
            HitBoxPair.Value->SetWorldLocation(Package.HitBoxInfo[HitBoxPair.Key].BoxLocation);
            HitBoxPair.Value->SetWorldRotation(Package.HitBoxInfo[HitBoxPair.Key].BoxRotation);
            HitBoxPair.Value->SetBoxExtent(Package.HitBoxInfo[HitBoxPair.Key].BoxExtent);
            HitBoxPair.Value->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        }
    }
}
```

### 4.7 阶段六：伤害结算

```cpp
void ULagCompensationComponent::ServerScoreRequest_Implementation(...)
{
    // 1. 执行服务端回溯
    FServerSideRewindResult Confirm = ServerSideRewind(HitCharacter, TraceStart, HitLocation, HitTime);
    
    // 2. 如果确认命中，应用伤害
    if (Owner && HitCharacter && Confirm.bHitConfirmed && Owner->GetEquippedWeapon())
    {
        // 根据是否爆头选择伤害值
        const float Damage = Confirm.bHeadShot 
            ? Owner->GetEquippedWeapon()->GetHeadShotDamage()  // 爆头伤害
            : Owner->GetEquippedWeapon()->GetDamage();          // 普通伤害
        
        // 应用伤害
        UGameplayStatics::ApplyDamage(
            HitCharacter,
            Damage,
            Owner->Controller,
            Owner->GetEquippedWeapon(),
            UDamageType::StaticClass()
        );
    }
}
```

---

## 5. 核心算法详解

### 5.1 帧历史管理算法

**数据结构选择：TDoubleLinkedList**

```
选择原因：
├── 插入新帧到头部：O(1)
├── 删除旧帧从尾部：O(1)（如果有尾指针引用）
├── 不需要随机访问（只需顺序遍历搜索）
└── 内存连续性要求不高

对比 TArray：
├── 头部插入：O(n) 需要移动所有元素
├── 尾部删除：O(1)
└── 但整体效率不如链表
```

**内存管理策略**：

```
每帧产生的内存开销估算：
├── FFramePackage 结构体本身：~48 bytes
├── HitBoxInfo Map (17个碰撞盒)：
│   ├── Map 开销：~200 bytes
│   └── 每个 FBoxInformation：~40 bytes × 17 = 680 bytes
├── 单帧总开销：~928 bytes
├── 4秒 @ 60fps = 240 帧
└── 总内存：~222 KB / 角色
```

### 5.2 时间同步机制

**HitTime 的计算原理**：

```
客户端视角：
                    
    点击开火
        │
        ├─► 本地时间 T_client_fire
        │
        ├─► 发射射线，得到命中结果
        │
        └─► 计算 HitTime
            
服务器视角：
                    
    收到 RPC
        │
        ├─► 当前服务器时间 T_server_now
        │
        └─► 需要回溯到 T_server_now - latency

关键问题：如何知道 latency？
解决方案：
├── SingleTripTime = RTT (Round-Trip Time) / 2
├── RTT 通过 ping 机制测量
└── HitTime = ServerTime - SingleTripTime
```

**代码示例**（来自 HitScanWeapon.cpp 第67行）：

```cpp
XMBOwnerController->GetServerTime() - XMBOwnerController->SingleTripTime
```

### 5.3 头部优先判定策略

```
判定优先级：

第1步：仅启用头部碰撞盒进行射线检测
       │
       ├── 命中 → 返回 {true, true}  (爆头！)
       │
       └── 未命中 ↓
       
第2步：启用所有碰撞盒进行射线检测
       │
       ├── 命中 → 返回 {true, false} (普通命中)
       │
       └── 未命中 → 返回 {false, false} (未命中)

为什么这样设计？
├── 性能优化：大多数情况下一次射线检测即可完成
├── 游戏性：爆头应该有明确的优势
└── 逻辑清晰：避免复杂的命中部位判断
```

---

## 6. 三种武器类型的实现差异

### 6.1 对比表格

| 特性 | HitScan (即时命中) | Projectile (投射物) | Shotgun (霰弹枪) |
|------|-------------------|---------------------|------------------|
| **RPC函数** | `ServerScoreRequest` | `ProjectileServerScoreRequest` | `ShotgunServerScoreRequest` |
| **回溯函数** | `ServerSideRewind` | `ProjectileServerSideRewind` | `ShotgunServerSideRewind` |
| **确认函数** | `ConfirmHit` | `ProjectileConfirmHit` | `ShotgunConfirmHit` |
| **检测方式** | LineTraceSingle | PredictProjectilePath | 多次 LineTraceSingle |
| **输入参数** | TraceStart, HitLocation, HitTime | + InitialVelocity | HitCharacters[], HitLocations[] |
| **输出结果** | FServerSideRewindResult | FServerSideRewindResult | FShotgunServerSideRewindResult |

### 6.2 HitScan 武器（即时光）

**适用场景**：步枪、狙击枪、手枪等子弹飞行速度极快的武器。

**特点**：
- 假设子弹瞬间到达目标
- 使用简单的直线射线检测
- 最基础的回溯实现

**代码片段**：

```cpp
// 射线终点延长25%，防止边缘漏检
const FVector TraceEnd = TraceStart + (HitLocation - TraceStart) * 1.25f;

World->LineTraceSingleByChannel(ConfirmHitResult, TraceStart, TraceEnd, ECC_HitBox);
```

### 6.3 Projectile 武器（投射物）

**适用场景**：火箭发射器、榴弹发射器等有明显弹道飞行时间的武器。

**特点**：
- 子弹有飞行时间，需要模拟抛物线轨迹
- 使用 UE 的 `PredictProjectilePath` 进行路径预测
- 需要考虑重力影响

**代码片段**：

```cpp
FPredictProjectilePathParams PathParams;
PathParams.bTraceWithCollision = true;
PathParams.MaxSimTime = MaxRecordTime;        // 最大模拟时间
PathParams.LaunchVelocity = InitialVelocity;   // 初速度
PathParams.StartLocation = TraceStart;         // 发射起点
PathParams.SimFrequency = 15.f;                // 模拟频率
PathParams.ProjectileRadius = 5.f;             // 弹丸半径
PathParams.TraceChannel = ECC_HitBox;          // 碰撞通道
PathParams.ActorsToIgnore.Add(GetOwner());     // 忽略自身

UGameplayStatics::PredictProjectilePath(this, PathParams, PathResult);
```

### 6.4 Shotgun 武器（霰弹枪）

**适用场景**：霰弹枪，一次发射多颗弹丸。

**特点**：
- 一次射击产生多个命中点（ NumberOfPellets 通常为8-12颗）
- 可能同时命中多个敌人
- 需要分别统计每个敌人的头部/身体命中次数
- 支持累加伤害

**特殊处理流程**：

```
1. 为每个被命中的角色获取对应的回溯帧
        │
        ▼
2. 将所有角色的碰撞盒都移动到各自的历史位置
        │
        ▼
3. 第一轮检测：只启用头部盒子
   → 遍历所有弹丸命中点，统计每个角色的爆头数
        │
        ▼
4. 第二轮检测：启用所有盒子，禁用头部
   → 遍历所有弹丸命中点，统计每个角色的身体命中数
        │
        ▼
5. 汇总伤害并应用
   TotalDamage = HeadShots × HeadShotDamage + BodyShots × Damage
```

**代码片段**（伤害计算）：

```cpp
for (auto& HitCharacter : HitCharacters)
{
    float TotalDamage = 0;
    
    // 爆头伤害
    if (Confirm.HeadShots.Contains(HitCharacter))
    {
        TotalDamage += Confirm.HeadShots[HitCharacter] * HeadShotDamage;
    }
    
    // 身体伤害
    if (Confirm.BodyShots.Contains(HitCharacter))
    {
        TotalDamage += Confirm.BodyShots[HitCharacter] * Damage;
    }
    
    // 应用总伤害
    UGameplayStatics::ApplyDamage(HitCharacter, TotalDamage, ...);
}
```

---

## 7. 代码调用链路

### 7.1 HitScan 完整调用链

```
Player Input (Mouse Click)
    │
    ▼
AHitScanWeapon::Fire()
    │
    ├── WeaponTraceHit()              // 本地射线检测
    │
    └── ULagCompensationComponent::ServerScoreRequest() [RPC]
            │
            ▼ (Server)
        ServerScoreRequest_Implementation()
            │
            ▼
        ULagCompensationComponent::ServerSideRewind()
            │
            ├── GetFrameToCheck()      // 获取历史帧（可能插值）
            │       │
            │       └── InterpBetweenFrames()  // 帧插值
            │
            ▼
        ULagCompensationComponent::ConfirmHit()
            │
            ├── CacheBoxPosition()     // 1. 保存当前位置
            ├── MoveBoxes()            // 2. 移动到历史位置
            ├── EnableCharacterMeshCollision(NoCollision)  // 3. 禁用Mesh
            ├── LineTraceSingle...     // 4. 头部检测
            ├── LineTraceSingle...     // 5. 全身检测
            ├── ResetHitBoxes()        // 6. 恢复碰撞盒
            └── EnableCharacterMeshCollision(QueryAndPhysics)  // 7. 启用Mesh
            │
            ▼
        Return FServerSideRewindResult
            │
            ▼
        UGameplayStatics::ApplyDamage()  // 应用伤害
```

### 7.2 Projectile 完整调用链

```
AProjectileWeapon::Fire()
    │
    ▼
ULagCompensationComponent::ProjectileServerScoreRequest() [RPC]
    │
    ▼
ProjectileServerScoreRequest_Implementation()
    │
    ▼
ProjectileServerSideRewind()
    │
    ├── GetFrameToCheck()
    │
    ▼
ProjectileConfirmHit()
    │
    ├── CacheBoxPosition()
    ├── MoveBoxes()
    ├── EnableCharacterMeshCollision(NoCollision)
    ├── HeadBox 检测
    │   └── PredictProjectilePath()  // ← 不同点：使用抛物线预测
    ├── 全身检测
    │   └── PredictProjectilePath()
    ├── ResetHitBoxes()
    └── EnableCharacterMeshCollision(QueryAndPhysics)
```

### 7.3 Shotgun 完整调用链

```
AShotGun::FireShotgun()
    │
    ├── ShotgunTraceEndWithScatter()  // 计算多个散射弹丸落点
    │
    ▼
ULagCompensationComponent::ShotgunServerScoreRequest() [RPC]
    │
    ▼
ShotgunServerScoreRequest_Implementation()
    │
    ▼
ShotgunServerSideRewind()
    │
    ├── for each HitCharacter:
    │   └── GetFrameToCheck()         // 为每个角色获取对应的历史帧
    │
    ▼
ShotgunConfirmHit()
    │
    ├── for each Frame:
    │   ├── CacheBoxPosition()
    │   ├── MoveBoxes()
    │   └── EnableCharacterMeshCollision(NoCollision)
    │
    ├── 启用所有头部盒子
    │   └── for each HitLocation:
    │       └── LineTraceSingle()     // 统计爆头
    │
    ├── 启用所有盒子 + 禁用头部
    │   └── for each HitLocation:
    │       └── LineTraceSingle()     // 统计身体命中
    │
    ├── for each Frame:
    │   ├── ResetHitBoxes()
    │   └── EnableCharacterMeshCollision(QueryAndPhysics)
    │
    └── Return FShotgunServerSideRewindResult
            │
            ▼
        循环应用伤害（按角色汇总）
```

---

## 8. 性能优化与注意事项

### 8.1 已实现的优化

| 优化项 | 实现方式 | 效果 |
|--------|----------|------|
| **头部优先检测** | 先只启用头部盒子检测 | 大多数情况下减少一次全量射线检测 |
| **双向链表** | O(1) 头部插入/删除 | 高效的帧历史管理 |
| **自动清理** | 超过MaxRecordTime自动删除 | 控制内存占用 |
| **仅服务器运行** | HasAuthority() 检查 | 客户端不执行帧记录 |
| **碰撞盒复用** | 直接移动现有盒子而非创建临时物体 | 减少GC压力 |

### 8.2 代码中的 TODO 和潜在问题

```cpp
// LagCompensationComponent.cpp 第55行
// XMBTODO:注意此处，假如玩家使用当前武器发射后，
// 切换武器后，才命中，则传入的是玩家切换武器后的伤害(另一把武器的伤害)
```

**问题描述**：如果玩家发射投射物后切换武器，当投射物命中时 `Owner->GetEquippedWeapon()` 已经是新武器了，会导致使用错误的伤害值。

**建议修复方案**：在发射时缓存使用的武器引用。

```cpp
// LagCompensationComponent.cpp 第215行
// TODO:这里的这个HitTime是否需要考虑霰弹枪的弹丸速度？
```

**问题描述**：霰弹枪的多颗弹丸到达目标的时间略有不同（虽然很短），当前统一使用同一个 HitTime。

**建议**：对于高精度需求可以考虑为每颗弹丸单独计算 HitTime，但一般情况下影响可忽略。

### 8.3 调试辅助功能

```cpp
// 显示指定帧的所有碰撞盒
void ShowFramePackage(const FFramePackage& Package, const FColor Color)
{
    for (auto& BoxInfo : Package.HitBoxInfo)
    {
        DrawDebugBox(
            GetWorld(),
            BoxInfo.Value.BoxLocation,
            BoxInfo.Value.BoxExtent,
            FQuat(BoxInfo.Value.BoxRotation),
            Color,
            false,
            5.f  // 显示5秒
        );
    }
}
```

**用途**：可在调试模式下可视化显示回溯到的碰撞盒位置，验证正确性。

### 8.4 配置参数

```cpp
UPROPERTY(EditAnywhere, Category = "Frame")
float MaxRecordTime = 4.f;  // 最大回溯时间（秒）
```

**调优建议**：
- 建议范围：2-5 秒
- 过短：高延迟玩家无法得到有效补偿
- 过长：增加内存占用和搜索时间
- 一般游戏建议 3-4 秒

### 8.5 安全性考虑

```
防作弊相关：
├── 所有回溯验证在服务器端执行
├── 客户端只能提供 HitTime 建议，最终由服务器决定
├── 超出范围的 HitTime 直接拒绝（返回空帧）
└── 必须通过合法的 RPC 调用（Server, Reliable）

潜在风险：
├── 极端延迟（>4s）的玩家无法命中 → 设计上是可接受的
├── 速度作弊可能导致历史帧不匹配 → 需配合反作弊系统
└── 时间篡改可能导致异常 HitTime → 依赖服务器时间同步
```

---

## 附录A：术语表

| 术语 | 英文 | 解释 |
|------|------|------|
| 服务端回溯 | Server-Side Rewind | 在服务器上将游戏状态恢复到过去的某个时间点 |
| 帧数据包 | Frame Package | 记录某一时刻所有碰撞盒状态的快照 |
| 单程延迟 | Single Trip Time (STT) | 数据从客户端到服务器的单向传输时间 |
| 往返延迟 | Round-Trip Time (RTT) | 数据往返一次的总时间，STT ≈ RTT/2 |
| 线性插值 | Linear Interpolation | 在两个已知值之间按比例计算中间值 |
| 碰撞盒 | Hit Box | 用于碰撞检测的不可见几何体 |
| 即时光 | Hitscan | 子弹瞬时到达目标的武器类型 |
| 投射物 | Projectile | 有明显飞行轨迹和时间的武器类型 |

---

## 附录B：文件索引

| 文件路径 | 说明 |
|----------|------|
| `Source/XMBBlaster/Public/XMBComponent/LagCompensationComponent.h` | 组件声明，包含所有数据结构和接口定义 |
| `Source/XMBBlaster/Private/XMBComponent/LagCompensationComponent.cpp` | 组件实现，包含所有核心算法逻辑 |
| `Source/XMBBlaster/Public/Character/XMBCharacterBase.h` | 角色基类，定义碰撞盒组件和 LagCompensatoin 组件 |
| `Source/XMBBlaster/Private/Weapon/HitScanWeapon.cpp` | 即时光武器，演示如何调用延迟补偿 |
| `Source/XMBBlaster/Private/Weapon/ShotGun.cpp` | 霰弹枪，演示多目标延迟补偿 |

---

*文档版本：1.1*
*基于项目代码分析生成*
*最后更新：2026-05-31*

---

# 第二部分：关联系统深度解析

## 9. 关联系统A：角色碰撞盒体系（AXMBCharacterBase）

LagCompensationComponent 的回溯操作直接依赖于角色身上的**碰撞盒（Hit Box）组件**。这些碰撞盒的创建、配置和管理全部在 `AXMBCharacterBase` 中完成。

### 9.1 碰撞盒创建与注册

**文件位置**: `Source/XMBBlaster/Private/Character/XMBCharacterBase.cpp` (构造函数，第91-164行)

```
AXMBCharacterBase::AXMBCharacterBase()
{
    // ... 相机、UI等组件初始化 ...

    // 创建 LagCompensationComponent（第63行）
    LagCompensationComponent = CreateDefaultSubobject<ULagCompensationComponent>(
        TEXT("LagCompensationComponent")
    );
    // 注意：该组件不启用网络复制（注释掉了 SetIsReplicated）
    // 原因：FrameHistory 只需要在服务器端维护即可

    // ====== 碰撞盒创建与骨骼绑定 ======
    // 每个碰撞盒都附加到 GetMesh() 的对应骨骼插槽上
    // 随角色动画自动跟随移动

    Head = CreateDefaultSubobject<UBoxComponent>(TEXT("Head"));
    Head->SetupAttachment(GetMesh(), FName("head"));
    HitCollisionBoxes.Add(FName("Head"), Head);

    Pelvis = CreateDefaultSubobject<UBoxComponent>(TEXT("Pelvis"));
    Pelvis->SetupAttachment(GetMesh(), FName("Pelvie"));
    HitCollisionBoxes.Add(FName("Pelvis"), Pelvis);

    Spine_02 = CreateDefaultSubobject<UBoxComponent>(TEXT("Spine_02"));
    Spine_02->SetupAttachment(GetMesh(), FName("spine_02"));
    HitCollisionBoxes.Add(FName("Spine_02"), Spine_02);

    // ... 共17个碰撞盒（见下表）...

    // 统一配置所有碰撞盒属性
    for(auto Box : HitCollisionBoxes)
    {
        if (Box.Value)
        {
            Box.Value->SetCollisionObjectType(ECC_HitBox);       // 自定义碰撞通道
            Box.Value->SetCollisionResponseToAllChannels(ECR_Ignore); // 默认忽略所有通道
            Box.Value->SetCollisionResponseToChannel(ECC_HitBox, ECR_Block); // 仅响应HitBox通道
            Box.Value->SetCollisionEnabled(ECollisionEnabled::NoCollision); // 初始禁用！
        }
    }
}
```

### 9.2 完整碰撞盒列表

| 变量名 | 骨骼名称 | Map Key | 说明 |
|--------|----------|---------|------|
| `Head` | `"head"` | `"Head"` | 头部 - **爆头判定区域** |
| `Pelvis` | `"Pelvie"` | `"Pelvis"` | 骨盆 |
| `Spine_02` | `"spine_02"` | `"Spine_02"` | 上脊柱 |
| `Spine_03` | `"spine_03"` | `"Spine_03"` | 下脊柱 |
| `Upperarm_l` | `"upperarm_l"` | `"Upperarm_l"` | 左上臂 |
| `Upperarm_r` | `"upperarm_r"` | `"Upperarm_r"` | 右上臂 |
| `Lowerarm_l` | `"lowerarm_l"` | `"Lowerarm_l"` | 左前臂 |
| `Lowerarm_r` | `"lowerarm_r"` | `"Lowerarm_r"` | 右前臂 |
| `Hand_l` | `"hand_l"` | `"Hand_l"` | 左手 |
| `Hand_r` | `"hand_r"` | `"Hand_r"` | 右手 |
| `Thigh_l` | `"thigh_l"` | `"Thigh_l"` | 左大腿 |
| `Thigh_r` | `"thigh_r"` | `"Thigh_r"` | 右大腿 |
| `Calf_l` | `"calf_l"` | `"Calf_l"` | 左小腿 |
| `Calf_r` | `"calf_r"` | `"Calf_r"` | 右小腿 |
| `Foot_l` | `"foot_l"` | `"Foot_l"` | 左脚 |
| `Foot_r` | `"foot_r"` | `"Foot_r"` | 右脚 |

**总计：17个碰撞盒**

### 9.3 碰撞盒设计要点

#### 为什么初始状态是禁用的？

```cpp
Box.Value->SetCollisionEnabled(ECollisionEnabled::NoCollision);
```

**原因分析**：

```
正常游戏流程中的射线检测：
├── 使用 ECC_Visibility 通道检测可见性（武器射击）
└── 角色的 Mesh 本身参与此检测

延迟补偿流程中的射线检测：
├── 使用 ECC_HitBox 通道检测碰撞盒
├── 需要临时启用特定碰撞盒
└── 检测完成后立即恢复为禁用状态

如果碰撞盒始终启用：
├── 正常射击会命中碰撞盒 → 与 Mesh 检测冲突
├── 物理系统会产生额外开销
└── 可能导致"双击"问题（同时命中 Mesh 和 HitBox）
```

#### 为什么使用自定义 ECC_HitBox 通道？

```cpp
// XMBBlaster.h 中定义的自定义碰撞通道
ECC_HitBox  // 专用于延迟补偿的碰撞检测
```

**优势**：
- 将延迟补偿的检测逻辑与普通游戏逻辑完全隔离
- 可以精确控制哪些物体参与回溯检测
- 避免对其他游戏系统（如物理、AI导航）产生副作用

### 9.4 LagCompensationComponent 的初始化

**文件位置**: `XMBCharacterBase.cpp` 第259-266行 (`PostInitializeComponents`)

```cpp
void AXMBCharacterBase::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    // ... 其他组件初始化 ...

    if (LagCompensationComponent)
    {
        LagCompensationComponent->Owner = this;   // ★ 关键：建立双向引用
        if (Controller)
        {
            LagCompensationComponent->OwnerController = 
                Cast<AXMBPlayerController>(Controller);
        }
    }
}
```

**时序说明**：
- `PostInitializeComponents()` 在所有 `CreateDefaultSubobject` 完成后被引擎调用
- 此时刻 Controller 可能尚未 Ready（特别是网络游戏中）
- 因此 `LagCompensationComponent.cpp` 的 `SaveFramePackage` 中有**惰性初始化逻辑**：
  ```cpp
  Owner = Owner == nullptr ? Cast<AXMBCharacterBase>(GetOwner()) : Owner;
  ```

### 9.5 角色基类提供的访问接口

```cpp
// XMBCharacterBase.h 第64行
FORCEINLINE ULagCompensationComponent* GetLagCompensation() const 
{ 
    return LagCompensationComponent; 
}
```

这个内联函数被以下位置调用：

| 调用位置 | 用途 |
|----------|------|
| `HitScanWeapon::Fire()` (第60行) | 获取本地玩家的 LagCompensation 以发送 RPC |
| `ShotGun::FireShotgun()` (第127行) | 同上，霰弹枪版本 |
| `LagCompensationComponent.cpp` 多处 | 访问被击中目标的 FrameHistory |

---

## B: 关联系统B：时间同步系统（AXMBPlayerController）

时间同步是网络延迟补偿的**基础支撑系统**。没有准确的时间同步，HitTime 的计算就会出错，导致回溯到错误的帧。

### 10.1 核心变量

**文件位置**: `Source/XMBBlaster/Public/PlayerController/XMBPlayerController.h`

```cpp
class AXMBPlayerController : public APlayerController
{
public:
    // 单程延迟（客户端→服务器的单向传输时间）
    float SingleTripTime = 0.f;

protected:
    // 客户端-服务器时间差（偏移量）
    float ClientServerDelta = 0.f;

    // 时间同步频率（秒）
    UPROPERTY(EditAnywhere, Category = Time)
    float TimeSyncFrequency = 5.f;

    // 时间同步计时累加器
    float TimeSyncRunningTime = 0.f;

    // 高Ping通知委托
    FHighPingDelegate HighPingDelegate;
    
private:
    // Ping检测阈值（ms）- 超过此值视为高延迟
    UPROPERTY(EditAnywhere, Category = Ping)
    float HighPingThreshold = 50.f;
};
```

### 10.2 RTT 校准算法详解

整个时间同步过程涉及**三次 RPC 调用**，形成一个完整的往返测量闭环：

```
时间轴：
客户端(T=0s)                    服务器                      客户端(T=RTT后)
    │                            │                             │
    ├─ ServerRequestServerTime(T0) ─────────────────────────────►│
    │   T0 = GetWorld()->GetTimeSeconds()                        │
    │                                                            │
    │                                              ┌─────────────┤
    │                              收到请求      │ T1 = ServerTime│
    │                              记录服务器时间  │              │
    │                                            │               │
    │◄══ ClientReportServerTime(T0, T1) ═════════┘               │
    │                                                            │
    │  T2 = GetWorld()->GetTimeSeconds()  ← 当前客户端时间        │
    │                                                            │
    │  ═══ 计算阶段 ═══                                           │
    │  RoundTripTime = T2 - T0                                    │
    │  SingleTripTime = RoundTripTime / 2                        │
    │                                                            │
    │  CurrentServerTime = T1 + SingleTripTime                   │
    │  ClientServerDelta = CurrentServerTime - T2                 │
    │                                                            │
    ▼                                                            ▼
```

### 10.3 RPC 实现：ServerRequestServerTime

**文件位置**: `XMBPlayerController.cpp` 第882-888行

```cpp
void AXMBPlayerController::ServerRequestServerTime_Implementation(
    float TimeOfClientRequest)  // ← 客户端发送时的本地时间 T0
{
    // 服务器收到请求的时刻
    float ServerTimeOfReceipt = GetWorld()->GetTimeSeconds();  // T1
    
    // 将两个时间一并返回给客户端
    ClientReportServerTime(TimeOfClientRequest, ServerTimeOfReceipt);
}
```

**关键点**：
- 标记 `UFUNCTION(Server, Reliable)` — 仅在服务器执行，保证可靠到达
- 参数 `TimeOfClientRequest` 是客户端调用时传入的时间戳（不是服务器当前时间）

### 10.4 RPC 实现：ClientReportServerTime

**文件位置**: `XMBPlayerController.cpp` 第916-929行

```cpp
void AXMBPlayerController::ClientReportServerTime_Implementation(
    float TimeOfClientRequest,           // T0: 客户端原始发送时间（原样返回）
    float TimeServerReceivedClientRequest)// T1: 服务器收到时的服务器时间
{
    // 步骤1: 计算完整往返时间
    float RoundTripTime = GetWorld()->GetTimeSeconds() - TimeOfClientRequest;
    //                     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^    ^^^^^^^^^^^^^^^^^^
    //                     T2（当前客户端时间）                  T0

    // 步骤2: 存储单程延迟（供 LagCompensation 使用）
    SingleTripTime = 0.5f * RoundTripTime;  // ★ 这是核心输出！

    // 步骤3: 估算当前服务器时间
    float CurrentServerTime = TimeServerReceivedClientRequest 
                              + (0.5f * RoundTripTime);

    // 步骤4: 计算时间偏移量（供 GetServerTime() 使用）
    ClientServerDelta = CurrentServerTime - GetWorld()->GetTimeSeconds();
}
```

**数学推导**：

```
假设真实情况：
- 客户端发送时刻的真实全局时间: G₀
- 服务器接收时刻的真实全局时间: G₁
- 客户端接收响应时刻的真实全局时间: G₂

则:
- G₁ - G₀ ≈ 单程延迟（客户端→服务器）≈ STT
- G₂ - G₁ ≈ 单程延迟（服务器→客户端）≈ STT
- RTT = G₂ - G₀ ≈ 2 × STT
- STT = RTT / 2

估算当前服务器时间:
CurrentServerTime ≈ T1 + STT = T1 + RTT/2

注意前提假设: 网络往返是对称的（实际上不一定完全对称，
但误差通常在可接受范围内）
```

### 10.5 获取校准后的服务器时间

```cpp
float AXMBPlayerController::GetServerTime()
{
    return GetWorld()->GetTimeSeconds() + ClientServerDelta;
}
```

**使用场景**：
- 在武器开火时计算 HitTime
- 在 HUD 中显示倒计时
- 任何需要"近似服务器时间"的逻辑

### 10.6 定期同步机制

**文件位置**: `XMBPlayerController.cpp` 第176-186行 (`CheckTimeSync`) + 第104行 (Tick)

```cpp
void AXMBPlayerController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
    SetHUDTime();
    CheckTimeSync(DeltaSeconds);  // ← 每帧检查是否需要同步
    PollInit();
    CheckPing(DeltaTimes);       // ← 同时检测Ping状态
}

void AXMBPlayerController::CheckTimeSync(float DeltaSeconds)
{
    TimeSyncRunningTime += DeltaSeconds;
    
    // 每5秒同步一次（仅本地控制器）
    if (IsLocalPlayerController() && TimeSyncRunningTime > TimeSyncFrequency)
    {
        ServerRequestServerTime(GetWorld()->GetTimeSeconds());
        TimeSyncRunningTime = 0.f;  // 重置计时器
    }
}

// 首次同步：连接建立后立即执行
void AXMBPlayerController::ReceivedPlayer()
{
    Super::ReceivedPlayer();
    if (IsLocalPlayerController())
    {
        ServerRequestServerTime(GetWorld()->GetTimeSeconds());
    }
}
```

**同步策略总结**:

| 同步时机 | 触发条件 | 目的 |
|----------|----------|------|
| `ReceivedPlayer()` | 玩家连接完成时 | 获取初始时间偏移，越早越好 |
| `CheckTimeSync()` | 每5秒定期触发 | 校准时钟漂移，保持精度 |

### 10.7 SingleTripTime 如何流入 LagCompensation

这是连接两个系统的关键纽带。以 HitScan 武器为例：

```
AXMBPlayerController          AHitScanWeapon            ULagCompensationComponent
┌─────────────────────┐     ┌──────────────────┐     ┌────────────────────────┐
│ SingleTripTime      │     │ Fire()            │     │ ServerScoreRequest()   │
│ = 0.05s (100ms RTT)│────►│                   │────►│                        │
│                     │     │ HitTime =         │     │ HitTime 参数           │
│ GetServerTime()     │     │   GetServerTime() │     │ = 开火时刻的服务器时间   │
│ = Local + Delta     │     │   - SingleTripTime│     │                        │
└─────────────────────┘     └──────────────────┘     └────────────────────────┘
```

**实际代码** (`HitScanWeapon.cpp` 第67行):

```cpp
XMBOwnerCharacter->GetLagCompensation()->ServerScoreRequest(
    BlasterCharacter,                          // 被击中的目标
    Start,                                     // 射线起点
    HitTarget,                                 // 命中点
    XMBOwnerController->GetServerTime() - XMBOwnerController->SingleTripTime
    //  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^   ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //  "现在"的服务器时间估计值             减去单程延迟
    //  = 回退到开火时刻的服务器时间
);
```

### 10.8 高Ping检测系统

虽然主要功能是为 HUD 显示警告，但它也通过委托影响延迟补偿行为。

```cpp
// XMBPlayerController.cpp 第1032-1069行
void AXMBPlayerController::CheckPing(float DeltaTime)
{
    if (HasAuthority()) return;  // 仅客户端执行
    
    HighPingRunningTime += DeltaTime;
    if (HighPingRunningTime > CheckPingFrequency)  // 默认20秒检测一次
    {
        PlayerState = PlayerState == nullptr ? GetPlayerState<AXMBPlayerState>() : PlayerState;
        if (PlayerState)
        {
            // UE5内置函数已乘以4（压缩过的ping值需要还原）
            if (PlayerState->GetCompressedPing() * 4 > HighPingThreshold)  // 50ms
            {
                HighPingWarning();           // 显示HUD警告
                ServerReportPingStatus(true);// 通知服务器：我的Ping太高了
            }
        }
        HighPingRunningTime = 0.f;
    }
}

// 广播高Ping事件
void AXMBPlayerController::ServerReportPingStatus_Implementation(bool bHighPing)
{
    HighPingDelegate.Broadcast(bHighPing);  // 通知所有订阅者
}
```

### 10.9 深度解析：客户端到服务器传输时间的计算逻辑

本节对**时间计算的完整链路**进行逐层深入剖析，从"为什么需要计算传输时间"到"最终如何得到精确的 HitTime"，配合具体数值示例和误差分析。

#### 10.9.1 问题本质：为什么需要知道"数据传输花了多长时间"？

```
┌─────────────────────────────────────────────────────────────────────┐
│                        问题的核心                                    │
├─────────────────────────────────────────────────────────────────────┤
│                                                                     │
│   客户端视角（玩家看到的世界）          服务器视角（真实权威世界）      │
│   ┌───────────────┐                    ┌───────────────┐            │
│   │               │     网络延迟       │               │            │
│   │  敌人在位置 A  │ ──── 100ms ─────► │ 敌人已经移动   │            │
│   │  （瞄准射击）  │                    │ 到了位置 B     │            │
│   │               │                    │               │            │
│   │  射击时刻: T_fire                 │  收到请求时: T_recv │           │
│   │  = 客户端本地时间                  │  = 服务器时间     │           │
│   └───────────────┘                    └───────────────┘            │
│                                                                     │
│   核心问题：                                                        │
│   "我在客户端开火的那一刻，对应服务器的哪个时间点？"                   │
│                                                                     │
│   如果不知道答案：                                                  │
│   → 服务器用当前状态判定 → 敌人已经在B → 未命中 → 玩家觉得"明明打中了"│
│                                                                     │
│   如果知道答案（HitTime）：                                          │
│   → 服务器回溯到HitTime时的状态 → 敌人还在A → 命中 → 公平！         │
│                                                                     │
└─────────────────────────────────────────────────────────────────────┘
```

#### 10.9.2 时间计算的三个关键变量

在整个系统中，涉及三个层次的时间变量：

| 变量名 | 类型 | 定义 | 用途 |
|--------|------|------|------|
| `RoundTripTime` | 局部变量 | **往返时间(RTT)**：从发送请求到收到响应的总耗时 | 计算 SingleTripTime 的中间值 |
| `SingleTripTime` | 成员变量 | **单程时间**：数据从客户端到服务器的单向传输耗时 | 计算 HitTime 的核心参数 |
| `ClientServerDelta` | 成员变量 | **时差偏移**：客户端时间与服务器时间的固定偏差 | 将任何本地时间转换为服务器等效时间 |
| `HitTime` | 参数值 | **命中时间戳**：开火时刻对应的**服务器时间** | LagCompensation 回溯的目标时间点 |

**它们之间的关系**：

```
RoundTripTime = T₂ - T₀                    （测量得到的总往返时间）
SingleTripTime = RoundTripTime / 2          （假设对称，取半程）
ClientServerDelta = CurrentServerTime - T₂  （持久化的时差偏移）
HitTime = GetServerTime() - SingleTripTime   （最终使用的回溯目标时间）

其中：
  T₀ = 发送 RPC 时的客户端本地时间
  T₁ = 服务器收到 RPC 时的服务器时间
  T₂ = 收到 RPC 响应时的客户端本地时间
  CurrentServerTime = T₁ + SingleTripTime   （估算的"当前"服务器时间）
  GetServerTime() = Now_Local + ClientServerDelta  （任意时刻的服务器时间估算）
```

#### 10.9.3 RTT 测量的完整执行流程（带数值示例）

让我们用一个**具体的数值例子**走完整个流程：

```
假设网络环境：
- 客户端到服务器的单向延迟：50ms (0.05s)
- 服务器到客户端的单向延迟：50ms (0.05s)
- 总 RTT：100ms (0.1s) —— 这是一个比较好的网络状况
- 服务器处理时间：≈0（可忽略，因为只是记录时间+返回）

时间轴标注：
G = 全局绝对真实时间（上帝视角，实际不可知）
T_client = 客户端的 GetWorld()->GetTimeSeconds()
T_server = 服务器的 GetWorld()->GetTimeSeconds()

注意：T_client 和 T_server 的零点不同（各自从关卡加载开始计时），
所以它们的数值不能直接比较，需要通过同步算法建立映射关系。
```

**步骤①：客户端发起同步请求**

```cpp
// XMBPlayerController::CheckTimeSync() 或 ReceivedPlayer()
void AXMBPlayerController::CheckTimeSync(float DeltaSeconds)
{
    // ... 累加时间 ...
    
    // ★ 关键调用：将当前客户端时间作为参数发送
    ServerRequestServerTime(GetWorld()->GetTimeSeconds());
    //                      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //                      这个值被记为 T₀
}
```

```
时刻 G₁ (全局真实时间):
├── T_client = 100.000s  (客户端本地时间，传给服务器的 T₀ = 100.000)
├── T_server ≈ 99.950s   (此时服务器真实时间，但客户端不知道)
└── 动作: 客户端打包 T₀=100.000，发送 RPC 到服务器
```

**步骤②：服务器接收并处理**

```cpp
// 在服务器上执行
void AXMBPlayerController::ServerRequestServerTime_Implementation(
    float TimeOfClientRequest)  // TimeOfClientRequest = 100.000 (T₀)
{
    // 记录服务器当前时间
    float ServerTimeOfReceipt = GetWorld()->GetTimeSeconds();
    //                          ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //                          这个值被记为 T₁
    
    // 将两个时间一起返回给客户端
    ClientReportServerTime(TimeOfClientRequest, ServerTimeOfReceipt);
    //                     ^^^^^^^^^^^^^^^^^^^^^  ^^^^^^^^^^^^^^^^^^
    //                     T₀ = 100.000(原样回传)   T₁ = 100.000(举例)
}
```

```
时刻 G₂ (全局真实时间):
├── 数据包在网络上传输了 50ms (0.05s)
├── T_server = 100.000s   (服务器记录下 T₁ = 100.000)
├── T_client ≈ 100.050s   (此时客户端真实时间，但还没收到响应)
└── 动作: 服务器立即将 (T₀=100.000, T₁=100.000) 打包返回
```

> **注意**：这里 T₁=100.000 是举例值。实际上 T_server 和 T_client 有不同的零点，
> 所以 T₁ 的具体数值取决于服务器何时开始运行。关键是 **T₁ 是一个有效的服务器时间戳**。

**步骤③：客户端接收响应并计算**

```cpp
// 回到客户端执行
void AXMBPlayerController::ClientReportServerTime_Implementation(
    float TimeOfClientRequest,            // T₀ = 100.000 (原样返回)
    float TimeServerReceivedClientRequest) // T₁ = 服务器时间戳
{
    // ═════ 步骤1: 计算 RoundTripTime ═════
    float RoundTripTime = GetWorld()->GetTimeSeconds() - TimeOfClientRequest;
    //                     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^    ^^^^^^^^^^^^^^^^^
    //                     T₂ (现在)                        T₀ (当时)
    
    // ═════ 步骤2: 计算 SingleTripTime ═════
    SingleTripTime = 0.5f * RoundTripTime;
    
    // ═════ 步骤3: 估算当前服务器时间 ═════
    float CurrentServerTime = TimeServerReceivedClientRequest 
                              + (0.5f * RoundTripTime);
    
    // ═════ 步骤4: 计算并存储时差偏移 ═════
    ClientServerDelta = CurrentServerTime - GetWorld()->GetTimeSeconds();
}
```

```
时刻 G₃ (全局真实时间):
├── 响应又在网络上传输了 50ms (0.05s)
├── T_client = 100.100s   (客户端收到响应，这是 T₂)
├── T_server ≈ 100.050s   (此时服务器真实时间)
│
├── 计算:
│   RoundTripTime = T₂ - T₀ = 100.100 - 100.000 = 0.100s (100ms) ✓
│   SingleTripTime = 0.100 / 2 = 0.050s (50ms) ✓
│   CurrentServerTime = T₁ + STT = [T₁的值] + 0.050s
│   ClientServerDelta = CurrentServerTime - 100.100
│
└── 结果存储:
    SingleTripTime = 0.050s  ← 持久保存，供后续 HitTime 计算
    ClientServerDelta = X     ← 持久保存，供 GetServerTime() 使用
```

#### 10.9.4 从同步到开火：HitTime 的诞生

当时间同步完成后，后续每次开火都可以利用这些值计算 HitTime。

```
场景：玩家在 T_client = 150.000s 时点击鼠标开枪

此时系统状态（假设上次同步后网络状况稳定，STT仍为50ms）:

GetServerTime() 调用:
= GetWorld()->GetTimeSeconds() + ClientServerDelta
= 150.000 + ClientServerDelta
≈ 对应的服务器时间（比如 150.030s，取决于 Delta 的实际值）

HitTime 计算:
= GetServerTime() - SingleTripTime
= (150.000 + Delta) - 0.050
= 150.000 + Delta - 0.050
≈ 对应"开火那一刻"的服务器时间

物理意义：
"我现在的服务器时间估计是 S_now，但我这个感知是 STT 时间前的，
所以开火时刻的真实服务器时间 ≈ S_now - STT"
```

**代码对照** (`HitScanWeapon.cpp` 第67行):

```cpp
XMBOwnerCharacter->GetLagCompensation()->ServerScoreRequest(
    BlasterCharacter,
    Start,
    HitTarget,
    XMBOwnerController->GetServerTime()        // ← "现在"的服务器时间
        - XMBOwnerController->SingleTripTime  // ← 减去单程传输延迟
        //                                        ← 等于"开火时刻"的服务器时间
);
```

#### 10.9.5 图解：时间线的完整对应关系

```
全局时间轴（上帝视角，线性递增）

       G_sync1        G_fire         G_arrive
         │             │              │
         ▼             ▼              ▼
━━━━━━━━━┳━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━→
         ┃             ┃              ┃
    同步请求发出    玩家开火       服务器收到开火RPC
    (T₀=client_t)  (T_fire=client) (T_server_now)
         │             │              │
         │             │              │
    ┌────┴────┐   ┌────┴────┐   ┌────┴────┐
    │客户端时钟│   │客户端时钟│   │服务器时钟│
    │t=100.000│   │t=150.000│   │t=150.080│
    └─────────┘   └─────────┘   └─────────┘
         │             │              │
         ├──── RTT ────┤              │
         │   (0.10s)    │              │
         │              │              │
    ┌────▼────┐        │         ┌────▼────┐
    │服务器收到│        │         │需要回溯到│
    │T₁=svr_t │        │         │哪个时刻？│
    └─────────┘        │         └────┬────┘
         │              │              │
         │              ▼              ▼
         │        HitTime = GetServerTime() - SingleTripTime
         │        = (150.000 + Δ) - 0.050
         │        ≈ 149.980 (举例)
         │              │
         │              │    这个时间点对应
         │              └────► FrameHistory 中
         │                    某一帧的状态
         │
    同步完成，更新:
    SingleTripTime = 0.050
    ClientServerDelta = Δ
```

#### 10.9.6 为什么用 RTT/2 作为单程时间？—— 对称性假设分析

**基本假设**：网络上行和下行延迟相等。

```
理想情况（完全对称）：
  客户端 ────[50ms]───▶ 服务器 ────[50ms]───▶ 返回客户端
  RTT = 100ms, STT = 50ms ✓ 精确

实际情况（可能不对称）：
  场景A: 上行快下行慢（常见）
    客户端 ────[30ms]───▶ 服务器 ────[70ms]───▶ 返回客户端
    RTT = 100ms, 实际STT = 30ms, 但我们用 STT = 50ms
    → HitTime 比实际早了 20ms → 回溯过度一点（稍有利于攻击者）

  场景B: 上行慢下行快（较少见）
    客户端 ────[70ms]───▶ 服务器 ────[30ms]───▶ 返回客户端
    RTT = 100ms, 实际STT = 70ms, 但我们用 STT = 50ms
    → HitTime 比实际晚了 20ms → 回溯不足一点（稍有利于防御者）
```

**为什么这个假设可以接受？**

| 因素 | 说明 |
|------|------|
| **平均效应** | 多次同步后，正负误差会趋于抵消 |
| **游戏容错** | 几十毫秒的误差在游戏中几乎不可察觉 |
| **实现简单** | 不需要复杂的多边定位或外部时间源 |
| **行业标准** | 大多数游戏引擎都采用类似的简化方案 |

**更高级的替代方案（本项目未采用）**：

```
方案1: NTP/NTP-like 协议
├── 使用专门的时间服务器
├── 精度可达毫秒级
└── 缺点：增加基础设施依赖

方案2: 多次采样取最小RTT
├── 发送多次同步请求，取最小的RTT作为基准
├── 原理：最小RTT最接近纯传输时间（无排队延迟）
└── 实现：维护最近N次RTT的历史，使用 min 或中位数

方案3: 三角测量法
├── 使用两个服务器进行交叉验证
├── 可消除部分不对称误差
└── 复杂度高，一般不用于实时游戏
```

#### 10.9.7 时钟漂移问题与定期同步的必要性

**什么是时钟漂移（Clock Drift）？**

```
即使初始完全同步，客户端和服务器的时钟也会逐渐偏离：

理想情况：
客户端时间:  ────100s────150s────200s──→
服务器时间:  ────100.05─150.05─200.05→  (固定偏差Δ=0.05s)

实际情况（有漂移）:
客户端时间:  ────100s────150s────200s──→  (客户端硬件时钟略快)
服务器时间:  ────100.05─150.08─200.12→  (偏差从0.05扩大到0.12!)

原因：
├── 晶振频率不完全相同（每台电脑的晶振都有微小差异）
├── 温度影响振荡频率
├── 系统负载导致的时间计量偏差
└── 典型漂移率: 几十ppm（百万分之几十）/小时
```

**定期同步如何解决漂移？**

```cpp
// 每5秒重新校准一次
void AXMBPlayerController::CheckTimeSync(float DeltaSeconds)
{
    TimeSyncRunningTime += DeltaSeconds;
    if (IsLocalPlayerController() && TimeSyncRunningTime > TimeSyncFrequency) // 5秒
    {
        ServerRequestServerTime(GetWorld()->GetTimeSeconds());  // 重新同步
        TimeSyncRunningTime = 0.f;  // 重置计时器
    }
}
```

```
漂移修正示意：

未修正的偏差增长曲线:
Delta(s) ↑
        │    ＼
        │      ＼
        │        ＼_______ 漂移导致偏差持续增大
        │
        └──────────────────→ 时间(t)

每5秒修正后:
Delta(s) ↑
        │╭─╮╭─╮╭─╮╭─╮
        ││ ││ ││ ││ │  每次同步后偏差被拉回小范围
        │╰─╯╰─╯╰─╯╰─╯
        │
        └──────────────────→ 时间(t)
        ^  ^  ^  ^
        |  |  |  └─ 第4次同步
        |  |  └──── 第3次同步
        |  └─────── 第2次同步
        └────────── 第1次同步
```

#### 10.9.8 不同网络条件下的数值表现

| 网络质量 | 典型RTT | SingleTripTime | 最大回溯距离* | SSR体验 |
|----------|---------|----------------|----------------|---------|
| 局域网/LAN | <10ms | <5mm | <6u/帧 | 近乎完美 |
| 国内优质宽带 | 30-60ms | 15-30ms | 18-36u | 极佳 |
| 跨省普通网络 | 80-150ms | 40-75ms | 48-90u | 良好 |
| 跨国/海外服务器 | 150-300ms | 75-150ms | 90-180u | 可接受 |
| 高延迟(>300ms) | >300ms | >150mm | >180u | 被禁用SSR |

*最大回溯距离 = 角色奔跑速度(1200u/s) × SingleTripTime

#### 10.9.9 GetWorld()->GetTimeSeconds() vs FPlatformTime::Seconds()

**关键选择：为什么使用 `GetWorld()->GetTimeSeconds()` 而非系统时间？**

```cpp
// ✅ 本项目使用的方式
GetWorld()->GetTimeSeconds()
├── 返回: 自关卡 BeginPlay 以来的经过时间
├── 特点:
│   ├── 暂停游戏时不增长（符合"游戏内时间"语义）
│   ├── 所有连接到同一服务器的客户端，此时间在同一维度
│   └── 与 UE 引擎的 Replication、Timer 系统使用同一时间基准
└── 适用: 所有游戏逻辑相关的计时场景

// ❌ 不适合的方式
FPlatformTime::Seconds() / FDateTime::Now()
├── 返回: 系统墙钟时间（真实世界时间）
├── 问题:
│   ├── 每台电脑的系统时间不同步（可能差几秒甚至更多）
│   ├── 游戏暂停时仍然增长
│   └── 与引擎内部时间系统脱节
└── 仅适用于: 性能分析、日志时间戳等非游戏逻辑场景
```

#### 10.9.10 完整时间线：从游戏开始到一次命中的全流程

```
时间线（以服务器时间为参考系）:

T=0s        T=0.1s        T=5s          T=10s         T=60.03s      T=60.08s
   │            │             │             │              │             │
   ▼            ▼             ▼             ▼              ▼             ▼
┌──────┐    ┌──────┐     ┌──────┐     ┌──────┐      ┌──────┐      ┌──────┐
│游戏  │    │首次  │     │定期  │     │定期  │      │玩家  │      │服务器│
│开始  │    │同步  │     │同步  │     │同步  │      │开火  │      │收到  │
│      │    │      │     │      │     │      │      │      │      │RPC   │
└──┬───┘    └──┬───┘     └──┬───┘     └──┬───┘      └──┬───┘      └──┬───┘
   │           │             │             │              │             │
   │  ReceivedPlayer()    CheckTimeSync()  CheckTimeSync()   Fire()       ServerScore
   │  ServerRequestServer  ServerRequest    ServerRequest     HitTarget    Request_Impl
   │  Time(T₀₁)           Time(T₀₂)        Time(T₀₃)        calc HitTime  GetFrameToCheck
   │           │             │             │              │             │
   │           ▼             ▼             ▼              ▼             ▼
   │     收到响应        收到响应        收到响应        HitTime=       ConfirmHit
   │     计算:           计算:           计算:        ServerTime     (命中/未命中)
   │     STT₁, Δ₁        STT₂, Δ₂        STT₃, Δ₃      - STT
   │                                                     │
   │                                             ┌────────┴────────┐
   │                                             │  HitTime 的含义:  │
   │                                             │  "开火那一刻的    │
   │                                             │   服务器时间"     │
   │                                             └─────────────────┘
```

#### 10.9.11 代码中的 TODO/潜在改进点

```cpp
// XMBPlayerController.h 第184行
UPROPERTY(EditAnywhere, Category = Ping)
float HighPingThreshold = 50.f;  // TODO:了解
```

这个阈值决定了何时禁用SSR。当前设置为50ms的**压缩Ping值**（实际显示给玩家的Ping会乘以4），所以实际阈值是 **200ms Ping**（即100ms SingleTripTime）。这意味着：
- Ping < 200ms → SSR启用 → 正常延迟补偿
- Ping ≥ 200ms → SSR禁用 → 回归纯服务器判定

**可能的优化方向**：

1. **自适应阈值**：根据武器类型动态调整
   ```
   即时光武器: 阈值可以高一些（200ms）
   投射物武器: 阈值应该低一些（150ms），因为飞行时间本身就需要额外计算
   ```

2. **平滑过渡**：而不是硬切换，可以使用插值混合两种判定方式

3. **历史STT平均**：使用最近几次STT的平均值而非最新一次，减少突发抖动的影响

---

## 11. 关联系统C：武器系统与延迟补偿的集成

### 11.1 武器基类（AWeaponBase）的关键配置

**文件位置**: `Source/XMBBlaster/Public/Weapon/WeaponBase.h`

#### bUseServerSideRewind 属性

```cpp
/*
 * 服务器延迟补偿开关
 */
UPROPERTY(Replicated, EditAnywhere)
bool bUseServerSideRewind = false;
```

**含义**：
- `true`: 该武器使用服务端回溯进行命中验证
- `false`: 该武器不使用回溯（依赖服务器的权威判定或纯客户端预测）

**复制条件** (`WeaponBase.cpp` 第58行):
```cpp
DOREPLIFETIME_CONDITION(AWeaponBase, bUseServerSideRewind, COND_OwnerOnly);
// 仅复制给武器的拥有者客户端（节省带宽）
```

#### 武器类型枚举

```cpp
UENUM(BlueprintType)
enum class EFireType : uint8
{
    EFT_HitScan UMETA(DisplayName = "Hit Scan Weapon"),     // 即时光
    EFT_Projectile UMETA(DisplayName = "Porjectile Weapon"),  // 投射物
    EFT_Shotgun UMETA(DisplayName = "Shotgun Weapon"),       // 霰弹枪
    EFT_MAX
};

UPROPERTY(EditAnywhere)
EFireType FireType;
```

不同 `FireType` 决定了武器在开火时调用哪个 LagCompensation RPC。

### 11.2 OnPingTooHigh 回调 —— 动态禁用延迟补偿

当玩家网络状况恶化时，继续使用延迟补偿会导致**极端回溯**（目标可能已经移动了很远），反而造成更差的体验。因此设计了动态禁用机制。

**文件位置**: `WeaponBase.cpp` 第273-276行

```cpp
void AWeaponBase::OnPingTooHigh(bool bPingTooHigh)
{
    bUseServerSideRewind = !bPingTooHigh;
    // Ping过高 → 禁用SSR
    // Ping恢复正常 → 启用SSR
}
```

#### 委托绑定/解绑时机

**装备武器时绑定** (`OnEquippedState`, 第306-314行):

```cpp
XMBOwnerCharacter = XMBOwnerCharacter == nullptr 
    ? Cast<AXMBCharacterBase>(GetOwner()) : XMBOwnerCharacter;
if (XMBOwnerCharacter && bUseServerSideRewind)
{
    XMBOwnerController = XMBOwnerController == nullptr 
        ? Cast<AXMBPlayerController>(XMBOwnerCharacter->Controller) : XMBOwnerController;
    if (XMBOwnerController && HasAuthority() && !XMBOwnerController->HighPingDelegate.IsBound())
    {
        // 绑定：当Ping过高时自动调用 OnPingTooHigh
        XMBOwnerController->HighPingDelegate.AddDynamic(
            this, &AWeaponBase::OnPingTooHigh
        );
    }
}
```

**丢弃/切换武器时解绑** (`OnDroppedState`, 第333-341行):

```cpp
if (XMBOwnerController && HasAuthority() && XMBOwnerController->HighPingDelegate.IsBound())
{
    XMBOwnerController->HighPingDelegate.RemoveDynamic(
        this, &AWeaponBase::OnPingTooHigh
    );
}
```

**完整生命周期**:

```
武器被创建 → bUseServerSideRewind = false（默认）
     ↓
武器被玩家装备 → OnEquippedState()
     ↓
如果蓝图设置了 bUseServerSideRewind = true:
     ├── 绑定 HighPingDelegate
     └── 后续开火时会走 SSR 流程
     ↓
[游戏过程中]
     ├── Ping < 50ms → bUseServerSideRewind 保持 true → 正常SSR
     └── Ping > 50ms → OnPingTooHigh(true) → bUseServerSideRewind = false → 禁用SSR
     ↓
武器被丢弃/切换 → OnDroppedState()
     └── 解绑 HighPingDelegate
```

### 11.3 即时光武器（AHitScanWeapon）的完整集成

**文件位置**: `Source/XMBBlaster/Private/Weapon/HitScanWeapon.cpp`

#### Fire() 函数完整解析

```cpp
void AHitScanWeapon::Fire(const FVector& HitTarget)
{
    Super::Fire(HitTarget);  // ① 基类逻辑：播放动画、抛弹壳、扣弹药

    APawn* OwnerPawn = Cast<APawn>(GetOwner());
    if (OwnerPawn == nullptr) return;
    
    AController* InstigatorController = OwnerPawn->GetController();

    const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName("MuzzleFlash");
    if (MuzzleFlashSocket)
    {
        FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
        FVector Start = SocketTransform.GetLocation();  // ② 射线起点：枪口位置

        FHitResult FireHit;
        WeaponTraceHit(Start, HitTarget, FireHit);      // ③ 执行本地射线检测

        AXMBCharacterBase* BlasterCharacter = Cast<AXMBCharacterBase>(FireHit.GetActor());
        if (BlasterCharacter && InstigatorController)
        {
            // ══════════════════════════════════════════════════
            // 分支判断：是否需要/可以使用服务端回溯？
            // ══════════════════════════════════════════════════
            
            bool bCauseAuthDamage = !bUseServerSideRewind || OwnerPawn->IsLocallyControlled();

            // 分支A：服务器主机（无需回溯，直接判定）
            if (HasAuthority() && bCauseAuthDamage)
            {
                const float DamageToCause = FireHit.BoneName.ToString() == FString("head") 
                    ? HeadShotDamage : Damage;
                
                UGameplayStatics::ApplyDamage(
                    BlasterCharacter, DamageToCause,
                    InstigatorController, this,
                    UDamageType::StaticClass()
                );
            }

            // 分支B：客户端玩家（发送RPC进行回溯验证）
            if (!HasAuthority() && bUseServerSideRewind)
            {
                // 缓存角色和控制器引用（惰性初始化模式）
                XMBOwnerCharacter = XMBOwnerCharacter == nullptr 
                    ? Cast<AXMBCharacterBase>(OwnerPawn) : XMBOwnerCharacter;
                XMBOwnerController = XMBOwnerController == nullptr 
                    ? Cast<AXMBPlayerController>(InstigatorController) : XMBOwnerController;
                
                // 安全检查：确保所有必要组件就绪且是本地控制的角色
                if (XMBOwnerCharacter && XMBOwnerController 
                    && XMBOwnerCharacter->GetLagCompensation()
                    && XMBOwnerCharacter->IsLocallyControlled())
                {
                    // ★★★ 核心调用 ★★★
                    XMBOwnerCharacter->GetLagCompensation()->ServerScoreRequest(
                        BlasterCharacter,           // 命中的目标角色
                        Start,                     // 射线起点（世界坐标）
                        HitTarget,                 // 射线命中的目标点
                        XMBOwnerController->GetServerTime() - XMBOwnerController->SingleTripTime
                        // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                        // 计算 HitTime = 开火时刻的近似服务器时间
                    );
                }
            }
        }

        // ④ 特效播放（命中粒子、声音、弹道光束）
        // ... (省略特效代码)
    }
}
```

#### 判策矩阵：什么情况下走哪条路径？

| 场景 | HasAuthority | IsLocallyControlled | bUseServerSideRewind | 结果 |
|------|:------------:|:-------------------:|:--------------------:|------|
| 专用服务器上的 Listen Server 主机 | ✓ | ✓ | ✗/✓ | **直接造成伤害**（不走SSR） |
| 专用服务器上的 Listen Server 主机 | ✓ | ✓ | ✓ | 直接伤害（bCauseAuthDamage=true） |
| 专用服务器上的远程 Simulated Proxy | ✗ | ✗ | ✓ | **发送RPC走SSR** |
| Standalone 游戏（无网络） | ✓ | ✓ | ✗ | 直接造成伤害 |
| 客户端 Ping 过高时 | ✗ | ✓ | **false** (被禁用) | 不发送RPC，**无法命中** |

### 11.4 投射物武器（AProjectileWeapon）的特殊处理

投射物武器的延迟补偿比即时光复杂得多，因为**子弹有飞行时间**，需要模拟抛物线轨迹。

**文件位置**: `Source/XMBBlaster/Private/Weapon/ProjectileWeapon.cpp`

#### 投射物生成的四分支逻辑

```cpp
void AProjectileWeapon::Fire(const FVector& HitTarget)
{
    Super::Fire(HitTarget);
    
    InstigatorPawn = Cast<APawn>(GetOwner());
    const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName(FName("MuzzleFlash"));
    UWorld* World = GetWorld();
    
    if (MuzzleFlashSocket && World)
    {
        FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
        
        FVector ToTarget = HitTarget - SocketTransform.GetLocation();
        FRotator TargetRotation = ToTarget.Rotation();

        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = GetOwner();
        SpawnParams.Instigator = InstigatorPawn;

        AProjectile* SpawnedProjectile = nullptr;

        if (bUseServerSideRewind)
        {
            // ═══════════════════════════════════════════
            // 使用 SSR 时的复杂分支逻辑
            // ═══════════════════════════════════════════

            if (InstigatorPawn->HasAuthority())  // 服务器端
            {
                if (InstigatorPawn->IsLocallyControlled())
                {
                    // 【情况1】Listen Server 主机
                    // → 生成普通投射物（不需要SSR，因为主机就是权威）
                    SpawnedProjectile = World->SpawnActor<AProjectile>(
                        ProjectileClass, ...);
                    SpawnedProjectile->bUseServerSideRewind = false;
                    SpawnedProjectile->SetDamage(Damage);
                }
                else
                {
                    // 【情况2】服务器上的非本地控制角色（其他玩家）
                    // → 生成 SSR 专用投射物（由服务器代理进行回溯）
                    SpawnedProjectile = World->SpawnActor<AProjectile>(
                        ServerSideRewindProjectileClass, ...);
                    SpawnedProjectile->bUseServerSideRewind = true;
                }
            }
            else  // 客户端
            {
                if (InstigatorPawn->IsLocallyControlled())
                {
                    // 【情况3】本地控制的客户端玩家
                    // → 生成 SSR 投射物（由客户端发起回溯请求）
                    SpawnedProjectile = World->SpawnActor<AProjectile>(
                        ServerSideRewindProjectileClass, ...);
                    SpawnedProjectile->bUseServerSideRewind = true;
                    SpawnedProjectile->TraceStart = SocketTransform.GetLocation();
                    SpawnedProjectile->InitialVelocity = 
                        SpawnedProjectile->GetActorForwardVector() * SpawnedProjectile->InitialSpeed;
                }
                else
                {
                    // 【情况4】客户端上的其他玩家（SimulatedProxy）
                    // → 生成不可复制的投射物（纯视觉效果，不做SSR）
                    SpawnedProjectile = World->SpawnActor<AProjectile>(
                        ServerSideRewindProjectileClass, ...);
                    SpawnedProjectile->bUseServerSideRewind = false;
                }
            }
        }
        else  // 不使用 SSR
        {
            // 【情况5】标准模式：仅在服务器生成普通投射物
            if (InstigatorPawn->HasAuthority())
            {
                SpawnedProjectile = World->SpawnActor<AProjectile>(
                    ProjectileClass, ...);
                SpawnedProjectile->bUseServerSideRewind = false;
                SpawnedProjectile->SetDamage(Damage);
            }
        }
    }
}
```

**为什么需要两种投射物类？**

| 类名 | 用途 | 是否网络复制 | SSR逻辑位置 |
|------|------|:------------:|-------------|
| `ProjectileClass` | 普通/主机投射物 | 是 (bReplicates=true) | 无（直接命中结算） |
| `ServerSideRewindProjectileClass` | SSR专用投射物 | 否 (仅本地存在) | 在 Projectile 自身或 LagCompensatoin |

### 11.5 霰弹枪（AShotGun）的集成特点

**文件位置**: `Source/XMBBlaster/Private/Weapon/ShotGun.cpp`

#### 与 HitScan 的主要差异

```cpp
void AShotGun::FireShotgun(const TArray<FVector_NetQuantize>& HitTargets)
{
    AWeaponBase::Fire(FVector());  // 基类逻辑（无具体HitTarget）
    
    // ... 弹丸散射计算 ...
    
    for (auto HitTarget : HitTargets)  // 遍历每颗弹丸
    {
        FHitResult FireHit;
        WeaponTraceHit(Start, HitTarget, FireHit);  // 每颗独立检测
        
        AXMBCharacterBase* BlasterCharacter = Cast<AXMBCharacterBase>(FireHit.GetActor());
        if (BlasterCharacter)
        {
            // 本地统计命中数（用于立即显示效果）
            const bool bHeadShot = FireHit.BoneName.ToString() == FString("head");
            // ... 统计到 HitMap / HeadShotHitMap ...
        }
    }

    // ... 本地伤害计算（主机即时反馈）...

    // ★★★ 发送霰弹枪专用的SSR请求 ★★★
    if (!HasAuthority() && bUseServerSideRewind)
    {
        XMBOwnerCharacter->GetLagCompensation()->ShotgunServerScoreRequest(
            HitCharacters,    // 所有被命中的角色（去重后的列表）
            Start,            // 枪口位置
            HitTargets,       // 每颗弹丸的命中点数组
            XMBOwnerController->GetServerTime() - XMBOwnerController->SingleTripTime
        );
    }
}
```

**霰弹枪特殊之处**：
1. 传入的是**多个目标**和**多个命中点**
2. 服务端需要对每个目标分别回溯
3. 需要区分头部/身体命中并统计次数

---

## 12. 关联系统D：HighPing动态禁用机制

这是一个跨系统的联动机制，涉及三个组件协作：

### 12.1 架构总览

```
┌─────────────────────────────────────────────────────────────────┐
│                    HighPing 联动架构                              │
├─────────────────────────────────────────────────────────────────┤
│                                                                  │
│  AXMBPlayerController                                           │
│  ├── CheckPing() [每20秒]                                        │
│  │   └── 检测 GetCompressedPing()*4 > HighPingThreshold(50ms)? │
│  │       ├── Yes → HighPingWarning() + ServerReportPingStatus(true)│
│  │       └── No  → (无操作)                                      │
│  │                                                              │
│  └── HighPingDelegate (FHighPingDelegate)                        │
│      └── Broadcast(bHighPing)  ←── 触发广播                     │
│                    │                                             │
│         ┌──────────┼──────────┐                                  │
│         ▼          ▼          ▼                                  │
│  AWeaponBase::OnPingTooHigh(bool)                                │
│  {                                                                │
│      bUseServerSideRewind = !bPingTooHigh;                       │
│      // true → 禁用SSR    false → 恢复SSR                       │
│  }                                                                │
│                                                                  │
│  影响：                                                          │
│  ├── HitScanWeapon::Fire() 中的 `if (!HasAuthority() && bUse...)`│
│  ├── ShotGun::FireShotgun() 中的相同条件                         │
│  └── ProjectileWeapon::Fire() 中的相同条件                       │
│                                                                  │
└─────────────────────────────────────────────────────────────────┘
```

### 12.2 设计意图

**为什么要在高Ping时禁用SSR？**

```
假设极端情况：
├── 玩家 Ping = 500ms
├── SingleTripTime = 250ms
├── 目标角色的移动速度 = 1200 u/s (奔跑)
├── 回溯距离 = 1200 * 0.25 = 300 单位
└── 问题：回溯300单位可能导致命中明显不合理的位置
   （比如目标已经转过拐角了，却还能被击中）

更好的体验：
├── 高Ping玩家看到的效果可能与服务器有较大偏差
├── 禁用SSR后，这类玩家的命中判定回归"纯服务器状态"
├── 虽然需要预判（lead target），但至少一致性和公平性更好
└── 同时显示高Ping警告，提示玩家检查网络
```

---

## 13. 完整端到端数据流图

### 13.1 从按键按下到伤害结算的完整链路

```
┌──────────────────────────────────────────────────────────────────────────┐
│                        完整数据流：HitScan 武器                           │
└──────────────────────────────────────────────────────────────────────────┘

【阶段0：输入】
玩家鼠标点击
    │
    ▼
AXMBCharacterBase::FireButtonPressed()
    │
    ▼
CombatComponent::FireButtonPressed(true)
    │
    ▼
CombatComponent::FireTimerFinished()  [冷却结束时自动触发]

【阶段1：瞄准与射线检测（客户端预测）】
    │
    ▼
CombatComponent::TraceUnderCrosshairs()
    │  通过摄像机向准心方向发射 ECC_Visibility 射线
    ▼
得到 HitTarget (屏幕中心点的3D世界坐标)
    │
    ▼
AHitScanWeapon::Fire(HitTarget)
    │
    ├── Super::Fire() → 播放动画 / 抛弹壳 / 扣弹药
    │
    ├── 获取 MuzzleFlash 插槽位置作为射线起点 Start
    │
    └── WeaponTraceHit(Start, HitTarget) → 得到 FHitResult FireHit
           │
           ├── 命中角色? ──No──→ 播放特效（弹道光束），结束
           │
           └──Yes──→ AXMBCharacterBase* BlasterCharacter = Cast<>(FireHit.GetActor())

【阶段2：分支决策】
    │
    ├── HasAuthority() && (!bUseServerSideRewind || IsLocallyControlled())
    │   │
    │   ▼  【主机/服务器直接伤害路径】
    │   ApplyDamage(BlasterCharacter, HeadShot?HeadShotDamage:Damage)
    │   结束
    │
    └── !HasAuthority() && bUseServerSideRewind  [客户端SSR路径]
        │
        ▼
    XMBOwnerCharacter->GetLagCompensation()->ServerScoreRequest(
        BlasterCharacter,          // 目标
        Start,                     // 射线起点
        HitTarget,                 // 命中点
        GetServerTime() - SingleTripTime  // ★ HitTime 计算
    )
        │
        │  ═════════ RPC 穿越网络 ═════════
        ▼
【阶段3：服务端RPC处理】
ULagCompensationComponent::ServerScoreRequest_Implementation()
    │
    ▼
ServerSideRewind(HitCharacter, TraceStart, HitLocation, HitTime)
    │
    ├── GetFrameToCheck(HitCharacter, HitTime)
    │   │
    │   ├── 访问 HitCharacter->GetLagCompensation()->FrameHistory
    │   │
    │   ├── 边界检查：HitTime < 最旧帧时间? → 返回空帧（拒绝）
    │   │
    │   ├── 链表搜索：找到 Older.Frame.Time < HitTime < Younger.Frame.Time
    │   │
    │   └── InterpBetweenFrames(Older, Younger, HitTime)
    │       └── 返回插值后的 FFramePackage（精确到亚帧）
    │
    ▼
ConfirmHit(FramePackage, HitCharacter, TraceStart, HitLocation)
    │
    ├── CacheBoxPosition(HitCharacter, CurrentFrame)  // 保存当前位置
    │
    ├── MoveBoxes(HitCharacter, Package)              // 移动到历史位置
    │
    ├── EnableCharacterMeshCollision(NoCollision)      // 禁用Mesh干扰
    │
    ├── 【第一轮：头部检测】
    │   ├── 启用 Head 碰撞盒
    │   ├── LineTraceSingleByChannel(Start, End*1.25, ECC_HitBox)
    │   ├── 命中? → ResetHitBoxes + Return {true, true}  // ★爆头!
    │   └── 未命中 → 继续...
    │
    ├── 【第二轮：全身检测】
    │   ├── 启用所有碰撞盒
    │   ├── LineTraceSingleByChannel(...)
    │   ├── 命中? → ResetHitBoxes + Return {true, false} // ★身体命中
    │   └── 未命中 → 继续...
    │
    ├── ResetHitBoxes(HitCharacter, CurrentFrame)      // 恢复碰撞盒
    ├── EnableCharacterMeshCollision(QueryAndPhysics)   // 恢复Mesh
    │
    └── Return {false, false}  // ★未命中
        │
        ▼
【阶段4：伤害结算】
ServerScoreRequest_Implementation() 收到结果
    │
    ├── bHitConfirmed?
    │   │
    │   ▼ Yes
    │   Damage = bHeadShot ? HeadShotDamage : NormalDamage
    │   ApplyDamage(HitCharacter, Damage, Owner->Controller, Weapon, DamageType)
    │       │
    │       ▼
    │   AXMBCharacterBase::ReceiveDamage()
    │       ├── Health -= Damage (先扣护盾)
    │       ├── UpdateHUDHealth()
    │       ├── PlayHitReactMontage()
    │       └── Health == 0? → GameMode::PlayerEliminated()
    │
    └── No → 不做任何事（静默失败）
```

### 13.2 帧历史数据的生命周期

```
时间流向 →

[Tick N-4]    [Tick N-3]    [Tick N-2]    [Tick N-1]    [Tick N]     [当前]
    │             │             │             │             │           │
    ▼             ▼             ▼             ▼             ▼           ▼
┌────────┐  ┌────────┐  ┌────────┐  ┌────────┐  ┌────────┐         ┌──────┐
│Frame   │  │Frame   │  │Frame   │  │Frame   │  │Frame   │  ◄── 新增  │当前 │
│T=10.0s │  │T=10.033│  │T=10.066│  │T=10.099│  │T=10.132│         │帧   │
│(最旧)  │  │        │  │        │  │        │  │(最新)  │         │保存 │
└────────┘  └────────┘  └────────┘  └────────┘  └────────┘         └──────┘
    │                                                       │
    └──── MaxRecordTime = 4s ────────────────────────────────┘
    
    如果 T_now - T_oldest > 4s:
        → RemoveNode(Tail)  → 丢弃最旧帧
        → 保持链表长度在合理范围
```

### 13.3 系统交互关系全景图

```
┌─────────────────────────────────────────────────────────────────────────┐
│                         系统依赖关系图                                   │
├─────────────────────────────────────────────────────────────────────────┤
│                                                                         │
│  ┌──────────────────────┐                                               │
│  │  AXMBCharacterBase   │                                               │
│  │  ┌────────────────┐  │     ┌──────────────────────────────┐         │
│  │  │ HitCollisionBoxes│◄─────┤ ULagCompensationComponent     │         │
│  │  │ (17个UBoxComponent)│     │ - FrameHistory (双向链表)     │         │
│  │  └────────────────┘  │     │ - SaveFramePackageServer()    │         │
│  │  创建+注册碰撞盒      │     │ - ServerSideRewind()         │         │
│  │  PostInitializeComponents()│ - ConfirmHit()               │         │
│  │  设置Owner引用       │     └──────────┬───────────────────┘         │
│  └──────────┬───────────┘                │                              │
│             │ 被 Tick 驱动                │ 每帧调用 SaveFramePackage    │
│             ▼                             │                              │
│  ┌──────────────────────┐       ┌─────────┴──────────────────┐         │
│  │  AXMBPlayerController│       │     AWeaponBase (及子类)    │         │
│  │  ┌────────────────┐  │       │  - bUseServerSideRewind    │         │
│  │  │ 时间同步系统    │  │       │  - OnPingTooHigh()         │         │
│  │  │ - RTT计算      │  │       │  - HighPingDelegate 订阅   │         │
│  │  │ - SingleTripTime│───调用──│  - Fire() → SSR RPC调用    │         │
│  │  │ - GetServerTime │  │       └────────────────────────────┘         │
│  │  │ - CheckPing()   │  │                                               │
│  │  │ - HighPingDelegate││      ┌────────────────────────────┐          │
│  │  └────────────────┘  │       │     CombatComponent         │          │
│  └──────────────────────┘       │  - FireButtonPressed()     │          │
│                                 │  - TraceUnderCrosshairs()  │          │
│                                 │  - 调用 Weapon::Fire()     │          │
│                                 │  - 管理武器装备/切换        │          │
│                                 └────────────────────────────┘          │
│                                                                         │
│  数据流方向：                                                           │
│  PlayerController ──(SingleTripTime)──► Weapon                          │
│  Weapon ──(RPC + HitTime)─────────────► LagCompensation (Server)        │
│  Character ──(FrameHistory)──────────► LagCompensation (读取)           │
│  LagCompensation ──(MoveBoxes)──────► Character.HitCollisionBoxes       │
│  LagCompensation ──(ApplyDamage)────► Character.Health                  │
│                                                                         │
└─────────────────────────────────────────────────────────────────────────┘
```

---

## 附录C：关键代码文件索引（扩展版）

| 文件路径 | 核心职责 | 与延迟补偿的关系 |
|----------|----------|------------------|
| `Public/XMBComponent/LagCompensationComponent.h` | 组件声明、数据结构定义 | **核心**：定义所有数据结构和接口 |
| `Private/XMBComponent/LagCompensationComponent.cpp` | 组件实现、回溯算法 | **核心**：实现完整的SSR算法 |
| `Public/Character/XMBCharacterBase.h` | 角色基类声明 | 定义碰撞盒组件、提供 GetLagCompensation() 接口 |
| `Private/Character/XMBCharacterBase.cpp` | 角色基类实现 | 创建碰撞盒、初始化 LagCompensationComponent |
| `Public/PlayerController/XMBPlayerController.h` | 控制器声明 | 定义时间同步相关变量和委托 |
| `Private/PlayerController/XMBPlayerController.cpp` | 控制器实现 | 实现 RTT 计算、SingleTripTime、高Ping检测 |
| `Public/Weapon/WeaponBase.h` | 武器基类声明 | 定义 bUseServerSideRewind、FireType |
| `Private/Weapon/WeaponBase.cpp` | 武器基类实现 | OnPingTooHigh 回调、委托绑定/解绑 |
| `Private/Weapon/HitScanWeapon.cpp` | 即时光武器 | 调用 ServerScoreRequest RPC |
| `Private/Weapon/ShotGun.cpp` | 霰弹枪 | 调用 ShotgunServerScoreRequest RPC |
| `Private/Weapon/ProjectileWeapon.cpp` | 投射物武器 | SSR投射物的多分支生成逻辑 |

---

*文档版本：1.1*
*基于项目代码分析生成 - 扩展版*
*最后更新：2026-05-31*
