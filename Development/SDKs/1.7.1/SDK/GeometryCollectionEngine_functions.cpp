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

void FGeomComponentCacheParameters::AfterRead()
{
	READ_PTR_FULL(TargetCache, UGeometryCollectionCache);
}

void FGeomComponentCacheParameters::BeforeDelete()
{
	DELE_PTR_FULL(TargetCache);
}

// Function:
//		Offset -> 0x01F9CCA0
//		Name   -> Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");

	AGeometryCollectionActor_RaycastSingle_Params params {};
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


void AGeometryCollectionActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(GeometryCollectionComponent, UGeometryCollectionComponent);
	READ_PTR_FULL(GeometryCollectionDebugDrawComponent, UGeometryCollectionDebugDrawComponent);
}

void AGeometryCollectionActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(GeometryCollectionComponent);
	DELE_PTR_FULL(GeometryCollectionDebugDrawComponent);
}

void UGeometryCollectionCache::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(SupportedCollection, UGeometryCollection);
}

void UGeometryCollectionCache::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(SupportedCollection);
}

void UGeometryCollectionComponent::AfterRead()
{
	UMeshComponent::AfterRead();

	READ_PTR_FULL(ChaosSolverActor, AChaosSolverActor);
	READ_PTR_FULL(RestCollection, UGeometryCollection);
	READ_PTR_FULL(DynamicCollection, UGeometryCollection);
	READ_PTR_FULL(FieldSystem, AFieldSystemActor);
	READ_PTR_FULL(DummyBoxComponent, UBoxComponent);
}

void UGeometryCollectionComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

	DELE_PTR_FULL(ChaosSolverActor);
	DELE_PTR_FULL(RestCollection);
	DELE_PTR_FULL(DynamicCollection);
	DELE_PTR_FULL(FieldSystem);
	DELE_PTR_FULL(DummyBoxComponent);
}

void AGeometryCollectionDebugDrawActor::AfterRead()
{
	AActor::AfterRead();

}

void AGeometryCollectionDebugDrawActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UGeometryCollectionDebugDrawComponent::AfterRead()
{
	UMeshComponent::AfterRead();

	READ_PTR_FULL(GeometryCollectionDebugDrawActor, AGeometryCollectionDebugDrawActor);
	READ_PTR_FULL(GeometryCollectionRenderLevelSet, AGeometryCollectionRenderLevelSetActor);
}

void UGeometryCollectionDebugDrawComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

	DELE_PTR_FULL(GeometryCollectionDebugDrawActor);
	DELE_PTR_FULL(GeometryCollectionRenderLevelSet);
}

void UGeometryCollection::AfterRead()
{
	UObject::AfterRead();

}

void UGeometryCollection::BeforeDelete()
{
	UObject::BeforeDelete();

}

void AGeometryCollectionRenderLevelSetActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(TargetVolumeTexture, UVolumeTexture);
	READ_PTR_FULL(RayMarchMaterial, UMaterial);
}

void AGeometryCollectionRenderLevelSetActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(TargetVolumeTexture);
	DELE_PTR_FULL(RayMarchMaterial);
}

void UStaticMeshSimulationComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(ChaosSolverActor, AChaosSolverActor);
}

void UStaticMeshSimulationComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(ChaosSolverActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
