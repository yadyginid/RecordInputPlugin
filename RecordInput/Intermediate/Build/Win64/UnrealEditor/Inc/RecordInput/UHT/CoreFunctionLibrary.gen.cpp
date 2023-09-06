// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecordInput/Public/CoreFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RECORDINPUT_API UClass* Z_Construct_UClass_UCoreFunctionLibrary();
	RECORDINPUT_API UClass* Z_Construct_UClass_UCoreFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RecordInput();
// End Cross Module References
	DEFINE_FUNCTION(UCoreFunctionLibrary::execRunMyAutomationTest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TestName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RoleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreFunctionLibrary::RunMyAutomationTest(Z_Param_TestName,Z_Param_RoleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreFunctionLibrary::execTestInputRun)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCoreFunctionLibrary::TestInputRun(Z_Param_Character);
		P_NATIVE_END;
	}
	void UCoreFunctionLibrary::StaticRegisterNativesUCoreFunctionLibrary()
	{
		UClass* Class = UCoreFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunMyAutomationTest", &UCoreFunctionLibrary::execRunMyAutomationTest },
			{ "TestInputRun", &UCoreFunctionLibrary::execTestInputRun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics
	{
		struct CoreFunctionLibrary_eventRunMyAutomationTest_Parms
		{
			FString TestName;
			int32 RoleIndex;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RoleIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::NewProp_TestName = { "TestName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoreFunctionLibrary_eventRunMyAutomationTest_Parms, TestName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::NewProp_RoleIndex = { "RoleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoreFunctionLibrary_eventRunMyAutomationTest_Parms, RoleIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::NewProp_TestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::NewProp_RoleIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Testing" },
		{ "ModuleRelativePath", "Public/CoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFunctionLibrary, nullptr, "RunMyAutomationTest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::CoreFunctionLibrary_eventRunMyAutomationTest_Parms), Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics
	{
		struct CoreFunctionLibrary_eventTestInputRun_Parms
		{
			ACharacter* Character;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CoreFunctionLibrary_eventTestInputRun_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/CoreFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreFunctionLibrary, nullptr, "TestInputRun", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics::CoreFunctionLibrary_eventTestInputRun_Parms), Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoreFunctionLibrary);
	UClass* Z_Construct_UClass_UCoreFunctionLibrary_NoRegister()
	{
		return UCoreFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoreFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RecordInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreFunctionLibrary_RunMyAutomationTest, "RunMyAutomationTest" }, // 4185961640
		{ &Z_Construct_UFunction_UCoreFunctionLibrary_TestInputRun, "TestInputRun" }, // 3229084896
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoreFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreFunctionLibrary_Statics::ClassParams = {
		&UCoreFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UCoreFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreFunctionLibrary.OuterSingleton, Z_Construct_UClass_UCoreFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoreFunctionLibrary.OuterSingleton;
	}
	template<> RECORDINPUT_API UClass* StaticClass<UCoreFunctionLibrary>()
	{
		return UCoreFunctionLibrary::StaticClass();
	}
	UCoreFunctionLibrary::UCoreFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreFunctionLibrary);
	UCoreFunctionLibrary::~UCoreFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_CoreFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_CoreFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoreFunctionLibrary, UCoreFunctionLibrary::StaticClass, TEXT("UCoreFunctionLibrary"), &Z_Registration_Info_UClass_UCoreFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreFunctionLibrary), 107371988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_CoreFunctionLibrary_h_200294783(TEXT("/Script/RecordInput"),
		Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_CoreFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_CoreFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
