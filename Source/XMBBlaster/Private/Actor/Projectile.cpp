
#include "Actor/Projectile.h"

#include "NiagaraFunctionLibrary.h"
#include "Character/XMBCharacterBase.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

#include "XMBBlaster/XMBBlaster.h"

AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	SetRootComponent(CollisionBox);

	// 配置碰撞属性：自身为动态物体类型
	CollisionBox->SetCollisionObjectType(ECC_WorldDynamic);
	// 同时启用查询（射线检测）和物理（碰撞响应）
	CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	// 白名单模式：默认忽略所有通道
	CollisionBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	// 逐个启用需要阻挡的通道：
	CollisionBox->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);     // 阻挡可见性射线
	CollisionBox->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);    // 阻挡静态世界（地面/墙壁）
	CollisionBox->SetCollisionResponseToChannel(ECC_SkeletalMesh, ECR_Block);   // 阻挡骨骼网格体（角色）

	// 创建投射物移动组件（引擎内置的弹道运动解算器）
	// ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	// 投射物旋转方向跟随速度方向（子弹始终"向前"飞）
	// ProjectileMovementComponent->bRotationFollowsVelocity = true;

	// 注：不使用 InitialLifeSpan 做超时销毁，改为碰撞即销毁的模式
}

/**
 * @brief 游戏开始初始化 - 创建轨迹特效并绑定碰撞事件
 * 2. 碰撞事件绑定（仅服务器端）：
 *    if (HasAuthority()) 检查确保只有服务器才绑定 OnComponentHit 回调。
 *    原因：
 *    - 伤害计算必须在服务器权威执行（防止作弊）
 *    - 客户端的投射物是复制过来的镜像，不需要也不应该独立处理碰撞事件
 *    - 如果客户端也绑定了会导致每个客户端各自执行一次 OnHit → 重复伤害
 */
void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	// 如果配置了轨迹粒子特效，将其附加到碰撞盒上
	if (Tracer)
	{
		TracerComponent = UGameplayStatics::SpawnEmitterAttached(
			Tracer,
			CollisionBox,           // 附加目标组件
			FName(),                // 无特定Socket名称（附加到根）
			GetActorLocation(),      // 世界空间位置
			GetActorRotation(),      // 世界空间旋转
			EAttachLocation::KeepWorldPosition // 保持世界位置不变
		);
	}

	// 仅在服务器端绑定碰撞回调（确保伤害计算的权威性和唯一性）
	if (HasAuthority())
	{
		CollisionBox->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
	}
}

void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProjectile::Destroyed()
{
	Super::Destroyed();

	// 在投射物当前位置生成命中粒子特效
	if (ImpactParticles)
	{
		UGameplayStatics::SpawnEmitterAtLocation(
			GetWorld(),
			ImpactParticles,
			GetActorLocation(), // 在投射物的最终位置生成
			GetActorRotation()   // 使用投射物的当前旋转
		);
	}

	// 在投射物当前位置播放命中音效
	if (ImpactSound)
	{
		UGameplayStatics::PlaySoundAtLocation(
			this,
			ImpactSound,
			GetActorLocation()
		);
	}
}

void AProjectile::StartDestroyTimer()
{
	GetWorldTimerManager().SetTimer(
		DestroyTimer,
		this,
		&AProjectile::DestroyTimerFinished,
		DestroyTime);
}

void AProjectile::DestroyTimerFinished()
{
	Destroy();
}

void AProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	// 销毁投射物，同时触发 Destroyed() 中的命中特效和音效生成
	Destroyed();
}

void AProjectile::SpawnTrailSystem()
{
	if (TrailSystem)
	{
		TrailSystemComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(
			TrailSystem,
			GetRootComponent(),
			FName(),
			GetActorLocation(),
			GetActorRotation(),
			EAttachLocation::KeepWorldPosition,
			false);
	}
}

void AProjectile::ExplodeDamage()
{
	APawn* FiringPawn = GetInstigator();
	if (FiringPawn && HasAuthority())
	{
		AController* FiringController = FiringPawn->GetController();
		if (FiringController)
		{
			UGameplayStatics::ApplyRadialDamageWithFalloff(
				this,
				BaseDamage,//基础伤害
				MiniDamage,//最小伤害
				GetActorLocation(),//中心
				InRadius,//内环半径
				OutRadius,//外环半径
				1.f,//伤害衰减
				UDamageType::StaticClass(),//伤害类型
				TArray<AActor*>(),//忽略的Actor组
				this,//伤害的制造者
				FiringController//instigator的控制器
				);
		}
	}
}



