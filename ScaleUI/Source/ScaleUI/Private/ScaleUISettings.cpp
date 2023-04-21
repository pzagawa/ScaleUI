// Copyright Epic Games, Inc. All Rights Reserved.

#include "ScaleUISettings.h"

UScaleUISettings::UScaleUISettings(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
{
    ScaleFactor = 100;
}

void UScaleUISettings::Init()
{
}

#if WITH_EDITOR

void UScaleUISettings::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    const FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

    if (PropertyName == GET_MEMBER_NAME_CHECKED(UScaleUISettings, ScaleFactor))
    {
        ScaleFactor = ValidateScaleFactor(ScaleFactor);

        ApplyScaleFactor();
    }

    SaveConfig();

    SettingChangedEvent.Broadcast(PropertyName);
}

#endif

int UScaleUISettings::RoundUp(int number, int multiple) 
{
    return ((number + multiple - 1) / multiple) * multiple;
}

int UScaleUISettings::ValidateScaleFactor(int percent) 
{
    //Min-Max values as in ScaleFactor property metadata
    const int MIN_PERCENT = 50;
    const int MAX_PERCENT = 200;
    
    if (percent < MIN_PERCENT)
    {
        percent = MIN_PERCENT;
    }

    if (percent > MAX_PERCENT)
    {
        percent = MAX_PERCENT;
    }

    //round value to 5
    return RoundUp(percent, 5);
}

float UScaleUISettings::GetScaleFactor()
{
    float application_scale = ScaleFactor / 100.0f;

    //keep safe values in Min/Max ranges
    if (application_scale < 0.5f)
    {
        application_scale = 0.5f;
    }

    if (application_scale > 2.0f)
    {
        application_scale = 2.0f;
    }

    return application_scale; 
} 

void UScaleUISettings::ApplyScaleFactor()
{
    FSlateApplication::Get().SetApplicationScale(GetScaleFactor());
} 
