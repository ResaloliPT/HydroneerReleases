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
	 * 		Name   -> Function BP_ShelfRodStorage.BP_ShelfRodStorage_C.SetAttachedMeshCollisionProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CollisionProfile                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShelfRodStorage_C::SetAttachedMeshCollisionProfile(
class UStaticMeshComponent* Mesh
, 
const class FName& CollisionProfile
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShelfRodStorage.BP_ShelfRodStorage_C.SetAttachedMeshCollisionProfile");
		
		struct
		{
			class UStaticMeshComponent*                        Mesh;
			class FName                                        CollisionProfile;
		} params;
		params.Mesh = Mesh;
		params.CollisionProfile = CollisionProfile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShelfRodStorage.BP_ShelfRodStorage_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ShelfRodStorage_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ShelfRodStorage.BP_ShelfRodStorage_C.UserConstructionScript");
		
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
	 * 		Name   -> PredefinedFunction ABP_ShelfRodStorage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ShelfRodStorage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShelfRodStorage.BP_ShelfRodStorage_C");
		return ptr;
	}


}


