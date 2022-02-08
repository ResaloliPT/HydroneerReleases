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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function VoxelGraph.VoxelGraphBlueprintTools.SetVoxelGraphIntParameter
	 */
	struct UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Params
	{
	public:
		class UVoxelWorldGenerator*                                WorldGenerator;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UniqueName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VoxelGraph.VoxelGraphBlueprintTools.SetVoxelGraphFloatParameter
	 */
	struct UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Params
	{
	public:
		class UVoxelWorldGenerator*                                WorldGenerator;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                UniqueName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function VoxelGraph.VoxelGraphBlueprintTools.ClearConstantsOverrides
	 */
	struct UVoxelGraphBlueprintTools_ClearConstantsOverrides_Params
	{
	public:
		class UVoxelWorldGenerator*                                WorldGenerator;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
