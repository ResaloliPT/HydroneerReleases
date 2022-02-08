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
	 * Function BP_ParentItem.BP_ParentItem_C.ClearConveyorTimers
	 */
	struct ABP_ParentItem_C_ClearConveyorTimers_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ConveyorTimerLoop
	 */
	struct ABP_ParentItem_C_ConveyorTimerLoop_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.SetAdditionalMeshesNewResponse
	 */
	struct ABP_ParentItem_C_SetAdditionalMeshesNewResponse_Params
	{
	public:
		Engine_ECollisionResponse                                  NewResponse;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ScanForDropCollision
	 */
	struct ABP_ParentItem_C_ScanForDropCollision_Params
	{
	public:
		bool                                                       Can_Drop_;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ScanForItems
	 */
	struct ABP_ParentItem_C_ScanForItems_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.LerpPickup__FinishedFunc
	 */
	struct ABP_ParentItem_C_LerpPickup__FinishedFunc_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.LerpPickup__UpdateFunc
	 */
	struct ABP_ParentItem_C_LerpPickup__UpdateFunc_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ItemPickedUp
	 */
	struct ABP_ParentItem_C_ItemPickedUp_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ItemDropped
	 */
	struct ABP_ParentItem_C_ItemDropped_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.AttachToStorage
	 */
	struct ABP_ParentItem_C_AttachToStorage_Params
	{
	public:
		class AActor*                                              Storage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     MeshToAttachTo;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Engine_ECollisionChannel                                   Channel;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideInWater
	 */
	struct ABP_ParentItem_C_OverrideInWater_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideClickNoTarget
	 */
	struct ABP_ParentItem_C_OverrideClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideDroppedItem
	 */
	struct ABP_ParentItem_C_OverrideDroppedItem_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideRightClickNoTarget
	 */
	struct ABP_ParentItem_C_OverrideRightClickNoTarget_Params
	{
	public:
		class ABP_GameController_C*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideLoaded
	 */
	struct ABP_ParentItem_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverridePickedup
	 */
	struct ABP_ParentItem_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.DetachFromStorage
	 */
	struct ABP_ParentItem_C_DetachFromStorage_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ItemFreeDropping
	 */
	struct ABP_ParentItem_C_ItemFreeDropping_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideStopClicking
	 */
	struct ABP_ParentItem_C_OverrideStopClicking_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideMouseActivated
	 */
	struct ABP_ParentItem_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideHighlighted
	 */
	struct ABP_ParentItem_C_OverrideHighlighted_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideUnhighlighted
	 */
	struct ABP_ParentItem_C_OverrideUnhighlighted_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.TryAttachToStorage
	 */
	struct ABP_ParentItem_C_TryAttachToStorage_Params
	{
	public:
		class AActor*                                              BeingStoredBy;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.StorageLoop
	 */
	struct ABP_ParentItem_C_StorageLoop_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.TypeBPhysicsLock
	 */
	struct ABP_ParentItem_C_TypeBPhysicsLock_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.TriggerTypeBLock
	 */
	struct ABP_ParentItem_C_TriggerTypeBLock_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideRightClickIsTarget
	 */
	struct ABP_ParentItem_C_OverrideRightClickIsTarget_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.LerpToCharacter
	 */
	struct ABP_ParentItem_C_LerpToCharacter_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.EnteredConveyor
	 */
	struct ABP_ParentItem_C_EnteredConveyor_Params
	{
	public:
		class UActorComponent*                                     Collision_Comp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             VecDirection;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WaterPressure;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LockOut_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ExitConveyor
	 */
	struct ABP_ParentItem_C_ExitConveyor_Params
	{
	public:
		class UActorComponent*                                     Collision_Comp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RemoveLockout;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.OverrideLockedPhysics
	 */
	struct ABP_ParentItem_C_OverrideLockedPhysics_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.FlashRed
	 */
	struct ABP_ParentItem_C_FlashRed_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.FlashRedTimer
	 */
	struct ABP_ParentItem_C_FlashRedTimer_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.AutoLock
	 */
	struct ABP_ParentItem_C_AutoLock_Params
	{
	};

	/**
	 * Function BP_ParentItem.BP_ParentItem_C.ExecuteUbergraph_BP_ParentItem
	 */
	struct ABP_ParentItem_C_ExecuteUbergraph_BP_ParentItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
