// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFLevelExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFLevelExporter() {}
// Cross Module References
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelExporter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelExporter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References
	void UGLTFLevelExporter::StaticRegisterNativesUGLTFLevelExporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFLevelExporter);
	UClass* Z_Construct_UClass_UGLTFLevelExporter_NoRegister()
	{
		return UGLTFLevelExporter::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFLevelExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFLevelExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFLevelExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFLevelExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFLevelExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFLevelExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFLevelExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFLevelExporter_Statics::ClassParams = {
		&UGLTFLevelExporter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGLTFLevelExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFLevelExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFLevelExporter()
	{
		if (!Z_Registration_Info_UClass_UGLTFLevelExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFLevelExporter.OuterSingleton, Z_Construct_UClass_UGLTFLevelExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLTFLevelExporter.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFLevelExporter>()
	{
		return UGLTFLevelExporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFLevelExporter);
	UGLTFLevelExporter::~UGLTFLevelExporter() {}
	struct Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFLevelExporter, UGLTFLevelExporter::StaticClass, TEXT("UGLTFLevelExporter"), &Z_Registration_Info_UClass_UGLTFLevelExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFLevelExporter), 459630376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h_2922748071(TEXT("/Script/GLTFExporter"),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
