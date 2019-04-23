// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerBomb.generated.h"


UCLASS()
class ATimerBomb : public AActor
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere, Category = "Bomb")
		class UStaticMeshComponent* timerbombMesh;

		UPROPERTY(VisibleAnywhere, Category = "ProjectileMovement")
		class UProjectileMovementComponent* ProjectileMovement;


public:
	// Sets default values for this actor's properties
	ATimerBomb();
	virtual void Explode();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explosion")
		float countdownTimer;

private:



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
