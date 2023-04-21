// Copyright Epic Games, Inc. All Rights Reserved.

///Piotr Zagawa, 14.04.2023.
///Based on ScooterUtils project.

#pragma once

#include "Toolkits/AssetEditorToolkit.h"

DECLARE_LOG_CATEGORY_EXTERN(LogScaleUI, Log, All);

class FScaleUIModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
        
    static inline FScaleUIModule& Get()
    {
        return FModuleManager::LoadModuleChecked<FScaleUIModule>("ScaleUI");
    }
};
