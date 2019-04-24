// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExplosionActor.generated.h"

UCLASS()
class AExplosionActor : public AActor
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = Projectile)
		class USphereComponent* ExplosionComp;

	UPROPERTY(EditAnywhere, Category = "Particle Effect")
		class UParticleSystemComponent* ExplosionEffect;

public:
	// Sets default values for this actor's properties
	AExplosionActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Explosion")
		float explosionRadius;

	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
