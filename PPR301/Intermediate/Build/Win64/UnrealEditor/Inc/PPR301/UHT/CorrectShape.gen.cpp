// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPR301/Public/CorrectShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorrectShape() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
PPR301_API UClass* Z_Construct_UClass_ACorrectShape();
PPR301_API UClass* Z_Construct_UClass_ACorrectShape_NoRegister();
PPR301_API UClass* Z_Construct_UClass_ARandomShape_NoRegister();
UPackage* Z_Construct_UPackage__Script_PPR301();
// End Cross Module References

// Begin Class ACorrectShape Function OnOverlapBegin
struct Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics
{
	struct CorrectShape_eventOnOverlapBegin_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CorrectShape_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CorrectShape_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACorrectShape, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::CorrectShape_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::CorrectShape_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACorrectShape_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACorrectShape::execOnOverlapBegin)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ACorrectShape Function OnOverlapBegin

// Begin Class ACorrectShape
void ACorrectShape::StaticRegisterNativesACorrectShape()
{
	UClass* Class = ACorrectShape::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &ACorrectShape::execOnOverlapBegin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACorrectShape);
UClass* Z_Construct_UClass_ACorrectShape_NoRegister()
{
	return ACorrectShape::StaticClass();
}
struct Z_Construct_UClass_ACorrectShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "CorrectShape.h" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cube_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_circle_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_triangle_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hour_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_star_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rando_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isCorrect_MetaData[] = {
		{ "Category", "ShapeObject" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_cube;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_circle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_triangle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hour;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_star;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_rando;
	static const UECodeGen_Private::FIntPropertyParams NewProp_isCorrect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACorrectShape_OnOverlapBegin, "OnOverlapBegin" }, // 901408562
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACorrectShape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_cube = { "cube", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, cube), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cube_MetaData), NewProp_cube_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_circle = { "circle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, circle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_circle_MetaData), NewProp_circle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_triangle = { "triangle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, triangle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_triangle_MetaData), NewProp_triangle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_hour = { "hour", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, hour), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hour_MetaData), NewProp_hour_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_star = { "star", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, star), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_star_MetaData), NewProp_star_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_rando = { "rando", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, rando), Z_Construct_UClass_ARandomShape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rando_MetaData), NewProp_rando_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_isCorrect = { "isCorrect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, isCorrect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isCorrect_MetaData), NewProp_isCorrect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACorrectShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_cube,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_circle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_triangle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_hour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_star,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_rando,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_isCorrect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACorrectShape_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	(UObject* (*)())Z_Construct_UPackage__Script_PPR301,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACorrectShape_Statics::ClassParams = {
	&ACorrectShape::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACorrectShape_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::Class_MetaDataParams), Z_Construct_UClass_ACorrectShape_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACorrectShape()
{
	if (!Z_Registration_Info_UClass_ACorrectShape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACorrectShape.OuterSingleton, Z_Construct_UClass_ACorrectShape_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACorrectShape.OuterSingleton;
}
template<> PPR301_API UClass* StaticClass<ACorrectShape>()
{
	return ACorrectShape::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACorrectShape);
ACorrectShape::~ACorrectShape() {}
// End Class ACorrectShape

// Begin Registration
struct Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_CorrectShape_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACorrectShape, ACorrectShape::StaticClass, TEXT("ACorrectShape"), &Z_Registration_Info_UClass_ACorrectShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACorrectShape), 2181411044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_CorrectShape_h_1364034062(TEXT("/Script/PPR301"),
	Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_CorrectShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PPR301_Source_PPR301_Public_CorrectShape_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
