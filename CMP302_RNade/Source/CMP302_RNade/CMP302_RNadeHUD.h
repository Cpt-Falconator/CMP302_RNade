// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CMP302_RNadeHUD.generated.h"

UCLASS()
class ACMP302_RNadeHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACMP302_RNadeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

