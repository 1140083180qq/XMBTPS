
#include "UI/HUD/XMBHUD.h"
#include "UI/Widget/ElimAnnouncement.h"

/**
 * @brief 每帧绘制回调 - 在渲染管线中每帧调用一次，用于绘制2D HUD元素
 *
 * 【绘制流程】：
 * 1. 获取当前视口（屏幕）尺寸
 * 2. 计算视口中心点坐标（即准心的锚点位置）
 * 3. 根据 HUDPackage.CrosshairSpread 计算5个方向的散布偏移量
 * 4. 分别绘制5个方向的准心纹理（如果该方向有配置纹理的话）
 *
 * 【5向准心的布局示意】：
 *              Top (0, -Spread)
 *                ↑
 *   Left (-Spread,0) — Center (0,0) — Right (+Spread,0)
 *                ↓
 *           Bottom (0, +Spread)
 *
 * 【散布公式】：SpreadScaled = CrosshairSpreadMax(16) × CrosshairSpread
 * - CrosshairSpread 由 UIComponent 每帧计算得出（综合速度/空中/瞄准/射击因子）
 * - 当 Spread=0 时所有方向收缩到中心点；Spread=1 时达到最大扩散
 */
void AXMBHUD::DrawHUD()
{
	Super::DrawHUD(); // 先调用父类的基础绘制

	// 步骤1: 获取视口尺寸
	FVector2D ViewportSize;
	if (GEngine)
	{
		GEngine->GameViewport->GetViewportSize(ViewportSize);
		// 步骤2: 计算视口中心点坐标（所有准心元素的锚点）
		const FVector2D ViewportCenter(ViewportSize.X / 2.f, ViewportSize.Y / 2.f);

		// 步骤3: 计算实际散布像素值 = 最大散布 × 当前散布系数
		float SpreadScaled = CrosshairSpreadMax * HUDPackage.CrosshairSpread;

		// 步骤4: 分别绘制5个方向的准心纹理

		// === 中心准心（固定在中心，无偏移）===
		if (HUDPackage.CrosshairCenter)
		{
			FVector2D Spread(0.f, 0.f); // 中心点不偏移
			DrawCrosshair(HUDPackage.CrosshairCenter, ViewportCenter, Spread, HUDPackage.CrosshairsColor);
		}
		// === 左侧准心（向左偏移）===
		if (HUDPackage.CrosshairLeft)
		{
			FVector2D Spread(-SpreadScaled, 0.f); // X轴负方向
			DrawCrosshair(HUDPackage.CrosshairLeft, ViewportCenter, Spread, HUDPackage.CrosshairsColor);
		}
		// === 右侧准心（向右偏移）===
		if (HUDPackage.CrosshairRight)
		{
			FVector2D Spread(SpreadScaled, 0.f); // X轴正方向
			DrawCrosshair(HUDPackage.CrosshairRight, ViewportCenter, Spread, HUDPackage.CrosshairsColor);
		}
		// === 上方准心（向上偏移）===
		if (HUDPackage.CrosshairTop)
		{
			FVector2D Spread(0.f, -SpreadScaled); // Y轴负方向
			DrawCrosshair(HUDPackage.CrosshairTop, ViewportCenter, Spread, HUDPackage.CrosshairsColor);
		}
		// === 下方准心（向下偏移）===
		if (HUDPackage.CrosshairBottom)
		{
			FVector2D Spread(0.f, SpreadScaled); // Y轴正方向
			DrawCrosshair(HUDPackage.CrosshairBottom, ViewportCenter, Spread, HUDPackage.CrosshairsColor);
		}
	}
}




/**
 * @brief 游戏开始时初始化
 * （当前为空实现，预留扩展位置）
 */
void AXMBHUD::BeginPlay()
{
	Super::BeginPlay();

	// AddElimAnnouncement("Player1","Player2");
}



/**
 * @brief 创建并显示主游戏覆盖层 Widget（CharacterOverlayWidget）
 *
 * 【逻辑说明】：
 * 1. 获取本地玩家控制器（GetOwningPlayerController 返回拥有此 HUD 的控制器）
 * 2. 使用 UMG 的 CreateWidget 从蓝图类（CharacterOverlayWidgetClass）创建 Widget 实例
 * 3. 将 Widget 添加到视口中显示（AddToViewport）
 *
 * 【调用时机】：
 * - HandleMatchHasStarted(): 比赛开始时创建
 * - 首次 Possess 时通过 PollInit 触发
 */
