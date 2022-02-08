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
	 * Function BP_SceneRoot.BP_SceneRoot_C.InitializeMaps
	 */
	struct ABP_SceneRoot_C_InitializeMaps_Params
	{
	};

	/**
	 * Function BP_SceneRoot.BP_SceneRoot_C.GetAllActiveActors
	 */
	struct ABP_SceneRoot_C_GetAllActiveActors_Params
	{
	public:
		TArray<class AActor*>                                      Actors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)

	};

	/**
	 * Function BP_SceneRoot.BP_SceneRoot_C.RegisterSceneNode
	 */
	struct ABP_SceneRoot_C_RegisterSceneNode_Params
	{
	public:
		class ABP_SceneNode_C*                                     Node;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NameID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_SceneRoot.BP_SceneRoot_C.SetSwitch
	 */
	struct ABP_SceneRoot_C_SetSwitch_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_SceneRoot.BP_SceneRoot_C.ReceiveBeginPlay
	 */
	struct ABP_SceneRoot_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_SceneRoot.BP_SceneRoot_C.ExecuteUbergraph_BP_SceneRoot
	 */
	struct ABP_SceneRoot_C_ExecuteUbergraph_BP_SceneRoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
