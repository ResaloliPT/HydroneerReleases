/**
 * Name: Hydroneer
 * Version: 2.1.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_NPC_Manager_C::ComponentsToSave(
TArray<class UActorComponent*>* Components
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ComponentsToSave");
		
		struct
		{
			TArray<class UActorComponent*>                     Components;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.NPCID_COUNT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                IDs                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        TestID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_Manager_C::NPCID_COUNT(
TArray<class FName>* IDs
, 
const class FName& TestID
, 
int32_t* Count
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.NPCID_COUNT");
		
		struct
		{
			TArray<class FName>                                IDs;
			class FName                                        TestID;
			int32_t                                            Count;
		} params;
		params.TestID = TestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IDs != nullptr)
			*IDs = params.IDs;
		if (Count != nullptr)
			*Count = params.Count;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.NPCID_CHECK
	 * 		Flags  -> ()
	 */
	void ABP_NPC_Manager_C::NPCID_CHECK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.NPCID_CHECK");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.SetbackProgressRequests
	 * 		Flags  -> ()
	 */
	void ABP_NPC_Manager_C::SetbackProgressRequests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.SetbackProgressRequests");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.ProgressRequests
	 * 		Flags  -> ()
	 */
	void ABP_NPC_Manager_C::ProgressRequests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ProgressRequests");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.Roll NPC Requests
	 * 		Flags  -> ()
	 */
	void ABP_NPC_Manager_C::Roll_NPC_Requests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.Roll NPC Requests");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.OnCompleted_A1BCB8F14656F69C2D83EBB37A90A4DF
	 * 		Flags  -> ()
	 */
	void ABP_NPC_Manager_C::OnCompleted_A1BCB8F14656F69C2D83EBB37A90A4DF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.OnCompleted_A1BCB8F14656F69C2D83EBB37A90A4DF");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_NPC_Manager_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ActorLoaded");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_NPC_Manager_C::ActorSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ActorSaved");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NPC_Manager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ReceiveBeginPlay");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.TryRollRequests
	 * 		Flags  -> ()
	 */
	void ABP_NPC_Manager_C::TryRollRequests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.TryRollRequests");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.InitRequestTimer
	 * 		Flags  -> ()
	 */
	void ABP_NPC_Manager_C::InitRequestTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.InitRequestTimer");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_NPC_Manager_C::ActorPreSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ActorPreSave");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NPC_Manager.BP_NPC_Manager_C.ExecuteUbergraph_BP_NPC_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NPC_Manager_C::ExecuteUbergraph_BP_NPC_Manager(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NPC_Manager.BP_NPC_Manager_C.ExecuteUbergraph_BP_NPC_Manager");
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NPC_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NPC_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_Manager.BP_NPC_Manager_C");
		return ptr;
	}


}


