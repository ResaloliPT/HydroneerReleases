// Name: Hydroneer, Version: 1.7.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FSupportedAreaData::AfterRead()
{
	READ_PTR_FULL(AreaClass, UClass);
}

void FSupportedAreaData::BeforeDelete()
{
	DELE_PTR_FULL(AreaClass);
}

void FNavCollisionCylinder::AfterRead()
{
}

void FNavCollisionCylinder::BeforeDelete()
{
}

void FNavCollisionBox::AfterRead()
{
}

void FNavCollisionBox::BeforeDelete()
{
}

void FNavGraphNode::AfterRead()
{
	READ_PTR_FULL(Owner, UObject);
}

void FNavGraphNode::BeforeDelete()
{
	DELE_PTR_FULL(Owner);
}

void FNavigationFilterArea::AfterRead()
{
	READ_PTR_FULL(AreaClass, UClass);
}

void FNavigationFilterArea::BeforeDelete()
{
	DELE_PTR_FULL(AreaClass);
}

void FNavigationFilterFlags::AfterRead()
{
}

void FNavigationFilterFlags::BeforeDelete()
{
}

void FNavGraphEdge::AfterRead()
{
}

void FNavGraphEdge::BeforeDelete()
{
}

void ANavigationData::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(RenderingComp, UPrimitiveComponent);
}

void ANavigationData::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(RenderingComp);
}

void AAbstractNavData::AfterRead()
{
	ANavigationData::AfterRead();

}

void AAbstractNavData::BeforeDelete()
{
	ANavigationData::BeforeDelete();

}

void UCrowdManagerBase::AfterRead()
{
	UObject::AfterRead();

}

void UCrowdManagerBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNavArea::AfterRead()
{
	UNavAreaBase::AfterRead();

}

void UNavArea::BeforeDelete()
{
	UNavAreaBase::BeforeDelete();

}

void UNavArea_Default::AfterRead()
{
	UNavArea::AfterRead();

}

void UNavArea_Default::BeforeDelete()
{
	UNavArea::BeforeDelete();

}

void UNavArea_LowHeight::AfterRead()
{
	UNavArea::AfterRead();

}

void UNavArea_LowHeight::BeforeDelete()
{
	UNavArea::BeforeDelete();

}

void UNavArea_Null::AfterRead()
{
	UNavArea::AfterRead();

}

void UNavArea_Null::BeforeDelete()
{
	UNavArea::BeforeDelete();

}

void UNavArea_Obstacle::AfterRead()
{
	UNavArea::AfterRead();

}

void UNavArea_Obstacle::BeforeDelete()
{
	UNavArea::BeforeDelete();

}

void UNavAreaMeta::AfterRead()
{
	UNavArea::AfterRead();

}

void UNavAreaMeta::BeforeDelete()
{
	UNavArea::BeforeDelete();

}

void UNavAreaMeta_SwitchByAgent::AfterRead()
{
	UNavAreaMeta::AfterRead();

	READ_PTR_FULL(Agent0Area, UClass);
	READ_PTR_FULL(Agent1Area, UClass);
	READ_PTR_FULL(Agent2Area, UClass);
	READ_PTR_FULL(Agent3Area, UClass);
	READ_PTR_FULL(Agent4Area, UClass);
	READ_PTR_FULL(Agent5Area, UClass);
	READ_PTR_FULL(Agent6Area, UClass);
	READ_PTR_FULL(Agent7Area, UClass);
	READ_PTR_FULL(Agent8Area, UClass);
	READ_PTR_FULL(Agent9Area, UClass);
	READ_PTR_FULL(Agent10Area, UClass);
	READ_PTR_FULL(Agent11Area, UClass);
	READ_PTR_FULL(Agent12Area, UClass);
	READ_PTR_FULL(Agent13Area, UClass);
	READ_PTR_FULL(Agent14Area, UClass);
	READ_PTR_FULL(Agent15Area, UClass);
}

void UNavAreaMeta_SwitchByAgent::BeforeDelete()
{
	UNavAreaMeta::BeforeDelete();

	DELE_PTR_FULL(Agent0Area);
	DELE_PTR_FULL(Agent1Area);
	DELE_PTR_FULL(Agent2Area);
	DELE_PTR_FULL(Agent3Area);
	DELE_PTR_FULL(Agent4Area);
	DELE_PTR_FULL(Agent5Area);
	DELE_PTR_FULL(Agent6Area);
	DELE_PTR_FULL(Agent7Area);
	DELE_PTR_FULL(Agent8Area);
	DELE_PTR_FULL(Agent9Area);
	DELE_PTR_FULL(Agent10Area);
	DELE_PTR_FULL(Agent11Area);
	DELE_PTR_FULL(Agent12Area);
	DELE_PTR_FULL(Agent13Area);
	DELE_PTR_FULL(Agent14Area);
	DELE_PTR_FULL(Agent15Area);
}

