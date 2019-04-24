// Fill out your copyright notice in the Description page of Project Settings.


#include "MineBomb.h"
#include "ExplosionActor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AMineBomb::AMineBomb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mineMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mineMesh"));
	//Deciding if it should be knocked around or destroyed.

	this->Tags.Add(FName("Bomb"));
	// Set as root component

	RootComponent = mineMesh;

	//// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = mineMesh;
	ProjectileMovement->InitialSpeed = 1500.f;
	ProjectileMovement->MaxSpeed = 1500.f;
	ProjectileMovement->bRotationFollowsVelocity = true;

	OnDestroyed.AddDynamic(this, &AMineBomb::WhenDestroyed);
	
	armed = false;

	MineRadius = CreateDefaultSubobject<USphereComponent>(TEXT("MineRadius"));
	MineRadius->BodyInstance.SetCollisionProfileName("Projectile");
	MineRadius->OnComponentBeginOverlap.AddDynamic(this, &AMineBomb::OnOverlap);
	MineRadius->SetVisibility(true, false);
	MineRadius->SetHiddenInGame(false, false);
	MineRadius->SetSimulatePhysics(false);
}

// Called when the game starts or when spawned
void AMineBomb::BeginPlay()
{
	Super::BeginPlay();
	MineRadius->InitSphereRadius(radius);
	MineRadius->AttachToComponent(mineMesh, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AMineBomb::Tick(float DeltaTime)
{
	FVector stationary = FVector(0,0,0);
	
	if (this->GetVelocity() == stationary)
	{
		armed = true;
	}
	//Determine if still moving
		//If still moving, do nothing
		//If stopped moving for 3s,
			//Arm

	//If Armed
		//If Player / Enemy walks within <radius>
			//Explode

	Super::Tick(DeltaTime);

}

void AMineBomb::Explode()
{
	UWorld* const World = GetWorld();
	FActorSpawnParameters ActorSpawnParams;
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	World->SpawnActor<AExplosionActor>(Explosion, GetActorLocation(), GetActorRotation(), ActorSpawnParams);
}

void AMineBomb::WhenDestroyed(AActor* Act)
{
	Explode();
}

void AMineBomb::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Only add impulse and destroy projectile if we hit a physics
	if (OtherActor->ActorHasTag(FName("Player")) || OtherActor->ActorHasTag(FName("Enemy")))
	{
		Destroy();
	}
	if (OtherActor->ActorHasTag(FName("Bomb")))
	{
		OtherActor->Destroy();
	}
}