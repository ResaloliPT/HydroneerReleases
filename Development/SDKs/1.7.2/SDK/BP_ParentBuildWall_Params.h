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
	 * Function BP_ParentBuildWall.BP_ParentBuildWall_C.OverrideLoaded
	 */
	struct ABP_ParentBuildWall_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_ParentBuildWall.BP_ParentBuildWall_C.OverrideMouseActivated
	 */
	struct ABP_ParentBuildWall_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildWall.BP_ParentBuildWall_C.PaintWall
	 */
	struct ABP_ParentBuildWall_C_PaintWall_Params
	{
	public:
		E_PaintColor_E_PaintColor                                  Color;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentBuildWall.BP_ParentBuildWall_C.ExecuteUbergraph_BP_ParentBuildWall
	 */
	struct ABP_ParentBuildWall_C_ExecuteUbergraph_BP_ParentBuildWall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
