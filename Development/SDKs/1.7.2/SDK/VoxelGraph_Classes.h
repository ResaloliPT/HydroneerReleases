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
	 * Class VoxelGraph.VoxelNode
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UVoxelNode : public UObject
	{
	public:
		TArray<struct FVoxelPin>                                   InputPins;                                               // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVoxelPin>                                   OutputPins;                                              // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsPreviewing;                                           // 0x0048(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OATP[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PreviewPinIndex;                                         // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastPreviewPinIndex;                                     // 0x0050(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EUK[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoxelGraphGenerator*                                Graph;                                                   // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InputPinCount;                                           // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6C13[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BiomeMerge
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UVoxelNode_BiomeMerge : public UVoxelNode
	{
	public:
		TArray<class FString>                                      Biomes;                                                  // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFunctionSeparatorType>                      AdditionalData;                                          // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5M1[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNodeHelper
	 * Size -> 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
	 */
	class UVoxelNodeHelper : public UVoxelNode
	{
	public:
		unsigned char                                              UnknownData_DJ1L[0x40];                                  // 0x0068(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelMaterialNode
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelMaterialNode : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelFloatNode
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelFloatNode : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelIntNode
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelIntNode : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelEditNodeBase
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelEditNodeBase : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNoiseNodeBase
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNoiseNodeBase : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelExposedNode
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class UVoxelExposedNode : public UVoxelNodeHelper
	{
	public:
		class FName                                                UniqueName;                                              // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Category;                                                // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tooltip;                                                 // 0x00C0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeRenamed;                                           // 0x00D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ME66[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BiomeMapSampler
	 * Size -> 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_BiomeMapSampler : public UVoxelExposedNode
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Threshold;                                               // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IC2F[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBiomeMapElement>                            Biomes;                                                  // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Curve
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_Curve : public UVoxelExposedNode
	{
	public:
		class UCurveFloat*                                         Curve;                                                   // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CurveColor
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_CurveColor : public UVoxelExposedNode
	{
	public:
		class UCurveLinearColor*                                   Curve;                                                   // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_XF
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_XF : public UVoxelFloatNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_YF
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_YF : public UVoxelFloatNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ZF
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_ZF : public UVoxelFloatNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_XI
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_XI : public UVoxelIntNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_YI
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_YI : public UVoxelIntNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ZI
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_ZI : public UVoxelIntNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetColor
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_GetColor : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MakeMaterialFromColor
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_MakeMaterialFromColor : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetIndex
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_GetIndex : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MakeMaterialFromSingleIndex
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_MakeMaterialFromSingleIndex : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetDoubleIndex
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_GetDoubleIndex : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MakeMaterialFromDoubleIndex
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_MakeMaterialFromDoubleIndex : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FMax
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FMax : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FMin
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FMin : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IMax
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_IMax : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IMin
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_IMin : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FLess
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FLess : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FLessEqual
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FLessEqual : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FGreater
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FGreater : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FGreaterEqual
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FGreaterEqual : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FEqual
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FEqual : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FNotEqual
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FNotEqual : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ILess
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_ILess : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ILessEqual
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_ILessEqual : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IGreater
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_IGreater : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IGreaterEqual
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_IGreaterEqual : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IEqual
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_IEqual : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_INotEqual
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_INotEqual : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FAdd
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FAdd : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FMultiply
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FMultiply : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FSubstract
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FSubstract : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FDivide
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FDivide : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IAdd
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_IAdd : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IMultiply
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_IMultiply : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ISubstract
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_ISubstract : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IDivide
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_IDivide : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ILeftBitShift
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_ILeftBitShift : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IRightBitShift
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_IRightBitShift : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FloatOfInt
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FloatOfInt : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Round
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Round : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Lerp
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Lerp : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SafeLerp
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_SafeLerp : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Clamp
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Clamp : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BAnd
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_BAnd : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BOr
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_BOr : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_BNot
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_BNot : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SwitchInt
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_SwitchInt : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SwitchFloat
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_SwitchFloat : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_1MinusX
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_1MinusX : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_OneOverX
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_OneOverX : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_MinusX
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_MinusX : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Sqrt
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Sqrt : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Pow
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Pow : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IMod
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_IMod : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FMod
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FMod : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FAbs
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FAbs : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IAbs
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_IAbs : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Ceil
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Ceil : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Floor
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Floor : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VectorLength
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_VectorLength : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Fraction
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Fraction : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FSign
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_FSign : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ISign
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_ISign : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_InvSqrt
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_InvSqrt : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Loge
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Loge : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Exp
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Exp : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Sin
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Sin : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Asin
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Asin : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Sinh
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Sinh : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Cos
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Cos : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Acos
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Acos : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Tan
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Tan : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Atan
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Atan : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Atan2
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Atan2 : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VectorRotateAngleAxis
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_VectorRotateAngleAxis : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_PerlinWormDistance
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_PerlinWormDistance : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_LOD
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_LOD : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RandomFloat
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_RandomFloat : public UVoxelNodeHelper
	{
	public:
		float                                                      Min;                                                     // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RandomInt
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_RandomInt : public UVoxelNodeHelper
	{
	public:
		int32_t                                                    Min;                                                     // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VoxelSize
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_VoxelSize : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_WorldSize
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_WorldSize : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_If
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_If : public UVoxelNodeHelper
	{
	public:
		VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis         BranchToUseForRangeAnalysis;                             // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUFT[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IfWithDefaultToFalse
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UVoxelNode_IfWithDefaultToFalse : public UVoxelNode_If
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IfWithDefaultToTrue
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UVoxelNode_IfWithDefaultToTrue : public UVoxelNode_If
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetValue
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_SetValue : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetColor
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_SetColor : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetDoubleIndex
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_SetDoubleIndex : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetSingleIndex
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_SetSingleIndex : public UVoxelMaterialNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_SetNode
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UVoxelNode_SetNode : public UVoxelNode
	{
	public:
		uint32_t                                                   Index;                                                   // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVoxelGraphOutput                                   CachedOutput;                                            // 0x006C(0x0020) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4JXO[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FunctionSeparator
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	class UVoxelNode_FunctionSeparator : public UVoxelNode
	{
	public:
		TArray<struct FFunctionSeparatorType>                      ArgTypes;                                                // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<VoxelGraph_EVoxelDataPinCategory>                   Types;                                                   // 0x0078(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FlowMerge
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UVoxelNode_FlowMerge : public UVoxelNode
	{
	public:
		TArray<struct FFlowMergeType>                              Types;                                                   // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelOptionallyExposedNode
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UVoxelOptionallyExposedNode : public UVoxelExposedNode
	{
	public:
		bool                                                       bExposeToBP;                                             // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKB7[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_NoiseNode
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_NoiseNode : public UVoxelNoiseNodeBase
	{
	public:
		float                                                      Frequency;                                               // 0x00A8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_EInterp                                         Interpolation;                                           // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0HQ8[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   NumberOfSamples;                                         // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQWV[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVoxelRange>                                 OutputRanges;                                            // 0x00B8(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DGradientPerturb
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UVoxelNode_2DGradientPerturb : public UVoxelNode_NoiseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_NoiseNodeFractal
	 * Size -> 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
	 */
	class UVoxelNode_NoiseNodeFractal : public UVoxelNode_NoiseNode
	{
	public:
		int32_t                                                    FractalOctaves;                                          // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FractalLacunarity;                                       // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FractalGain;                                             // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_EFractalType                                    FractalType;                                             // 0x00D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9F52[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, unsigned char>                         LODToOctavesMap;                                         // 0x00D8(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DGradientPerturbFractal
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UVoxelNode_2DGradientPerturbFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DGradientPerturb
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UVoxelNode_3DGradientPerturb : public UVoxelNode_NoiseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DGradientPerturbFractal
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UVoxelNode_3DGradientPerturbFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelEditNode
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UVoxelEditNode : public UVoxelEditNodeBase
	{
	public:
		struct FVoxelWorldGeneratorPicker                          DefaultWorldGenerator;                                   // 0x00A8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_EditGetValue
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UVoxelNode_EditGetValue : public UVoxelEditNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_EditGetMaterial
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UVoxelNode_EditGetMaterial : public UVoxelEditNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_EditGetCustomOutput
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UVoxelNode_EditGetCustomOutput : public UVoxelEditNode
	{
	public:
		class FName                                                OutputName;                                              // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_EditGetHardness
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_EditGetHardness : public UVoxelEditNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_LocalToGlobal
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_LocalToGlobal : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GlobalToLocal
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_GlobalToLocal : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GlobalX
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_GlobalX : public UVoxelFloatNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GlobalY
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_GlobalY : public UVoxelFloatNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GlobalZ
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_GlobalZ : public UVoxelFloatNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphBlueprintTools
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelGraphBlueprintTools : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetVoxelGraphIntParameter(class UVoxelWorldGenerator* WorldGenerator, const class FName& UniqueName, int32_t Value);
		void STATIC_SetVoxelGraphFloatParameter(class UVoxelWorldGenerator* WorldGenerator, const class FName& UniqueName, float Value);
		void STATIC_ClearConstantsOverrides(class UVoxelWorldGenerator* WorldGenerator);
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphGenerator
	 * Size -> 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
	 */
	class UVoxelGraphGenerator : public UVoxelTransformableWorldGenerator
	{
	public:
		class UVoxelGraphOutputsConfig*                            Outputs;                                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntBox                                             WorldBounds;                                             // 0x0030(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutomaticPreview;                                       // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStats;                                            // 0x0049(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRangeAnalysisDebug;                               // 0x004A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFlowMergeAndFunctionsWarnings;                      // 0x004B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompileToCppOnSave;                                     // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P77N[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           SaveLocation;                                            // 0x0050(0x0010) Edit, NativeAccessSpecifierPublic
		bool                                                       bEnableRangeAnalysis;                                    // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideRangeAnalysisErrors;                                // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFunctions;                                          // 0x0062(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDetailedErrors;                                         // 0x0063(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebugGraph;                                       // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPinsIds;                                            // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JL1M[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		VoxelGraph_EVoxelGraphGeneratorDebugLevel                  DebugLevel;                                              // 0x0068(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WS2[0x3];                                   // 0x0066(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_BP3D[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TargetToDebug;                                           // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODToDebug;                                              // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FunctionToDebug;                                         // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_EVoxelFunctionAxisDependencies                  AxisDependenciesToDebug;                                 // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQ8X[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NodesDepthScaleFactor;                                   // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideDataNodes;                                          // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0MN[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVoxelNode*>                                  AllNodes;                                                // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UVoxelNode*>                                  DebugNodes;                                              // 0x00A8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UVoxelNode*                                          FirstNode;                                               // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               FirstNodePindId;                                         // 0x00C0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, float>                                   FloatParameters;                                         // 0x00D0(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TMap<class FName, int32_t>                                 IntParameters;                                           // 0x0120(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphGeneratorHelper
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UVoxelGraphGeneratorHelper : public UVoxelTransformableWorldGenerator
	{
	public:
		struct FIntBox                                             Bounds;                                                  // 0x0028(0x0018) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRangeAnalysis;                                    // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFT2[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphMacroInputOutputNode
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	class UVoxelGraphMacroInputOutputNode : public UVoxelNode
	{
	public:
		TArray<struct FVoxelPinNameAndType>                        Pins;                                                    // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UVoxelGraphMacro*                                    Macro;                                                   // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphMacroInputNode
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UVoxelGraphMacroInputNode : public UVoxelGraphMacroInputOutputNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphMacroOutputNode
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UVoxelGraphMacroOutputNode : public UVoxelGraphMacroInputOutputNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphMacro
	 * Size -> 0x0028 (FullSize[0x0198] - InheritedSize[0x0170])
	 */
	class UVoxelGraphMacro : public UVoxelGraphGenerator
	{
	public:
		class FString                                              Tooltip;                                                 // 0x0170(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInContextMenu;                                      // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LAN8[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoxelGraphMacroInputNode*                           InputNode;                                               // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelGraphMacroOutputNode*                          OutputNode;                                              // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphMacroNode
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UVoxelGraphMacroNode : public UVoxelNode
	{
	public:
		class UVoxelGraphMacro*                                    Macro;                                                   // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphOutputsConfig
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UVoxelGraphOutputsConfig : public UObject
	{
	public:
		TArray<struct FVoxelGraphOutput>                           Outputs;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphPreviewSettings
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UVoxelGraphPreviewSettings : public UObject
	{
	public:
		VoxelGraph_EVoxelGraphPreviewAxes                          LeftToRight;                                             // 0x0028(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MM1[0x3];                                   // 0x0028(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		VoxelGraph_EVoxelGraphPreviewAxes                          BottomToTop;                                             // 0x002C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YO5[0x3];                                   // 0x002C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FIntVector                                          Center;                                                  // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ZoomLevel;                                               // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreviewedBounds;                                         // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_EVoxelGraphPreviewType                          PreviewType2D;                                           // 0x0050(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KV3F[0x3];                                   // 0x0050(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		Voxel_EVoxelMaterialConfig                                 MaterialConfig;                                          // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MQ6[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                IndexColors;                                             // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bHeightBasedColor;                                       // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWater;                                            // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QV0S[0x2];                                   // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinValue;                                                // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Resolution;                                              // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODUsed;                                                 // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LightDirection;                                          // 0x0080(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartBias;                                               // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSteps;                                                // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Brightness;                                              // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadowDensity;                                           // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQMC[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         Mesh;                                                    // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Material;                                                // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MeshScale;                                               // 0x00B0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBI4[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoxelGraphGenerator*                                Graph;                                                   // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_HeightmapSampler
	 * Size -> 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_HeightmapSampler : public UVoxelExposedNode
	{
	public:
		bool                                                       bFloatHeightmap;                                         // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVIU[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoxelHeightmapAssetFloat*                           HeightmapFloat;                                          // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVoxelHeightmapAssetUINT16*                          HeightmapUINT16;                                         // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBilinearInterpolation;                                  // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6X5[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelLocalVariableBase
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UVoxelLocalVariableBase : public UVoxelNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelLocalVariableDeclaration
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	class UVoxelLocalVariableDeclaration : public UVoxelLocalVariableBase
	{
	public:
		class FName                                                Name;                                                    // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_EVoxelPortalNodePinCategory                     Category;                                                // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECP1[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               VariableGuid;                                            // 0x0074(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOMP[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelLocalVariableUsage
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	class UVoxelLocalVariableUsage : public UVoxelLocalVariableBase
	{
	public:
		struct FVoxelPortalNodeSelector                            Selector;                                                // 0x0068(0x0008) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		class UVoxelLocalVariableDeclaration*                      Declaration;                                             // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               DeclarationGuid;                                         // 0x0078(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelGraphNodeInterface
	 * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
	 */
	class UVoxelGraphNodeInterface : public UEdGraphNode
	{
	public:
		class FString                                              InfoMsg;                                                 // 0x0098(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WarningMsg;                                              // 0x00A8(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DependenciesMsg;                                         // 0x00B8(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatsMsg;                                                // 0x00C8(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RangeAnalysisErrorMsg;                                   // 0x00D8(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RangeAnalysisDebugMsg;                                   // 0x00E8(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_NoiseNodeWithDerivative
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UVoxelNode_NoiseNodeWithDerivative : public UVoxelNode_NoiseNode
	{
	public:
		bool                                                       bComputeDerivative;                                      // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2FL[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_NoiseNodeWithDerivativeFractal
	 * Size -> 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
	 */
	class UVoxelNode_NoiseNodeWithDerivativeFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		bool                                                       bComputeDerivative;                                      // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZNV[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DValueNoise
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UVoxelNode_2DValueNoise : public UVoxelNode_NoiseNodeWithDerivative
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DValueNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UVoxelNode_2DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DPerlinNoise
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UVoxelNode_2DPerlinNoise : public UVoxelNode_NoiseNodeWithDerivative
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DPerlinNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UVoxelNode_2DPerlinNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DSimplexNoise
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UVoxelNode_2DSimplexNoise : public UVoxelNode_NoiseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DSimplexNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UVoxelNode_2DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DCubicNoise
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UVoxelNode_2DCubicNoise : public UVoxelNode_NoiseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DCubicNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UVoxelNode_2DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DValueNoise
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UVoxelNode_3DValueNoise : public UVoxelNode_NoiseNodeWithDerivative
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DValueNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UVoxelNode_3DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DPerlinNoise
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UVoxelNode_3DPerlinNoise : public UVoxelNode_NoiseNodeWithDerivative
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DPerlinNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UVoxelNode_3DPerlinNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DSimplexNoise
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UVoxelNode_3DSimplexNoise : public UVoxelNode_NoiseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DSimplexNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UVoxelNode_3DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DCubicNoise
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UVoxelNode_3DCubicNoise : public UVoxelNode_NoiseNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DCubicNoiseFractal
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UVoxelNode_3DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_CellularNoise
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UVoxelNode_CellularNoise : public UVoxelNode_NoiseNode
	{
	public:
		VoxelGraph_ECellularDistanceFunction                       DistanceFunction;                                        // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_ECellularReturnType                             ReturnType;                                              // 0x00C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HJP[0x2];                                   // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Jitter;                                                  // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DCellularNoise
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UVoxelNode_2DCellularNoise : public UVoxelNode_CellularNoise
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DCellularNoise
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UVoxelNode_3DCellularNoise : public UVoxelNode_CellularNoise
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IQNoiseBase
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UVoxelNode_IQNoiseBase : public UVoxelNode_NoiseNodeWithDerivativeFractal
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DIQNoiseBase
	 * Size -> 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
	 */
	class UVoxelNode_2DIQNoiseBase : public UVoxelNode_IQNoiseBase
	{
	public:
		float                                                      Rotation;                                                // 0x0130(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLA1[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DIQNoiseBase
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UVoxelNode_3DIQNoiseBase : public UVoxelNode_IQNoiseBase
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0130(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNPI[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DIQNoise
	 * Size -> 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
	 */
	class UVoxelNode_2DIQNoise : public UVoxelNode_2DIQNoiseBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DIQNoise
	 * Size -> 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
	 */
	class UVoxelNode_3DIQNoise : public UVoxelNode_3DIQNoiseBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_LODSwitch
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UVoxelNode_LODSwitch : public UVoxelNode
	{
	public:
		VoxelGraph_EVoxelDataPinCategory                           Type;                                                    // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LOD;                                                     // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_008N[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_StaticClampFloat
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_StaticClampFloat : public UVoxelNodeHelper
	{
	public:
		float                                                      Min;                                                     // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RangeAnalysisDebuggerFloat
	 * Size -> 0x00A8 (FullSize[0x0150] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_RangeAnalysisDebuggerFloat : public UVoxelNodeHelper
	{
	public:
		float                                                      Min;                                                     // 0x00A8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x00AC(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GraphMin;                                                // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GraphMax;                                                // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GraphStep;                                               // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXJF[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x00C0(0x0088) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMTX[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Sleep
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Sleep : public UVoxelNodeHelper
	{
	public:
		int32_t                                                    NumberOfLoops;                                           // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HHW[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_TargetSelector
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_TargetSelector : public UVoxelNodeHelper
	{
	public:
		class FName                                                TargetName;                                              // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_RangeUnion
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_RangeUnion : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_FloatParameter
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UVoxelNode_FloatParameter : public UVoxelOptionallyExposedNode
	{
	public:
		float                                                      Value;                                                   // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHRF[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_IntParameter
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UVoxelNode_IntParameter : public UVoxelOptionallyExposedNode
	{
	public:
		int32_t                                                    Value;                                                   // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PUV[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_ColorParameter
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UVoxelNode_ColorParameter : public UVoxelOptionallyExposedNode
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x00E0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelSeedNode
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelSeedNode : public UVoxelNodeHelper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_Seed
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_Seed : public UVoxelSeedNode
	{
	public:
		int32_t                                                    DefaultValue;                                            // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x00AC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1R93[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_AddSeeds
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_AddSeeds : public UVoxelSeedNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_TextureSampler
	 * Size -> 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_TextureSampler : public UVoxelExposedNode
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBilinearInterpolation;                                  // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YR4W[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		VoxelGraph_EVoxelTextureSamplerMode                        Mode;                                                    // 0x00E4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZK1U[0x3];                                   // 0x00E1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_VoronoiNoiseBase
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_VoronoiNoiseBase : public UVoxelNoiseNodeBase
	{
	public:
		bool                                                       bComputeNeighbors;                                       // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZHI[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Dimension;                                               // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DVoronoiNoise
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UVoxelNode_2DVoronoiNoise : public UVoxelNode_VoronoiNoiseBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_2DWhiteNoise
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_2DWhiteNoise : public UVoxelNoiseNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_3DWhiteNoise
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UVoxelNode_3DWhiteNoise : public UVoxelNoiseNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_WorldGeneratorSamplerBase
	 * Size -> 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_WorldGeneratorSamplerBase : public UVoxelExposedNode
	{
	public:
		struct FVoxelWorldGeneratorPicker                          WorldGenerator;                                          // 0x00D8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        Seeds;                                                   // 0x00F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetWorldGeneratorValue
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class UVoxelNode_GetWorldGeneratorValue : public UVoxelNode_WorldGeneratorSamplerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_GetWorldGeneratorMaterial
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class UVoxelNode_GetWorldGeneratorMaterial : public UVoxelNode_WorldGeneratorSamplerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VoxelGraph.VoxelNode_WorldGeneratorSampler
	 * Size -> 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
	 */
	class UVoxelNode_WorldGeneratorSampler : public UVoxelExposedNode
	{
	public:
		struct FVoxelWorldGeneratorPicker                          WorldGenerator;                                          // 0x00D8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        Seeds;                                                   // 0x00F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
