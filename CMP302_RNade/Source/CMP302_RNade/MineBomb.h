// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MineBomb.generated.h"

UCLASS()
class CMP302_RNADE_API AMineBomb : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMineBomb();

	UPROPERTY(VisibleAnywhere, Category = "Bomb")
		class UStaticMeshComponent* mineMesh;

	UPROPERTY(VisibleAnywhere, Category = "ProjectileMovement")
		class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, Category = "Explosion")
		TSubclassOf<class AExplosionActor> Explosion;

	UPROPERTY(EditAnywhere, Category = "Bomb")
		class USphereComponent* MineRadius;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool armed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explosion")
		float radius;
	UFUNCTION()
		void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void WhenDestroyed(AActor* Act);

	virtual void Explode();

};
