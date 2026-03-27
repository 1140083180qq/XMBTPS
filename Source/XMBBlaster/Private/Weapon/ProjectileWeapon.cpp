

#include "Weapon/ProjectileWeapon.h"

#include "Engine/SkeletalMeshSocket.h"

void AProjectileWeapon::Fire(const FVector& HitTarget)
{
	Super::Fire(HitTarget);

	if (!HasAuthority()) return;
	
	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName(FName("MuzzleFlash"));
	if (MuzzleFlashSocket)
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());
		FVector ToTarget = HitTarget - SocketTransform.GetLocation();//从闪光灯插座到准心的追踪射线命中的位置的向量
		FRotator TargetRotation = ToTarget.Rotation();
		if (ProjectileClass)
		{
			FActorSpawnParameters SpawnParams;//设置生成时的参数
			SpawnParams.Owner = GetOwner();//TODO:为什么要在这里使用GetOwner而不用已经定义好的变量Owner？
			SpawnParams.Instigator = InstigatorPawn;
			if (UWorld* World = GetWorld())
			{
				AProjectile* Projectile = World->SpawnActor<AProjectile>(
					ProjectileClass,
					SocketTransform.GetLocation(),
					TargetRotation,
					SpawnParams
					);
			}
				
		}
		
	}
	
}
