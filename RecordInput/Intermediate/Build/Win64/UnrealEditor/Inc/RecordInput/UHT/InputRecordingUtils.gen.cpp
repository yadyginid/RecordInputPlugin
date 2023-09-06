// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecordInput/Public/InputRecordingUtils.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputRecordingUtils() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	RECORDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FActionData();
	RECORDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FAxisData();
	RECORDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FBindingsData();
	RECORDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputData();
	UPackage* Z_Construct_UPackage__Script_RecordInput();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AxisData;
class UScriptStruct* FAxisData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AxisData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AxisData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxisData, (UObject*)Z_Construct_UPackage__Script_RecordInput(), TEXT("AxisData"));
	}
	return Z_Registration_Info_UScriptStruct_AxisData.OuterSingleton;
}
template<> RECORDINPUT_API UScriptStruct* StaticStruct<FAxisData>()
{
	return FAxisData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAxisData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAxisData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxisData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAxisData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAxisData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisData_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAxisData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAxisData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisData_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxisData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisData_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxisData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RecordInput,
		nullptr,
		&NewStructOps,
		"AxisData",
		sizeof(FAxisData),
		alignof(FAxisData),
		Z_Construct_UScriptStruct_FAxisData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAxisData()
	{
		if (!Z_Registration_Info_UScriptStruct_AxisData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AxisData.InnerSingleton, Z_Construct_UScriptStruct_FAxisData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AxisData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionData;
class UScriptStruct* FActionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionData, (UObject*)Z_Construct_UPackage__Script_RecordInput(), TEXT("ActionData"));
	}
	return Z_Registration_Info_UScriptStruct_ActionData.OuterSingleton;
}
template<> RECORDINPUT_API UScriptStruct* StaticStruct<FActionData>()
{
	return FActionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static void NewProp_State_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActionData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActionData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FActionData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionData_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActionData, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FActionData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionData_Statics::NewProp_Key_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionData_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActionData_Statics::NewProp_State_SetBit(void* Obj)
	{
		((FActionData*)Obj)->State = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActionData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActionData), &Z_Construct_UScriptStruct_FActionData_Statics::NewProp_State_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActionData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionData_Statics::NewProp_State_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionData_Statics::NewProp_State,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RecordInput,
		nullptr,
		&NewStructOps,
		"ActionData",
		sizeof(FActionData),
		alignof(FActionData),
		Z_Construct_UScriptStruct_FActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActionData()
	{
		if (!Z_Registration_Info_UScriptStruct_ActionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionData.InnerSingleton, Z_Construct_UScriptStruct_FActionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BindingsData;
class UScriptStruct* FBindingsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BindingsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BindingsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBindingsData, (UObject*)Z_Construct_UPackage__Script_RecordInput(), TEXT("BindingsData"));
	}
	return Z_Registration_Info_UScriptStruct_BindingsData.OuterSingleton;
}
template<> RECORDINPUT_API UScriptStruct* StaticStruct<FBindingsData>()
{
	return FBindingsData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBindingsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindingsData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBindingsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBindingsData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_AxisValues_Inner = { "AxisValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAxisData, METADATA_PARAMS(nullptr, 0) }; // 73591550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_AxisValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_AxisValues = { "AxisValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBindingsData, AxisValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_AxisValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_AxisValues_MetaData)) }; // 73591550
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_ActionValues_Inner = { "ActionValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActionData, METADATA_PARAMS(nullptr, 0) }; // 1071800765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_ActionValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_ActionValues = { "ActionValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBindingsData, ActionValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_ActionValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_ActionValues_MetaData)) }; // 1071800765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBindingsData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_WorldTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_WorldTime = { "WorldTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBindingsData, WorldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_WorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_WorldTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBindingsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_AxisValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_AxisValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_ActionValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_ActionValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBindingsData_Statics::NewProp_WorldTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBindingsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RecordInput,
		nullptr,
		&NewStructOps,
		"BindingsData",
		sizeof(FBindingsData),
		alignof(FBindingsData),
		Z_Construct_UScriptStruct_FBindingsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBindingsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBindingsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBindingsData()
	{
		if (!Z_Registration_Info_UScriptStruct_BindingsData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BindingsData.InnerSingleton, Z_Construct_UScriptStruct_FBindingsData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BindingsData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputData;
class UScriptStruct* FInputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputData, (UObject*)Z_Construct_UPackage__Script_RecordInput(), TEXT("InputData"));
	}
	return Z_Registration_Info_UScriptStruct_InputData.OuterSingleton;
}
template<> RECORDINPUT_API UScriptStruct* StaticStruct<FInputData>()
{
	return FInputData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBindingsData, METADATA_PARAMS(nullptr, 0) }; // 306231101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputData, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Bindings_MetaData)) }; // 306231101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRecordingUtils.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputData, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_InitialTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_InitialTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RecordInput,
		nullptr,
		&NewStructOps,
		"InputData",
		sizeof(FInputData),
		alignof(FInputData),
		Z_Construct_UScriptStruct_FInputData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputData()
	{
		if (!Z_Registration_Info_UScriptStruct_InputData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputData.InnerSingleton, Z_Construct_UScriptStruct_FInputData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_InputRecordingUtils_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_InputRecordingUtils_h_Statics::ScriptStructInfo[] = {
		{ FAxisData::StaticStruct, Z_Construct_UScriptStruct_FAxisData_Statics::NewStructOps, TEXT("AxisData"), &Z_Registration_Info_UScriptStruct_AxisData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAxisData), 73591550U) },
		{ FActionData::StaticStruct, Z_Construct_UScriptStruct_FActionData_Statics::NewStructOps, TEXT("ActionData"), &Z_Registration_Info_UScriptStruct_ActionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionData), 1071800765U) },
		{ FBindingsData::StaticStruct, Z_Construct_UScriptStruct_FBindingsData_Statics::NewStructOps, TEXT("BindingsData"), &Z_Registration_Info_UScriptStruct_BindingsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBindingsData), 306231101U) },
		{ FInputData::StaticStruct, Z_Construct_UScriptStruct_FInputData_Statics::NewStructOps, TEXT("InputData"), &Z_Registration_Info_UScriptStruct_InputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputData), 3000842028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_InputRecordingUtils_h_212380053(TEXT("/Script/RecordInput"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_InputRecordingUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_1_Desktop_RecordInputProject_RecordInputProject_Plugins_RecordInput_Source_RecordInput_Public_InputRecordingUtils_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
