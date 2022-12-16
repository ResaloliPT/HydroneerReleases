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
	 * 		Name   -> Function BP_SoupBowl.BP_SoupBowl_C.UpdateItemDescription
	 * 		Flags  -> ()
	 */
	void ABP_SoupBowl_C::UpdateItemDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoupBowl.BP_SoupBowl_C.UpdateItemDescription");
		
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
	 * 		Name   -> Function BP_SoupBowl.BP_SoupBowl_C.SetTopperScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Weight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMeshComponent*                        TopperMesh                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SoupBowl_C::SetTopperScale(
float Weight
, 
class UStaticMeshComponent* TopperMesh
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoupBowl.BP_SoupBowl_C.SetTopperScale");
		
		struct
		{
			float                                              Weight;
			class UStaticMeshComponent*                        TopperMesh;
		} params;
		params.Weight = Weight;
		params.TopperMesh = TopperMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SoupBowl.BP_SoupBowl_C.RandomiseContents
	 * 		Flags  -> ()
	 */
	void ABP_SoupBowl_C::RandomiseContents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoupBowl.BP_SoupBowl_C.RandomiseContents");
		
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
	 * 		Name   -> Function BP_SoupBowl.BP_SoupBowl_C.EmptySoup
	 * 		Flags  -> ()
	 */
	void ABP_SoupBowl_C::EmptySoup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoupBowl.BP_SoupBowl_C.EmptySoup");
		
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
	 * 		Name   -> Function BP_SoupBowl.BP_SoupBowl_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SoupBowl_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoupBowl.BP_SoupBowl_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_SoupBowl.BP_SoupBowl_C.SetSoup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FS_CookingPotContents>               CookingPotContent                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_SoupBowl_C::SetSoup(
TArray<struct FS_CookingPotContents> CookingPotContent
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoupBowl.BP_SoupBowl_C.SetSoup");
		
		struct
		{
			TArray<struct FS_CookingPotContents>               CookingPotContent;
		} params;
		params.CookingPotContent = CookingPotContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SoupBowl.BP_SoupBowl_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_SoupBowl_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoupBowl.BP_SoupBowl_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_SoupBowl.BP_SoupBowl_C.ExecuteUbergraph_BP_SoupBowl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SoupBowl_C::ExecuteUbergraph_BP_SoupBowl(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SoupBowl.BP_SoupBowl_C.ExecuteUbergraph_BP_SoupBowl");
		
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
	 * 		Name   -> PredefinedFunction ABP_SoupBowl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SoupBowl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SoupBowl.BP_SoupBowl_C");
		return ptr;
	}


}


