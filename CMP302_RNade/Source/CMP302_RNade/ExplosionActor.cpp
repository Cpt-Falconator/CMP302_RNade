// Fill out your copyright notice in the Description page of Project Settings.

#include "ExplosionActor.h"
#include "TimerBomb.h"
#include "ImpactBomb.h"
#include "Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"

// Sets default values
AExplosionActor::AExplosionActor()
{
	ExplosionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	ExplosionComp->InitSphereRadius(explosionRadius);
	ExplosionComp->BodyInstance.SetCollisionProfileName("Projectile");
	ExplosionComp->OnComponentBeginOverlap.AddDynamic(this, &AExplosionActor::OnOverlap);
	ExplosionComp->SetVisibility(true, false);
	ExplosionComp->SetHiddenInGame(false, false);
	ExplosionComp->SetSimulatePhysics(false);
	RootComponent = ExplosionComp;
	InitialLifeSpan = 1.0f;

	ExplosionEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExplosionEffect"));
	
	
}

// Called when the game starts or when spawned
void AExplosionActor::BeginPlay()
{
	Super::BeginPlay();
	ExplosionEffect->AttachToComponent(ExplosionComp, FAttachmentTransformRules::KeepRelativeTransform);
	
}

// Called every frame
void AExplosionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AExplosionActor::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
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


