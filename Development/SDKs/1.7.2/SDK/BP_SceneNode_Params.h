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
	 * Function BP_SceneNode.BP_SceneNode_C.GetRoot
	 */
	struct ABP_SceneNode_C_GetRoot_Params
	{
	public:
		class ABP_SceneRoot_C*                                     TheRoot;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_SceneNode.BP_SceneNode_C.OnSetNodeVisibility
	 */
	struct ABP_SceneNode_C_OnSetNodeVisibility_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_SceneNode.BP_SceneNode_C.SetActorVisibilityRecursive
	 */
	struct ABP_SceneNode_C_SetActorVisibilityRecursive_Params
	{
	public:
		class AActor*                                              Node;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NewVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_SceneNode.BP_SceneNode_C.SetNodeVisibility
	 */
	struct ABP_SceneNode_C_SetNodeVisibility_Params
	{
	public:
		bool                                                       NewVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
