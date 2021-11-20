﻿#pragma once

// Name: Hydroneer, Version: 1.7.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class MaterialShaderQualitySettings_EMobileCSMQuality : uint8_t
{
	EMobileCSMQuality__NoFiltering = 0,
	EMobileCSMQuality__PCF_1x1     = 1,
	EMobileCSMQuality__PCF_2x2     = 2,
	EMobileCSMQuality__EMobileCSMQuality_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0008
struct FMaterialQualityOverrides
{
	bool                                               bDiscardQualityDuringCook;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableOverride;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceFullyRough;                                          // 0x0002(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceNonMetal;                                            // 0x0003(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceDisableLMDirectionality;                             // 0x0004(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceLQReflections;                                       // 0x0005(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableMaterialNormalCalculation;                         // 0x0006(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MaterialShaderQualitySettings_EMobileCSMQuality    MobileCSMQuality;                                          // 0x0007(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
