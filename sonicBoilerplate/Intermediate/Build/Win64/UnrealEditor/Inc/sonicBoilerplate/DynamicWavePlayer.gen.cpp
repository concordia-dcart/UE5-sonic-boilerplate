// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "sonicBoilerplate/DynamicWavePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicWavePlayer() {}
// Cross Module References
	SONICBOILERPLATE_API UClass* Z_Construct_UClass_ADynamicWavePlayer_NoRegister();
	SONICBOILERPLATE_API UClass* Z_Construct_UClass_ADynamicWavePlayer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_sonicBoilerplate();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	void ADynamicWavePlayer::StaticRegisterNativesADynamicWavePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADynamicWavePlayer);
	UClass* Z_Construct_UClass_ADynamicWavePlayer_NoRegister()
	{
		return ADynamicWavePlayer::StaticClass();
	}
	struct Z_Construct_UClass_ADynamicWavePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioWaveAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioWaveAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioWaveAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADynamicWavePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_sonicBoilerplate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicWavePlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicWavePlayer.h" },
		{ "ModuleRelativePath", "DynamicWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_AudioWaveAssets_Inner = { "AudioWaveAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_AudioWaveAssets_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "// Array of audio wave assets\n" },
		{ "ModuleRelativePath", "DynamicWavePlayer.h" },
		{ "ToolTip", "Array of audio wave assets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_AudioWaveAssets = { "AudioWaveAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicWavePlayer, AudioWaveAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_AudioWaveAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_AudioWaveAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Volume control for all audio wave assets\n" },
		{ "ModuleRelativePath", "DynamicWavePlayer.h" },
		{ "ToolTip", "Volume control for all audio wave assets" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicWavePlayer, Volume), METADATA_PARAMS(Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_Volume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADynamicWavePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_AudioWaveAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_AudioWaveAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicWavePlayer_Statics::NewProp_Volume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADynamicWavePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicWavePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADynamicWavePlayer_Statics::ClassParams = {
		&ADynamicWavePlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADynamicWavePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicWavePlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADynamicWavePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicWavePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADynamicWavePlayer()
	{
		if (!Z_Registration_Info_UClass_ADynamicWavePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADynamicWavePlayer.OuterSingleton, Z_Construct_UClass_ADynamicWavePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADynamicWavePlayer.OuterSingleton;
	}
	template<> SONICBOILERPLATE_API UClass* StaticClass<ADynamicWavePlayer>()
	{
		return ADynamicWavePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADynamicWavePlayer);
	struct Z_CompiledInDeferFile_FID_sonicBoilerplate_Source_sonicBoilerplate_DynamicWavePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sonicBoilerplate_Source_sonicBoilerplate_DynamicWavePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADynamicWavePlayer, ADynamicWavePlayer::StaticClass, TEXT("ADynamicWavePlayer"), &Z_Registration_Info_UClass_ADynamicWavePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADynamicWavePlayer), 3792362468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sonicBoilerplate_Source_sonicBoilerplate_DynamicWavePlayer_h_1857638176(TEXT("/Script/sonicBoilerplate"),
		Z_CompiledInDeferFile_FID_sonicBoilerplate_Source_sonicBoilerplate_DynamicWavePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sonicBoilerplate_Source_sonicBoilerplate_DynamicWavePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
