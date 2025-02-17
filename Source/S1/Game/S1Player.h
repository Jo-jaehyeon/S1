// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "S1Player.generated.h"

UCLASS(config = Game)
class AS1Player : public ACharacter
{
	GENERATED_BODY()

public:
	AS1Player();

protected:
	virtual void BeginPlay() override;
};

