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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.ComponentsToSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Components                                                 (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_ParentCrop_C::ComponentsToSave(
TArray<class UActorComponent*>* Components
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.ComponentsToSave");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.CanGrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentCrop_C::CanGrow(
bool* Result
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.CanGrow");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.HandleTimeChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HourDelta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ActualSecondsDelta                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCrop_C::HandleTimeChange(
float HourDelta
, 
float ActualSecondsDelta
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.HandleTimeChange");
		
		struct
		{
			float                                              HourDelta;
			float                                              ActualSecondsDelta;
		} params;
		params.HourDelta = HourDelta;
		params.ActualSecondsDelta = ActualSecondsDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.SetDayNightRef
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::SetDayNightRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.SetDayNightRef");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.CheckHasSunlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasSunlight                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentCrop_C::CheckHasSunlight(
bool* HasSunlight
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.CheckHasSunlight");
		
		struct
		{
			bool                                               HasSunlight;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasSunlight != nullptr)
			*HasSunlight = params.HasSunlight;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.UpdateLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Light                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LightValue                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCrop_C::UpdateLight(
class AActor* Light
, 
float LightValue
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.UpdateLight");
		
		struct
		{
			class AActor*                                      Light;
			float                                              LightValue;
		} params;
		params.Light = Light;
		params.LightValue = LightValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.GrowPlant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Growth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCrop_C::GrowPlant(
float Growth
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.GrowPlant");
		
		struct
		{
			float                                              Growth;
		} params;
		params.Growth = Growth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.TryAttachToFoundation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Foundations                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ParentCrop_C::TryAttachToFoundation(
TArray<class AActor*>* Foundations
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.TryAttachToFoundation");
		
		struct
		{
			TArray<class AActor*>                              Foundations;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Foundations != nullptr)
			*Foundations = params.Foundations;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.FindAttachedCrops
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::FindAttachedCrops()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.FindAttachedCrops");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.SetDefaultCollision
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::SetDefaultCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.SetDefaultCollision");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.GetWaterRatio
	 * 		Flags  -> ()
	 */
	float ABP_ParentCrop_C::GetWaterRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.GetWaterRatio");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.GetGrowthRatio
	 * 		Flags  -> ()
	 */
	float ABP_ParentCrop_C::GetGrowthRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.GetGrowthRatio");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}



	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.DestroyCrop
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::DestroyCrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.DestroyCrop");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.ResetWaterTimeRemaining
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::ResetWaterTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.ResetWaterTimeRemaining");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.CalcWaterTime
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::CalcWaterTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.CalcWaterTime");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.WaterTimerComplete
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::WaterTimerComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.WaterTimerComplete");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.InitWaterTimer
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::InitWaterTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.InitWaterTimer");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.GrowthCheck
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::GrowthCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.GrowthCheck");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.InitGrowthCheckTimer
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::InitGrowthCheckTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.InitGrowthCheckTimer");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.GrowthTimerComplete
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::GrowthTimerComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.GrowthTimerComplete");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.InitGrowthTimer
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::InitGrowthTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.InitGrowthTimer");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.LoadedFindFoundation
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::LoadedFindFoundation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.LoadedFindFoundation");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.BPI_GetHighlightArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    HighlightArray                                             (Parm, OutParm)
	 */
	void ABP_ParentCrop_C::BPI_GetHighlightArray(
TArray<int32_t>* HighlightArray
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.BPI_GetHighlightArray");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.BPI_SetHighlightArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    HighlightArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentCrop_C::BPI_SetHighlightArray(
TArray<int32_t>* HighlightArray
, 
bool* Result
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.BPI_SetHighlightArray");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.BPI_GetCanHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanHighlight                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ParentCrop_C::BPI_GetCanHighlight(
bool* CanHighlight
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.BPI_GetCanHighlight");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.UserConstructionScript");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.OnCompleted_9EE516934F983A203E512EBE8969D80F
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::OnCompleted_9EE516934F983A203E512EBE8969D80F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.OnCompleted_9EE516934F983A203E512EBE8969D80F");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.WaterParticleHit
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::WaterParticleHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.WaterParticleHit");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.HasNoWater
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::HasNoWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.HasNoWater");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.HasWater
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::HasWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.HasWater");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.ActorSaved
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::ActorSaved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.ActorSaved");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.PlacedDown
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::PlacedDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.PlacedDown");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.ActorLoaded
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::ActorLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.ActorLoaded");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.SpawnVeg
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::SpawnVeg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.SpawnVeg");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.ActorPreSave
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::ActorPreSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.ActorPreSave");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.InWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WaterBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Comp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCrop_C::InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.InWater");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCrop_C::ReceiveTick(
float DeltaSeconds
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.ReceiveTick");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ParentCrop_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.ReceiveBeginPlay");
		
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
	 * 		Name   -> Function BP_ParentCrop.BP_ParentCrop_C.ExecuteUbergraph_BP_ParentCrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ParentCrop_C::ExecuteUbergraph_BP_ParentCrop(
int32_t EntryPoint
)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ParentCrop.BP_ParentCrop_C.ExecuteUbergraph_BP_ParentCrop");
		
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
	 * 		Name   -> PredefinedFunction ABP_ParentCrop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ParentCrop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentCrop.BP_ParentCrop_C");
		return ptr;
	}


}


