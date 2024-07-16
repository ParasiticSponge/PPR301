// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPR301/Public/SlidePuzzle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlidePuzzle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PPR301_API UClass* Z_Construct_UClass_ASlidePuzzle();
	PPR301_API UClass* Z_Construct_UClass_ASlidePuzzle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PPR301();
// End Cross Module References
	DEFINE_FUNCTION(ASlidePuzzle::execMovePanel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovePanel(Z_Param_x);
		P_NATIVE_END;
	}
	void ASlidePuzzle::StaticRegisterNativesASlidePuzzle()
	{
		UClass* Class = ASlidePuzzle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MovePanel", &ASlidePuzzle::execMovePanel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics
	{
		struct SlidePuzzle_eventMovePanel_Parms
		{
			int32 x;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlidePuzzle_eventMovePanel_Parms, x), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASlidePuzzle, nullptr, "MovePanel", nullptr, nullptr, Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::SlidePuzzle_eventMovePanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASlidePuzzle_MovePanel_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASlidePuzzle);
	UClass* Z_Construct_UClass_ASlidePuzzle_NoRegister()
	{
		return ASlidePuzzle::StaticClass();
	}
	struct Z_Construct_UClass_ASlidePuzzle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_p1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_p2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_p3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_p4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p5_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_p5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p6_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_p6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p7_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_p7;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p8_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_p8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p9_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_p9;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GetPanels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetPanels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GetPanels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlidePuzzle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PPR301,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASlidePuzzle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASlidePuzzle_MovePanel, "MovePanel" }, // 3815516625
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SlidePuzzle.h" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_texture_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, texture), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_texture_MetaData), Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_texture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p1_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p1 = { "p1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p1_MetaData), Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p2_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p2 = { "p2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p2_MetaData), Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p3_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p3 = { "p3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p3), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p3_MetaData), Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p4_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p4 = { "p4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p4), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p4_MetaData), Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p4_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p5_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p5 = { "p5", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p5), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p5_MetaData), Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p5_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p6_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p6 = { "p6", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p6), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p6_MetaData), Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p6_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p7_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p7 = { "p7", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p7), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p7_MetaData), Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p7_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p8_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p8 = { "p8", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p8), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p8_MetaData), Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p8_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p9_MetaData[] = {
		{ "Category", "SlidePuzzle" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p9 = { "p9", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, p9), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p9_MetaData), Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_p9_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_GetPanels_Inner = { "GetPanels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_GetPanels_MetaData[] = {
		{ "Category", "PuzzleObject" },
		{ "ModuleRelativePath", "Public/SlidePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_GetPanels = { "GetPanels", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlidePuzzle, GetPanels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_GetPanels_MetaData), Z_Construct_UClass_ASlidePuzzle_Statics::NewProp_GetPanels_MetaData) };
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlidePuzzle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlidePuzzle>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlidePuzzle_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_Development_Games_PPR301_PPR301_Source_PPR301_Public_SlidePuzzle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Development_Games_PPR301_PPR301_Source_PPR301_Public_SlidePuzzle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASlidePuzzle, ASlidePuzzle::StaticClass, TEXT("ASlidePuzzle"), &Z_Registration_Info_UClass_ASlidePuzzle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlidePuzzle), 3098148565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Development_Games_PPR301_PPR301_Source_PPR301_Public_SlidePuzzle_h_3474475203(TEXT("/Script/PPR301"),
		Z_CompiledInDeferFile_FID_Development_Games_PPR301_PPR301_Source_PPR301_Public_SlidePuzzle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Development_Games_PPR301_PPR301_Source_PPR301_Public_SlidePuzzle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
