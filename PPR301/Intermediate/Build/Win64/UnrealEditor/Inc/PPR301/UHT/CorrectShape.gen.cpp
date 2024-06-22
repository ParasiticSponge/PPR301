// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPR301/Public/CorrectShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorrectShape() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	PPR301_API UClass* Z_Construct_UClass_ACorrectShape();
	PPR301_API UClass* Z_Construct_UClass_ACorrectShape_NoRegister();
	PPR301_API UClass* Z_Construct_UClass_ARandomShape_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PPR301();
// End Cross Module References
	DEFINE_FUNCTION(ACorrectShape::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ACorrectShape::StaticRegisterNativesACorrectShape()
	{
		UClass* Class = ACorrectShape::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ACorrectShape::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics
	{
		struct CorrectShape_eventOnOverlapBegin_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CorrectShape_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CorrectShape_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACorrectShape, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::CorrectShape_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACorrectShape_OnOverlapBegin_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACorrectShape);
	UClass* Z_Construct_UClass_ACorrectShape_NoRegister()
	{
		return ACorrectShape::StaticClass();
	}
	struct Z_Construct_UClass_ACorrectShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cube;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_circle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_circle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_triangle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_triangle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hour_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_star_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_star;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rando_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rando;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameMode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_gameMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACorrectShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_PPR301,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACorrectShape_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACorrectShape_OnOverlapBegin, "OnOverlapBegin" }, // 3828832155
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectShape_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "CorrectShape.h" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectShape_Statics::NewProp_cube_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_cube = { "cube", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, cube), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::NewProp_cube_MetaData), Z_Construct_UClass_ACorrectShape_Statics::NewProp_cube_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectShape_Statics::NewProp_circle_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_circle = { "circle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, circle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::NewProp_circle_MetaData), Z_Construct_UClass_ACorrectShape_Statics::NewProp_circle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectShape_Statics::NewProp_triangle_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_triangle = { "triangle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, triangle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::NewProp_triangle_MetaData), Z_Construct_UClass_ACorrectShape_Statics::NewProp_triangle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectShape_Statics::NewProp_hour_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_hour = { "hour", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, hour), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::NewProp_hour_MetaData), Z_Construct_UClass_ACorrectShape_Statics::NewProp_hour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectShape_Statics::NewProp_star_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_star = { "star", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, star), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::NewProp_star_MetaData), Z_Construct_UClass_ACorrectShape_Statics::NewProp_star_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectShape_Statics::NewProp_rando_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_rando = { "rando", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, rando), Z_Construct_UClass_ARandomShape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::NewProp_rando_MetaData), Z_Construct_UClass_ACorrectShape_Statics::NewProp_rando_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACorrectShape_Statics::NewProp_gameMode_MetaData[] = {
		{ "Category", "CorrectShape" },
		{ "ModuleRelativePath", "Public/CorrectShape.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACorrectShape_Statics::NewProp_gameMode = { "gameMode", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACorrectShape, gameMode), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::NewProp_gameMode_MetaData), Z_Construct_UClass_ACorrectShape_Statics::NewProp_gameMode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACorrectShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_cube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_circle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_triangle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_hour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_star,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_rando,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACorrectShape_Statics::NewProp_gameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACorrectShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACorrectShape>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACorrectShape_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Development_Games_PPR301_PPR301_Source_PPR301_Public_CorrectShape_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Development_Games_PPR301_PPR301_Source_PPR301_Public_CorrectShape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACorrectShape, ACorrectShape::StaticClass, TEXT("ACorrectShape"), &Z_Registration_Info_UClass_ACorrectShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACorrectShape), 359573894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Development_Games_PPR301_PPR301_Source_PPR301_Public_CorrectShape_h_2787478760(TEXT("/Script/PPR301"),
		Z_CompiledInDeferFile_FID_Development_Games_PPR301_PPR301_Source_PPR301_Public_CorrectShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Development_Games_PPR301_PPR301_Source_PPR301_Public_CorrectShape_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
