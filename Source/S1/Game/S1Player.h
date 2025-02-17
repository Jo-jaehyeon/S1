// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Protocol.pb.h"
#include "S1Player.generated.h"

UCLASS(config = Game)
class AS1Player : public ACharacter
{
	GENERATED_BODY()

public:
	AS1Player();
	virtual ~AS1Player();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

public:
	bool IsMyPlayer();

public:
	void SetPlayerInfo(const Protocol::PlayerInfo& Info);
	Protocol::PlayerInfo* GetPlayerInfo() { return PlayerInfo; }

protected:
	class Protocol::PlayerInfo* PlayerInfo; //���� ��ġ
};

