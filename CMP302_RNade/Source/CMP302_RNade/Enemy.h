// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class CMP302_RNADE_API AEnemy : public ACharacter
{
	GENERATED_BODY()


public:
	// Sets default values for this character's properties
	AEnemy();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float HitPoints;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
