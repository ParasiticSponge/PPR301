// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPR301/Public/SlidePuzzle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlidePuzzle() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
PPR301_API UClass* Z_Construct_UClass_ASlidePuzzle();
PPR301_API UClass* Z_Construct_UClass_ASlidePuzzle_NoRegister();
UPackage* Z_Construct_UPackage__Script_PPR301();
// End Cross Module References

// Begin Class ASlidePuzzle Function MovePanel
struct Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics
{
	struct SlidePuzzle_eventMovePanel_Parms
	{
		int32 x;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_x;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlidePuzzle_eventMovePanel_Parms, x), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::NewProp_x,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASlidePuzzle, nullptr, "MovePanel", nullptr, nullptr, Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::SlidePuzzle_eventMovePanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::SlidePuzzle_eventMovePanel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASlidePuzzle_MovePanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASlidePuzzle::execMovePanel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_x);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MovePanel(Z_Param_x);
	P_NATIVE_END;
}
// End Class ASlidePuzzle Function MovePanel

// Begin Class ASlidePuzzle
void ASlidePuzzle::StaticRegisterNativesASlidePuzzle()
{
	UClass* Class = ASlidePuzzle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MovePanel", &ASlidePuzzle::execMovePanel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASlidePuzzle);
UClass* Z_Construct_UClass_ASlidePuzzle_NoRegister()
{
	return ASlidePuzzle::StaticClass();
}
struct Z_Construct_UClass_ASlidePuzzle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SlidePuzzle.h" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_p1_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_p2_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_p3_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_p4_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_p5_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_p6_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_p7_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_p8_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_p9_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetPanels_MetaData[] = {
		{ "Category", "PuzzleObject" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_p1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_p2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_p3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_p4;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_p5;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_p6;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_p7;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_p8;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_p9;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GetPanels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GetPanels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASlidePuzzle_MovePanel, "MovePanel" }, // 1773004288
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlidePuzzle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, texture), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_MetaData), NewProp_texture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p1 = { "p1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_p1_MetaData), NewProp_p1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p2 = { "p2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_p2_MetaData), NewProp_p2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p3 = { "p3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p3), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_p3_MetaData), NewProp_p3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p4 = { "p4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p4), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_p4_MetaData), NewProp_p4_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p5 = { "p5", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p5), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_p5_MetaData), NewProp_p5_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p6 = { "p6", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p6), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_p6_MetaData), NewProp_p6_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p7 = { "p7", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p7), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_p7_MetaData), NewProp_p7_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p8 = { "p8", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p8), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_p8_MetaData), NewProp_p8_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p9 = { "p9", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p9), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_p9_MetaData), NewProp_p9_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_GetPanels_Inner = { "GetPanels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_GetPanels = { "GetPanels", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, GetPanels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetPanels_MetaData), NewProp_GetPanels_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlidePuzzle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_GetPanels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_GetPanels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASlidePuzzle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PPR301,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlidePuzzle_Statics::ClassParams = {
	&ASlidePuzzle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASlidePuzzle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::Class_MetaDataParams), Z_Construct_UClass_ASlidePuzzle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASlidePuzzle()
{
	if (!Z_Registration_Info_UClass_ASlidePuzzle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASlidePuzzle.OuterSingleton, Z_Construct_UClass_ASlidePuzzle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASlidePuzzle.OuterSingleton;
}
template<> PPR301_API UClass* StaticClass<ASlidePuzzle>()
{
	return ASlidePuzzle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASlidePuzzle);
ASlidePuzzle::~ASlidePuzzle() {}
// End Class ASlidePuzzle

// Begin Registration
struct Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASlidePuzzle, ASlidePuzzle::StaticClass, TEXT("ASlidePuzzle"), &Z_Registration_Info_UClass_ASlidePuzzle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlidePuzzle), 2823002892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_14484338(TEXT("/Script/PPR301"),
	Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
