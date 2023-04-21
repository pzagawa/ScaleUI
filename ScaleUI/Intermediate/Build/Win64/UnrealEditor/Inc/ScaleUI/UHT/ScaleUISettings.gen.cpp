// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScaleUI/Public/ScaleUISettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScaleUISettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SCALEUI_API UClass* Z_Construct_UClass_UScaleUISettings();
	SCALEUI_API UClass* Z_Construct_UClass_UScaleUISettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ScaleUI();
// End Cross Module References
	void UScaleUISettings::StaticRegisterNativesUScaleUISettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScaleUISettings);
	UClass* Z_Construct_UClass_UScaleUISettings_NoRegister()
	{
		return UScaleUISettings::StaticClass();
	}
	struct Z_Construct_UClass_UScaleUISettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ScaleFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScaleUISettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ScaleUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleUISettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScaleUISettings.h" },
		{ "ModuleRelativePath", "Public/ScaleUISettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleUISettings_Statics::NewProp_ScaleFactor_MetaData[] = {
		{ "Category", "Screen UI Scale" },
		{ "ClampMax", "200" },
		{ "ClampMin", "50" },
		{ "Comment", "/**\n     * This property is mirroring \"Application Scale\" property from Widget Reflector dialog,\n     * opened from Menu Bar: Tools/Debug/Widget Reflector.\n     * \n     * For UE 5.1 version, this property value is written as setting to EditorSettings.ini file on path:\n     * C:\\Users\\<username>\\AppData\\Local\\UnrealEngine\\5.1\\Saved\\Config\\WindowsEditor\\EditorSettings.ini\n     * \n     * under key:\n     * [/Script/ScaleUI.ScaleUISettings]\n     * ScaleFactor=100\n     *\n     * This value is saved as percentage and then converted to float scale 1.0 (default=100%). \n     */" },
		{ "DisplayName", "UI Scale Factor Percentage (minimum: 50% / maximum: 200%)" },
		{ "ModuleRelativePath", "Public/ScaleUISettings.h" },
		{ "ToolTip", "This property is mirroring \"Application Scale\" property from Widget Reflector dialog,\nopened from Menu Bar: Tools/Debug/Widget Reflector.\n\nFor UE 5.1 version, this property value is written as setting to EditorSettings.ini file on path:\nC:\\Users\\<username>\\AppData\\Local\\UnrealEngine\\5.1\\Saved\\Config\\WindowsEditor\\EditorSettings.ini\n\nunder key:\n[/Script/ScaleUI.ScaleUISettings]\nScaleFactor=100\n\nThis value is saved as percentage and then converted to float scale 1.0 (default=100%)." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UScaleUISettings_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScaleUISettings, ScaleFactor), METADATA_PARAMS(Z_Construct_UClass_UScaleUISettings_Statics::NewProp_ScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleUISettings_Statics::NewProp_ScaleFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScaleUISettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScaleUISettings_Statics::NewProp_ScaleFactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScaleUISettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaleUISettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScaleUISettings_Statics::ClassParams = {
		&UScaleUISettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScaleUISettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScaleUISettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScaleUISettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScaleUISettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScaleUISettings()
	{
		if (!Z_Registration_Info_UClass_UScaleUISettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScaleUISettings.OuterSingleton, Z_Construct_UClass_UScaleUISettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScaleUISettings.OuterSingleton;
	}
	template<> SCALEUI_API UClass* StaticClass<UScaleUISettings>()
	{
		return UScaleUISettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaleUISettings);
	UScaleUISettings::~UScaleUISettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ScaleUI_Source_ScaleUI_Public_ScaleUISettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ScaleUI_Source_ScaleUI_Public_ScaleUISettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScaleUISettings, UScaleUISettings::StaticClass, TEXT("UScaleUISettings"), &Z_Registration_Info_UClass_UScaleUISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScaleUISettings), 1275355325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ScaleUI_Source_ScaleUI_Public_ScaleUISettings_h_1353163362(TEXT("/Script/ScaleUI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ScaleUI_Source_ScaleUI_Public_ScaleUISettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ScaleUI_Source_ScaleUI_Public_ScaleUISettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
