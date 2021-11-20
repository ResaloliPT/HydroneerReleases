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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationSharing.AnimationSetup
// 0x0038
struct FAnimationSetup
{
	unsigned char                                      AnimSequence[0x28];                                        // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AnimationSharing.AnimationSetup.AnimSequence
	class UClass*                                      AnimBlueprint;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                             NumRandomizedInstances;                                    // 0x0030(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformBool                            Enabled;                                                   // 0x0034(0x0001) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U7Y1[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AnimationSharing.AnimationStateEntry
// 0x0030
struct FAnimationStateEntry
{
	unsigned char                                      State;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9AF7[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAnimationSetup>                     AnimationSetups;                                           // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bOnDemand;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAdditive;                                                 // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YDGN[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendTime;                                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnToPreviousState;                                    // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetNextState;                                             // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NextState;                                                 // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VRCI[0x1];                                     // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPerPlatformInt                             MaximumNumberOfConcurrentInstances;                        // 0x0024(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              WiggleTimePercentage;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiresCurves;                                           // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CLRS[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// 0x0078
struct FPerSkeletonAnimationSharingSetup
{
	unsigned char                                      Skeleton[0x28];                                            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AnimationSharing.PerSkeletonAnimationSharingSetup.Skeleton
	unsigned char                                      SkeletalMesh[0x28];                                        // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AnimationSharing.PerSkeletonAnimationSharingSetup.SkeletalMesh
	class UClass*                                      BlendAnimBlueprint;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AdditiveAnimBlueprint;                                     // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      StateProcessorClass;                                       // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimationStateEntry>                AnimationStates;                                           // 0x0068(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AnimationSharing.AnimationSharingScalability
// 0x0010
struct FAnimationSharingScalability
{
	struct FPerPlatformBool                            UseBlendTransitions;                                       // 0x0000(0x0001) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TXS8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPerPlatformFloat                           BlendSignificanceValue;                                    // 0x0004(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                             MaximumNumberConcurrentBlends;                             // 0x0008(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformFloat                           TickSignificanceValue;                                     // 0x000C(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// 0x0008 (0x0058 - 0x0050)
struct FTickAnimationSharingFunction : public FTickFunction
{
	unsigned char                                      UnknownData_GSQM[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
