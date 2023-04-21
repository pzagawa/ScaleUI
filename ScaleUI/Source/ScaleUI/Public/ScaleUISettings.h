// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ScaleUISettings.generated.h"

UCLASS(config=EditorSettings)
class UScaleUISettings : public UObject
{
public:
    GENERATED_UCLASS_BODY()

    void Init();

    float GetScaleFactor();
    void ApplyScaleFactor();

private:
    int RoundUp(int value, int multiple);
    int ValidateScaleFactor(int percent);
    
protected:

#if WITH_EDITOR

    virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

#endif

public:

    /**
     * This property is mirroring "Application Scale" property from Widget Reflector dialog,
     * opened from Menu Bar: Tools/Debug/Widget Reflector.
     * 
     * For UE 5.1 version, this property value is written as setting to EditorSettings.ini file on path:
     * C:\Users\<username>\AppData\Local\UnrealEngine\5.1\Saved\Config\WindowsEditor\EditorSettings.ini
     * 
     * under key:
     * [/Script/ScaleUI.ScaleUISettings]
     * ScaleFactor=100
     *
     * This value is saved as percentage and then converted to float scale 1.0 (default=100%). 
     */

    UPROPERTY(EditAnywhere, config, Category = "Screen UI Scale", meta=(DisplayName="UI Scale Factor Percentage (minimum: 50% / maximum: 200%)", ClampMin="50", ClampMax="200"))
    int ScaleFactor;

    DECLARE_EVENT_OneParam(UEditorStyleSettings, FSettingChangedEvent, FName /*PropertyName*/);
    FSettingChangedEvent& OnSettingChanged() { return SettingChangedEvent; };

    FSettingChangedEvent SettingChangedEvent;
};
