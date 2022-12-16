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
	 * 		Name   -> Function BP_AI_Node.BP_AI_Node_C.ToggleCapsuleCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Collision                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AI_Node_C::ToggleCapsuleCollision(
bool Collision
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AI_Node.BP_AI_Node_C.ToggleCapsuleCollision");
		
		struct
		{
			bool                                               Collision;
		} params;
		params.Collision = Collision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AI_Node.BP_AI_Node_C.GetTimeRangeValueDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString ABP_AI_Node_C::GetTimeRangeValueDebug(
int32_t Index
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AI_Node.BP_AI_Node_C.GetTimeRangeValueDebug");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AI_Node.BP_AI_Node_C.OnConstruct
	 * 		Flags  -> ()
	 */
	void ABP_AI_Node_C::OnConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AI_Node.BP_AI_Node_C.OnConstruct");
		
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
	 * 		Name   -> Function BP_AI_Node.BP_AI_Node_C.ClearDebug
	 * 		Flags  -> ()
	 */
	void ABP_AI_Node_C::ClearDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AI_Node.BP_AI_Node_C.ClearDebug");
		
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
	 * 		Name   -> Function BP_AI_Node.BP_AI_Node_C.AddReverseLinks
	 * 		Flags  -> ()
	 */
	void ABP_AI_Node_C::AddReverseLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AI_Node.BP_AI_Node_C.AddReverseLinks");
		
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
	 * 		Name   -> Function BP_AI_Node.BP_AI_Node_C.SnapToNavMesh
	 * 		Flags  -> ()
	 */
	void ABP_AI_Node_C::SnapToNavMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AI_Node.BP_AI_Node_C.SnapToNavMesh");
		
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
	 * 		Name   -> Function BP_AI_Node.BP_AI_Node_C.DrawDebugArrows
	 * 		Flags  -> ()
	 */
	void ABP_AI_Node_C::DrawDebugArrows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AI_Node.BP_AI_Node_C.DrawDebugArrows");
		
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
	 * 		Name   -> Function BP_AI_Node.BP_AI_Node_C.RebuildNodes
	 * 		Flags  -> ()
	 */
	void ABP_AI_Node_C::RebuildNodes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AI_Node.BP_AI_Node_C.RebuildNodes");
		
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
	 * 		Name   -> Function BP_AI_Node.BP_AI_Node_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_AI_Node_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AI_Node.BP_AI_Node_C.UserConstructionScript");
		
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
	 * 		Name   -> PredefinedFunction ABP_AI_Node_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AI_Node_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AI_Node.BP_AI_Node_C");
		return ptr;
	}


}


