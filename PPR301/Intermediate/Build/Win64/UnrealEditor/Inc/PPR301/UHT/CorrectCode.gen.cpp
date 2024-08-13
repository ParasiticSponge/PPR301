// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPR301/Public/CorrectCode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorrectCode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PPR301_API UClass* Z_Construct_UClass_ACorrectCode();
	PPR301_API UClass* Z_Construct_UClass_ACorrectCode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PPR301();
// End Cross Module References
	void ACorrectCode::StaticRegisterNativesACorrectCode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACorrectCode);
	UClass* Z_Construct_UClass_ACorrectCode_NoRegister()
	{
		return ACorrectCode::StaticClass();
	}
	struct Z_Construct_UClass_ACorrectCode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_max_count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDone_MetaData[];
#endif
		static void NewProp_isDone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasWon_MetaData[];
#endif
		static void NewProp_hasWon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasWon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACorrectCode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PPR301,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectCode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectCode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CorrectCode.h" },
		{ "ModuleRelativePath", "Public/CorrectCode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectCode_Statics::NewProp_code_MetaData[] = {
		{ "Category", "Code" },
		{ "ModuleRelativePath", "Public/CorrectCode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACorrectCode_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectCode, code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectCode_Statics::NewProp_code_MetaData), Z_Construct_UClass_ACorrectCode_Statics::NewProp_code_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectCode_Statics::NewProp_count_MetaData[] = {
		{ "Category", "Count" },
		{ "ModuleRelativePath", "Public/CorrectCode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACorrectCode_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectCode, count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectCode_Statics::NewProp_count_MetaData), Z_Construct_UClass_ACorrectCode_Statics::NewProp_count_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectCode_Statics::NewProp_max_count_MetaData[] = {
		{ "Category", "MaxCount" },
		{ "ModuleRelativePath", "Public/CorrectCode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACorrectCode_Statics::NewProp_max_count = { "max_count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectCode, max_count), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectCode_Statics::NewProp_max_count_MetaData), Z_Construct_UClass_ACorrectCode_Statics::NewProp_max_count_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectCode_Statics::NewProp_isDone_MetaData[] = {
		{ "Category", "DoneCode" },
		{ "ModuleRelativePath", "Public/CorrectCode.h" },
	};
#endif
	void Z_Construct_UClass_ACorrectCode_Statics::NewProp_isDone_SetBit(void* Obj)
	{
		((ACorrectCode*)Obj)->isDone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACorrectCode_Statics::NewProp_isDone = { "isDone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACorrectCode), &Z_Construct_UClass_ACorrectCode_Statics::NewProp_isDone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectCode_Statics::NewProp_isDone_MetaData), Z_Construct_UClass_ACorrectCode_Statics::NewProp_isDone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectCode_Statics::NewProp_hasWon_MetaData[] = {
		{ "Category", "Won" },
		{ "ModuleRelativePath", "Public/CorrectCode.h" },
	};
#endif
	void Z_Construct_UClass_ACorrectCode_Statics::NewProp_hasWon_SetBit(void* Obj)
	{
		((ACorrectCode*)Obj)->hasWon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACorrectCode_Statics::NewProp_hasWon = { "hasWon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACorrectCode), &Z_Construct_UClass_ACorrectCode_Statics::NewProp_hasWon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectCode_Statics::NewProp_hasWon_MetaData), Z_Construct_UClass_ACorrectCode_Statics::NewProp_hasWon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACorrectCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectCode_Statics::NewProp_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectCode_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectCode_Statics::NewProp_max_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectCode_Statics::NewProp_isDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectCode_Statics::NewProp_hasWon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACorrectCode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACorrectCode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACorrectCode_Statics::ClassParams = {
		&ACorrectCode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACorrectCode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectCode_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectCode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACorrectCode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectCode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACorrectCode()
	{
		if (!Z_Registration_Info_UClass_ACorrectCode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACorrectCode.OuterSingleton, Z_Construct_UClass_ACorrectCode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACorrectCode.OuterSingleton;
	}
	template<> PPR301_API UClass* StaticClass<ACorrectCode>()
	{
		return ACorrectCode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACorrectCode);
	ACorrectCode::~ACorrectCode() {}
	struct Z_CompiledInDeferFile_FID_Users_123sj_Documents_GitHub_PPR301_PPR301_Source_PPR301_Public_CorrectCode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_123sj_Documents_GitHub_PPR301_PPR301_Source_PPR301_Public_CorrectCode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACorrectCode, ACorrectCode::StaticClass, TEXT("ACorrectCode"), &Z_Registration_Info_UClass_ACorrectCode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACorrectCode), 2614070801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_123sj_Documents_GitHub_PPR301_PPR301_Source_PPR301_Public_CorrectCode_h_2100058129(TEXT("/Script/PPR301"),
		Z_CompiledInDeferFile_FID_Users_123sj_Documents_GitHub_PPR301_PPR301_Source_PPR301_Public_CorrectCode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_123sj_Documents_GitHub_PPR301_PPR301_Source_PPR301_Public_CorrectCode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
