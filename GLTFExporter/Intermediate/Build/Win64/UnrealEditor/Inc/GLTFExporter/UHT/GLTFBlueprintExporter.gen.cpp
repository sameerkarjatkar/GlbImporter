// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFBlueprintExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFBlueprintExporter() {}
// Cross Module References
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFBlueprintExporter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFBlueprintExporter_NoRegister();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
	UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References
	void UGLTFBlueprintExporter::StaticRegisterNativesUGLTFBlueprintExporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFBlueprintExporter);
	UClass* Z_Construct_UClass_UGLTFBlueprintExporter_NoRegister()
	{
		return UGLTFBlueprintExporter::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFBlueprintExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFBlueprintExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFBlueprintExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFBlueprintExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFBlueprintExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFBlueprintExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFBlueprintExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFBlueprintExporter_Statics::ClassParams = {
		&UGLTFBlueprintExporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFBlueprintExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFBlueprintExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFBlueprintExporter()
	{
		if (!Z_Registration_Info_UClass_UGLTFBlueprintExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFBlueprintExporter.OuterSingleton, Z_Construct_UClass_UGLTFBlueprintExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLTFBlueprintExporter.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFBlueprintExporter>()
	{
		return UGLTFBlueprintExporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFBlueprintExporter);
	UGLTFBlueprintExporter::~UGLTFBlueprintExporter() {}
	struct Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFBlueprintExporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFBlueprintExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFBlueprintExporter, UGLTFBlueprintExporter::StaticClass, TEXT("UGLTFBlueprintExporter"), &Z_Registration_Info_UClass_UGLTFBlueprintExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFBlueprintExporter), 1080754901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFBlueprintExporter_h_3889826498(TEXT("/Script/GLTFExporter"),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFBlueprintExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFBlueprintExporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
