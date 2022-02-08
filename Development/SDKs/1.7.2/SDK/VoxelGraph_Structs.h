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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum VoxelGraph.EVoxelFunctionAxisDependencies
	 */
	enum class VoxelGraph_EVoxelFunctionAxisDependencies : uint8_t
	{
		EVoxelFunctionAxisDependencies__X                                  = 0,
		EVoxelFunctionAxisDependencies__XYWithCache                        = 1,
		EVoxelFunctionAxisDependencies__XYWithoutCache                     = 2,
		EVoxelFunctionAxisDependencies__XYZWithCache                       = 3,
		EVoxelFunctionAxisDependencies__XYZWithoutCache                    = 4,
		EVoxelFunctionAxisDependencies__EVoxelFunctionAxisDependencies_MAX = 5
	};

	/**
	 * Enum VoxelGraph.EVoxelNodeIfBranchToUseForRangeAnalysis
	 */
	enum class VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis : uint8_t
	{
		EVoxelNodeIfBranchToUseForRangeAnalysis__None                                        = 0,
		EVoxelNodeIfBranchToUseForRangeAnalysis__UseTrue                                     = 1,
		EVoxelNodeIfBranchToUseForRangeAnalysis__UseFalse                                    = 2,
		EVoxelNodeIfBranchToUseForRangeAnalysis__EVoxelNodeIfBranchToUseForRangeAnalysis_MAX = 3
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphGeneratorDebugLevel
	 */
	enum class VoxelGraph_EVoxelGraphGeneratorDebugLevel : uint8_t
	{
		EVoxelGraphGeneratorDebugLevel__BeforeMacroInlining                = 0,
		EVoxelGraphGeneratorDebugLevel__AfterMacroInlining                 = 1,
		EVoxelGraphGeneratorDebugLevel__AfterBiomeMergeReplace             = 2,
		EVoxelGraphGeneratorDebugLevel__Output                             = 3,
		EVoxelGraphGeneratorDebugLevel__LOD                                = 4,
		EVoxelGraphGeneratorDebugLevel__Function                           = 5,
		EVoxelGraphGeneratorDebugLevel__Axis                               = 6,
		EVoxelGraphGeneratorDebugLevel__EVoxelGraphGeneratorDebugLevel_MAX = 7
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphPreviewType
	 */
	enum class VoxelGraph_EVoxelGraphPreviewType : uint8_t
	{
		EVoxelGraphPreviewType__Density                    = 0,
		EVoxelGraphPreviewType__Material                   = 1,
		EVoxelGraphPreviewType__EVoxelGraphPreviewType_MAX = 2
	};

	/**
	 * Enum VoxelGraph.EVoxelGraphPreviewAxes
	 */
	enum class VoxelGraph_EVoxelGraphPreviewAxes : uint8_t
	{
		EVoxelGraphPreviewAxes__X                          = 0,
		EVoxelGraphPreviewAxes__Y                          = 1,
		EVoxelGraphPreviewAxes__Z                          = 2,
		EVoxelGraphPreviewAxes__EVoxelGraphPreviewAxes_MAX = 3
	};

	/**
	 * Enum VoxelGraph.EVoxelPortalNodePinCategory
	 */
	enum class VoxelGraph_EVoxelPortalNodePinCategory : uint8_t
	{
		EVoxelPortalNodePinCategory__Boolean                         = 0,
		EVoxelPortalNodePinCategory__Int                             = 1,
		EVoxelPortalNodePinCategory__Float                           = 2,
		EVoxelPortalNodePinCategory__Material                        = 3,
		EVoxelPortalNodePinCategory__Seed                            = 4,
		EVoxelPortalNodePinCategory__EVoxelPortalNodePinCategory_MAX = 5
	};

	/**
	 * Enum VoxelGraph.EVoxelTextureSamplerMode
	 */
	enum class VoxelGraph_EVoxelTextureSamplerMode : uint8_t
	{
		EVoxelTextureSamplerMode__Clamp                        = 0,
		EVoxelTextureSamplerMode__Tile                         = 1,
		EVoxelTextureSamplerMode__EVoxelTextureSamplerMode_MAX = 2
	};

	/**
	 * Enum VoxelGraph.ECellularReturnType
	 */
	enum class VoxelGraph_ECellularReturnType : uint8_t
	{
		ECellularReturnType__CellValue               = 0,
		ECellularReturnType__Distance                = 1,
		ECellularReturnType__Distance2               = 2,
		ECellularReturnType__Distance2Add            = 3,
		ECellularReturnType__Distance2Sub            = 4,
		ECellularReturnType__Distance2Mul            = 5,
		ECellularReturnType__Distance2Div            = 6,
		ECellularReturnType__ECellularReturnType_MAX = 7
	};

	/**
	 * Enum VoxelGraph.ECellularDistanceFunction
	 */
	enum class VoxelGraph_ECellularDistanceFunction : uint8_t
	{
		ECellularDistanceFunction__Euclidean                     = 0,
		ECellularDistanceFunction__Manhattan                     = 1,
		ECellularDistanceFunction__Natural                       = 2,
		ECellularDistanceFunction__ECellularDistanceFunction_MAX = 3
	};

	/**
	 * Enum VoxelGraph.EInterp
	 */
	enum class VoxelGraph_EInterp : uint8_t
	{
		EInterp__Linear      = 0,
		EInterp__Hermite     = 1,
		EInterp__Quintic     = 2,
		EInterp__EInterp_MAX = 3
	};

	/**
	 * Enum VoxelGraph.EFractalType
	 */
	enum class VoxelGraph_EFractalType : uint8_t
	{
		EFractalType__FBM              = 0,
		EFractalType__Billow           = 1,
		EFractalType__RigidMulti       = 2,
		EFractalType__EFractalType_MAX = 3
	};

	/**
	 * Enum VoxelGraph.EVoxelDataPinCategory
	 */
	enum class VoxelGraph_EVoxelDataPinCategory : uint8_t
	{
		EVoxelDataPinCategory__Boolean                   = 0,
		EVoxelDataPinCategory__Int                       = 1,
		EVoxelDataPinCategory__Float                     = 2,
		EVoxelDataPinCategory__Material                  = 3,
		EVoxelDataPinCategory__EVoxelDataPinCategory_MAX = 4
	};

	/**
	 * Enum VoxelGraph.EVoxelPinCategory
	 */
	enum class VoxelGraph_EVoxelPinCategory : uint8_t
	{
		EVoxelPinCategory__Exec                  = 0,
		EVoxelPinCategory__Boolean               = 1,
		EVoxelPinCategory__Int                   = 2,
		EVoxelPinCategory__Float                 = 3,
		EVoxelPinCategory__Material              = 4,
		EVoxelPinCategory__Seed                  = 5,
		EVoxelPinCategory__Wildcard              = 6,
		EVoxelPinCategory__EVoxelPinCategory_MAX = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct VoxelGraph.VoxelPin
	 * Size -> 0x0048
	 */
	struct FVoxelPin
	{
	public:
		struct FGuid                                               PinId;                                                   // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultValue;                                            // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_EVoxelPinCategory                               PinCategory;                                             // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ADZ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVoxelNode*>                                  OtherNodes;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       OtherPinIds;                                             // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct VoxelGraph.FunctionSeparatorType
	 * Size -> 0x0018
	 */
	struct FFunctionSeparatorType
	{
	public:
		VoxelGraph_EVoxelDataPinCategory                           Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGVT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct VoxelGraph.BiomeMapElement
	 * Size -> 0x0018
	 */
	struct FBiomeMapElement
	{
	public:
		struct FColor                                              Color;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKUL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct VoxelGraph.VoxelGraphOutput
	 * Size -> 0x0020
	 */
	struct FVoxelGraphOutput
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_EVoxelDataPinCategory                           Category;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZ28[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Index;                                                   // 0x001C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct VoxelGraph.FlowMergeType
	 * Size -> 0x0018
	 */
	struct FFlowMergeType
	{
	public:
		VoxelGraph_EVoxelDataPinCategory                           Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUCD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct VoxelGraph.VoxelPinNameAndType
	 * Size -> 0x0030
	 */
	struct FVoxelPinNameAndType
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		VoxelGraph_EVoxelPinCategory                               Category;                                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSM9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultValue;                                            // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCustomDefaultValue;                                     // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNKG[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct VoxelGraph.VoxelPortalNodeSelector
	 * Size -> 0x0008
	 */
	struct FVoxelPortalNodeSelector
	{
	public:
		TWeakObjectPtr<class UVoxelLocalVariableDeclaration>       Input;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
