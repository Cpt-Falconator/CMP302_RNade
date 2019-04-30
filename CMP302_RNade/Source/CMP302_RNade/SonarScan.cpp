// Fill out your copyright notice in the Description page of Project Settings.


#include "SonarScan.h"
#include "Components/SphereComponent.h"

// Sets default values
ASonarScan::ASonarScan()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SonarComp = CreateDefaultSubobject<USphereComponent>(TEXT("SonarScan"));
	SonarComp->InitSphereRadius(0.1);
	SonarComp->OnComponentBeginOverlap.AddDynamic(this, &ASonarScan::OnOverlap);
	SonarComp->SetVisibility(true, false);
	SonarComp->SetHiddenInGame(false, false);
	SonarComp->SetSimulatePhysics(false);
	RootComponent = SonarComp;
}

// Called when the game starts or when spawned
void ASonarScan::BeginPlay()
{
	Super::BeginPlay();
	SonarComp->ComponentTags.Add(FName("Scan"));
}

// Called every frame
void ASonarScan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (SonarComp->GetUnscaledSphereRadius() >= maxRadius)
	{
		Destroy();
	}
	if (SonarComp->GetUnscaledSphereRadius() < maxRadius)
	{
		SonarComp->SetSphereRadius(SonarComp->GetUnscaledSphereRadius() + (500 * DeltaTime));
	}
}

void ASonarScan::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != this) && (OtherActor->ActorHasTag(FName(TEXT("Enemy")))))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Enemy Scanned!")));
	}
}
