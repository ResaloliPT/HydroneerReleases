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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_GetHighlightArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    HighlightArray                                             (Parm, OutParm)
	 */
	void ABP_ParentVehicle_C::BPI_GetHighlightArray(
TArray<int32_t>* HighlightArray
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_GetHighlightArray");
		
		struct
		{
			TArray<int32_t>                                    HighlightArray;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HighlightArray != nullptr)
			*HighlightArray = params.HighlightArray;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_SetHighlightArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    HighlightArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::BPI_SetHighlightArray(
TArray<int32_t>* HighlightArray
, 
bool* Result
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_SetHighlightArray");
		
		struct
		{
			TArray<int32_t>                                    HighlightArray;
			bool                                               Result;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HighlightArray != nullptr)
			*HighlightArray = params.HighlightArray;
		if (Result != nullptr)
			*Result = params.Result;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_GetCanHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanHighlight                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::BPI_GetCanHighlight(
bool* CanHighlight
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_GetCanHighlight");
		
		struct
		{
			bool                                               CanHighlight;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanHighlight != nullptr)
			*CanHighlight = params.CanHighlight;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_ParentVehicle_C::ComponentsToSave(
TArray<class UActorComponent*>* Components
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ComponentsToSave");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.PostPlayerAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Attached                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::PostPlayerAttached(
bool Attached
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.PostPlayerAttached");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ToggleAffectNavigation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanAffectNavigation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::ToggleAffectNavigation(
bool bCanAffectNavigation
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ToggleAffectNavigation");
		
		struct
		{
			bool                                               bCanAffectNavigation;
		} params;
		params.bCanAffectNavigation = bCanAffectNavigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.SetPhysicsDampening
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::SetPhysicsDampening()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.SetPhysicsDampening");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.FindExitPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::FindExitPoint(
struct FVector* NewParam
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.FindExitPoint");
		
		struct
		{
			struct FVector                                     NewParam;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.CanEnter?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::CanEnter(
bool* Result
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.CanEnter?");
		
		struct
		{
			bool                                               Result;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.FreezePhysics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::FreezePhysics(
bool bNewState
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.FreezePhysics");
		
		struct
		{
			bool                                               bNewState;
		} params;
		params.bNewState = bNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ForceWheelsToRestLength
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ForceWheelsToRestLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ForceWheelsToRestLength");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyFriction
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ApplyFriction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyFriction");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.OnLand
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::OnLand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.OnLand");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.TickCameraZoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::TickCameraZoom(
float DeltaTime
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.TickCameraZoom");
		
		struct
		{
			float                                              DeltaTime;
		} params;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.DetachPawnFromVehicle
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::DetachPawnFromVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.DetachPawnFromVehicle");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.AttachPawnToVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::AttachPawnToVehicle(
class APawn* Pawn
, 
int32_t Index
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.AttachPawnToVehicle");
		
		struct
		{
			class APawn*                                       Pawn;
			int32_t                                            Index;
		} params;
		params.Pawn = Pawn;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.SetHeadlights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::SetHeadlights(
bool NewValue
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.SetHeadlights");
		
		struct
		{
			bool                                               NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ToggleHeadlights
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ToggleHeadlights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ToggleHeadlights");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.DrawDebugForces
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::DrawDebugForces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.DrawDebugForces");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyWheelRotation
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ApplyWheelRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyWheelRotation");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyTireForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::ApplyTireForce(
int32_t Index
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplyTireForce");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.GetTireForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::GetTireForce(
int32_t Index
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.GetTireForce");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.GetWheelLinearVelocityLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::GetWheelLinearVelocityLocal(
int32_t Index
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.GetWheelLinearVelocityLocal");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateWheelLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::UpdateWheelLocation(
int32_t Index
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateWheelLocation");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ApplySuspensionForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::ApplySuspensionForce(
int32_t Index
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ApplySuspensionForce");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.GetSuspensionForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::GetSuspensionForce(
int32_t Index
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.GetSuspensionForce");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateSuspensionLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::UpdateSuspensionLength(
int32_t Index
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.UpdateSuspensionLength");
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.SuspensionInit
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::SuspensionInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.SuspensionInit");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.SetupReferences
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::SetupReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.SetupReferences");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.RayInit
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::RayInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.RayInit");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.RayCast
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::RayCast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.RayCast");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::TurnOnHeadlights__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__FinishedFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::TurnOnHeadlights__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.TurnOnHeadlights__UpdateFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::BlendFuelSFX__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__FinishedFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::BlendFuelSFX__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BlendFuelSFX__UpdateFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::Fuel_Light_Bleep__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__FinishedFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::Fuel_Light_Bleep__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.Fuel Light Bleep__UpdateFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::CamTransition__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__FinishedFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::CamTransition__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.CamTransition__UpdateFunc");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpActEvt_Jump_K2Node_InputActionEvent_2(
const struct FKey& Key
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_2");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpActEvt_Jump_K2Node_InputActionEvent_1(
const struct FKey& Key
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_1");
		
		struct
		{
			struct FKey                                        Key;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.HornFinishCooldown
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::HornFinishCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.HornFinishCooldown");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.EnterVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::EnterVehicle(
class APawn* Pawn
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.EnterVehicle");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::ReceiveTick(
float DeltaSeconds
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ReceiveTick");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(
float AxisValue
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ActorSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ActorSaved");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ActorPreSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ActorPreSave");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.StartCamTransition
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::StartCamTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.StartCamTransition");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_Unhighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::BPI_Unhighlight(
class ABP_GameController_C* Controller
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_Unhighlight");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(
float AxisValue
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_Highlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::BPI_Highlight(
class ABP_GameController_C* Controller
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_Highlight");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
		} params;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ExitVehicle
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ExitVehicle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ExitVehicle");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.HasWater
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::HasWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.HasWater");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisEvt_MouseUp_K2Node_InputAxisEvent_5(
float AxisValue
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseUp_K2Node_InputAxisEvent_5");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisEvt_MouseRight_K2Node_InputAxisEvent_6(
float AxisValue
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MouseRight_K2Node_InputAxisEvent_6");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.HasNoWater
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::HasNoWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.HasNoWater");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.WaterParticleHit
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::WaterParticleHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.WaterParticleHit");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.FOVChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::FOVChanged(
float NewValue
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.FOVChanged");
		
		struct
		{
			float                                              NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.FuelVisualHeight
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::FuelVisualHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.FuelVisualHeight");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.Loaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::Loaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.Loaded");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_4(
float AxisValue
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_4");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_ToggleLookAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_GameController_C*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LookingAt                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::BPI_ToggleLookAt(
class ABP_GameController_C* Controller
, 
bool LookingAt
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.BPI_ToggleLookAt");
		
		struct
		{
			class ABP_GameController_C*                        Controller;
			bool                                               LookingAt;
		} params;
		params.Controller = Controller;
		params.LookingAt = LookingAt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InvertMouseYChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentVehicle_C::InvertMouseYChanged(
bool NewValue
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InvertMouseYChanged");
		
		struct
		{
			bool                                               NewValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.LMBDownWhileDriving
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::LMBDownWhileDriving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.LMBDownWhileDriving");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.RMBDownWhileDriving
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::RMBDownWhileDriving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.RMBDownWhileDriving");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.OverrideMoveForward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::OverrideMoveForward(
float AxisValue
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.OverrideMoveForward");
		
		struct
		{
			float                                              AxisValue;
		} params;
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ForceVehicleOff
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::ForceVehicleOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ForceVehicleOff");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.InWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WaterBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Comp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.InWater");
		
		struct
		{
			bool                                               WaterBody;
			class UPrimitiveComponent*                         Comp;
		} params;
		params.WaterBody = WaterBody;
		params.Comp = Comp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.EDownWhileDriving
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::EDownWhileDriving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.EDownWhileDriving");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.EUpWhileDriving
	 * 		Flags  -> ()
	 */
	void ABP_ParentVehicle_C::EUpWhileDriving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.EUpWhileDriving");
		
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
	 * 		Name   -> Function BP_ParentVehicle.BP_ParentVehicle_C.ExecuteUbergraph_BP_ParentVehicle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentVehicle_C::ExecuteUbergraph_BP_ParentVehicle(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentVehicle.BP_ParentVehicle_C.ExecuteUbergraph_BP_ParentVehicle");
		
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
	 * 		Name   -> PredefinedFunction ABP_ParentVehicle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentVehicle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentVehicle.BP_ParentVehicle_C");
		return ptr;
	}


}


