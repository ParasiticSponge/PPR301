// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlidePuzzle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PPR301_SlidePuzzle_generated_h
#error "SlidePuzzle.generated.h already included, missing '#pragma once' in SlidePuzzle.h"
#endif
#define PPR301_SlidePuzzle_generated_h

#define FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMovePanel);


#define FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlidePuzzle(); \
	friend struct Z_Construct_UClass_ASlidePuzzle_Statics; \
public: \
	DECLARE_CLASS(ASlidePuzzle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PPR301"), NO_API) \
	DECLARE_SERIALIZER(ASlidePuzzle)


#define FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASlidePuzzle(ASlidePuzzle&&); \
	ASlidePuzzle(const ASlidePuzzle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlidePuzzle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlidePuzzle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlidePuzzle) \
	NO_API virtual ~ASlidePuzzle();


#define FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_9_PROLOG
#define FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_12_INCLASS_NO_PURE_DECLS \
	FID_PPR301_Source_PPR301_Public_SlidePuzzle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PPR301_API UClass* StaticClass<class ASlidePuzzle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PPR301_Source_PPR301_Public_SlidePuzzle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