void UNavCollision::AfterRead()
{
	UNavCollisionBase::AfterRead();

	READ_PTR_FULL(AreaClass, UClass);
}

void UNavCollision::BeforeDelete()
{
	UNavCollisionBase::BeforeDelete();

	DELE_PTR_FULL(AreaClass);
}

void ANavigationGraph::AfterRead()
{
	ANavigationData::AfterRead();

}

void ANavigationGraph::BeforeDelete()
{
	ANavigationData::BeforeDelete();

}

void ANavigationGraphNode::AfterRead()
{
	AActor::AfterRead();

}

void ANavigationGraphNode::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UNavigationGraphNodeComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(NextNodeComponent, UNavigationGraphNodeComponent);
	READ_PTR_FULL(PrevNodeComponent, UNavigationGraphNodeComponent);
}

void UNavigationGraphNodeComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(NextNodeComponent);
	DELE_PTR_FULL(PrevNodeComponent);
}

void UNavigationInvokerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UNavigationInvokerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x01EE0520
//		Name   -> Function NavigationSystem.NavigationPath.IsValid
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::IsValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsValid");

	UNavigationPath_IsValid_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EE04F0
//		Name   -> Function NavigationSystem.NavigationPath.IsStringPulled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::IsStringPulled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsStringPulled");

	UNavigationPath_IsStringPulled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EE04C0
//		Name   -> Function NavigationSystem.NavigationPath.IsPartial
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::IsPartial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsPartial");

	UNavigationPath_IsPartial_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EDFDD0
//		Name   -> Function NavigationSystem.NavigationPath.GetPathLength
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNavigationPath::GetPathLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathLength");

	UNavigationPath_GetPathLength_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EDFB80
//		Name   -> Function NavigationSystem.NavigationPath.GetPathCost
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNavigationPath::GetPathCost()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathCost");

	UNavigationPath_GetPathCost_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EDFA80
//		Name   -> Function NavigationSystem.NavigationPath.GetDebugString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UNavigationPath::GetDebugString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetDebugString");

	UNavigationPath_GetDebugString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EDF660
//		Name   -> Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<Engine_ENavigationOptionFlag>          DoRecalculation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationPath::EnableRecalculationOnInvalidation(TEnumAsByte<Engine_ENavigationOptionFlag> DoRecalculation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation");

	UNavigationPath_EnableRecalculationOnInvalidation_Params params {};
	params.DoRecalculation = DoRecalculation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01EDF580
//		Name   -> Function NavigationSystem.NavigationPath.EnableDebugDrawing
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               bShouldDrawDebugData                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                PathColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableDebugDrawing");

	UNavigationPath_EnableDebugDrawing_Params params {};
	params.bShouldDrawDebugData = bShouldDrawDebugData;
	params.PathColor = PathColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNavigationPath::AfterRead()
{
	UObject::AfterRead();

}

void UNavigationPath::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNavigationPathGenerator::AfterRead()
{
	UInterface::AfterRead();

}

void UNavigationPathGenerator::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNavigationQueryFilter::AfterRead()
{
	UObject::AfterRead();

}

void UNavigationQueryFilter::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x01EE1400
//		Name   -> Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Invoker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::UnregisterNavigationInvoker(class AActor* Invoker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker");

	UNavigationSystemV1_UnregisterNavigationInvoker_Params params {};
	params.Invoker = Invoker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01EE1340
//		Name   -> Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Goal                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation");

	UNavigationSystemV1_SimpleMoveToLocation_Params params {};
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01DF0FA0
//		Name   -> Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Goal                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor");

	UNavigationSystemV1_SimpleMoveToActor_Params params {};
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01EE1230
//		Name   -> Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MaxNumberOfJobs                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount");

	UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params params {};
	params.MaxNumberOfJobs = MaxNumberOfJobs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01EE11B0
