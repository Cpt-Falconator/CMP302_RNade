// Fill out your copyright notice in the Description page of Project Settings.

#include "TripmineBomb.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"

// Sets default values
ATripmineBomb::ATripmineBomb()
{
	PrimaryActorTick.bCanEverTick = true;

	tripmineMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("tripmineMesh"));
	//Deciding if it should be knocked around or destroyed.

	this->Tags.Add(FName("Tripmine"));
	// Set as root component

	RootComponent = mineMesh;

	//// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = tripmineMesh;
	ProjectileMovement->InitialSpeed = 1500.f;
	ProjectileMovement->MaxSpeed = 1500.f;
	ProjectileMovement->bRotationFollowsVelocity = true;

	OnDestroyed.AddDynamic(this, &ATripmineBomb::WhenDestroyed);

	armed = false;

	sensorColl = CreateDefaultSubobject<USphereComponent>(TEXT("MineRadius"));
	sensorColl->InitSphereRadius(0.0);
	sensorColl->BodyInstance.SetCollisionProfileName("Projectile");
	sensorColl->OnComponentBeginOverlap.AddDynamic(this, &ATripmineBomb::OnSensorOverlap);
	sensorColl->SetVisibility(true, false);
	sensorColl->SetHiddenInGame(false, false);
	sensorColl->SetSimulatePhysics(false);

	tripmineColl = CreateDefaultSubobject<UBoxComponent>(TEXT("Tripwire"));
	tripmineColl->InitBoxExtent(FVector(0, 0, 0));
	tripmineColl->BodyInstance.SetCollisionProfileName("Projectile");
	tripmineColl->OnCOmponentBeginOverlap.AddDynamic(this, &ATripmineBomb::OnTrip);
	tripmineColl->SetVisibily(true, false);
	tripmineColl->SetHiddenInGame(false, false);
	tripmineColl->SetSimulatePhysics(false);
}

}

// Called when the game starts or when spawned
void ATripmineBomb::BeginPlay()
{
	Super::BeginPlay();

	sensorColl->AttachToComponent(tripmineMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	

}

void ATripmineBomb::SetExplosionRadius(float rad)
{
	ExplosionComp->SetSphereRadius(rad);
}

void ATripmineBomb::SetTag(FName toTag)
{
	ExplosionComp->ComponentTags.Add(toTag);
}

// Called every frame
void ATripmineBomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//For when the object is stationary and searches for another tripmine to connect to
void ATripmineBomb::OnSensorOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Only add impulse and destroy projectile if we hit a physics

	if ((OtherActor != NULL) && (OtherActor != this) && (!OtherComp->ComponentHasTag(FName("Mine"))))
	{
		OtherComp->AddRadialImpulse(this->GetActorLocation(), 200, 1000, ERadialImpulseFalloff::RIF_Constant, true);
	}
	else if (OtherActor->ActorHasTag(FName("Bomb")))
	{
		OtherActor->Destroy();
	}

}

//For when a player trips the line.
void ATripmineBomb::OnTrip(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Only add impulse and destroy projectile if we hit a physics

	if ((OtherActor != NULL) && (OtherActor != this) && (!OtherComp->ComponentHasTag(FName("Mine"))))
	{
		OtherComp->AddRadialImpulse(this->GetActorLocation(), 200, 1000, ERadialImpulseFalloff::RIF_Constant, true);
	}
	else if (OtherActor->ActorHasTag(FName("Bomb")))
	{
		OtherActor->Destroy();
	}

}


