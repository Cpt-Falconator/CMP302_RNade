// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TripmineBomb.generated.h"

UCLASS()
class ATripmineBomb : public AActor
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere, Category = "Bomb")
		class UStaticMeshComponent* tripmineMesh;

	UPROPERTY(VisibleAnywhere, Category = "ProjectileMovement")
		class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, Category = "Explosion")
		TSubclassOf<class AExplosionActor> Explosion;

	UPROPERTY(EditAnywhere, Category = "Bomb")
		class USphereComponent* sensorColl;

	UPROPERTY(EditAnywhere, Category = "Bomb")
		class UBoxComponent* tripmineColl;

public:
	// Sets default values for this actor's properties
	ATripmineBomb();

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



};
