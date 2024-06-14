// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPR301/Public/RandomShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomShape() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PPR301_API UClass* Z_Construct_UClass_ARandomShape();
	PPR301_API UClass* Z_Construct_UClass_ARandomShape_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PPR301();
// End Cross Module References
	void ARandomShape::StaticRegisterNativesARandomShape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandomShape);
	UClass* Z_Construct_UClass_ARandomShape_NoRegister()
	{
		return ARandomShape::StaticClass();
	}
	struct Z_Construct_UClass_ARandomShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PPR301,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomShape_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomShape_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RandomShape.h" },
		{ "ModuleRelativePath", "Public/RandomShape.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomShape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomShape_Statics::ClassParams = {
		&ARandomShape::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomShape_Statics::Class_MetaDataParams), Z_Construct_UClass_ARandomShape_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARandomShape()
	{
		if (!Z_Registration_Info_UClass_ARandomShape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandomShape.OuterSingleton, Z_Construct_UClass_ARandomShape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARandomShape.OuterSingleton;
	}
	template<> PPR301_API UClass* StaticClass<ARandomShape>()
	{
		return ARandomShape::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomShape);
	ARandomShape::~ARandomShape() {}
	struct Z_CompiledInDeferFile_FID_Users_123sj_Documents_GitHub_PPR301_PPR301_Source_PPR301_Public_RandomShape_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_123sj_Documents_GitHub_PPR301_PPR301_Source_PPR301_Public_RandomShape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARandomShape, ARandomShape::StaticClass, TEXT("ARandomShape"), &Z_Registration_Info_UClass_ARandomShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomShape), 2641237565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_123sj_Documents_GitHub_PPR301_PPR301_Source_PPR301_Public_RandomShape_h_4263045138(TEXT("/Script/PPR301"),
		Z_CompiledInDeferFile_FID_Users_123sj_Documents_GitHub_PPR301_PPR301_Source_PPR301_Public_RandomShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_123sj_Documents_GitHub_PPR301_PPR301_Source_PPR301_Public_RandomShape_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