//		Name   -> Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Engine_ENavDataGatheringModeConfig                 NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::SetGeometryGatheringMode(Engine_ENavDataGatheringModeConfig NewMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode");

	UNavigationSystemV1_SetGeometryGatheringMode_Params params {};
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01EE1090
//		Name   -> Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount");

	UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01EE0F90
//		Name   -> Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Invoker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TileGenerationRadius                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TileRemovalRadius                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker");

	UNavigationSystemV1_RegisterNavigationInvoker_Params params {};
	params.Invoker = Invoker;
	params.TileGenerationRadius = TileGenerationRadius;
	params.TileRemovalRadius = TileRemovalRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01EE0DC0
//		Name   -> Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     QueryExtent                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNavigationSystemV1::STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation");

	UNavigationSystemV1_ProjectPointToNavigation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EE0D40
//		Name   -> Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ANavMeshBoundsVolume*                        NavVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated");

	UNavigationSystemV1_OnNavigationBoundsUpdated_Params params {};
	params.NavVolume = NavVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01EE0B30
//		Name   -> Function NavigationSystem.NavigationSystemV1.NavigationRaycast
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     RayStart                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     RayEnd                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     HitLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AController*                                 Querier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, class UClass* FilterClass, class AController* Querier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.NavigationRaycast");

	UNavigationSystemV1_NavigationRaycast_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.RayStart = RayStart;
	params.RayEnd = RayEnd;
	params.FilterClass = FilterClass;
	params.Querier = Querier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EE0950
//		Name   -> Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ProjectedLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     QueryExtent                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation");

	UNavigationSystemV1_K2_ProjectPointToNavigation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = params.ProjectedLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EE0750
//		Name   -> Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     RandomLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius");

	UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EE0550
//		Name   -> Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     RandomLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius");

	UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EE0440
//		Name   -> Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked");

	UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EE03C0
//		Name   -> Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt");

	UNavigationSystemV1_IsNavigationBeingBuilt_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EE01F0
//		Name   -> Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNavigationSystemV1::STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius");

	UNavigationSystemV1_GetRandomReachablePointInRadius_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EE0020
//		Name   -> Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNavigationSystemV1::STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius");

	UNavigationSystemV1_GetRandomPointInNavigableRadius_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EDFE00
//		Name   -> Function NavigationSystem.NavigationSystemV1.GetPathLength
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathEnd                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PathLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_ENavigationQueryResult>         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Engine_ENavigationQueryResult> UNavigationSystemV1::STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathLength");

	UNavigationSystemV1_GetPathLength_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathLength != nullptr)
		*PathLength = params.PathLength;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EDFBB0
//		Name   -> Function NavigationSystem.NavigationSystemV1.GetPathCost
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathEnd                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PathCost                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_ENavigationQueryResult>         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Engine_ENavigationQueryResult> UNavigationSystemV1::STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathCost");

	UNavigationSystemV1_GetPathCost_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathCost != nullptr)
		*PathCost = params.PathCost;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EDFB00
//		Name   -> Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNavigationSystemV1*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationSystemV1* UNavigationSystemV1::STATIC_GetNavigationSystem(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem");

	UNavigationSystemV1_GetNavigationSystem_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EDF8D0
//		Name   -> Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathEnd                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      PathfindingContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNavigationPath*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationPath* UNavigationSystemV1::STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously");

	UNavigationSystemV1_FindPathToLocationSynchronously_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01EDF6E0
//		Name   -> Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      GoalActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TetherDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      PathfindingContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNavigationPath*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationPath* UNavigationSystemV1::STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously");

	UNavigationSystemV1_FindPathToActorSynchronously_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.GoalActor = GoalActor;
	params.TetherDistance = TetherDistance;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UNavigationSystemV1::AfterRead()
{
	UNavigationSystemBase::AfterRead();

	READ_PTR_FULL(MainNavData, ANavigationData);
	READ_PTR_FULL(AbstractNavData, ANavigationData);
}

void UNavigationSystemV1::BeforeDelete()
{
	UNavigationSystemBase::BeforeDelete();

	DELE_PTR_FULL(MainNavData);
	DELE_PTR_FULL(AbstractNavData);
}

void UNavigationSystemModuleConfig::AfterRead()
{
	UNavigationSystemConfig::AfterRead();

}

void UNavigationSystemModuleConfig::BeforeDelete()
{
	UNavigationSystemConfig::BeforeDelete();

}

void ANavigationTestingActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(CapsuleComponent, UCapsuleComponent);
	READ_PTR_FULL(InvokerComponent, UNavigationInvokerComponent);
	READ_PTR_FULL(MyNavData, ANavigationData);
	READ_PTR_FULL(OtherActor, ANavigationTestingActor);
	READ_PTR_FULL(FilterClass, UClass);
}

void ANavigationTestingActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(CapsuleComponent);
	DELE_PTR_FULL(InvokerComponent);
	DELE_PTR_FULL(MyNavData);
	DELE_PTR_FULL(OtherActor);
	DELE_PTR_FULL(FilterClass);
}

void UNavLinkComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void UNavLinkComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x01EE12B0
//		Name   -> Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bRelevant                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy");

	UNavRelevantComponent_SetNavigationRelevancy_Params params {};
	params.bRelevant = bRelevant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNavRelevantComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(CachedNavParent, UObject);
}

void UNavRelevantComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(CachedNavParent);
}

void UNavLinkCustomComponent::AfterRead()
{
	UNavRelevantComponent::AfterRead();

	READ_PTR_FULL(EnabledAreaClass, UClass);
	READ_PTR_FULL(DisabledAreaClass, UClass);
	READ_PTR_FULL(ObstacleAreaClass, UClass);
}

void UNavLinkCustomComponent::BeforeDelete()
{
	UNavRelevantComponent::BeforeDelete();

	DELE_PTR_FULL(EnabledAreaClass);
	DELE_PTR_FULL(DisabledAreaClass);
	DELE_PTR_FULL(ObstacleAreaClass);
}

void UNavLinkCustomInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNavLinkCustomInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNavLinkHostInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNavLinkHostInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNavLinkRenderingComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void UNavLinkRenderingComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void UNavLinkTrivial::AfterRead()
{
	UNavLinkDefinition::AfterRead();

}

void UNavLinkTrivial::BeforeDelete()
{
	UNavLinkDefinition::BeforeDelete();

}

void ANavMeshBoundsVolume::AfterRead()
{
	AVolume::AfterRead();

}

void ANavMeshBoundsVolume::BeforeDelete()
{
	AVolume::BeforeDelete();

}

void UNavMeshRenderingComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void UNavMeshRenderingComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x01EE1130
//		Name   -> Function NavigationSystem.NavModifierComponent.SetAreaClass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      NewAreaClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavModifierComponent::SetAreaClass(class UClass* NewAreaClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierComponent.SetAreaClass");

	UNavModifierComponent_SetAreaClass_Params params {};
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNavModifierComponent::AfterRead()
{
	UNavRelevantComponent::AfterRead();

	READ_PTR_FULL(AreaClass, UClass);
}

void UNavModifierComponent::BeforeDelete()
{
	UNavRelevantComponent::BeforeDelete();

	DELE_PTR_FULL(AreaClass);
}

// Function:
//		Offset -> 0x01EE10B0
//		Name   -> Function NavigationSystem.NavModifierVolume.SetAreaClass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      NewAreaClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANavModifierVolume::SetAreaClass(class UClass* NewAreaClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierVolume.SetAreaClass");

	ANavModifierVolume_SetAreaClass_Params params {};
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ANavModifierVolume::AfterRead()
{
	AVolume::AfterRead();

	READ_PTR_FULL(AreaClass, UClass);
}

void ANavModifierVolume::BeforeDelete()
{
	AVolume::BeforeDelete();

	DELE_PTR_FULL(AreaClass);
}

void UNavNodeInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNavNodeInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ANavSystemConfigOverride::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(NavigationSystemConfig, UNavigationSystemConfig);
}

void ANavSystemConfigOverride::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(NavigationSystemConfig);
}

void UNavTestRenderingComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void UNavTestRenderingComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void URecastFilter_UseDefaultArea::AfterRead()
{
	UNavigationQueryFilter::AfterRead();

}

void URecastFilter_UseDefaultArea::BeforeDelete()
{
	UNavigationQueryFilter::BeforeDelete();

}

void ARecastNavMesh::AfterRead()
{
	ANavigationData::AfterRead();

}

void ARecastNavMesh::BeforeDelete()
{
	ANavigationData::BeforeDelete();

}

void URecastNavMeshDataChunk::AfterRead()
{
	UNavigationDataChunk::AfterRead();

}

void URecastNavMeshDataChunk::BeforeDelete()
{
	UNavigationDataChunk::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
