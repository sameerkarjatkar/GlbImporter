// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/UserData/GLTFMaterialUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFMaterialUserData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFMaterialExportOptions();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFMaterialExportOptions_NoRegister();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT();
	GLTFEXPORTER_API UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup();
	GLTFEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings();
	UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFMaterialBakeMode;
	static UEnum* EGLTFMaterialBakeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode, Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFMaterialBakeMode"));
		}
		return Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFMaterialBakeMode>()
	{
		return EGLTFMaterialBakeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::Enumerators[] = {
		{ "EGLTFMaterialBakeMode::Disabled", (int64)EGLTFMaterialBakeMode::Disabled },
		{ "EGLTFMaterialBakeMode::Simple", (int64)EGLTFMaterialBakeMode::Simple },
		{ "EGLTFMaterialBakeMode::UseMeshData", (int64)EGLTFMaterialBakeMode::UseMeshData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Comment", "/** Never bake material inputs. */" },
		{ "Disabled.Name", "EGLTFMaterialBakeMode::Disabled" },
		{ "Disabled.ToolTip", "Never bake material inputs." },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "Simple.Comment", "/** Only use a simple quad if a material input needs to be baked out. */" },
		{ "Simple.Name", "EGLTFMaterialBakeMode::Simple" },
		{ "Simple.ToolTip", "Only use a simple quad if a material input needs to be baked out." },
		{ "UseMeshData.Comment", "/** Allow usage of the mesh data if a material input needs to be baked out with vertex data. */" },
		{ "UseMeshData.Name", "EGLTFMaterialBakeMode::UseMeshData" },
		{ "UseMeshData.ToolTip", "Allow usage of the mesh data if a material input needs to be baked out with vertex data." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
		nullptr,
		"EGLTFMaterialBakeMode",
		"EGLTFMaterialBakeMode",
		Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode()
	{
		if (!Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLTFMaterialBakeMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFMaterialBakeSizePOT;
	static UEnum* EGLTFMaterialBakeSizePOT_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLTFMaterialBakeSizePOT.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLTFMaterialBakeSizePOT.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT, Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFMaterialBakeSizePOT"));
		}
		return Z_Registration_Info_UEnum_EGLTFMaterialBakeSizePOT.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFMaterialBakeSizePOT>()
	{
		return EGLTFMaterialBakeSizePOT_StaticEnum();
	}
	struct Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT_Statics::Enumerators[] = {
		{ "EGLTFMaterialBakeSizePOT::POT_1", (int64)EGLTFMaterialBakeSizePOT::POT_1 },
		{ "EGLTFMaterialBakeSizePOT::POT_2", (int64)EGLTFMaterialBakeSizePOT::POT_2 },
		{ "EGLTFMaterialBakeSizePOT::POT_4", (int64)EGLTFMaterialBakeSizePOT::POT_4 },
		{ "EGLTFMaterialBakeSizePOT::POT_8", (int64)EGLTFMaterialBakeSizePOT::POT_8 },
		{ "EGLTFMaterialBakeSizePOT::POT_16", (int64)EGLTFMaterialBakeSizePOT::POT_16 },
		{ "EGLTFMaterialBakeSizePOT::POT_32", (int64)EGLTFMaterialBakeSizePOT::POT_32 },
		{ "EGLTFMaterialBakeSizePOT::POT_64", (int64)EGLTFMaterialBakeSizePOT::POT_64 },
		{ "EGLTFMaterialBakeSizePOT::POT_128", (int64)EGLTFMaterialBakeSizePOT::POT_128 },
		{ "EGLTFMaterialBakeSizePOT::POT_256", (int64)EGLTFMaterialBakeSizePOT::POT_256 },
		{ "EGLTFMaterialBakeSizePOT::POT_512", (int64)EGLTFMaterialBakeSizePOT::POT_512 },
		{ "EGLTFMaterialBakeSizePOT::POT_1024", (int64)EGLTFMaterialBakeSizePOT::POT_1024 },
		{ "EGLTFMaterialBakeSizePOT::POT_2048", (int64)EGLTFMaterialBakeSizePOT::POT_2048 },
		{ "EGLTFMaterialBakeSizePOT::POT_4096", (int64)EGLTFMaterialBakeSizePOT::POT_4096 },
		{ "EGLTFMaterialBakeSizePOT::POT_8192", (int64)EGLTFMaterialBakeSizePOT::POT_8192 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "POT_1.DisplayName", "1 x 1" },
		{ "POT_1.Name", "EGLTFMaterialBakeSizePOT::POT_1" },
		{ "POT_1024.DisplayName", "1024 x 1024" },
		{ "POT_1024.Name", "EGLTFMaterialBakeSizePOT::POT_1024" },
		{ "POT_128.DisplayName", "128 x 128" },
		{ "POT_128.Name", "EGLTFMaterialBakeSizePOT::POT_128" },
		{ "POT_16.DisplayName", "16 x 16" },
		{ "POT_16.Name", "EGLTFMaterialBakeSizePOT::POT_16" },
		{ "POT_2.DisplayName", "2 x 2" },
		{ "POT_2.Name", "EGLTFMaterialBakeSizePOT::POT_2" },
		{ "POT_2048.DisplayName", "2048 x 2048" },
		{ "POT_2048.Name", "EGLTFMaterialBakeSizePOT::POT_2048" },
		{ "POT_256.DisplayName", "256 x 256" },
		{ "POT_256.Name", "EGLTFMaterialBakeSizePOT::POT_256" },
		{ "POT_32.DisplayName", "32 x 32" },
		{ "POT_32.Name", "EGLTFMaterialBakeSizePOT::POT_32" },
		{ "POT_4.DisplayName", "4 x 4" },
		{ "POT_4.Name", "EGLTFMaterialBakeSizePOT::POT_4" },
		{ "POT_4096.DisplayName", "4096 x 4096" },
		{ "POT_4096.Name", "EGLTFMaterialBakeSizePOT::POT_4096" },
		{ "POT_512.DisplayName", "512 x 512" },
		{ "POT_512.Name", "EGLTFMaterialBakeSizePOT::POT_512" },
		{ "POT_64.DisplayName", "64 x 64" },
		{ "POT_64.Name", "EGLTFMaterialBakeSizePOT::POT_64" },
		{ "POT_8.DisplayName", "8 x 8" },
		{ "POT_8.Name", "EGLTFMaterialBakeSizePOT::POT_8" },
		{ "POT_8192.DisplayName", "8192 x 8192" },
		{ "POT_8192.Name", "EGLTFMaterialBakeSizePOT::POT_8192" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
		nullptr,
		"EGLTFMaterialBakeSizePOT",
		"EGLTFMaterialBakeSizePOT",
		Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT()
	{
		if (!Z_Registration_Info_UEnum_EGLTFMaterialBakeSizePOT.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFMaterialBakeSizePOT.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLTFMaterialBakeSizePOT.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup;
	static UEnum* EGLTFMaterialPropertyGroup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup, Z_Construct_UPackage__Script_GLTFExporter(), TEXT("EGLTFMaterialPropertyGroup"));
		}
		return Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UEnum* StaticEnum<EGLTFMaterialPropertyGroup>()
	{
		return EGLTFMaterialPropertyGroup_StaticEnum();
	}
	struct Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::Enumerators[] = {
		{ "EGLTFMaterialPropertyGroup::None", (int64)EGLTFMaterialPropertyGroup::None },
		{ "EGLTFMaterialPropertyGroup::BaseColorOpacity", (int64)EGLTFMaterialPropertyGroup::BaseColorOpacity },
		{ "EGLTFMaterialPropertyGroup::MetallicRoughness", (int64)EGLTFMaterialPropertyGroup::MetallicRoughness },
		{ "EGLTFMaterialPropertyGroup::EmissiveColor", (int64)EGLTFMaterialPropertyGroup::EmissiveColor },
		{ "EGLTFMaterialPropertyGroup::Normal", (int64)EGLTFMaterialPropertyGroup::Normal },
		{ "EGLTFMaterialPropertyGroup::AmbientOcclusion", (int64)EGLTFMaterialPropertyGroup::AmbientOcclusion },
		{ "EGLTFMaterialPropertyGroup::ClearCoatRoughness", (int64)EGLTFMaterialPropertyGroup::ClearCoatRoughness },
		{ "EGLTFMaterialPropertyGroup::ClearCoatBottomNormal", (int64)EGLTFMaterialPropertyGroup::ClearCoatBottomNormal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::Enum_MetaDataParams[] = {
		{ "AmbientOcclusion.DisplayName", "Ambient Occlusion" },
		{ "AmbientOcclusion.Name", "EGLTFMaterialPropertyGroup::AmbientOcclusion" },
		{ "BaseColorOpacity.DisplayName", "Base Color + Opacity (Mask)" },
		{ "BaseColorOpacity.Name", "EGLTFMaterialPropertyGroup::BaseColorOpacity" },
		{ "BlueprintType", "true" },
		{ "ClearCoatBottomNormal.DisplayName", "Clear Coat Bottom Normal" },
		{ "ClearCoatBottomNormal.Name", "EGLTFMaterialPropertyGroup::ClearCoatBottomNormal" },
		{ "ClearCoatRoughness.DisplayName", "Clear Coat + Clear Coat Roughness" },
		{ "ClearCoatRoughness.Name", "EGLTFMaterialPropertyGroup::ClearCoatRoughness" },
		{ "EmissiveColor.DisplayName", "Emissive Color" },
		{ "EmissiveColor.Name", "EGLTFMaterialPropertyGroup::EmissiveColor" },
		{ "MetallicRoughness.DisplayName", "Metallic + Roughness" },
		{ "MetallicRoughness.Name", "EGLTFMaterialPropertyGroup::MetallicRoughness" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EGLTFMaterialPropertyGroup::None" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EGLTFMaterialPropertyGroup::Normal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GLTFExporter,
		nullptr,
		"EGLTFMaterialPropertyGroup",
		"EGLTFMaterialPropertyGroup",
		Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup()
	{
		if (!Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.InnerSingleton, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings;
class UScriptStruct* FGLTFOverrideMaterialBakeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, Z_Construct_UPackage__Script_GLTFExporter(), TEXT("GLTFOverrideMaterialBakeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.OuterSingleton;
}
template<> GLTFEXPORTER_API UScriptStruct* StaticStruct<FGLTFOverrideMaterialBakeSettings>()
{
	return FGLTFOverrideMaterialBakeSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSize_MetaData[];
#endif
		static void NewProp_bOverrideSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFilter_MetaData[];
#endif
		static void NewProp_bOverrideFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTiling_MetaData[];
#endif
		static void NewProp_bOverrideTiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Tiling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLTFOverrideMaterialBakeSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** If enabled, default size will be overridden by the corresponding property. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If enabled, default size will be overridden by the corresponding property." },
	};
#endif
	void Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_SetBit(void* Obj)
	{
		((FGLTFOverrideMaterialBakeSettings*)Obj)->bOverrideSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize = { "bOverrideSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGLTFOverrideMaterialBakeSettings), &Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Overrides default size of the baked out texture. */" },
		{ "EditCondition", "bOverrideSize" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Overrides default size of the baked out texture." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLTFOverrideMaterialBakeSettings, Size), Z_Construct_UEnum_GLTFExporter_EGLTFMaterialBakeSizePOT, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size_MetaData)) }; // 3613482618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** If enabled, default filtering mode will be overridden by the corresponding property. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If enabled, default filtering mode will be overridden by the corresponding property." },
	};
#endif
	void Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_SetBit(void* Obj)
	{
		((FGLTFOverrideMaterialBakeSettings*)Obj)->bOverrideFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter = { "bOverrideFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGLTFOverrideMaterialBakeSettings), &Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Overrides the default filtering mode used when sampling the baked out texture. */" },
		{ "EditCondition", "bOverrideFilter" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Overrides the default filtering mode used when sampling the baked out texture." },
		{ "ValidEnumValues", "TF_Nearest, TF_Bilinear, TF_Trilinear" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLTFOverrideMaterialBakeSettings, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter_MetaData)) }; // 3285266737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** If enabled, default addressing mode will be overridden by the corresponding property. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If enabled, default addressing mode will be overridden by the corresponding property." },
	};
#endif
	void Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_SetBit(void* Obj)
	{
		((FGLTFOverrideMaterialBakeSettings*)Obj)->bOverrideTiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling = { "bOverrideTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGLTFOverrideMaterialBakeSettings), &Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/** Overrides the default addressing mode used when sampling the baked out texture. */" },
		{ "EditCondition", "bOverrideTiling" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Overrides the default addressing mode used when sampling the baked out texture." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLTFOverrideMaterialBakeSettings, Tiling), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling_MetaData)) }; // 1007474672
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_bOverrideTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewProp_Tiling,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
		nullptr,
		&NewStructOps,
		"GLTFOverrideMaterialBakeSettings",
		sizeof(FGLTFOverrideMaterialBakeSettings),
		alignof(FGLTFOverrideMaterialBakeSettings),
		Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.InnerSingleton, Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings.InnerSingleton;
	}
	void UGLTFMaterialExportOptions::StaticRegisterNativesUGLTFMaterialExportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFMaterialExportOptions);
	UClass* Z_Construct_UClass_UGLTFMaterialExportOptions_NoRegister()
	{
		return UGLTFMaterialExportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFMaterialExportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Proxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Default;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Inputs_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Inputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** glTF-specific user data that can be added to material assets to override export options */" },
		{ "DisplayName", "GLTF Material Export Options" },
		{ "IncludePath", "UserData/GLTFMaterialUserData.h" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "glTF-specific user data that can be added to material assets to override export options" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If assigned, export will use the proxy instead of the original material. */" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "If assigned, export will use the proxy instead of the original material." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFMaterialExportOptions, Proxy), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Proxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Proxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "Override Bake Settings" },
		{ "Comment", "/** Default bake settings for this material in general. */" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Default bake settings for this material in general." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFMaterialExportOptions, Default), Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, METADATA_PARAMS(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default_MetaData)) }; // 1727371370
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_ValueProp = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings, METADATA_PARAMS(nullptr, 0) }; // 1727371370
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp = { "Inputs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GLTFExporter_EGLTFMaterialPropertyGroup, METADATA_PARAMS(nullptr, 0) }; // 4222232985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "Override Bake Settings" },
		{ "Comment", "/** Input-specific bake settings that override the defaults above. */" },
		{ "ModuleRelativePath", "Public/UserData/GLTFMaterialUserData.h" },
		{ "ToolTip", "Input-specific bake settings that override the defaults above." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGLTFMaterialExportOptions, Inputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_MetaData)) }; // 4222232985 1727371370
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Default,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::NewProp_Inputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFMaterialExportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::ClassParams = {
		&UGLTFMaterialExportOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFMaterialExportOptions()
	{
		if (!Z_Registration_Info_UClass_UGLTFMaterialExportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFMaterialExportOptions.OuterSingleton, Z_Construct_UClass_UGLTFMaterialExportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLTFMaterialExportOptions.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFMaterialExportOptions>()
	{
		return UGLTFMaterialExportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFMaterialExportOptions);
	UGLTFMaterialExportOptions::~UGLTFMaterialExportOptions() {}
	struct Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::EnumInfo[] = {
		{ EGLTFMaterialBakeMode_StaticEnum, TEXT("EGLTFMaterialBakeMode"), &Z_Registration_Info_UEnum_EGLTFMaterialBakeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4291369669U) },
		{ EGLTFMaterialBakeSizePOT_StaticEnum, TEXT("EGLTFMaterialBakeSizePOT"), &Z_Registration_Info_UEnum_EGLTFMaterialBakeSizePOT, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3613482618U) },
		{ EGLTFMaterialPropertyGroup_StaticEnum, TEXT("EGLTFMaterialPropertyGroup"), &Z_Registration_Info_UEnum_EGLTFMaterialPropertyGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4222232985U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::ScriptStructInfo[] = {
		{ FGLTFOverrideMaterialBakeSettings::StaticStruct, Z_Construct_UScriptStruct_FGLTFOverrideMaterialBakeSettings_Statics::NewStructOps, TEXT("GLTFOverrideMaterialBakeSettings"), &Z_Registration_Info_UScriptStruct_GLTFOverrideMaterialBakeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLTFOverrideMaterialBakeSettings), 1727371370U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFMaterialExportOptions, UGLTFMaterialExportOptions::StaticClass, TEXT("UGLTFMaterialExportOptions"), &Z_Registration_Info_UClass_UGLTFMaterialExportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFMaterialExportOptions), 2307047859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_3821364207(TEXT("/Script/GLTFExporter"),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_UserData_GLTFMaterialUserData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
