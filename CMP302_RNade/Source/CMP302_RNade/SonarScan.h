// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SonarScan.generated.h"

UCLASS()
class ASonarScan : public AActor
{
	GENERATED_BODY()
		
		UPROPERTY(EditAnywhere, Category = "Scan")
		class USphereComponent* SonarComp;

	UPROPERTY(EditAnywhere, Category = "Scan")
		float maxRadius;
public:	
	// Sets default values for this actor's properties
	ASonarScan();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
