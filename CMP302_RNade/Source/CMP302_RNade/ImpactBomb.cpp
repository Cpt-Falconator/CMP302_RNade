// Fill out your copyright notice in the Description page of Project Settings.

#include "ImpactBomb.h"
#include "ExplosionActor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AImpactBomb::AImpactBomb()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AImpactBomb::OnHit);
	RootComponent = CollisionComp;
	this->Tags.Add(FName("Bomb"));
	

	//// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->InitialSpeed = 1500.f;
	ProjectileMovement->MaxSpeed = 1500.f;
	ProjectileMovement->bRotationFollowsVelocity = true;

	InitialLifeSpan = 60.0f;

	OnDestroyed.AddDynamic(this, &AImpactBomb::WhenDestroyed);
}

void AImpactBomb::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UWorld* const World = GetWorld();
	FActorSpawnParameters ActorSpawnParams;
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this))
	{
		Destroy();
	}
}

void AImpactBomb::BeginPlay()
{
	Super::BeginPlay();

	ProjectileMovement->UpdatedComponent = RootComponent;
}

// Called every frame
void AImpactBomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AImpactBomb::Explode()
{
	UWorld* const World = GetWorld();
	FActorSpawnParameters ActorSpawnParams;
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	World->SpawnActor<AExplosionActor>(Explosion, GetActorLocation(), GetActorRotation(), ActorSpawnParams);
}

void AImpactBomb::WhenDestroyed(AActor* Act)
{
	Explode();
}