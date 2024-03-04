// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFGLTFImporter/Private/UI/BlueprintExportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintExportOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TFGLTFIMPORTER_API UClass* Z_Construct_UClass_UBlueprintExportOptions();
	TFGLTFIMPORTER_API UClass* Z_Construct_UClass_UBlueprintExportOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TFGLTFImporter();
// End Cross Module References
	void UBlueprintExportOptions::StaticRegisterNativesUBlueprintExportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintExportOptions);
	UClass* Z_Construct_UClass_UBlueprintExportOptions_NoRegister()
	{
		return UBlueprintExportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintExportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlueprintActorClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintActorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlueprintActorClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGLb_MetaData[];
#endif
		static void NewProp_bGLb_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGLb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintExportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TFGLTFImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintExportOptions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "DebugProperty" },
		{ "IncludePath", "UI/BlueprintExportOptions.h" },
		{ "ModuleRelativePath", "Private/UI/BlueprintExportOptions.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_BlueprintActorClasses_Inner = { "BlueprintActorClasses", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_BlueprintActorClasses_MetaData[] = {
		{ "Category", "BlueprintExportOptions" },
		{ "ModuleRelativePath", "Private/UI/BlueprintExportOptions.h" },
		{ "ToolTip", "Blueprint actor to gltf/glb" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_BlueprintActorClasses = { "BlueprintActorClasses", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintExportOptions, BlueprintActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_BlueprintActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_BlueprintActorClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_bGLb_MetaData[] = {
		{ "Category", "BlueprintExportOptions" },
		{ "ModuleRelativePath", "Private/UI/BlueprintExportOptions.h" },
		{ "ToolTip", "If false it will export gltf" },
	};
#endif
	void Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_bGLb_SetBit(void* Obj)
	{
		((UBlueprintExportOptions*)Obj)->bGLb = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_bGLb = { "bGLb", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintExportOptions), &Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_bGLb_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_bGLb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_bGLb_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintExportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_BlueprintActorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_BlueprintActorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintExportOptions_Statics::NewProp_bGLb,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintExportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintExportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintExportOptions_Statics::ClassParams = {
		&UBlueprintExportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintExportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintExportOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintExportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintExportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintExportOptions()
	{
		if (!Z_Registration_Info_UClass_UBlueprintExportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintExportOptions.OuterSingleton, Z_Construct_UClass_UBlueprintExportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintExportOptions.OuterSingleton;
	}
	template<> TFGLTFIMPORTER_API UClass* StaticClass<UBlueprintExportOptions>()
	{
		return UBlueprintExportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintExportOptions);
	UBlueprintExportOptions::~UBlueprintExportOptions() {}
	struct Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_TFGLTFImporter_Source_TFGLTFImporter_Private_UI_BlueprintExportOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_TFGLTFImporter_Source_TFGLTFImporter_Private_UI_BlueprintExportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintExportOptions, UBlueprintExportOptions::StaticClass, TEXT("UBlueprintExportOptions"), &Z_Registration_Info_UClass_UBlueprintExportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintExportOptions), 4156748760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_TFGLTFImporter_Source_TFGLTFImporter_Private_UI_BlueprintExportOptions_h_178937509(TEXT("/Script/TFGLTFImporter"),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_TFGLTFImporter_Source_TFGLTFImporter_Private_UI_BlueprintExportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_TFGLTFImporter_Source_TFGLTFImporter_Private_UI_BlueprintExportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
