// Fill out your copyright notice in the Description page of Project Settings.

#include "ExplosionActor.h"
#include "Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"

// Sets default values
AExplosionActor::AExplosionActor()
{
	ExplosionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	ExplosionComp->InitSphereRadius(explosionRadius);
	ExplosionComp->BodyInstance.SetCollisionProfileName("Projectile");
	ExplosionComp->SetVisibility(true, false);
	ExplosionComp->SetHiddenInGame(false, false);
	ExplosionComp->SetSimulatePhysics(false);

	InitialLifeSpan = 1.0f;

	ExplosionEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExplosionEffect"));
	ExplosionEffect->AttachToComponent(RootComponent, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
	ExplosionEffect->Activate(false);
	RootComponent = ExplosionComp;
}

// Called when the game starts or when spawned
void AExplosionActor::BeginPlay()
{
	Super::BeginPlay();
	ExplosionEffect->Activate(true);


}

// Called every frame
void AExplosionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExplosionActor::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this))
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
		Destroy();
	}
}
