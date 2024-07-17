// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPR301/Public/RandomShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomShape() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
PPR301_API UClass* Z_Construct_UClass_ARandomShape();
PPR301_API UClass* Z_Construct_UClass_ARandomShape_NoRegister();
UPackage* Z_Construct_UPackage__Script_PPR301();
// End Cross Module References

// Begin Class ARandomShape
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RandomShape.h" },
		{ "ModuleRelativePath", "Public/RandomShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_board_MetaData[] = {
		{ "Category", "RandomShape" },
		{ "ModuleRelativePath", "Public/RandomShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boardObj_MetaData[] = {
		{ "Category", "RandomShape" },
		{ "ModuleRelativePath", "Public/RandomShape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_board;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_boardObj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomShape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomShape_Statics::NewProp_board = { "board", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomShape, board), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_board_MetaData), NewProp_board_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomShape_Statics::NewProp_boardObj = { "boardObj", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARandomShape, boardObj), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boardObj_MetaData), NewProp_boardObj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomShape_Statics::NewProp_board,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomShape_Statics::NewProp_boardObj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomShape_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARandomShape_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PPR301,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomShape_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomShape_Statics::ClassParams = {
	&ARandomShape::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARandomShape_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARandomShape_Statics::PropPointers),
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
// End Class ARandomShape

// Begin Registration
struct Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_RandomShape_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARandomShape, ARandomShape::StaticClass, TEXT("ARandomShape"), &Z_Registration_Info_UClass_ARandomShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomShape), 3686374446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_RandomShape_h_2088967752(TEXT("/Script/PPR301"),
	Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_RandomShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_RandomShape_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
