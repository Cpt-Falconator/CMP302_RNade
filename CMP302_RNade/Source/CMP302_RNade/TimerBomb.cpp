// Fill out your copyright notice in the Description page of Project Settings.

#include "TimerBomb.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ATimerBomb::ATimerBomb()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	timerbombMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("timerbombMesh"));
	// Set as root component
	RootComponent = timerbombMesh;

	//// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = timerbombMesh;
	ProjectileMovement->InitialSpeed = 1500.f;
	ProjectileMovement->MaxSpeed = 1500.f;
	ProjectileMovement->bRotationFollowsVelocity = true;

}

// Called when the game starts or when spawned
void ATimerBomb::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATimerBomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	countdownTimer -= DeltaTime;

	if (countdownTimer <= 0)
	{
		Explode();
	}

}

void ATimerBomb::Explode()
{
	//Apply Particle effect
	//Create a sphere around object.
	//Check for damage.
	Destroy();
}

