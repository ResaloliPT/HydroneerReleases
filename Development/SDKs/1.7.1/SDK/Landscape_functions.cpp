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

void FLandscapeProxyMaterialOverride::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
}

void FLandscapeProxyMaterialOverride::BeforeDelete()
{
	DELE_PTR_FULL(Material);
}

void FWeightmapLayerAllocationInfo::AfterRead()
{
	READ_PTR_FULL(LayerInfo, ULandscapeLayerInfoObject);
}

void FWeightmapLayerAllocationInfo::BeforeDelete()
{
	DELE_PTR_FULL(LayerInfo);
}

void FLandscapeComponentMaterialOverride::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
}

void FLandscapeComponentMaterialOverride::BeforeDelete()
{
	DELE_PTR_FULL(Material);
}

void FGrassVariety::AfterRead()
{
	READ_PTR_FULL(GrassMesh, UStaticMesh);
}

void FGrassVariety::BeforeDelete()
{
	DELE_PTR_FULL(GrassMesh);
}

void FLandscapeSplineConnection::AfterRead()
{
	READ_PTR_FULL(Segment, ULandscapeSplineSegment);
}

void FLandscapeSplineConnection::BeforeDelete()
{
	DELE_PTR_FULL(Segment);
}

void FLandscapeSplineInterpPoint::AfterRead()
{
}

void FLandscapeSplineInterpPoint::BeforeDelete()
{
}

void FLandscapeSplineSegmentConnection::AfterRead()
{
	READ_PTR_FULL(ControlPoint, ULandscapeSplineControlPoint);
}

void FLandscapeSplineSegmentConnection::BeforeDelete()
{
	DELE_PTR_FULL(ControlPoint);
}

void FGrassInput::AfterRead()
{
	READ_PTR_FULL(GrassType, ULandscapeGrassType);
}

void FGrassInput::BeforeDelete()
{
	DELE_PTR_FULL(GrassType);
}

void FLayerBlendInput::AfterRead()
{
}

void FLayerBlendInput::BeforeDelete()
{
}

void FLandscapeProceduralLayerBrush::AfterRead()
{
	READ_PTR_FULL(BPCustomBrush, ALandscapeBlueprintCustomBrush);
}

void FLandscapeProceduralLayerBrush::BeforeDelete()
{
	DELE_PTR_FULL(BPCustomBrush);
}

void FProceduralLayer::AfterRead()
{
}

void FProceduralLayer::BeforeDelete()
{
}

void FLandscapeEditToolRenderData::AfterRead()
{
	READ_PTR_FULL(ToolMaterial, UMaterialInterface);
	READ_PTR_FULL(GizmoMaterial, UMaterialInterface);
	READ_PTR_FULL(DataTexture, UTexture2D);
}

void FLandscapeEditToolRenderData::BeforeDelete()
{
	DELE_PTR_FULL(ToolMaterial);
	DELE_PTR_FULL(GizmoMaterial);
	DELE_PTR_FULL(DataTexture);
}

void FGizmoSelectData::AfterRead()
{
}

void FGizmoSelectData::BeforeDelete()
{
}

void FLandscapeInfoLayerSettings::AfterRead()
{
	READ_PTR_FULL(LayerInfoObj, ULandscapeLayerInfoObject);
}

void FLandscapeInfoLayerSettings::BeforeDelete()
{
	DELE_PTR_FULL(LayerInfoObj);
}

void FProceduralLayerData::AfterRead()
{
}

void FProceduralLayerData::BeforeDelete()
{
}

void FRenderDataPerHeightmap::AfterRead()
{
	READ_PTR_FULL(OriginalHeightmap, UTexture2D);
}

void FRenderDataPerHeightmap::BeforeDelete()
{
	DELE_PTR_FULL(OriginalHeightmap);
}

void FLandscapeImportLayerInfo::AfterRead()
{
}

void FLandscapeImportLayerInfo::BeforeDelete()
{
}

void FLandscapeLayerStruct::AfterRead()
{
	READ_PTR_FULL(LayerInfoObj, ULandscapeLayerInfoObject);
}

void FLandscapeLayerStruct::BeforeDelete()
{
	DELE_PTR_FULL(LayerInfoObj);
}

void FLandscapeEditorLayerSettings::AfterRead()
{
}

void FLandscapeEditorLayerSettings::BeforeDelete()
{
}

void FLandscapeWeightmapUsage::AfterRead()
{
	READ_PTR_FULL(ChannelUsage[0x4], ULandscapeComponent);
}

