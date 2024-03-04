// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFExporter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter_NoRegister();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExportOptions_NoRegister();
	GLTFEXPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FGLTFExportMessages();
	UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GLTFExportMessages;
class UScriptStruct* FGLTFExportMessages::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GLTFExportMessages.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GLTFExportMessages.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGLTFExportMessages, Z_Construct_UPackage__Script_GLTFExporter(), TEXT("GLTFExportMessages"));
	}
	return Z_Registration_Info_UScriptStruct_GLTFExportMessages.OuterSingleton;
}
template<> GLTFEXPORTER_API UScriptStruct* StaticStruct<FGLTFExportMessages>()
{
	return FGLTFExportMessages::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGLTFExportMessages_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Suggestions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Suggestions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Suggestions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Warnings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warnings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Warnings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Errors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Errors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGLTFExportMessages>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Suggestions_Inner = { "Suggestions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Suggestions_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Suggestions = { "Suggestions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLTFExportMessages, Suggestions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Suggestions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Suggestions_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Warnings_Inner = { "Warnings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Warnings_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Warnings = { "Warnings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLTFExportMessages, Warnings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Warnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Warnings_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Errors_Inner = { "Errors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Errors_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Errors = { "Errors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGLTFExportMessages, Errors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Errors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Errors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Suggestions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Suggestions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Warnings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Warnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Errors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewProp_Errors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
		nullptr,
		&NewStructOps,
		"GLTFExportMessages",
		sizeof(FGLTFExportMessages),
		alignof(FGLTFExportMessages),
		Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGLTFExportMessages()
	{
		if (!Z_Registration_Info_UScriptStruct_GLTFExportMessages.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GLTFExportMessages.InnerSingleton, Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GLTFExportMessages.InnerSingleton;
	}
	DEFINE_FUNCTION(UGLTFExporter::execExportToGLTF)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_OBJECT(UGLTFExportOptions,Z_Param_Options);
		P_GET_TSET_REF(AActor*,Z_Param_Out_SelectedActors);
		P_GET_STRUCT_REF(FGLTFExportMessages,Z_Param_Out_OutMessages);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGLTFExporter::ExportToGLTF(Z_Param_Object,Z_Param_FilePath,Z_Param_Options,Z_Param_Out_SelectedActors,Z_Param_Out_OutMessages);
		P_NATIVE_END;
	}
	void UGLTFExporter::StaticRegisterNativesUGLTFExporter()
	{
		UClass* Class = UGLTFExporter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportToGLTF", &UGLTFExporter::execExportToGLTF },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics
	{
		struct GLTFExporter_eventExportToGLTF_Parms
		{
			UObject* Object;
			FString FilePath;
			const UGLTFExportOptions* Options;
			TSet<AActor*> SelectedActors;
			FGLTFExportMessages OutMessages;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Options;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedActors_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedActors_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMessages;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLTFExporter_eventExportToGLTF_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLTFExporter_eventExportToGLTF_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLTFExporter_eventExportToGLTF_Parms, Options), Z_Construct_UClass_UGLTFExportOptions_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_Options_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_SelectedActors_ElementProp = { "SelectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_SelectedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_SelectedActors = { "SelectedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLTFExporter_eventExportToGLTF_Parms, SelectedActors), METADATA_PARAMS(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_SelectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_SelectedActors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_OutMessages = { "OutMessages", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GLTFExporter_eventExportToGLTF_Parms, OutMessages), Z_Construct_UScriptStruct_FGLTFExportMessages, METADATA_PARAMS(nullptr, 0) }; // 2581139128
	void Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GLTFExporter_eventExportToGLTF_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GLTFExporter_eventExportToGLTF_Parms), &Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_SelectedActors_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_SelectedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_OutMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09 * Export the specified object to a glTF file (.gltf or .glb)\n\x09 *\n\x09 * @param Object          The object to export (supported types are UMaterialInterface, UStaticMesh, USkeletalMesh, UWorld, UAnimSequence, ULevelSequence, ULevelVariantSets). Will default to the currently active world if null.\n\x09 * @param FilePath        The filename on disk to save as. Associated textures and binary files will be saved in the same folder, unless file extension is .glb - which results in a self-contained binary file.\n\x09 * @param Options         The various options to use during export. Will default to the project's user-specific editor settings if null.\n\x09 * @param SelectedActors  The set of actors to export, only applicable if the object to export is a UWorld. An empty set results in the export of all actors.\n\x09 * @param OutMessages     The resulting log messages from the export.\n\x09 *\n\x09 * @return true if the object was successfully exported\n\x09 */" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
		{ "ToolTip", "Export the specified object to a glTF file (.gltf or .glb)\n\n@param Object          The object to export (supported types are UMaterialInterface, UStaticMesh, USkeletalMesh, UWorld, UAnimSequence, ULevelSequence, ULevelVariantSets). Will default to the currently active world if null.\n@param FilePath        The filename on disk to save as. Associated textures and binary files will be saved in the same folder, unless file extension is .glb - which results in a self-contained binary file.\n@param Options         The various options to use during export. Will default to the project's user-specific editor settings if null.\n@param SelectedActors  The set of actors to export, only applicable if the object to export is a UWorld. An empty set results in the export of all actors.\n@param OutMessages     The resulting log messages from the export.\n\n@return true if the object was successfully exported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLTFExporter, nullptr, "ExportToGLTF", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::GLTFExporter_eventExportToGLTF_Parms), Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLTFExporter_ExportToGLTF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGLTFExporter_ExportToGLTF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFExporter);
	UClass* Z_Construct_UClass_UGLTFExporter_NoRegister()
	{
		return UGLTFExporter::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLTFExporter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLTFExporter_ExportToGLTF, "ExportToGLTF" }, // 2232402248
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFExporter_Statics::ClassParams = {
		&UGLTFExporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFExporter()
	{
		if (!Z_Registration_Info_UClass_UGLTFExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFExporter.OuterSingleton, Z_Construct_UClass_UGLTFExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLTFExporter.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFExporter>()
	{
		return UGLTFExporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFExporter);
	UGLTFExporter::~UGLTFExporter() {}
	struct Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics::ScriptStructInfo[] = {
		{ FGLTFExportMessages::StaticStruct, Z_Construct_UScriptStruct_FGLTFExportMessages_Statics::NewStructOps, TEXT("GLTFExportMessages"), &Z_Registration_Info_UScriptStruct_GLTFExportMessages, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGLTFExportMessages), 2581139128U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFExporter, UGLTFExporter::StaticClass, TEXT("UGLTFExporter"), &Z_Registration_Info_UClass_UGLTFExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFExporter), 48214834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_3334270906(TEXT("/Script/GLTFExporter"),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GLBUtil_Plugins_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFExporter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
