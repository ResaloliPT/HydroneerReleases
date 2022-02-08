#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class VoxelHelpers.MaterialExpressionBlendMaterialAttributesBarycentric
	 * Size -> 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionBlendMaterialAttributesBarycentric : public UMaterialExpression
	{
	public:
		struct FMaterialAttributesInput                            A;                                                       // 0x0040(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UEQ[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMaterialAttributesInput                            B;                                                       // 0x0058(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4G7M[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMaterialAttributesInput                            C;                                                       // 0x0070(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KSC[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    Alpha0;                                                  // 0x0088(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JC5Q[0x8];                                   // 0x0094(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    Alpha1;                                                  // 0x009C(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RNB[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelHelpers.VoxelColorWheel
	 * Size -> 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
	 */
	class UVoxelColorWheel : public UWidget
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnColorChanged;                                          // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5646[0x10];                                  // 0x0128(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