void AXMBHUD::AddCharacterOverlayWidget()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	if (PlayerController && CharacterOverlayWidgetClass)
	{
		// 从蓝图中定义的 Widget 类创建实例
		CharacterOverlayWidget = CreateWidget<UCharacterOverlayWidget>(PlayerController, CharacterOverlayWidgetClass);
		// 添加到游戏视口进行渲染
		CharacterOverlayWidget->AddToViewport();
	}
}

/**
 * @brief 创建并显示公告面板 Widget（AnnouncementWidget）
 *
 * 【逻辑说明】：与 AddCharacterOverlayWidget 结构相同，
 * 创建 AnnouncementWidget 并添加到视口。
 *
 * 【调用时机】：
 * - ClientJoinMidgame(): 中途加入且处于等待开始阶段时
 */
void AXMBHUD::AddAnnouncement()
{
	APlayerController* PlayerController = GetOwningPlayerController();
	if (PlayerController && AnnouncementWidgetClass)
	{
		AnnouncementWidget = CreateWidget<UAnnouncementWidget>(PlayerController, AnnouncementWidgetClass);
		AnnouncementWidget->AddToViewport();
	}
}

/**
 * @brief 绘制单个准心纹理到屏幕指定位置
 * @param Texture - 要绘制的准心纹理（如一个小的 "+" 或 "." 图标）
 * @param ViewportContent - 锚点位置（通常是视口中心）
 * @param Spread - 相对于锚点的偏移量（控制准心的散布距离）
 * @param CrosshairColor - 准心颜色（白色默认，命中角色时变红）
 *
 * 【绘制原理】：
 * 使用 AHUD 的 DrawTexture 函数将纹理以 2D 方式绘制在屏幕上。
 * 纹理的绘制起点计算方式：
 *   DrawPoint.X = ViewportCenter.X - TextureWidth/2 + Spread.X
 *   DrawPoint.Y = ViewportCenter.Y - TextureHeight/2 + Spread.Y
 *
 * 这样做使纹理的中心点对齐到 (ViewportCenter + Spread) 的位置上，
 * 即：先居中对齐到锚点，再应用散布偏移
 */
void AXMBHUD::DrawCrosshair(UTexture2D* Texture, FVector2D ViewportContent, FVector2D Spread, FLinearColor CrosshairColor)
{
	// 获取纹理的原始尺寸（像素）
	const float TextureWidth = Texture->GetSizeX();
	const float TextureHeight = Texture->GetSizeY();
	// 计算绘制起点：锚点位置 - 纹理半宽高（居中） + 散布偏移
	const FVector2D TextureDrawPoint(
		ViewportContent.X - TextureWidth / 2.f + Spread.X,
		ViewportContent.Y - TextureHeight / 2.f + Spread.Y
	);

	// 调用引擎的 DrawTexture 将纹理绘制到屏幕的指定位置
	DrawTexture(
		Texture,
		TextureDrawPoint.X,
		TextureDrawPoint.Y,
		TextureWidth,
		TextureHeight,
		0.f,     // UV坐标U起始（从纹理左侧开始）
		0.f,     // UV坐标V起始（从纹理顶部开始）
		1.f,     // UV宽度（使用完整纹理宽度）
		1.f,     // UV高度（使用完整纹理高度）
		CrosshairColor); // 应用指定的颜色（白/红等）
}


void AXMBHUD::AddElimAnnouncement(FString Attacker, FString victim)
{
	OwningController = OwningController == nullptr ? GetOwningPlayerController() : OwningController;
	if (OwningController && ElimAnnouncementClass)
	{
		UElimAnnouncement* ElimAnnouncementWidget = CreateWidget<UElimAnnouncement>(OwningController, ElimAnnouncementClass);
		if (ElimAnnouncementWidget)
		{
			ElimAnnouncementWidget->SerElimAnnouncementText(Attacker,victim);
			ElimAnnouncementWidget->AddToViewport();
		}
	}
}

