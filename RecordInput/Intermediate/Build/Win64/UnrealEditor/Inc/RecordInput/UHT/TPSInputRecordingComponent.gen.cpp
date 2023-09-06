// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecordInput/Public/TPSInputRecordingComponent.h"
#include "RecordInput/Public/InputRecordingUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSInputRecordingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
	RECORDINPUT_API UClass* Z_Construct_UClass_UTPSInputRecordingComponent();
	RECORDINPUT_API UClass* Z_Construct_UClass_UTPSInputRecordingComponent_NoRegister();
	RECORDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FBindingsData();
	UPackage* Z_Construct_UPackage__Script_RecordInput();
// End Cross Module References
	DEFINE_FUNCTION(UTPSInputRecordingComponent::execTestForwardMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestForwardMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTPSInputRecordingComponent::execStartRecord)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecord();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTPSInputRecordingComponent::execStopRecord)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRecord();
		P_NATIVE_END;
	}
	void UTPSInputRecordingComponent::StaticRegisterNativesUTPSInputRecordingComponent()
	{
		UClass* Class = UTPSInputRecordingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartRecord", &UTPSInputRecordingComponent::execStartRecord },
			{ "StopRecord", &UTPSInputRecordingComponent::execStopRecord },
			{ "TestForwardMove", &UTPSInputRecordingComponent::execTestForwardMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTPSInputRecordingComponent_StartRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPSInputRecordingComponent_StartRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TPSInputRecordingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPSInputRecordingComponent_StartRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPSInputRecordingComponent, nullptr, "StartRecord", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTPSInputRecordingComponent_StartRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPSInputRecordingComponent_StartRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTPSInputRecordingComponent_StartRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPSInputRecordingComponent_StartRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPSInputRecordingComponent_StopRecord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPSInputRecordingComponent_StopRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TPSInputRecordingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPSInputRecordingComponent_StopRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPSInputRecordingComponent, nullptr, "StopRecord", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTPSInputRecordingComponent_StopRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPSInputRecordingComponent_StopRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTPSInputRecordingComponent_StopRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPSInputRecordingComponent_StopRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPSInputRecordingComponent_TestForwardMove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPSInputRecordingComponent_TestForwardMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TPSInputRecordingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPSInputRecordingComponent_TestForwardMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPSInputRecordingComponent, nullptr, "TestForwardMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTPSInputRecordingComponent_TestForwardMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPSInputRecordingComponent_TestForwardMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTPSInputRecordingComponent_TestForwardMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPSInputRecordingComponent_TestForwardMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPSInputRecordingComponent);
	UClass* Z_Construct_UClass_UTPSInputRecordingComponent_NoRegister()
	{
		return UTPSInputRecordingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTPSInputRecordingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingsDataForRun_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingsDataForRun_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BindingsDataForRun;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPSInputRecordingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RecordInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTPSInputRecordingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTPSInputRecordingComponent_StartRecord, "StartRecord" }, // 2798775242
		{ &Z_Construct_UFunction_UTPSInputRecordingComponent_StopRecord, "StopRecord" }, // 761948035
		{ &Z_Construct_UFunction_UTPSInputRecordingComponent_TestForwardMove, "TestForwardMove" }, // 3886587423
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSInputRecordingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TPSInputRecordingComponent.h" },
		{ "ModuleRelativePath", "Public/TPSInputRecordingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "TPSInputRecordingComponent" },
		{ "ModuleRelativePath", "Public/TPSInputRecordingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTPSInputRecordingComponent, FileName), METADATA_PARAMS(Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_PlayerInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/TPSInputRecordingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTPSInputRecordingComponent, PlayerInput), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_PlayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_PlayerInput_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_BindingsDataForRun_Inner = { "BindingsDataForRun", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBindingsData, METADATA_PARAMS(nullptr, 0) }; // 306231101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_BindingsDataForRun_MetaData[] = {
		{ "ModuleRelativePath", "Public/TPSInputRecordingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_BindingsDataForRun = { "BindingsDataForRun", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTPSInputRecordingComponent, BindingsDataForRun), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_BindingsDataForRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_BindingsDataForRun_MetaData)) }; // 306231101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTPSInputRecordingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_PlayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_BindingsDataForRun_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPSInputRecordingComponent_Statics::NewProp_BindingsDataForRun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPSInputRecordingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPSInputRecordingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPSInputRecordingComponent_Statics::ClassParams = {
		&UTPSInputRecordingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTPSInputRecordingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTPSInputRecordingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTPSInputRecordingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTPSInputRecordingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTPSInputRecordingComponent()
	{
		if (!Z_Registration_Info_UClass_UTPSInputRecordingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPSInputRecordingComponent.OuterSingleton, Z_Construct_UClass_UTPSInputRecordingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPSInputRecordingComponent.OuterSingleton;
	}
	template<> RECORDINPUT_API UClass* StaticClass<UTPSInputRecordingComponent>()
	{
		return UTPSInputRecordingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPSInputRecordingComponent);
	UTPSInputRecordingComponent::~UTPSInputRecordingComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_TPSInputRecordingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_TPSInputRecordingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPSInputRecordingComponent, UTPSInputRecordingComponent::StaticClass, TEXT("UTPSInputRecordingComponent"), &Z_Registration_Info_UClass_UTPSInputRecordingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPSInputRecordingComponent), 3463417496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_TPSInputRecordingComponent_h_210280748(TEXT("/Script/RecordInput"),
		Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_TPSInputRecordingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_TPSInputRecordingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