void FLandscapeWeightmapUsage::BeforeDelete()
{
	DELE_PTR_FULL(ChannelUsage[0x4]);
}

void FForeignWorldSplineData::AfterRead()
{
}

void FForeignWorldSplineData::BeforeDelete()
{
}

void FForeignSplineSegmentData::AfterRead()
{
}

void FForeignSplineSegmentData::BeforeDelete()
{
}

void FForeignControlPointData::AfterRead()
{
}

void FForeignControlPointData::BeforeDelete()
{
}

void FLandscapeSplineMeshEntry::AfterRead()
{
	READ_PTR_FULL(Mesh, UStaticMesh);
}

void FLandscapeSplineMeshEntry::BeforeDelete()
{
	DELE_PTR_FULL(Mesh);
}

void UControlPointMeshComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void UControlPointMeshComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x0139EC60
//		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params params {};
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0139EBA0
//		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UTexture* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params params {};
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0139EAD0
//		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params params {};
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0139E9C0
//		Name   -> Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          NewLandscapeMaterial                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");

	ALandscapeProxy_EditorSetLandscapeMaterial_Params params {};
	params.NewLandscapeMaterial = NewLandscapeMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0139E6B0
//		Name   -> Function Landscape.LandscapeProxy.EditorApplySpline
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USplineComponent*                            InSplineComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EndWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartSideFalloff                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EndSideFalloff                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartRoll                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EndRoll                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumSubdivisions                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRaiseHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bLowerHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULandscapeLayerInfoObject*                   PaintLayer                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscapeProxy_EditorApplySpline_Params params {};
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0139E620
//		Name   -> Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InComponentScreenSizeToUseSubSections                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");

	ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params params {};
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0139E5A0
//		Name   -> Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InUseTessellationComponentScreenSizeFalloff                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");

	ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params params {};
	params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0139E520
//		Name   -> Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InTessellationComponentScreenSize                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");

	ALandscapeProxy_ChangeTessellationComponentScreenSize_Params params {};
	params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0139E4A0
//		Name   -> Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InLODDistanceFactor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscapeProxy_ChangeLODDistanceFactor_Params params {};
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0139E420
//		Name   -> Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InComponentScreenSizeToUseSubSections                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params params {};
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ALandscapeProxy::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SplineComponent, ULandscapeSplinesComponent);
	READ_PTR_FULL(DefaultPhysMaterial, UPhysicalMaterial);
	READ_PTR_FULL(LandscapeMaterial, UMaterialInterface);
	READ_PTR_FULL(LandscapeHoleMaterial, UMaterialInterface);
}

void ALandscapeProxy::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SplineComponent);
	DELE_PTR_FULL(DefaultPhysMaterial);
	DELE_PTR_FULL(LandscapeMaterial);
	DELE_PTR_FULL(LandscapeHoleMaterial);
}

void ALandscape::AfterRead()
{
	ALandscapeProxy::AfterRead();

}

void ALandscape::BeforeDelete()
{
	ALandscapeProxy::BeforeDelete();

}

// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function Landscape.LandscapeBlueprintCustomBrush.Render
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               InIsHeightmap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTextureRenderTarget2D*                      InCombinedResult                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTextureRenderTarget2D*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* ALandscapeBlueprintCustomBrush::Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintCustomBrush.Render");

	ALandscapeBlueprintCustomBrush_Render_Params params {};
	params.InIsHeightmap = InIsHeightmap;
	params.InCombinedResult = InCombinedResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function Landscape.LandscapeBlueprintCustomBrush.Initialize
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FIntPoint                                   InLandscapeSize                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntPoint                                   InLandscapeRenderTargetSize                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALandscapeBlueprintCustomBrush::Initialize(const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeBlueprintCustomBrush.Initialize");

	ALandscapeBlueprintCustomBrush_Initialize_Params params {};
	params.InLandscapeSize = InLandscapeSize;
	params.InLandscapeRenderTargetSize = InLandscapeRenderTargetSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ALandscapeBlueprintCustomBrush::AfterRead()
{
	AActor::AfterRead();

}

void ALandscapeBlueprintCustomBrush::BeforeDelete()
{
	AActor::BeforeDelete();

}

void ALandscapeBlueprintCustomSimulationBrush::AfterRead()
{
	ALandscapeBlueprintCustomBrush::AfterRead();

}

void ALandscapeBlueprintCustomSimulationBrush::BeforeDelete()
{
	ALandscapeBlueprintCustomBrush::BeforeDelete();

}

// Function:
//		Offset -> 0x0139EA40
//		Name   -> Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");

	ULandscapeComponent_GetMaterialInstanceDynamic_Params params {};
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULandscapeComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

	READ_PTR_FULL(OverrideMaterial, UMaterialInterface);
	READ_PTR_FULL(OverrideHoleMaterial, UMaterialInterface);
	READ_PTR_FULL(XYOffsetmapTexture, UTexture2D);
	READ_PTR_FULL(HeightmapTexture, UTexture2D);
	READ_PTR_FULL(GIBakedBaseColorTexture, UTexture2D);
	READ_PTR_FULL(MobileMaterialInterface, UMaterialInterface);
}

void ULandscapeComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

	DELE_PTR_FULL(OverrideMaterial);
	DELE_PTR_FULL(OverrideHoleMaterial);
	DELE_PTR_FULL(XYOffsetmapTexture);
	DELE_PTR_FULL(HeightmapTexture);
	DELE_PTR_FULL(GIBakedBaseColorTexture);
	DELE_PTR_FULL(MobileMaterialInterface);
}

void ALandscapeGizmoActor::AfterRead()
{
	AActor::AfterRead();

}

void ALandscapeGizmoActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void ALandscapeGizmoActiveActor::AfterRead()
{
	ALandscapeGizmoActor::AfterRead();

}

void ALandscapeGizmoActiveActor::BeforeDelete()
{
	ALandscapeGizmoActor::BeforeDelete();

}

void ULandscapeGizmoRenderComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void ULandscapeGizmoRenderComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void ULandscapeGrassType::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(GrassMesh, UStaticMesh);
}

void ULandscapeGrassType::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(GrassMesh);
}

void ULandscapeHeightfieldCollisionComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void ULandscapeHeightfieldCollisionComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void ULandscapeInfo::AfterRead()
{
	UObject::AfterRead();

}

void ULandscapeInfo::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULandscapeInfoMap::AfterRead()
{
	UObject::AfterRead();

}

void ULandscapeInfoMap::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULandscapeLayerInfoObject::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(PhysMaterial, UPhysicalMaterial);
}

void ULandscapeLayerInfoObject::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(PhysMaterial);
}

void ULandscapeMaterialInstanceConstant::AfterRead()
{
	UMaterialInstanceConstant::AfterRead();

}

void ULandscapeMaterialInstanceConstant::BeforeDelete()
{
	UMaterialInstanceConstant::BeforeDelete();

}

void ULandscapeMeshCollisionComponent::AfterRead()
{
	ULandscapeHeightfieldCollisionComponent::AfterRead();

}

void ULandscapeMeshCollisionComponent::BeforeDelete()
{
	ULandscapeHeightfieldCollisionComponent::BeforeDelete();

}

void ALandscapeMeshProxyActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(LandscapeMeshProxyComponent, ULandscapeMeshProxyComponent);
}

void ALandscapeMeshProxyActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(LandscapeMeshProxyComponent);
}

void ULandscapeMeshProxyComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void ULandscapeMeshProxyComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x013A0530
//		Name   -> Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class USplineMeshComponent*>                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");

	ULandscapeSplinesComponent_GetSplineMeshComponents_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULandscapeSplinesComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void ULandscapeSplinesComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void ULandscapeSplineControlPoint::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(LocalMeshComponent, UControlPointMeshComponent);
}

void ULandscapeSplineControlPoint::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(LocalMeshComponent);
}

void ULandscapeSplineSegment::AfterRead()
{
	UObject::AfterRead();

}

void ULandscapeSplineSegment::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ALandscapeStreamingProxy::AfterRead()
{
	ALandscapeProxy::AfterRead();

}

void ALandscapeStreamingProxy::BeforeDelete()
{
	ALandscapeProxy::BeforeDelete();

}

void UMaterialExpressionLandscapeGrassOutput::AfterRead()
{
	UMaterialExpressionCustomOutput::AfterRead();

}

void UMaterialExpressionLandscapeGrassOutput::BeforeDelete()
{
	UMaterialExpressionCustomOutput::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerBlend::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerBlend::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerCoords::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerCoords::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerSample::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerSample::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerSwitch::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerSwitch::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerWeight::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerWeight::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeVisibilityMask::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeVisibilityMask::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
