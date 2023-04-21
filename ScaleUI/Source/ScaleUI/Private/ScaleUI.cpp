// Copyright Epic Games, Inc. All Rights Reserved.

#include "ScaleUI.h"
#include "ISettingsModule.h"
#include "ScaleUISettings.h"
#include "ISettingsSection.h"
#include "LevelEditor.h"

#define LOCTEXT_NAMESPACE "FScaleUIModule"
#define SETTING_SECTION_NAME "ScaleUI_Section"

void FScaleUIModule::StartupModule()
{
    ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");

    if (SettingsModule != nullptr)
    {
        auto SettingsObject = GetMutableDefault<UScaleUISettings>();
        
        TSharedPtr<ISettingsSection> SettingsSection = SettingsModule->RegisterSettings("Editor", "Plugins", SETTING_SECTION_NAME,
            FText::FromString("ScaleUI"), FText::FromString("Editor scale UI settings"), SettingsObject);

        if (SettingsSection.IsValid()) 
        { 
            SettingsObject->LoadConfig();
            SettingsObject->ApplyScaleFactor();

            SettingsSection->OnModified().BindLambda([]()
            { 
                GetMutableDefault<UScaleUISettings>()->SaveConfig();
                return true; 
            });
        }
    }
}

void FScaleUIModule::ShutdownModule()
{
    ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");

    if (SettingsModule != nullptr)
    {
        SettingsModule->UnregisterSettings("Editor", "Plugins", SETTING_SECTION_NAME);
    }
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FScaleUIModule, ScaleUI)
