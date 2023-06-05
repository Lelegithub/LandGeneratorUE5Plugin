// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogWorldGen, Log, All);

class FLandGeneratorModule : public IModuleInterface
{
public:

	
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};