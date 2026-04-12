
// ============================================================
// @file InteractWithCrosshairsInterface.cpp
// @brief 准心交互接口的实现文件（最小化实现）
//
// 【接口说明】：
// IInteractWithCrosshairsInterface 是一个纯接口类，
// 定义了可与准心进行交互的对象应实现的契约。
// 当前接口体为空（没有定义任何纯虚函数或方法），
// 仅作为"标记接口"使用——实现此接口即表示"该Actor可被准心射线检测识别"。
//
// 【工作原理】：
// AXMBCharacterBase 继承了此接口（public IInteractWithCrosshairsInterface）。
// 在 CombatComponent.TraceUnderCrosshairs() 的射线检测中，
// 通过 OtherActor->Implements<UInteractWithCrosshairsInterface>()
// 判断命中的 Actor 是否实现了此接口。
// 若实现 → 命中了玩家角色 → 准心变红
// 若未实现 → 命中了其他物体（墙壁、道具等）→ 准心保持白色
//
// 【扩展性】：如果未来需要不同类型的交互对象（如可破坏物、拾取品等），
// 可在此接口中添加方法如 GetInteractableType() 来区分交互类别
// ============================================================

#include "Interfaces/InteractWithCrosshairsInterface.h"

// 接口的默认功能实现在此处添加
// 目前为空接口（仅作为标记用途），无需额外实现
