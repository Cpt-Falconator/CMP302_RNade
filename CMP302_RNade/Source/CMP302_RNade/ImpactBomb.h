// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImpactBomb.generated.h"

UCLASS()
class AImpactBomb : public AActor
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, Category = Projectile)
		class USphereComponent* CollisionComp;

	UPROPERTY(EditAnywhere, Category = "ProjectileMovement")
		class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, Category = "Explosion")
		TSubclassOf<class AExplosionActor> Explosion;

public:
	// Sets default values for this actor's properties
	AImpactBomb();


	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
		void WhenDestroyed(AActor* Act);

	virtual void Explode();

	virtual void Tick(float DeltaTime) override;


protected:
	virtual void BeginPlay() override;


};
