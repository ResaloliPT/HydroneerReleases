/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ClearConveyorTimers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::ClearConveyorTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ClearConveyorTimers");
		
		ABP_ParentItem_C_ClearConveyorTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ConveyorTimerLoop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::ConveyorTimerLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ConveyorTimerLoop");
		
		ABP_ParentItem_C_ConveyorTimerLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.SetAdditionalMeshesNewResponse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Engine_ECollisionResponse                          NewResponse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::SetAdditionalMeshesNewResponse(Engine_ECollisionResponse NewResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.SetAdditionalMeshesNewResponse");
		
		ABP_ParentItem_C_SetAdditionalMeshesNewResponse_Params params {};
		params.NewResponse = NewResponse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ScanForDropCollision
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Can_Drop_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentItem_C::ScanForDropCollision(bool* Can_Drop_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ScanForDropCollision");
		
		ABP_ParentItem_C_ScanForDropCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Can_Drop_ != nullptr)
			*Can_Drop_ = params.Can_Drop_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ScanForItems
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::ScanForItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ScanForItems");
		
		ABP_ParentItem_C_ScanForItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.LerpPickup__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_ParentItem_C::LerpPickup__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.LerpPickup__FinishedFunc");
		
		ABP_ParentItem_C_LerpPickup__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.LerpPickup__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_ParentItem_C::LerpPickup__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.LerpPickup__UpdateFunc");
		
		ABP_ParentItem_C_LerpPickup__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ItemPickedUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::ItemPickedUp(class ABP_GameCharacter_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ItemPickedUp");
		
		ABP_ParentItem_C_ItemPickedUp_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ItemDropped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::ItemDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ItemDropped");
		
		ABP_ParentItem_C_ItemDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.AttachToStorage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Storage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             MeshToAttachTo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Engine_ECollisionChannel                           Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::AttachToStorage(class AActor* Storage, class USceneComponent* MeshToAttachTo, Engine_ECollisionChannel Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.AttachToStorage");
		
		ABP_ParentItem_C_AttachToStorage_Params params {};
		params.Storage = Storage;
		params.MeshToAttachTo = MeshToAttachTo;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideInWater
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::OverrideInWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideInWater");
		
		ABP_ParentItem_C_OverrideInWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideClickNoTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Hit_Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::OverrideClickNoTarget(class ABP_GameController_C* Controller, class AActor* Hit_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideClickNoTarget");
		
		ABP_ParentItem_C_OverrideClickNoTarget_Params params {};
		params.Controller = Controller;
		params.Hit_Actor = Hit_Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideDroppedItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::OverrideDroppedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideDroppedItem");
		
		ABP_ParentItem_C_OverrideDroppedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideRightClickNoTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Hit_Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::OverrideRightClickNoTarget(class ABP_GameController_C* Controller, class AActor* Hit_Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideRightClickNoTarget");
		
		ABP_ParentItem_C_OverrideRightClickNoTarget_Params params {};
		params.Controller = Controller;
		params.Hit_Actor = Hit_Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::OverrideLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideLoaded");
		
		ABP_ParentItem_C_OverrideLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverridePickedup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::OverridePickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverridePickedup");
		
		ABP_ParentItem_C_OverridePickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.DetachFromStorage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::DetachFromStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.DetachFromStorage");
		
		ABP_ParentItem_C_DetachFromStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ItemFreeDropping
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_GameCharacter_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::ItemFreeDropping(class ABP_GameCharacter_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ItemFreeDropping");
		
		ABP_ParentItem_C_ItemFreeDropping_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideStopClicking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::OverrideStopClicking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideStopClicking");
		
		ABP_ParentItem_C_OverrideStopClicking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideMouseActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::OverrideMouseActivated(class UPrimitiveComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideMouseActivated");
		
		ABP_ParentItem_C_OverrideMouseActivated_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideHighlighted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::OverrideHighlighted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideHighlighted");
		
		ABP_ParentItem_C_OverrideHighlighted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideUnhighlighted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::OverrideUnhighlighted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideUnhighlighted");
		
		ABP_ParentItem_C_OverrideUnhighlighted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.TryAttachToStorage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      BeingStoredBy                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::TryAttachToStorage(class AActor* BeingStoredBy, class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.TryAttachToStorage");
		
		ABP_ParentItem_C_TryAttachToStorage_Params params {};
		params.BeingStoredBy = BeingStoredBy;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.StorageLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::StorageLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.StorageLoop");
		
		ABP_ParentItem_C_StorageLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.TypeBPhysicsLock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::TypeBPhysicsLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.TypeBPhysicsLock");
		
		ABP_ParentItem_C_TypeBPhysicsLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.TriggerTypeBLock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::TriggerTypeBLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.TriggerTypeBLock");
		
		ABP_ParentItem_C_TriggerTypeBLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideRightClickIsTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::OverrideRightClickIsTarget(class UPrimitiveComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideRightClickIsTarget");
		
		ABP_ParentItem_C_OverrideRightClickIsTarget_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.LerpToCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::LerpToCharacter(class USceneComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.LerpToCharacter");
		
		ABP_ParentItem_C_LerpToCharacter_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.EnteredConveyor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UActorComponent*                             Collision_Comp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     VecDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WaterPressure                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LockOut_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentItem_C::EnteredConveyor(class UActorComponent* Collision_Comp, const struct FVector& VecDirection, float WaterPressure, bool LockOut_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.EnteredConveyor");
		
		ABP_ParentItem_C_EnteredConveyor_Params params {};
		params.Collision_Comp = Collision_Comp;
		params.VecDirection = VecDirection;
		params.WaterPressure = WaterPressure;
		params.LockOut_ = LockOut_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ExitConveyor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UActorComponent*                             Collision_Comp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RemoveLockout                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentItem_C::ExitConveyor(class UActorComponent* Collision_Comp, bool RemoveLockout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ExitConveyor");
		
		ABP_ParentItem_C_ExitConveyor_Params params {};
		params.Collision_Comp = Collision_Comp;
		params.RemoveLockout = RemoveLockout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.OverrideLockedPhysics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::OverrideLockedPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.OverrideLockedPhysics");
		
		ABP_ParentItem_C_OverrideLockedPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.FlashRed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::FlashRed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.FlashRed");
		
		ABP_ParentItem_C_FlashRed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.FlashRedTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::FlashRedTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.FlashRedTimer");
		
		ABP_ParentItem_C_FlashRedTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.AutoLock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ParentItem_C::AutoLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.AutoLock");
		
		ABP_ParentItem_C_AutoLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function BP_ParentItem.BP_ParentItem_C.ExecuteUbergraph_BP_ParentItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentItem_C::ExecuteUbergraph_BP_ParentItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentItem.BP_ParentItem_C.ExecuteUbergraph_BP_ParentItem");
		
		ABP_ParentItem_C_ExecuteUbergraph_BP_ParentItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ParentItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentItem.BP_ParentItem_C");
		return ptr;
	}

}


