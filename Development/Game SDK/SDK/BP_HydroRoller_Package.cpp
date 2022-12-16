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
	 * 		Name   -> Function BP_HydroRoller.BP_HydroRoller_C.SetSteeringWheelAngle
	 * 		Flags  -> ()
	 */
	void ABP_HydroRoller_C::SetSteeringWheelAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroRoller.BP_HydroRoller_C.SetSteeringWheelAngle");
		
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
	 * 		Name   -> Function BP_HydroRoller.BP_HydroRoller_C.PostPlayerAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Attached                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HydroRoller_C::PostPlayerAttached(
bool Attached
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroRoller.BP_HydroRoller_C.PostPlayerAttached");
		
		struct
		{
			bool                                               Attached;
		} params;
		params.Attached = Attached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroRoller.BP_HydroRoller_C.TryVoxelDig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Scene                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroRoller_C::TryVoxelDig(
class UStaticMeshComponent* Scene
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroRoller.BP_HydroRoller_C.TryVoxelDig");
		
		struct
		{
			class UStaticMeshComponent*                        Scene;
		} params;
		params.Scene = Scene;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroRoller.BP_HydroRoller_C.TryFindVoxelWorldHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FHitResult>                          Hits                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class ABP_HydroVoxelWorld_C*                       VoxelWorld                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_HydroRoller_C::TryFindVoxelWorldHit(
TArray<struct FHitResult>* Hits
, 
struct FHitResult* Hit
, 
class ABP_HydroVoxelWorld_C** VoxelWorld
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroRoller.BP_HydroRoller_C.TryFindVoxelWorldHit");
		
		struct
		{
			TArray<struct FHitResult>                          Hits;
			struct FHitResult                                  Hit;
			class ABP_HydroVoxelWorld_C*                       VoxelWorld;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hits != nullptr)
			*Hits = params.Hits;
		if (Hit != nullptr)
			*Hit = params.Hit;
		if (VoxelWorld != nullptr)
			*VoxelWorld = params.VoxelWorld;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroRoller.BP_HydroRoller_C.RollerTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_HydroRoller_C::RollerTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroRoller.BP_HydroRoller_C.RollerTimeline__FinishedFunc");
		
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
	 * 		Name   -> Function BP_HydroRoller.BP_HydroRoller_C.RollerTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_HydroRoller_C::RollerTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroRoller.BP_HydroRoller_C.RollerTimeline__UpdateFunc");
		
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
	 * 		Name   -> Function BP_HydroRoller.BP_HydroRoller_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroRoller_C::ReceiveTick(
float DeltaSeconds
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroRoller.BP_HydroRoller_C.ReceiveTick");
		
		struct
		{
			float                                              DeltaSeconds;
		} params;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroRoller.BP_HydroRoller_C.RMBDownWhileDriving
	 * 		Flags  -> ()
	 */
	void ABP_HydroRoller_C::RMBDownWhileDriving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroRoller.BP_HydroRoller_C.RMBDownWhileDriving");
		
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
	 * 		Name   -> Function BP_HydroRoller.BP_HydroRoller_C.EnterVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroRoller_C::EnterVehicle(
class APawn* Pawn
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroRoller.BP_HydroRoller_C.EnterVehicle");
		
		struct
		{
			class APawn*                                       Pawn;
		} params;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HydroRoller.BP_HydroRoller_C.ExitVehicle
	 * 		Flags  -> ()
	 */
	void ABP_HydroRoller_C::ExitVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroRoller.BP_HydroRoller_C.ExitVehicle");
		
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
	 * 		Name   -> Function BP_HydroRoller.BP_HydroRoller_C.ExecuteUbergraph_BP_HydroRoller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HydroRoller_C::ExecuteUbergraph_BP_HydroRoller(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HydroRoller.BP_HydroRoller_C.ExecuteUbergraph_BP_HydroRoller");
		
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
	 * 		Name   -> PredefinedFunction ABP_HydroRoller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HydroRoller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HydroRoller.BP_HydroRoller_C");
		return ptr;
	}


}


