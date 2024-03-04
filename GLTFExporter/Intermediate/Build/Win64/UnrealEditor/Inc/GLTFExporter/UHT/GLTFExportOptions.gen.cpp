// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Options/GLTFExportOptions.h"
#include "GLTFExporter/Public/UserData/GLTFMaterialUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFExportOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExportOptions();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExportOptions_NoRegister();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFTextureType();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode();
	GLTFEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings();
	UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFTextureImageFormat;
	static UEnum* EGLTFTextureImageFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat, Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFTextureImageFormat"));
		}
		return Z_Registration_Info_UEnum_EGLTFTextureImageFormat.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFTextureImageFormat>()
	{
		return EGLTFTextureImageFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::Enumerators[] = {
		{ "EGLTFTextureImageFormat::None", (int64)EGLTFTextureImageFormat::None },
		{ "EGLTFTextureImageFormat::PNG", (int64)EGLTFTextureImageFormat::PNG },
		{ "EGLTFTextureImageFormat::JPEG", (int64)EGLTFTextureImageFormat::JPEG },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "JPEG.Comment", "/** If texture does not have an alpha channel, use JPEG (lossy compression); otherwise fallback to PNG. */" },
		{ "JPEG.DisplayName", "JPEG (if no alpha)" },
		{ "JPEG.Name", "EGLTFTextureImageFormat::JPEG" },
		{ "JPEG.ToolTip", "If texture does not have an alpha channel, use JPEG (lossy compression); otherwise fallback to PNG." },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "None.Comment", "/** Don't export any textures. */" },
		{ "None.Name", "EGLTFTextureImageFormat::None" },
		{ "None.ToolTip", "Don't export any textures." },
		{ "PNG.Comment", "/** Always use PNG (lossless compression). */" },
		{ "PNG.Name", "EGLTFTextureImageFormat::PNG" },
		{ "PNG.ToolTip", "Always use PNG (lossless compression)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
		nullptr,
		"EGLTFTextureImageFormat",
		"EGLTFTextureImageFormat",
		Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat()
	{
		if (!Z_Registration_Info_UEnum_EGLTFTextureImageFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFTextureImageFormat.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLTFTextureImageFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFTextureType;
	static UEnum* EGLTFTextureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLTFTextureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLTFTextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFTextureType, Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFTextureType"));
		}
		return Z_Registration_Info_UEnum_EGLTFTextureType.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFTextureType>()
	{
		return EGLTFTextureType_StaticEnum();
	}
	struct Z_Construct_UEnum_GLTFExporter_EGLTFTextureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLTFExporter_EGLTFTextureType_Statics::Enumerators[] = {
		{ "EGLTFTextureType::None", (int64)EGLTFTextureType::None },
		{ "EGLTFTextureType::HDR", (int64)EGLTFTextureType::HDR },
		{ "EGLTFTextureType::Normalmaps", (int64)EGLTFTextureType::Normalmaps },
		{ "EGLTFTextureType::Lightmaps", (int64)EGLTFTextureType::Lightmaps },
		{ "EGLTFTextureType::All", (int64)EGLTFTextureType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLTFExporter_EGLTFTextureType_Statics::Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "EGLTFTextureType::All" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "HDR.Name", "EGLTFTextureType::HDR" },
		{ "Lightmaps.Name", "EGLTFTextureType::Lightmaps" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EGLTFTextureType::None" },
		{ "Normalmaps.Name", "EGLTFTextureType::Normalmaps" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFTextureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
		nullptr,
		"EGLTFTextureType",
		"EGLTFTextureType",
		Z_Construct_UEnum_GLTFExporter_EGLTFTextureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFTextureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLTFExporter_EGLTFTextureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFTextureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFTextureType()
	{
		if (!Z_Registration_Info_UEnum_EGLTFTextureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFTextureType.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFTextureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLTFTextureType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFTextureHDREncoding;
	static UEnum* EGLTFTextureHDREncoding_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLTFTextureHDREncoding.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLTFTextureHDREncoding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding, Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFTextureHDREncoding"));
		}
		return Z_Registration_Info_UEnum_EGLTFTextureHDREncoding.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFTextureHDREncoding>()
	{
		return EGLTFTextureHDREncoding_StaticEnum();
	}
	struct Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding_Statics::Enumerators[] = {
		{ "EGLTFTextureHDREncoding::None", (int64)EGLTFTextureHDREncoding::None },
		{ "EGLTFTextureHDREncoding::RGBM", (int64)EGLTFTextureHDREncoding::RGBM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "None.Comment", "/** Clamp HDR colors to standard 8-bit per channel. */" },
		{ "None.Name", "EGLTFTextureHDREncoding::None" },
		{ "None.ToolTip", "Clamp HDR colors to standard 8-bit per channel." },
		{ "RGBM.Comment", "/** Encode HDR colors to RGBM (will discard alpha). */" },
		{ "RGBM.Name", "EGLTFTextureHDREncoding::RGBM" },
		{ "RGBM.ToolTip", "Encode HDR colors to RGBM (will discard alpha)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
		nullptr,
		"EGLTFTextureHDREncoding",
		"EGLTFTextureHDREncoding",
		Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding()
	{
		if (!Z_Registration_Info_UEnum_EGLTFTextureHDREncoding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFTextureHDREncoding.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLTFTextureHDREncoding.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFSceneMobility;
	static UEnum* EGLTFSceneMobility_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLTFSceneMobility.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLTFSceneMobility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility, Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFSceneMobility"));
		}
		return Z_Registration_Info_UEnum_EGLTFSceneMobility.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFSceneMobility>()
	{
		return EGLTFSceneMobility_StaticEnum();
	}
	struct Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility_Statics::Enumerators[] = {
		{ "EGLTFSceneMobility::None", (int64)EGLTFSceneMobility::None },
		{ "EGLTFSceneMobility::Static", (int64)EGLTFSceneMobility::Static },
		{ "EGLTFSceneMobility::Stationary", (int64)EGLTFSceneMobility::Stationary },
		{ "EGLTFSceneMobility::Movable", (int64)EGLTFSceneMobility::Movable },
		{ "EGLTFSceneMobility::All", (int64)EGLTFSceneMobility::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility_Statics::Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "EGLTFSceneMobility::All" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "Movable.Name", "EGLTFSceneMobility::Movable" },
		{ "None.Hidden", "" },
		{ "None.Name", "EGLTFSceneMobility::None" },
		{ "Static.Name", "EGLTFSceneMobility::Static" },
		{ "Stationary.Name", "EGLTFSceneMobility::Stationary" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
		nullptr,
		"EGLTFSceneMobility",
		"EGLTFSceneMobility",
		Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility()
	{
		if (!Z_Registration_Info_UEnum_EGLTFSceneMobility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFSceneMobility.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFSceneMobility_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLTFSceneMobility.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFVariantSetsMode;
	static UEnum* EGLTFVariantSetsMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLTFVariantSetsMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLTFVariantSetsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode, Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFVariantSetsMode"));
		}
		return Z_Registration_Info_UEnum_EGLTFVariantSetsMode.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFVariantSetsMode>()
	{
		return EGLTFVariantSetsMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode_Statics::Enumerators[] = {
		{ "EGLTFVariantSetsMode::None", (int64)EGLTFVariantSetsMode::None },
		{ "EGLTFVariantSetsMode::Khronos", (int64)EGLTFVariantSetsMode::Khronos },
		{ "EGLTFVariantSetsMode::Epic", (int64)EGLTFVariantSetsMode::Epic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Epic.Comment", "/** Uses the extension EPIC_level_variant_sets, which is supported by Unreal's glTF viewer. */" },
		{ "Epic.Name", "EGLTFVariantSetsMode::Epic" },
		{ "Epic.ToolTip", "Uses the extension EPIC_level_variant_sets, which is supported by Unreal's glTF viewer." },
		{ "Khronos.Comment", "/** Uses the official extension KHR_materials_variants. Supports material variants only. */" },
		{ "Khronos.Name", "EGLTFVariantSetsMode::Khronos" },
		{ "Khronos.ToolTip", "Uses the official extension KHR_materials_variants. Supports material variants only." },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "None.Comment", "/** Never export variants sets. */" },
		{ "None.Name", "EGLTFVariantSetsMode::None" },
		{ "None.ToolTip", "Never export variants sets." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
		nullptr,
		"EGLTFVariantSetsMode",
		"EGLTFVariantSetsMode",
		Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode()
	{
		if (!Z_Registration_Info_UEnum_EGLTFVariantSetsMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFVariantSetsMode.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLTFVariantSetsMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFMaterialVariantMode;
	static UEnum* EGLTFMaterialVariantMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode, Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFMaterialVariantMode"));
		}
		return Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFMaterialVariantMode>()
	{
		return EGLTFMaterialVariantMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::Enumerators[] = {
		{ "EGLTFMaterialVariantMode::None", (int64)EGLTFMaterialVariantMode::None },
		{ "EGLTFMaterialVariantMode::Simple", (int64)EGLTFMaterialVariantMode::Simple },
		{ "EGLTFMaterialVariantMode::UseMeshData", (int64)EGLTFMaterialVariantMode::UseMeshData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "None.Comment", "/** Never export material variants. */" },
		{ "None.Name", "EGLTFMaterialVariantMode::None" },
		{ "None.ToolTip", "Never export material variants." },
		{ "Simple.Comment", "/** Export material variants but only use a simple quad if a material input needs to be baked out. */" },
		{ "Simple.Name", "EGLTFMaterialVariantMode::Simple" },
		{ "Simple.ToolTip", "Export material variants but only use a simple quad if a material input needs to be baked out." },
		{ "UseMeshData.Comment", "/** Export material variants and allow usage of the mesh data if a material input needs to be baked out with vertex data. */" },
		{ "UseMeshData.Name", "EGLTFMaterialVariantMode::UseMeshData" },
		{ "UseMeshData.ToolTip", "Export material variants and allow usage of the mesh data if a material input needs to be baked out with vertex data." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
		nullptr,
		"EGLTFMaterialVariantMode",
		"EGLTFMaterialVariantMode",
		Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode()
	{
		if (!Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLTFMaterialVariantMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UGLTFExportOptions::execResetToDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefault();
		P_NATIVE_END;
	}
	void UGLTFExportOptions::StaticRegisterNativesUGLTFExportOptions()
	{
		UClass* Class = UGLTFExportOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetToDefault", &UGLTFExportOptions::execResetToDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLTFExportOptions, nullptr, "ResetToDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFExportOptions);
	UClass* Z_Construct_UClass_UGLTFExportOptions_NoRegister()
	{
		return UGLTFExportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFExportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportUniformScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExportUniformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportPreviewMesh_MetaData[];
#endif
		static void NewProp_bExportPreviewMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportPreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStrictCompliance_MetaData[];
#endif
		static void NewProp_bStrictCompliance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStrictCompliance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipNearDefaultValues_MetaData[];
#endif
		static void NewProp_bSkipNearDefaultValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipNearDefaultValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGeneratorVersion_MetaData[];
#endif
		static void NewProp_bIncludeGeneratorVersion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGeneratorVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportProxyMaterials_MetaData[];
#endif
		static void NewProp_bExportProxyMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportProxyMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportUnlitMaterials_MetaData[];
#endif
		static void NewProp_bExportUnlitMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportUnlitMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportClearCoatMaterials_MetaData[];
#endif
		static void NewProp_bExportClearCoatMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportClearCoatMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportExtraBlendModes_MetaData[];
#endif
		static void NewProp_bExportExtraBlendModes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportExtraBlendModes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BakeMaterialInputs_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeMaterialInputs_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeMaterialInputs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMaterialBakeSize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialBakeSize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultMaterialBakeSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialBakeFilter_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMaterialBakeFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterialBakeTiling_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMaterialBakeTiling;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputBakeSettings_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultInputBakeSettings_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultInputBakeSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputBakeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultInputBakeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLevelOfDetail_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultLevelOfDetail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportVertexColors_MetaData[];
#endif
		static void NewProp_bExportVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportVertexColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportVertexSkinWeights_MetaData[];
#endif
		static void NewProp_bExportVertexSkinWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportVertexSkinWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMeshQuantization_MetaData[];
#endif
		static void NewProp_bUseMeshQuantization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMeshQuantization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportLevelSequences_MetaData[];
#endif
		static void NewProp_bExportLevelSequences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLevelSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportAnimationSequences_MetaData[];
#endif
		static void NewProp_bExportAnimationSequences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportAnimationSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportPlaybackSettings_MetaData[];
#endif
		static void NewProp_bExportPlaybackSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportPlaybackSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureImageFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureImageFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureImageFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureImageQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureImageQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoLossyImageFormatFor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NoLossyImageFormatFor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportTextureTransforms_MetaData[];
#endif
		static void NewProp_bExportTextureTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportTextureTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportLightmaps_MetaData[];
#endif
		static void NewProp_bExportLightmaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLightmaps;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureHDREncoding_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureHDREncoding_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureHDREncoding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustNormalmaps_MetaData[];
#endif
		static void NewProp_bAdjustNormalmaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustNormalmaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportHiddenInGame_MetaData[];
#endif
		static void NewProp_bExportHiddenInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportHiddenInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportLights_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExportLights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportCameras_MetaData[];
#endif
		static void NewProp_bExportCameras_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportCameras;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportHDRIBackdrops_MetaData[];
#endif
		static void NewProp_bExportHDRIBackdrops_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportHDRIBackdrops;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSkySpheres_MetaData[];
#endif
		static void NewProp_bExportSkySpheres_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSkySpheres;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VariantSetsMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantSetsMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VariantSetsMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExportMaterialVariants_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportMaterialVariants_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExportMaterialVariants;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportMeshVariants_MetaData[];
#endif
		static void NewProp_bExportMeshVariants_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMeshVariants;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportVisibilityVariants_MetaData[];
#endif
		static void NewProp_bExportVisibilityVariants_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportVisibilityVariants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFExportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLTFExportOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLTFExportOptions_ResetToDefault, "ResetToDefault" }, // 2638160500
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "DebugProperty" },
		{ "IncludePath", "Options/GLTFExportOptions.h" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportUniformScale_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Scale factor used for exporting all assets (0.01 by default) for conversion from centimeters (Unreal default) to meters (glTF). */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Scale factor used for exporting all assets (0.01 by default) for conversion from centimeters (Unreal default) to meters (glTF)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportUniformScale = { "ExportUniformScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, ExportUniformScale), METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportUniformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If enabled, the preview mesh for a standalone animation or material asset will also be exported. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, the preview mesh for a standalone animation or material asset will also be exported." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportPreviewMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh = { "bExportPreviewMesh", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bStrictCompliance_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If enabled, certain values (like HDR colors and light angles) will be truncated during export to strictly conform to the formal glTF specification. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, certain values (like HDR colors and light angles) will be truncated during export to strictly conform to the formal glTF specification." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bStrictCompliance_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bStrictCompliance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bStrictCompliance = { "bStrictCompliance", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bStrictCompliance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bStrictCompliance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bStrictCompliance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If enabled, floating-point-based JSON properties that are nearly equal to their default value will not be exported and thus regarded as exactly default, reducing JSON size. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, floating-point-based JSON properties that are nearly equal to their default value will not be exported and thus regarded as exactly default, reducing JSON size." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bSkipNearDefaultValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues = { "bSkipNearDefaultValues", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeGeneratorVersion_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If enabled, version info for Unreal Engine and exporter plugin will be included as metadata in the glTF asset, which is useful when reporting issues. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, version info for Unreal Engine and exporter plugin will be included as metadata in the glTF asset, which is useful when reporting issues." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeGeneratorVersion_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bIncludeGeneratorVersion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeGeneratorVersion = { "bIncludeGeneratorVersion", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeGeneratorVersion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeGeneratorVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeGeneratorVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials that have a proxy defined in their user data, will be exported using that proxy instead. This setting won't affect proxy materials exported or referenced directly. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, materials that have a proxy defined in their user data, will be exported using that proxy instead. This setting won't affect proxy materials exported or referenced directly." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportProxyMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials = { "bExportProxyMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials with shading model unlit will be properly exported. Uses extension KHR_materials_unlit. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, materials with shading model unlit will be properly exported. Uses extension KHR_materials_unlit." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportUnlitMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials = { "bExportUnlitMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials with shading model clear coat will be properly exported. Uses extension KHR_materials_clearcoat, which is not supported by all glTF viewers. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, materials with shading model clear coat will be properly exported. Uses extension KHR_materials_clearcoat, which is not supported by all glTF viewers." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportClearCoatMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials = { "bExportClearCoatMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportExtraBlendModes_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If enabled, materials with blend modes additive, modulate, and alpha composite will be properly exported. Uses extension EPIC_blend_modes, which is supported by Unreal's glTF viewer. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, materials with blend modes additive, modulate, and alpha composite will be properly exported. Uses extension EPIC_blend_modes, which is supported by Unreal's glTF viewer." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportExtraBlendModes_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportExtraBlendModes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportExtraBlendModes = { "bExportExtraBlendModes", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportExtraBlendModes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportExtraBlendModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportExtraBlendModes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_BakeMaterialInputs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_BakeMaterialInputs_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Bake mode determining if and how a material input is baked out to a texture. Baking is only used for non-trivial material inputs (i.e. not simple texture or constant expressions). */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Bake mode determining if and how a material input is baked out to a texture. Baking is only used for non-trivial material inputs (i.e. not simple texture or constant expressions)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_BakeMaterialInputs = { "BakeMaterialInputs", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, BakeMaterialInputs), Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_BakeMaterialInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_BakeMaterialInputs_MetaData)) }; // 4291369669
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeSize_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Default size of the baked out texture (containing the material input). Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions. */" },
		{ "EditCondition", "BakeMaterialInputs != EGLTFMaterialBakeMode::Disabled" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Default size of the baked out texture (containing the material input). Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeSize = { "DefaultMaterialBakeSize", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, DefaultMaterialBakeSize), Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeSize_MetaData)) }; // 3613482618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeFilter_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Default filtering mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions. */" },
		{ "EditCondition", "BakeMaterialInputs != EGLTFMaterialBakeMode::Disabled" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Default filtering mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions." },
		{ "ValidEnumValues", "TF_Nearest, TF_Bilinear, TF_Trilinear" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeFilter = { "DefaultMaterialBakeFilter", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, DefaultMaterialBakeFilter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeFilter_MetaData)) }; // 3285266737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeTiling_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Default addressing mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions. */" },
		{ "EditCondition", "BakeMaterialInputs != EGLTFMaterialBakeMode::Disabled" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Default addressing mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeTiling = { "DefaultMaterialBakeTiling", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, DefaultMaterialBakeTiling), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeTiling_MetaData)) }; // 1007474672
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_ValueProp = { "DefaultInputBakeSettings", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, METADATA_PARAMS(nullptr, 0) }; // 1727371370
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp = { "DefaultInputBakeSettings_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup, METADATA_PARAMS(nullptr, 0) }; // 4222232985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Input-specific default bake settings that override the general defaults above. */" },
		{ "EditCondition", "BakeMaterialInputs != EGLTFMaterialBakeMode::Disabled" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Input-specific default bake settings that override the general defaults above." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings = { "DefaultInputBakeSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, DefaultInputBakeSettings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_MetaData)) }; // 4222232985 1727371370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultLevelOfDetail_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default LOD level used for exporting a mesh. Can be overridden by component or asset settings (e.g. minimum or forced LOD level). */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Default LOD level used for exporting a mesh. Can be overridden by component or asset settings (e.g. minimum or forced LOD level)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultLevelOfDetail = { "DefaultLevelOfDetail", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, DefaultLevelOfDetail), METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultLevelOfDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultLevelOfDetail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If enabled, export vertex color. Not recommended due to vertex colors always being used as a base color multiplier in glTF, regardless of material. Often producing undesirable results. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export vertex color. Not recommended due to vertex colors always being used as a base color multiplier in glTF, regardless of material. Often producing undesirable results." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportVertexColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors = { "bExportVertexColors", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If enabled, export vertex bone weights and indices in skeletal meshes. Necessary for animation sequences. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export vertex bone weights and indices in skeletal meshes. Necessary for animation sequences." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportVertexSkinWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights = { "bExportVertexSkinWeights", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If enabled, use quantization for vertex tangents and normals, reducing size. Requires extension KHR_mesh_quantization, which may result in the mesh not loading in some glTF viewers. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, use quantization for vertex tangents and normals, reducing size. Requires extension KHR_mesh_quantization, which may result in the mesh not loading in some glTF viewers." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bUseMeshQuantization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization = { "bUseMeshQuantization", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If enabled, export level sequences. Only transform tracks are currently supported. The level sequence will be played at the assigned display rate. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export level sequences. Only transform tracks are currently supported. The level sequence will be played at the assigned display rate." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportLevelSequences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences = { "bExportLevelSequences", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If enabled, export single animation asset used by a skeletal mesh component. Export of vertex skin weights must be enabled. */" },
		{ "EditCondition", "bExportVertexSkinWeights" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export single animation asset used by a skeletal mesh component. Export of vertex skin weights must be enabled." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportAnimationSequences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences = { "bExportAnimationSequences", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPlaybackSettings_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If enabled, export play rate, start time, looping, and auto play for an animation or level sequence. Uses extension EPIC_animation_playback, which is supported by Unreal's glTF viewer. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export play rate, start time, looping, and auto play for an animation or level sequence. Uses extension EPIC_animation_playback, which is supported by Unreal's glTF viewer." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPlaybackSettings_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportPlaybackSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPlaybackSettings = { "bExportPlaybackSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPlaybackSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPlaybackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPlaybackSettings_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageFormat_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Desired image format used for exported textures. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Desired image format used for exported textures." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageFormat = { "TextureImageFormat", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, TextureImageFormat), Z_Construct_UEnum_GLTFExporter_EGLTFTextureImageFormat, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageFormat_MetaData)) }; // 199514479
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageQuality_MetaData[] = {
		{ "Category", "Texture" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Level of compression used for textures exported with lossy image formats, 0 (default) or value between 1 (worst quality, best compression) and 100 (best quality, worst compression). */" },
		{ "EditCondition", "TextureImageFormat == EGLTFTextureImageFormat::JPEG" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Level of compression used for textures exported with lossy image formats, 0 (default) or value between 1 (worst quality, best compression) and 100 (best quality, worst compression)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageQuality = { "TextureImageQuality", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, TextureImageQuality), METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_NoLossyImageFormatFor_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/GLTFExporter.EGLTFTextureType" },
		{ "Category", "Texture" },
		{ "Comment", "/** Texture types that will always use lossless formats (e.g. PNG) because of sensitivity to compression artifacts. */" },
		{ "EditCondition", "TextureImageFormat == EGLTFTextureImageFormat::JPEG" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Texture types that will always use lossless formats (e.g. PNG) because of sensitivity to compression artifacts." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_NoLossyImageFormatFor = { "NoLossyImageFormatFor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, NoLossyImageFormatFor), METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_NoLossyImageFormatFor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_NoLossyImageFormatFor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** If enabled, export UV tiling and un-mirroring settings in a texture coordinate expression node for simple material input expressions. Uses extension KHR_texture_transform. */" },
		{ "EditCondition", "TextureImageFormat != EGLTFTextureImageFormat::None" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export UV tiling and un-mirroring settings in a texture coordinate expression node for simple material input expressions. Uses extension KHR_texture_transform." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportTextureTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms = { "bExportTextureTransforms", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLightmaps_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** If enabled, export lightmaps (created by Lightmass) when exporting a level. Uses extension EPIC_lightmap_textures, which is supported by Unreal's glTF viewer. */" },
		{ "EditCondition", "TextureImageFormat != EGLTFTextureImageFormat::None" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export lightmaps (created by Lightmass) when exporting a level. Uses extension EPIC_lightmap_textures, which is supported by Unreal's glTF viewer." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLightmaps_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportLightmaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLightmaps = { "bExportLightmaps", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLightmaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLightmaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLightmaps_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureHDREncoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureHDREncoding_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Encoding used to store textures that have pixel colors with more than 8-bit per channel. Uses extension EPIC_texture_hdr_encoding, which is supported by Unreal's glTF viewer. */" },
		{ "DisplayName", "Texture HDR Encoding" },
		{ "EditCondition", "TextureImageFormat != EGLTFTextureImageFormat::None" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Encoding used to store textures that have pixel colors with more than 8-bit per channel. Uses extension EPIC_texture_hdr_encoding, which is supported by Unreal's glTF viewer." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureHDREncoding = { "TextureHDREncoding", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, TextureHDREncoding), Z_Construct_UEnum_GLTFExporter_EGLTFTextureHDREncoding, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureHDREncoding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureHDREncoding_MetaData)) }; // 2087004548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** If enabled, exported normalmaps will be adjusted from Unreal to glTF convention (i.e. the green channel is flipped). */" },
		{ "EditCondition", "TextureImageFormat != EGLTFTextureImageFormat::None" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, exported normalmaps will be adjusted from Unreal to glTF convention (i.e. the green channel is flipped)." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bAdjustNormalmaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps = { "bAdjustNormalmaps", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/** If enabled, export actors and components that are flagged as hidden in-game. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export actors and components that are flagged as hidden in-game." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportHiddenInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame = { "bExportHiddenInGame", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportLights_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/GLTFExporter.EGLTFSceneMobility" },
		{ "Category", "Scene" },
		{ "Comment", "/** Mobility of directional, point, and spot light components that will be exported. Uses extension KHR_lights_punctual. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Mobility of directional, point, and spot light components that will be exported. Uses extension KHR_lights_punctual." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportLights = { "ExportLights", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, ExportLights), METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportLights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/** If enabled, export camera components. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export camera components." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportCameras = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras = { "bExportCameras", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHDRIBackdrops_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/** If enabled, export HDRIBackdrop blueprints. Uses extension EPIC_hdri_backdrops, which is supported by Unreal's glTF viewer. */" },
		{ "DisplayName", "Export HDRI Backdrops" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export HDRIBackdrop blueprints. Uses extension EPIC_hdri_backdrops, which is supported by Unreal's glTF viewer." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHDRIBackdrops_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportHDRIBackdrops = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHDRIBackdrops = { "bExportHDRIBackdrops", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHDRIBackdrops_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHDRIBackdrops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHDRIBackdrops_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSkySpheres_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/** If enabled, export SkySphere blueprints. Uses extension EPIC_sky_spheres, which is supported by Unreal's glTF viewer. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export SkySphere blueprints. Uses extension EPIC_sky_spheres, which is supported by Unreal's glTF viewer." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSkySpheres_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportSkySpheres = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSkySpheres = { "bExportSkySpheres", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSkySpheres_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSkySpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSkySpheres_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_VariantSetsMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_VariantSetsMode_MetaData[] = {
		{ "Category", "Scene" },
		{ "Comment", "/** Mode determining if and how to export LevelVariantSetsActors. */" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Mode determining if and how to export LevelVariantSetsActors." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_VariantSetsMode = { "VariantSetsMode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, VariantSetsMode), Z_Construct_UEnum_GLTFExporter_EGLTFVariantSetsMode, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_VariantSetsMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_VariantSetsMode_MetaData)) }; // 879194545
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportMaterialVariants_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportMaterialVariants_MetaData[] = {
		{ "Category", "VariantSets" },
		{ "Comment", "/** Mode determining if and how to export material variants that change the materials property on a static or skeletal mesh component. */" },
		{ "EditCondition", "VariantSetsMode != EGLTFVariantSetsMode::None" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "Mode determining if and how to export material variants that change the materials property on a static or skeletal mesh component." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportMaterialVariants = { "ExportMaterialVariants", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFExportOptions, ExportMaterialVariants), Z_Construct_UEnum_GLTFExporter_EGLTFMaterialVariantMode, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportMaterialVariants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportMaterialVariants_MetaData)) }; // 24694712
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportMeshVariants_MetaData[] = {
		{ "Category", "VariantSets" },
		{ "Comment", "/** If enabled, export variants that change the mesh property on a static or skeletal mesh component. */" },
		{ "EditCondition", "VariantSetsMode == EGLTFVariantSetsMode::Epic" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export variants that change the mesh property on a static or skeletal mesh component." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportMeshVariants_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportMeshVariants = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportMeshVariants = { "bExportMeshVariants", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportMeshVariants_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportMeshVariants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportMeshVariants_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVisibilityVariants_MetaData[] = {
		{ "Category", "VariantSets" },
		{ "Comment", "/** If enabled, export variants that change the visible property on a scene component. */" },
		{ "EditCondition", "VariantSetsMode == EGLTFVariantSetsMode::Epic" },
		{ "ModuleRelativePath", "Public/Options/GLTFExportOptions.h" },
		{ "ToolTip", "If enabled, export variants that change the visible property on a scene component." },
	};
#endif
	void Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVisibilityVariants_SetBit(void* Obj)
	{
		((UGLTFExportOptions*)Obj)->bExportVisibilityVariants = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVisibilityVariants = { "bExportVisibilityVariants", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGLTFExportOptions), &Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVisibilityVariants_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVisibilityVariants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVisibilityVariants_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLTFExportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportUniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bStrictCompliance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bSkipNearDefaultValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bIncludeGeneratorVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportProxyMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportUnlitMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportClearCoatMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportExtraBlendModes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_BakeMaterialInputs_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_BakeMaterialInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultMaterialBakeTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultInputBakeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_DefaultLevelOfDetail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVertexSkinWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bUseMeshQuantization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLevelSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportAnimationSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportPlaybackSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureImageQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_NoLossyImageFormatFor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportTextureTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportLightmaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureHDREncoding_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_TextureHDREncoding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bAdjustNormalmaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHiddenInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportLights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportCameras,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportHDRIBackdrops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportSkySpheres,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_VariantSetsMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_VariantSetsMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportMaterialVariants_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_ExportMaterialVariants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportMeshVariants,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFExportOptions_Statics::NewProp_bExportVisibilityVariants,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFExportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFExportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFExportOptions_Statics::ClassParams = {
		&UGLTFExportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLTFExportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFExportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFExportOptions()
	{
		if (!Z_Registration_Info_UClass_UGLTFExportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFExportOptions.OuterSingleton, Z_Construct_UClass_UGLTFExportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLTFExportOptions.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFExportOptions>()
	{
		return UGLTFExportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFExportOptions);
	UGLTFExportOptions::~UGLTFExportOptions() {}
	struct Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics::EnumInfo[] = {
		{ EGLTFTextureImageFormat_StaticEnum, TEXT("EGLTFTextureImageFormat"), &Z_Registration_Info_UEnum_EGLTFTextureImageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 199514479U) },
		{ EGLTFTextureType_StaticEnum, TEXT("EGLTFTextureType"), &Z_Registration_Info_UEnum_EGLTFTextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 44973963U) },
		{ EGLTFTextureHDREncoding_StaticEnum, TEXT("EGLTFTextureHDREncoding"), &Z_Registration_Info_UEnum_EGLTFTextureHDREncoding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2087004548U) },
		{ EGLTFSceneMobility_StaticEnum, TEXT("EGLTFSceneMobility"), &Z_Registration_Info_UEnum_EGLTFSceneMobility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2570452833U) },
		{ EGLTFVariantSetsMode_StaticEnum, TEXT("EGLTFVariantSetsMode"), &Z_Registration_Info_UEnum_EGLTFVariantSetsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 879194545U) },
		{ EGLTFMaterialVariantMode_StaticEnum, TEXT("EGLTFMaterialVariantMode"), &Z_Registration_Info_UEnum_EGLTFMaterialVariantMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 24694712U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFExportOptions, UGLTFExportOptions::StaticClass, TEXT("UGLTFExportOptions"), &Z_Registration_Info_UClass_UGLTFExportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFExportOptions), 4153335080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_2276307398(TEXT("/Script/GLTFExporter"),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Options_GLTFExportOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
