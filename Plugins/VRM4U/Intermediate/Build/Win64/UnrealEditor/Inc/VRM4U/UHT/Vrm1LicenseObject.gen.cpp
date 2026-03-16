// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/Vrm1LicenseObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrm1LicenseObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VRM4U();
VRM4U_API UClass* Z_Construct_UClass_UVrm1LicenseObject();
VRM4U_API UClass* Z_Construct_UClass_UVrm1LicenseObject_NoRegister();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FLicenseBoolDataPair();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FLicenseStringDataArray();
VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FLicenseStringDataPair();
// End Cross Module References

// Begin ScriptStruct FLicenseStringDataPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LicenseStringDataPair;
class UScriptStruct* FLicenseStringDataPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LicenseStringDataPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LicenseStringDataPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLicenseStringDataPair, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("LicenseStringDataPair"));
	}
	return Z_Registration_Info_UScriptStruct_LicenseStringDataPair.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FLicenseStringDataPair>()
{
	return FLicenseStringDataPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "AutoExpandCategories", "License" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "Category", "License" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "Category", "License" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLicenseStringDataPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLicenseStringDataPair, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLicenseStringDataPair, value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"LicenseStringDataPair",
	Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::PropPointers),
	sizeof(FLicenseStringDataPair),
	alignof(FLicenseStringDataPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLicenseStringDataPair()
{
	if (!Z_Registration_Info_UScriptStruct_LicenseStringDataPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LicenseStringDataPair.InnerSingleton, Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LicenseStringDataPair.InnerSingleton;
}
// End ScriptStruct FLicenseStringDataPair

// Begin ScriptStruct FLicenseStringDataArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LicenseStringDataArray;
class UScriptStruct* FLicenseStringDataArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LicenseStringDataArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LicenseStringDataArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLicenseStringDataArray, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("LicenseStringDataArray"));
	}
	return Z_Registration_Info_UScriptStruct_LicenseStringDataArray.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FLicenseStringDataArray>()
{
	return FLicenseStringDataArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "AutoExpandCategories", "License" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "Category", "License" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "Category", "License" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLicenseStringDataArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLicenseStringDataArray, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::NewProp_value_Inner = { "value", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLicenseStringDataArray, value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::NewProp_value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"LicenseStringDataArray",
	Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::PropPointers),
	sizeof(FLicenseStringDataArray),
	alignof(FLicenseStringDataArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLicenseStringDataArray()
{
	if (!Z_Registration_Info_UScriptStruct_LicenseStringDataArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LicenseStringDataArray.InnerSingleton, Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LicenseStringDataArray.InnerSingleton;
}
// End ScriptStruct FLicenseStringDataArray

// Begin ScriptStruct FLicenseBoolDataPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LicenseBoolDataPair;
class UScriptStruct* FLicenseBoolDataPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LicenseBoolDataPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LicenseBoolDataPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLicenseBoolDataPair, (UObject*)Z_Construct_UPackage__Script_VRM4U(), TEXT("LicenseBoolDataPair"));
	}
	return Z_Registration_Info_UScriptStruct_LicenseBoolDataPair.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FLicenseBoolDataPair>()
{
	return FLicenseBoolDataPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "AutoExpandCategories", "License" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "Category", "License" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "Category", "License" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static void NewProp_value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLicenseBoolDataPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLicenseBoolDataPair, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
void Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::NewProp_value_SetBit(void* Obj)
{
	((FLicenseBoolDataPair*)Obj)->value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLicenseBoolDataPair), &Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::NewProp_value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	nullptr,
	&NewStructOps,
	"LicenseBoolDataPair",
	Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::PropPointers),
	sizeof(FLicenseBoolDataPair),
	alignof(FLicenseBoolDataPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLicenseBoolDataPair()
{
	if (!Z_Registration_Info_UScriptStruct_LicenseBoolDataPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LicenseBoolDataPair.InnerSingleton, Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LicenseBoolDataPair.InnerSingleton;
}
// End ScriptStruct FLicenseBoolDataPair

// Begin Class UVrm1LicenseObject
void UVrm1LicenseObject::StaticRegisterNativesUVrm1LicenseObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrm1LicenseObject);
UClass* Z_Construct_UClass_UVrm1LicenseObject_NoRegister()
{
	return UVrm1LicenseObject::StaticClass();
}
struct Z_Construct_UClass_UVrm1LicenseObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "License" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Vrm1LicenseObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_thumbnail_MetaData[] = {
		{ "Category", "Information" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicenseString_MetaData[] = {
		{ "Category", "License" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicenseStringArray_MetaData[] = {
		{ "Category", "License" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicenseBool_MetaData[] = {
		{ "Category", "License" },
		{ "ModuleRelativePath", "Public/Vrm1LicenseObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_thumbnail;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LicenseString_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LicenseString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LicenseStringArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LicenseStringArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LicenseBool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LicenseBool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrm1LicenseObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_thumbnail = { "thumbnail", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrm1LicenseObject, thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_thumbnail_MetaData), NewProp_thumbnail_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseString_Inner = { "LicenseString", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLicenseStringDataPair, METADATA_PARAMS(0, nullptr) }; // 2883432721
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseString = { "LicenseString", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrm1LicenseObject, LicenseString), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicenseString_MetaData), NewProp_LicenseString_MetaData) }; // 2883432721
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseStringArray_Inner = { "LicenseStringArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLicenseStringDataArray, METADATA_PARAMS(0, nullptr) }; // 2341886905
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseStringArray = { "LicenseStringArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrm1LicenseObject, LicenseStringArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicenseStringArray_MetaData), NewProp_LicenseStringArray_MetaData) }; // 2341886905
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseBool_Inner = { "LicenseBool", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLicenseBoolDataPair, METADATA_PARAMS(0, nullptr) }; // 562987867
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseBool = { "LicenseBool", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVrm1LicenseObject, LicenseBool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicenseBool_MetaData), NewProp_LicenseBool_MetaData) }; // 562987867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrm1LicenseObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_thumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseString_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseStringArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseStringArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseBool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrm1LicenseObject_Statics::NewProp_LicenseBool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrm1LicenseObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVrm1LicenseObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVrm1LicenseObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrm1LicenseObject_Statics::ClassParams = {
	&UVrm1LicenseObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVrm1LicenseObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVrm1LicenseObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVrm1LicenseObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UVrm1LicenseObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVrm1LicenseObject()
{
	if (!Z_Registration_Info_UClass_UVrm1LicenseObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrm1LicenseObject.OuterSingleton, Z_Construct_UClass_UVrm1LicenseObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVrm1LicenseObject.OuterSingleton;
}
template<> VRM4U_API UClass* StaticClass<UVrm1LicenseObject>()
{
	return UVrm1LicenseObject::StaticClass();
}
UVrm1LicenseObject::UVrm1LicenseObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVrm1LicenseObject);
UVrm1LicenseObject::~UVrm1LicenseObject() {}
// End Class UVrm1LicenseObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_Vrm1LicenseObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLicenseStringDataPair::StaticStruct, Z_Construct_UScriptStruct_FLicenseStringDataPair_Statics::NewStructOps, TEXT("LicenseStringDataPair"), &Z_Registration_Info_UScriptStruct_LicenseStringDataPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLicenseStringDataPair), 2883432721U) },
		{ FLicenseStringDataArray::StaticStruct, Z_Construct_UScriptStruct_FLicenseStringDataArray_Statics::NewStructOps, TEXT("LicenseStringDataArray"), &Z_Registration_Info_UScriptStruct_LicenseStringDataArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLicenseStringDataArray), 2341886905U) },
		{ FLicenseBoolDataPair::StaticStruct, Z_Construct_UScriptStruct_FLicenseBoolDataPair_Statics::NewStructOps, TEXT("LicenseBoolDataPair"), &Z_Registration_Info_UScriptStruct_LicenseBoolDataPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLicenseBoolDataPair), 562987867U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVrm1LicenseObject, UVrm1LicenseObject::StaticClass, TEXT("UVrm1LicenseObject"), &Z_Registration_Info_UClass_UVrm1LicenseObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrm1LicenseObject), 124232300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_Vrm1LicenseObject_h_3179138006(TEXT("/Script/VRM4U"),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_Vrm1LicenseObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_Vrm1LicenseObject_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_Vrm1LicenseObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEGAME_5_4_XMBBlaster_Plugins_VRM4U_Source_VRM4U_Public_Vrm1LicenseObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
