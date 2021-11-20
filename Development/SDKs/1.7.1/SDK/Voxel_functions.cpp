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

void FIntBox::AfterRead()
{
}

void FIntBox::BeforeDelete()
{
}

void FVoxelTransformableWorldGeneratorPicker::AfterRead()
{
	READ_PTR_FULL(WorldGeneratorClass, UClass);
	READ_PTR_FULL(WorldGeneratorObject, UVoxelTransformableWorldGenerator);
}

void FVoxelTransformableWorldGeneratorPicker::BeforeDelete()
{
	DELE_PTR_FULL(WorldGeneratorClass);
	DELE_PTR_FULL(WorldGeneratorObject);
}

void FVoxelMaterial::AfterRead()
{
}

void FVoxelMaterial::BeforeDelete()
{
}

void FVoxelPaintMaterialDoubleIndexSet::AfterRead()
{
}

void FVoxelPaintMaterialDoubleIndexSet::BeforeDelete()
{
}

void FVoxelUncompressedWorldSave::AfterRead()
{
}

void FVoxelUncompressedWorldSave::BeforeDelete()
{
}

void FVoxelCompressedWorldSave::AfterRead()
{
}

void FVoxelCompressedWorldSave::BeforeDelete()
{
}

void FVoxelHeightmapImporterWeightmapInfos::AfterRead()
{
}

void FVoxelHeightmapImporterWeightmapInfos::BeforeDelete()
{
}

void FVoxelPaintMaterialColor::AfterRead()
{
}

void FVoxelPaintMaterialColor::BeforeDelete()
{
}

void FVoxelPaintMaterial::AfterRead()
{
}

void FVoxelPaintMaterial::BeforeDelete()
{
}

void FVoxelProcMeshSection::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
}

void FVoxelProcMeshSection::BeforeDelete()
{
	DELE_PTR_FULL(Material);
}

void FModifiedVoxelValue::AfterRead()
{
}

void FModifiedVoxelValue::BeforeDelete()
{
}

void FModifiedVoxelMaterial::AfterRead()
{
}

void FModifiedVoxelMaterial::BeforeDelete()
{
}

void FVoxelSpawnerConfigElementAdvanced::AfterRead()
{
}

void FVoxelSpawnerConfigElementAdvanced::BeforeDelete()
{
}

void FVoxelLandscapeImporterLayerInfo::AfterRead()
{
	READ_PTR_FULL(LayerInfo, ULandscapeLayerInfoObject);
}

void FVoxelLandscapeImporterLayerInfo::BeforeDelete()
{
	DELE_PTR_FULL(LayerInfo);
}

void FVoxelBasicMaterialCollectionElement::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
	READ_PTR_FULL(TessellatedMaterial, UMaterialInterface);
}

void FVoxelBasicMaterialCollectionElement::BeforeDelete()
{
	DELE_PTR_FULL(Material);
	DELE_PTR_FULL(TessellatedMaterial);
}

void FVoxelMaterialCollectionDoubleIndex::AfterRead()
{
}

void FVoxelMaterialCollectionDoubleIndex::BeforeDelete()
{
}

void FVoxelMaterialCollectionTripleIndex::AfterRead()
{
}

void FVoxelMaterialCollectionTripleIndex::BeforeDelete()
{
}

void FVoxelMaterialCollectionElementIndex::AfterRead()
{
	READ_PTR_FULL(MaterialInstance, UMaterialInstanceConstant);
	READ_PTR_FULL(PhysicalMaterial, UPhysicalMaterial);
}

void FVoxelMaterialCollectionElementIndex::BeforeDelete()
{
	DELE_PTR_FULL(MaterialInstance);
	DELE_PTR_FULL(PhysicalMaterial);
}

void FVoxelMaterialCollectionGenerated::AfterRead()
{
	READ_PTR_FULL(GeneratedSingleMaterials, UVoxelMaterialCollectionSingle);
	READ_PTR_FULL(GeneratedDoubleMaterials, UVoxelMaterialCollectionDouble);
	READ_PTR_FULL(GeneratedTripleMaterials, UVoxelMaterialCollectionTriple);
}

void FVoxelMaterialCollectionGenerated::BeforeDelete()
{
	DELE_PTR_FULL(GeneratedSingleMaterials);
	DELE_PTR_FULL(GeneratedDoubleMaterials);
	DELE_PTR_FULL(GeneratedTripleMaterials);
}

void FVoxelMaterialCollectionElement::AfterRead()
{
	READ_PTR_FULL(MaterialFunction, UMaterialFunction);
	READ_PTR_FULL(PhysicalMaterial, UPhysicalMaterial);
}

void FVoxelMaterialCollectionElement::BeforeDelete()
{
	DELE_PTR_FULL(MaterialFunction);
	DELE_PTR_FULL(PhysicalMaterial);
}

void FGetVoxelProjectionVoxel::AfterRead()
{
}

void FGetVoxelProjectionVoxel::BeforeDelete()
{
}

void FVoxelSpawnerConfigElement::AfterRead()
{
	READ_PTR_FULL(Spawner, UVoxelSpawner);
}

void FVoxelSpawnerConfigElement::BeforeDelete()
{
	DELE_PTR_FULL(Spawner);
}

void FVoxelSpawnerConfigHeightElement::AfterRead()
{
}

void FVoxelSpawnerConfigHeightElement::BeforeDelete()
{
}

void FVoxelSpawnerGroupChild::AfterRead()
{
	READ_PTR_FULL(Spawner, UVoxelSpawner);
}

void FVoxelSpawnerGroupChild::BeforeDelete()
{
	DELE_PTR_FULL(Spawner);
}

void FVoxelWorldGeneratorPicker::AfterRead()
{
	READ_PTR_FULL(WorldGeneratorClass, UClass);
	READ_PTR_FULL(WorldGeneratorObject, UVoxelWorldGenerator);
}

void FVoxelWorldGeneratorPicker::BeforeDelete()
{
	DELE_PTR_FULL(WorldGeneratorClass);
	DELE_PTR_FULL(WorldGeneratorObject);
}

void FVoxelRange::AfterRead()
{
}

void FVoxelRange::BeforeDelete()
{
}

void FVoxelValue::AfterRead()
{
}

void FVoxelValue::BeforeDelete()
{
}

// Function:
//		Offset -> 0x00341960
//		Name   -> Function Voxel.IntBoxLibrary.TranslateBox
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntBox UIntBoxLibrary::STATIC_TranslateBox(const struct FIntBox& Box, const struct FIntVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.TranslateBox");

	UIntBoxLibrary_TranslateBox_Params params {};
	params.Box = Box;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00340890
//		Name   -> Function Voxel.IntBoxLibrary.Scale
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntBox UIntBoxLibrary::STATIC_Scale(const struct FIntBox& Box, int Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.Scale");

	UIntBoxLibrary_Scale_Params params {};
	params.Box = Box;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00340260
//		Name   -> Function Voxel.IntBoxLibrary.Overlap
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntBox UIntBoxLibrary::STATIC_Overlap(const struct FIntBox& A, const struct FIntBox& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.Overlap");

	UIntBoxLibrary_Overlap_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033FE60
//		Name   -> Function Voxel.IntBoxLibrary.MakeBoxFromLocalPositionAndRadius
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntVector                                  Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntBox UIntBoxLibrary::STATIC_MakeBoxFromLocalPositionAndRadius(const struct FIntVector& Position, int Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.MakeBoxFromLocalPositionAndRadius");

	UIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Params params {};
	params.Position = Position;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033FBC0
//		Name   -> Function Voxel.IntBoxLibrary.IsVectorInsideBox
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UIntBoxLibrary::STATIC_IsVectorInsideBox(const struct FIntBox& Box, const struct FVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.IsVectorInsideBox");

	UIntBoxLibrary_IsVectorInsideBox_Params params {};
	params.Box = Box;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033FA90
//		Name   -> Function Voxel.IntBoxLibrary.IsIntVectorInsideBox
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UIntBoxLibrary::STATIC_IsIntVectorInsideBox(const struct FIntBox& Box, const struct FIntVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.IsIntVectorInsideBox");

	UIntBoxLibrary_IsIntVectorInsideBox_Params params {};
	params.Box = Box;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033F8C0
//		Name   -> Function Voxel.IntBoxLibrary.Intersect
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Other                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UIntBoxLibrary::STATIC_Intersect(const struct FIntBox& Box, const struct FIntBox& Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.Intersect");

	UIntBoxLibrary_Intersect_Params params {};
	params.Box = Box;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033F220
//		Name   -> Function Voxel.IntBoxLibrary.GetSize
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntVector UIntBoxLibrary::STATIC_GetSize(const struct FIntBox& Box)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.GetSize");

	UIntBoxLibrary_GetSize_Params params {};
	params.Box = Box;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033EA60
//		Name   -> Function Voxel.IntBoxLibrary.GetCorners
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FIntVector>                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FIntVector> UIntBoxLibrary::STATIC_GetCorners(const struct FIntBox& Box)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.GetCorners");

	UIntBoxLibrary_GetCorners_Params params {};
	params.Box = Box;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033E8D0
//		Name   -> Function Voxel.IntBoxLibrary.GetCenter
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UIntBoxLibrary::STATIC_GetCenter(const struct FIntBox& Box)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.GetCenter");

	UIntBoxLibrary_GetCenter_Params params {};
	params.Box = Box;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033DCE0
//		Name   -> Function Voxel.IntBoxLibrary.Conv_IntBoxToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     IntBox                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UIntBoxLibrary::STATIC_Conv_IntBoxToString(const struct FIntBox& IntBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.Conv_IntBoxToString");

	UIntBoxLibrary_Conv_IntBoxToString_Params params {};
	params.IntBox = IntBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033DB80
//		Name   -> Function Voxel.IntBoxLibrary.Contains
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Other                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UIntBoxLibrary::STATIC_Contains(const struct FIntBox& Box, const struct FIntBox& Other)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.Contains");

	UIntBoxLibrary_Contains_Params params {};
	params.Box = Box;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033CF30
//		Name   -> Function Voxel.IntBoxLibrary.AddPoint
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntBox UIntBoxLibrary::STATIC_AddPoint(const struct FIntBox& Box, const struct FIntVector& Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.AddPoint");

	UIntBoxLibrary_AddPoint_Params params {};
	params.Box = Box;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033C6B0
//		Name   -> Function Voxel.IntBoxLibrary.AddBox
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     BoxToAdd                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntBox UIntBoxLibrary::STATIC_AddBox(const struct FIntBox& Box, const struct FIntBox& BoxToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.IntBoxLibrary.AddBox");

	UIntBoxLibrary_AddBox_Params params {};
	params.Box = Box;
	params.BoxToAdd = BoxToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UIntBoxLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UIntBoxLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void USteamNetDriverCopy::AfterRead()
{
	UIpNetDriver::AfterRead();

}

void USteamNetDriverCopy::BeforeDelete()
{
	UIpNetDriver::BeforeDelete();

}

// Function:
//		Offset -> 0x003412E0
//		Name   -> Function Voxel.VoxelActor.SetStaticMesh
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class UStaticMesh*                                 Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVoxelActor::SetStaticMesh(class UStaticMesh* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelActor.SetStaticMesh");

	AVoxelActor_SetStaticMesh_Params params {};
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00340DE0
//		Name   -> Function Voxel.VoxelActor.SetInstanceRandom
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVoxelActor::SetInstanceRandom(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelActor.SetInstanceRandom");

	AVoxelActor_SetInstanceRandom_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AVoxelActor::AfterRead()
{
	AActor::AfterRead();

}

void AVoxelActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void AVoxelActorWithStaticMesh::AfterRead()
{
	AVoxelActor::AfterRead();

	READ_PTR_FULL(StaticMeshComponent, UStaticMeshComponent);
}

void AVoxelActorWithStaticMesh::BeforeDelete()
{
	AVoxelActor::BeforeDelete();

	DELE_PTR_FULL(StaticMeshComponent);
}

void AVoxelActorWithStaticMeshAndAutoDisable::AfterRead()
{
	AVoxelActorWithStaticMesh::AfterRead();

	READ_PTR_FULL(AutoDisableComponent, UVoxelAutoDisableComponent);
}

void AVoxelActorWithStaticMeshAndAutoDisable::BeforeDelete()
{
	AVoxelActorWithStaticMesh::BeforeDelete();

	DELE_PTR_FULL(AutoDisableComponent);
}

void AVoxelPlaceableItemActor::AfterRead()
{
	AActor::AfterRead();

}

void AVoxelPlaceableItemActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void AVoxelAssetActor::AfterRead()
{
	AVoxelPlaceableItemActor::AfterRead();

	READ_PTR_FULL(Root, USceneComponent);
}

void AVoxelAssetActor::BeforeDelete()
{
	AVoxelPlaceableItemActor::BeforeDelete();

	DELE_PTR_FULL(Root);
}

// Function:
//		Offset -> 0x0033F5E0
//		Name   -> Function Voxel.VoxelAssetTools.ImportAssetAsync
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVoxelTransformableWorldGenerator*           Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelAssetTools::STATIC_ImportAssetAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, class UVoxelTransformableWorldGenerator* Asset, const struct FTransform& Transform, int Priority, bool bConvertToVoxelSpace, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.ImportAssetAsync");

	UVoxelAssetTools_ImportAssetAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Asset = Asset;
	params.Transform = Transform;
	params.Priority = Priority;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033F380
//		Name   -> Function Voxel.VoxelAssetTools.ImportAsset
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVoxelTransformableWorldGenerator*           Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelAssetTools::STATIC_ImportAsset(class AVoxelWorld* World, class UVoxelTransformableWorldGenerator* Asset, const struct FTransform& Transform, int Priority, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelAssetTools.ImportAsset");

	UVoxelAssetTools_ImportAsset_Params params {};
	params.World = World;
	params.Asset = Asset;
	params.Transform = Transform;
	params.Priority = Priority;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UVoxelAssetTools::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelAssetTools::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UVoxelAutoDisableComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UVoxelAutoDisableComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x00341CF0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.UpdatePosition
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_UpdatePosition(class AVoxelWorld* World, const struct FIntVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.UpdatePosition");

	UVoxelBlueprintLibrary_UpdatePosition_Params params {};
	params.World = World;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00341BC0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.UpdateBounds
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWaitForAllChunksToFinishUpdating                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_UpdateBounds(class AVoxelWorld* World, const struct FIntBox& Bounds, bool bWaitForAllChunksToFinishUpdating)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.UpdateBounds");

	UVoxelBlueprintLibrary_UpdateBounds_Params params {};
	params.World = World;
	params.Bounds = Bounds;
	params.bWaitForAllChunksToFinishUpdating = bWaitForAllChunksToFinishUpdating;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00341B50
//		Name   -> Function Voxel.VoxelBlueprintLibrary.UpdateAll
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_UpdateAll(class AVoxelWorld* World)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.UpdateAll");

	UVoxelBlueprintLibrary_UpdateAll_Params params {};
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00341AE0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.Undo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_Undo(class AVoxelWorld* World)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Undo");

	UVoxelBlueprintLibrary_Undo_Params params {};
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00341870
//		Name   -> Function Voxel.VoxelBlueprintLibrary.Substract_IntVectorIntVector
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntVector                                  Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntVector UVoxelBlueprintLibrary::STATIC_Substract_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Substract_IntVectorIntVector");

	UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Params params {};
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00341720
//		Name   -> Function Voxel.VoxelBlueprintLibrary.SpawnFloatingVoxelActors
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AVoxelActor*>                         OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_SpawnFloatingVoxelActors(class AVoxelWorld* World, const struct FIntBox& Bounds, TArray<class AVoxelActor*>* OutActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SpawnFloatingVoxelActors");

	UVoxelBlueprintLibrary_SpawnFloatingVoxelActors_Params params {};
	params.World = World;
	params.Bounds = Bounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function:
//		Offset -> 0x00340D20
//		Name   -> Function Voxel.VoxelBlueprintLibrary.SetIndexB
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		unsigned char                                      Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelMaterial UVoxelBlueprintLibrary::STATIC_SetIndexB(const struct FVoxelMaterial& Material, unsigned char Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SetIndexB");

	UVoxelBlueprintLibrary_SetIndexB_Params params {};
	params.Material = Material;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00340C60
//		Name   -> Function Voxel.VoxelBlueprintLibrary.SetIndexA
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		unsigned char                                      Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelMaterial UVoxelBlueprintLibrary::STATIC_SetIndexA(const struct FVoxelMaterial& Material, unsigned char Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SetIndexA");

	UVoxelBlueprintLibrary_SetIndexA_Params params {};
	params.Material = Material;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00340BA0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.SetIndex
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		unsigned char                                      Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelMaterial UVoxelBlueprintLibrary::STATIC_SetIndex(const struct FVoxelMaterial& Material, unsigned char Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SetIndex");

	UVoxelBlueprintLibrary_SetIndex_Params params {};
	params.Material = Material;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00340AD0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.SetColor
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelMaterial UVoxelBlueprintLibrary::STATIC_SetColor(const struct FVoxelMaterial& Material, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SetColor");

	UVoxelBlueprintLibrary_SetColor_Params params {};
	params.Material = Material;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00340A00
//		Name   -> Function Voxel.VoxelBlueprintLibrary.SetBlend
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Blend                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelMaterial UVoxelBlueprintLibrary::STATIC_SetBlend(const struct FVoxelMaterial& Material, float Blend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SetBlend");

	UVoxelBlueprintLibrary_SetBlend_Params params {};
	params.Material = Material;
	params.Blend = Blend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00340820
//		Name   -> Function Voxel.VoxelBlueprintLibrary.SaveFrame
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_SaveFrame(class AVoxelWorld* World)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.SaveFrame");

	UVoxelBlueprintLibrary_SaveFrame_Params params {};
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00340450
//		Name   -> Function Voxel.VoxelBlueprintLibrary.Redo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_Redo(class AVoxelWorld* World)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Redo");

	UVoxelBlueprintLibrary_Redo_Params params {};
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00340170
//		Name   -> Function Voxel.VoxelBlueprintLibrary.Multiply_IntVectorIntVector
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntVector                                  Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntVector UVoxelBlueprintLibrary::STATIC_Multiply_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Multiply_IntVectorIntVector");

	UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Params params {};
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00340090
//		Name   -> Function Voxel.VoxelBlueprintLibrary.Multiply_IntVectorInt
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntVector                                  Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntVector UVoxelBlueprintLibrary::STATIC_Multiply_IntVectorInt(const struct FIntVector& Left, int Right)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Multiply_IntVectorInt");

	UVoxelBlueprintLibrary_Multiply_IntVectorInt_Params params {};
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033FFB0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.Multiply_IntIntVector
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntVector UVoxelBlueprintLibrary::STATIC_Multiply_IntIntVector(int Left, const struct FIntVector& Right)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Multiply_IntIntVector");

	UVoxelBlueprintLibrary_Multiply_IntIntVector_Params params {};
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033FD20
//		Name   -> Function Voxel.VoxelBlueprintLibrary.MakeBoxFromGlobalPositionAndRadius
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     GlobalPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              RadiusInVoxels                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntBox UVoxelBlueprintLibrary::STATIC_MakeBoxFromGlobalPositionAndRadius(class AVoxelWorld* World, const struct FVector& GlobalPosition, float RadiusInVoxels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.MakeBoxFromGlobalPositionAndRadius");

	UVoxelBlueprintLibrary_MakeBoxFromGlobalPositionAndRadius_Params params {};
	params.World = World;
	params.GlobalPosition = GlobalPosition;
	params.RadiusInVoxels = RadiusInVoxels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033FA10
//		Name   -> Function Voxel.VoxelBlueprintLibrary.IsGlobalVoxelPoolCreated
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelBlueprintLibrary::STATIC_IsGlobalVoxelPoolCreated(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.IsGlobalVoxelPoolCreated");

	UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033F300
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetTaskCount
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVoxelBlueprintLibrary::STATIC_GetTaskCount(class AVoxelWorld* World)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetTaskCount");

	UVoxelBlueprintLibrary_GetTaskCount_Params params {};
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033F140
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetNormal
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UVoxelBlueprintLibrary::STATIC_GetNormal(class AVoxelWorld* World, const struct FIntVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetNormal");

	UVoxelBlueprintLibrary_GetNormal_Params params {};
	params.World = World;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033F0B0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetMin_Intvector
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntVector                                  Vector                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVoxelBlueprintLibrary::STATIC_GetMin_Intvector(const struct FIntVector& Vector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetMin_Intvector");

	UVoxelBlueprintLibrary_GetMin_Intvector_Params params {};
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033F020
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetMax_Intvector
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntVector                                  Vector                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVoxelBlueprintLibrary::STATIC_GetMax_Intvector(const struct FIntVector& Vector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetMax_Intvector");

	UVoxelBlueprintLibrary_GetMax_Intvector_Params params {};
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033EEB0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetIntOutput
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVoxelBlueprintLibrary::STATIC_GetIntOutput(class AVoxelWorld* World, const struct FName& Name, int X, int Y, int Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetIntOutput");

	UVoxelBlueprintLibrary_GetIntOutput_Params params {};
	params.World = World;
	params.Name = Name;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033EE30
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetIndexB
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UVoxelBlueprintLibrary::STATIC_GetIndexB(const struct FVoxelMaterial& Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetIndexB");

	UVoxelBlueprintLibrary_GetIndexB_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033EDB0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetIndexA
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UVoxelBlueprintLibrary::STATIC_GetIndexA(const struct FVoxelMaterial& Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetIndexA");

	UVoxelBlueprintLibrary_GetIndexA_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033ED30
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetIndex
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UVoxelBlueprintLibrary::STATIC_GetIndex(const struct FVoxelMaterial& Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetIndex");

	UVoxelBlueprintLibrary_GetIndex_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033EBC0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetFloatOutput
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UVoxelBlueprintLibrary::STATIC_GetFloatOutput(class AVoxelWorld* World, const struct FName& Name, int X, int Y, int Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetFloatOutput");

	UVoxelBlueprintLibrary_GetFloatOutput_Params params {};
	params.World = World;
	params.Name = Name;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033E9E0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetColor
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UVoxelBlueprintLibrary::STATIC_GetColor(const struct FVoxelMaterial& Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetColor");

	UVoxelBlueprintLibrary_GetColor_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033E820
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetBounds
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntBox UVoxelBlueprintLibrary::STATIC_GetBounds(class AVoxelWorld* World)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetBounds");

	UVoxelBlueprintLibrary_GetBounds_Params params {};
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033E7A0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.GetBlend
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UVoxelBlueprintLibrary::STATIC_GetBlend(const struct FVoxelMaterial& Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.GetBlend");

	UVoxelBlueprintLibrary_GetBlend_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033E6C0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.Divide_IntVectorInt
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntVector                                  Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntVector UVoxelBlueprintLibrary::STATIC_Divide_IntVectorInt(const struct FIntVector& Left, int Right)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Divide_IntVectorInt");

	UVoxelBlueprintLibrary_Divide_IntVectorInt_Params params {};
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033E650
//		Name   -> Function Voxel.VoxelBlueprintLibrary.DestroyGlobalVoxelThreadPool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_DestroyGlobalVoxelThreadPool(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.DestroyGlobalVoxelThreadPool");

	UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033E5B0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateSingleIndexPaintMaterial
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelPaintMaterial                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelPaintMaterial UVoxelBlueprintLibrary::STATIC_CreateSingleIndexPaintMaterial(unsigned char Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateSingleIndexPaintMaterial");

	UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033E3B0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateRGBPaintMaterial
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPaintR                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPaintG                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPaintB                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPaintA                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelPaintMaterial                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelPaintMaterial UVoxelBlueprintLibrary::STATIC_CreateRGBPaintMaterial(const struct FLinearColor& Color, float Amount, bool bPaintR, bool bPaintG, bool bPaintB, bool bPaintA)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateRGBPaintMaterial");

	UVoxelBlueprintLibrary_CreateRGBPaintMaterial_Params params {};
	params.Color = Color;
	params.Amount = Amount;
	params.bPaintR = bPaintR;
	params.bPaintG = bPaintG;
	params.bPaintB = bPaintB;
	params.bPaintA = bPaintA;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033E330
//		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateMaterialFromIndex
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelMaterial UVoxelBlueprintLibrary::STATIC_CreateMaterialFromIndex(unsigned char Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateMaterialFromIndex");

	UVoxelBlueprintLibrary_CreateMaterialFromIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033E220
//		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateMaterialFromDoubleIndex
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      IndexA                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      IndexB                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Blend                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelMaterial UVoxelBlueprintLibrary::STATIC_CreateMaterialFromDoubleIndex(unsigned char IndexA, unsigned char IndexB, float Blend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateMaterialFromDoubleIndex");

	UVoxelBlueprintLibrary_CreateMaterialFromDoubleIndex_Params params {};
	params.IndexA = IndexA;
	params.IndexB = IndexB;
	params.Blend = Blend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033E190
//		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateMaterialFromColor
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelMaterial UVoxelBlueprintLibrary::STATIC_CreateMaterialFromColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateMaterialFromColor");

	UVoxelBlueprintLibrary_CreateMaterialFromColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033E0E0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateGlobalVoxelThreadPool
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumberOfThreads                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_CreateGlobalVoxelThreadPool(class UObject* WorldContextObject, int NumberOfThreads)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateGlobalVoxelThreadPool");

	UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.NumberOfThreads = NumberOfThreads;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033DEF0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateDoubleIndexSetPaintMaterial
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      IndexA                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      IndexB                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Blend                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSetIndexA                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSetIndexB                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSetBlend                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelPaintMaterial                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelPaintMaterial UVoxelBlueprintLibrary::STATIC_CreateDoubleIndexSetPaintMaterial(unsigned char IndexA, unsigned char IndexB, float Blend, bool bSetIndexA, bool bSetIndexB, bool bSetBlend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateDoubleIndexSetPaintMaterial");

	UVoxelBlueprintLibrary_CreateDoubleIndexSetPaintMaterial_Params params {};
	params.IndexA = IndexA;
	params.IndexB = IndexB;
	params.Blend = Blend;
	params.bSetIndexA = bSetIndexA;
	params.bSetIndexB = bSetIndexB;
	params.bSetBlend = bSetBlend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033DE10
//		Name   -> Function Voxel.VoxelBlueprintLibrary.CreateDoubleIndexBlendPaintMaterial
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		unsigned char                                      Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelPaintMaterial                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelPaintMaterial UVoxelBlueprintLibrary::STATIC_CreateDoubleIndexBlendPaintMaterial(unsigned char Index, float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CreateDoubleIndexBlendPaintMaterial");

	UVoxelBlueprintLibrary_CreateDoubleIndexBlendPaintMaterial_Params params {};
	params.Index = Index;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033DB10
//		Name   -> Function Voxel.VoxelBlueprintLibrary.ClearFrames
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_ClearFrames(class AVoxelWorld* World)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ClearFrames");

	UVoxelBlueprintLibrary_ClearFrames_Params params {};
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033DA20
//		Name   -> Function Voxel.VoxelBlueprintLibrary.CacheValues
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_CacheValues(class AVoxelWorld* World, const struct FIntBox& Bounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CacheValues");

	UVoxelBlueprintLibrary_CacheValues_Params params {};
	params.World = World;
	params.Bounds = Bounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033D930
//		Name   -> Function Voxel.VoxelBlueprintLibrary.CacheMaterials
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_CacheMaterials(class AVoxelWorld* World, const struct FIntBox& Bounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.CacheMaterials");

	UVoxelBlueprintLibrary_CacheMaterials_Params params {};
	params.World = World;
	params.Bounds = Bounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033D7A0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.BindVoxelGenerationEvent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             OnGenerate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bFireExistingOnes                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ChunkSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                GenerationDistanceInChunks                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_BindVoxelGenerationEvent(class AVoxelWorld* World, const struct FScriptDelegate& OnGenerate, bool bFireExistingOnes, int ChunkSize, int GenerationDistanceInChunks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.BindVoxelGenerationEvent");

	UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Params params {};
	params.World = World;
	params.OnGenerate = OnGenerate;
	params.bFireExistingOnes = bFireExistingOnes;
	params.ChunkSize = ChunkSize;
	params.GenerationDistanceInChunks = GenerationDistanceInChunks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033D5B0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.BindVoxelChunkEvents
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             OnActivate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             OnDeactivate                                               (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bFireExistingOnes                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ChunkSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ActivationDistanceInChunks                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_BindVoxelChunkEvents(class AVoxelWorld* World, const struct FScriptDelegate& OnActivate, const struct FScriptDelegate& OnDeactivate, bool bFireExistingOnes, int ChunkSize, int ActivationDistanceInChunks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.BindVoxelChunkEvents");

	UVoxelBlueprintLibrary_BindVoxelChunkEvents_Params params {};
	params.World = World;
	params.OnActivate = OnActivate;
	params.OnDeactivate = OnDeactivate;
	params.bFireExistingOnes = bFireExistingOnes;
	params.ChunkSize = ChunkSize;
	params.ActivationDistanceInChunks = ActivationDistanceInChunks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033D4D0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.BindDelegateToChunkGeneration
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Event                                                      (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_BindDelegateToChunkGeneration(class AVoxelWorld* World, const struct FScriptDelegate& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.BindDelegateToChunkGeneration");

	UVoxelBlueprintLibrary_BindDelegateToChunkGeneration_Params params {};
	params.World = World;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033D370
//		Name   -> Function Voxel.VoxelBlueprintLibrary.AreCollisionsEnabled
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                LOD                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelBlueprintLibrary::STATIC_AreCollisionsEnabled(class AVoxelWorld* World, const struct FVector& Position, int* LOD, bool bConvertToVoxelSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.AreCollisionsEnabled");

	UVoxelBlueprintLibrary_AreCollisionsEnabled_Params params {};
	params.World = World;
	params.Position = Position;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LOD != nullptr)
		*LOD = params.LOD;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033D250
//		Name   -> Function Voxel.VoxelBlueprintLibrary.ApplyPaintMaterial
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVoxelPaintMaterial                         PaintMaterial                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FVoxelMaterial UVoxelBlueprintLibrary::STATIC_ApplyPaintMaterial(const struct FVoxelMaterial& Material, const struct FVoxelPaintMaterial& PaintMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ApplyPaintMaterial");

	UVoxelBlueprintLibrary_ApplyPaintMaterial_Params params {};
	params.Material = Material;
	params.PaintMaterial = PaintMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033D1E0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.ApplyLODSettings
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_ApplyLODSettings(class AVoxelWorld* World)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.ApplyLODSettings");

	UVoxelBlueprintLibrary_ApplyLODSettings_Params params {};
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033CBE0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.AddInstances
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UStaticMesh*                                 Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FTransform>                          Transforms                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FLinearColor>                        Colors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bEnableCollisions                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartCullDistance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EndCullDistance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ActorTemplate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     FloatingDetectionOffset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              BuildDelay                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      HISMTemplate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBlueprintLibrary::STATIC_AddInstances(class AVoxelWorld* World, class UStaticMesh* Mesh, TArray<struct FTransform> Transforms, TArray<struct FLinearColor> Colors, bool bEnableCollisions, float StartCullDistance, float EndCullDistance, class UClass* ActorTemplate, const struct FVector& FloatingDetectionOffset, float BuildDelay, class UClass* HISMTemplate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.AddInstances");

	UVoxelBlueprintLibrary_AddInstances_Params params {};
	params.World = World;
	params.Mesh = Mesh;
	params.Transforms = Transforms;
	params.Colors = Colors;
	params.bEnableCollisions = bEnableCollisions;
	params.StartCullDistance = StartCullDistance;
	params.EndCullDistance = EndCullDistance;
	params.ActorTemplate = ActorTemplate;
	params.FloatingDetectionOffset = FloatingDetectionOffset;
	params.BuildDelay = BuildDelay;
	params.HISMTemplate = HISMTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033D0F0
//		Name   -> Function Voxel.VoxelBlueprintLibrary.Add_IntVectorIntVector
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FIntVector                                  Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntVector UVoxelBlueprintLibrary::STATIC_Add_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBlueprintLibrary.Add_IntVectorIntVector");

	UVoxelBlueprintLibrary_Add_IntVectorIntVector_Params params {};
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVoxelBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x00341510
//		Name   -> Function Voxel.VoxelBoxTools.SetValueBoxAsync
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBoxTools::STATIC_SetValueBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntBox& Bounds, float Value, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.SetValueBoxAsync");

	UVoxelBoxTools_SetValueBoxAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Bounds = Bounds;
	params.Value = Value;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00341370
//		Name   -> Function Voxel.VoxelBoxTools.SetValueBox
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelBoxTools::STATIC_SetValueBox(class AVoxelWorld* World, const struct FIntBox& Bounds, float Value, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.SetValueBox");

	UVoxelBoxTools_SetValueBox_Params params {};
	params.World = World;
	params.Bounds = Bounds;
	params.Value = Value;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00341060
//		Name   -> Function Voxel.VoxelBoxTools.SetMaterialBoxAsync
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelPaintMaterial                         PaintMaterial                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBoxTools::STATIC_SetMaterialBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntBox& Bounds, const struct FVoxelPaintMaterial& PaintMaterial, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.SetMaterialBoxAsync");

	UVoxelBoxTools_SetMaterialBoxAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Bounds = Bounds;
	params.PaintMaterial = PaintMaterial;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00340E60
//		Name   -> Function Voxel.VoxelBoxTools.SetMaterialBox
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelPaintMaterial                         PaintMaterial                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelBoxTools::STATIC_SetMaterialBox(class AVoxelWorld* World, const struct FIntBox& Bounds, const struct FVoxelPaintMaterial& PaintMaterial, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.SetMaterialBox");

	UVoxelBoxTools_SetMaterialBox_Params params {};
	params.World = World;
	params.Bounds = Bounds;
	params.PaintMaterial = PaintMaterial;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00340660
//		Name   -> Function Voxel.VoxelBoxTools.RemoveBoxAsync
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBoxTools::STATIC_RemoveBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntBox& Bounds, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.RemoveBoxAsync");

	UVoxelBoxTools_RemoveBoxAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Bounds = Bounds;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003404C0
//		Name   -> Function Voxel.VoxelBoxTools.RemoveBox
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelBoxTools::STATIC_RemoveBox(class AVoxelWorld* World, const struct FIntBox& Bounds, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.RemoveBox");

	UVoxelBoxTools_RemoveBox_Params params {};
	params.World = World;
	params.Bounds = Bounds;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0033CA20
//		Name   -> Function Voxel.VoxelBoxTools.AddBoxAsync
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelBoxTools::STATIC_AddBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntBox& Bounds, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.AddBoxAsync");

	UVoxelBoxTools_AddBoxAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Bounds = Bounds;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0033C880
//		Name   -> Function Voxel.VoxelBoxTools.AddBox
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelBoxTools::STATIC_AddBox(class AVoxelWorld* World, const struct FIntBox& Bounds, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxTools.AddBox");

	UVoxelBoxTools_AddBox_Params params {};
	params.World = World;
	params.Bounds = Bounds;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVoxelBoxTools::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelBoxTools::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UVoxelChannel::AfterRead()
{
	UChannel::AfterRead();

}

void UVoxelChannel::BeforeDelete()
{
	UChannel::BeforeDelete();

}

void AVoxelCharacter::AfterRead()
{
	ACharacter::AfterRead();

}

void AVoxelCharacter::BeforeDelete()
{
	ACharacter::BeforeDelete();

}

// Function:
//		Offset -> 0x003465D0
//		Name   -> Function Voxel.VoxelCraterTools.AddCraterAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PositionsSampleRate                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FIntVector>                          SampledPositions                                           (Parm, OutParm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelCraterTools::STATIC_AddCraterAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVector& Position, float Radius, float PositionsSampleRate, TArray<struct FIntVector>* SampledPositions, bool bConvertToVoxelSpace, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelCraterTools.AddCraterAsync");

	UVoxelCraterTools_AddCraterAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;
	params.Radius = Radius;
	params.PositionsSampleRate = PositionsSampleRate;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SampledPositions != nullptr)
		*SampledPositions = params.SampledPositions;

}


// Function:
//		Offset -> 0x00346360
//		Name   -> Function Voxel.VoxelCraterTools.AddCrater
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PositionsSampleRate                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FIntVector>                          SampledPositions                                           (Parm, OutParm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelCraterTools::STATIC_AddCrater(class AVoxelWorld* World, const struct FVector& Position, float Radius, float PositionsSampleRate, TArray<struct FIntVector>* SampledPositions, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelCraterTools.AddCrater");

	UVoxelCraterTools_AddCrater_Params params {};
	params.World = World;
	params.Position = Position;
	params.Radius = Radius;
	params.PositionsSampleRate = PositionsSampleRate;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SampledPositions != nullptr)
		*SampledPositions = params.SampledPositions;


	return params.ReturnValue;
}


void UVoxelCraterTools::AfterRead()
{
	UObject::AfterRead();

}

void UVoxelCraterTools::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UVoxelWorldGenerator::AfterRead()
{
	UObject::AfterRead();

}

void UVoxelWorldGenerator::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UVoxelTransformableWorldGenerator::AfterRead()
{
	UVoxelWorldGenerator::AfterRead();

}

void UVoxelTransformableWorldGenerator::BeforeDelete()
{
	UVoxelWorldGenerator::BeforeDelete();

}

// Function:
//		Offset -> 0x003473E0
//		Name   -> Function Voxel.VoxelDataAsset.GetSize
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FIntVector                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntVector UVoxelDataAsset::GetSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataAsset.GetSize");

	UVoxelDataAsset_GetSize_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346DA0
//		Name   -> Function Voxel.VoxelDataAsset.GetBounds
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FIntBox                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntBox UVoxelDataAsset::GetBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataAsset.GetBounds");

	UVoxelDataAsset_GetBounds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVoxelDataAsset::AfterRead()
{
	UVoxelTransformableWorldGenerator::AfterRead();

}

void UVoxelDataAsset::BeforeDelete()
{
	UVoxelTransformableWorldGenerator::BeforeDelete();

}

// Function:
//		Offset -> 0x003481E0
//		Name   -> Function Voxel.VoxelDataTools.SetValueAsync
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelDataTools::STATIC_SetValueAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntVector& Position, float Value, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.SetValueAsync");

	UVoxelDataTools_SetValueAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;
	params.Value = Value;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00348020
//		Name   -> Function Voxel.VoxelDataTools.SetValue
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelDataTools::STATIC_SetValue(class AVoxelWorld* World, const struct FIntVector& Position, float Value, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.SetValue");

	UVoxelDataTools_SetValue_Params params {};
	params.World = World;
	params.Position = Position;
	params.Value = Value;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00347E40
//		Name   -> Function Voxel.VoxelDataTools.SetMaterialAsync
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelDataTools::STATIC_SetMaterialAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntVector& Position, const struct FVoxelMaterial& Material, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.SetMaterialAsync");

	UVoxelDataTools_SetMaterialAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;
	params.Material = Material;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00347CC0
//		Name   -> Function Voxel.VoxelDataTools.SetMaterial
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              Material                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelDataTools::STATIC_SetMaterial(class AVoxelWorld* World, const struct FIntVector& Position, const struct FVoxelMaterial& Material, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.SetMaterial");

	UVoxelDataTools_SetMaterial_Params params {};
	params.World = World;
	params.Position = Position;
	params.Material = Material;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003479D0
//		Name   -> Function Voxel.VoxelDataTools.LoadFromSave
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelUncompressedWorldSave                 Save                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelDataTools::STATIC_LoadFromSave(class AVoxelWorld* World, const struct FVoxelUncompressedWorldSave& Save, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.LoadFromSave");

	UVoxelDataTools_LoadFromSave_Params params {};
	params.World = World;
	params.Save = Save;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003478A0
//		Name   -> Function Voxel.VoxelDataTools.LoadFromCompressedSave
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelCompressedWorldSave                   Save                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelDataTools::STATIC_LoadFromCompressedSave(class AVoxelWorld* World, const struct FVoxelCompressedWorldSave& Save, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.LoadFromCompressedSave");

	UVoxelDataTools_LoadFromCompressedSave_Params params {};
	params.World = World;
	params.Save = Save;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00347620
//		Name   -> Function Voxel.VoxelDataTools.GetValueAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelDataTools::STATIC_GetValueAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float* Value, class AVoxelWorld* World, const struct FIntVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetValueAsync");

	UVoxelDataTools_GetValueAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x003474C0
//		Name   -> Function Voxel.VoxelDataTools.GetValue
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelDataTools::STATIC_GetValue(float* Value, class AVoxelWorld* World, const struct FIntVector& Position, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetValue");

	UVoxelDataTools_GetValue_Params params {};
	params.World = World;
	params.Position = Position;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00347230
//		Name   -> Function Voxel.VoxelDataTools.GetSave
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelUncompressedWorldSave                 OutSave                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UVoxelDataTools::STATIC_GetSave(class AVoxelWorld* World, struct FVoxelUncompressedWorldSave* OutSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetSave");

	UVoxelDataTools_GetSave_Params params {};
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSave != nullptr)
		*OutSave = params.OutSave;

}


// Function:
//		Offset -> 0x00347080
//		Name   -> Function Voxel.VoxelDataTools.GetMaterialAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVoxelMaterial                              Material                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelDataTools::STATIC_GetMaterialAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelMaterial* Material, class AVoxelWorld* World, const struct FIntVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetMaterialAsync");

	UVoxelDataTools_GetMaterialAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;

}


// Function:
//		Offset -> 0x00346F20
//		Name   -> Function Voxel.VoxelDataTools.GetMaterial
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVoxelMaterial                              Material                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelDataTools::STATIC_GetMaterial(struct FVoxelMaterial* Material, class AVoxelWorld* World, const struct FIntVector& Position, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetMaterial");

	UVoxelDataTools_GetMaterial_Params params {};
	params.World = World;
	params.Position = Position;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346E20
//		Name   -> Function Voxel.VoxelDataTools.GetCompressedSave
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelCompressedWorldSave                   OutSave                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UVoxelDataTools::STATIC_GetCompressedSave(class AVoxelWorld* World, struct FVoxelCompressedWorldSave* OutSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDataTools.GetCompressedSave");

	UVoxelDataTools_GetCompressedSave_Params params {};
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSave != nullptr)
		*OutSave = params.OutSave;

}


void UVoxelDataTools::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelDataTools::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x00346C00
//		Name   -> Function Voxel.VoxelDebugUtilities.DrawDebugIntBox
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Box                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelDebugUtilities::STATIC_DrawDebugIntBox(class AVoxelWorld* World, const struct FIntBox& Box, float LifeTime, float Thickness, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDebugUtilities.DrawDebugIntBox");

	UVoxelDebugUtilities_DrawDebugIntBox_Params params {};
	params.World = World;
	params.Box = Box;
	params.LifeTime = LifeTime;
	params.Thickness = Thickness;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003469D0
//		Name   -> Function Voxel.VoxelDebugUtilities.DebugVoxelsInsideBounds
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDebugDensities                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                TextColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelDebugUtilities::STATIC_DebugVoxelsInsideBounds(class AVoxelWorld* World, const struct FIntBox& Bounds, const struct FLinearColor& Color, float LifeTime, float Thickness, bool bDebugDensities, const struct FLinearColor& TextColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDebugUtilities.DebugVoxelsInsideBounds");

	UVoxelDebugUtilities_DebugVoxelsInsideBounds_Params params {};
	params.World = World;
	params.Bounds = Bounds;
	params.Color = Color;
	params.LifeTime = LifeTime;
	params.Thickness = Thickness;
	params.bDebugDensities = bDebugDensities;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UVoxelDebugUtilities::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelDebugUtilities::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x003468A0
//		Name   -> Function Voxel.VoxelDisableEditsBox.AddDisableEditsBoxToWorld
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 InWorld                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVoxelDisableEditsBox::STATIC_AddDisableEditsBoxToWorld(class AVoxelWorld* InWorld, const struct FIntBox& Bounds, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelDisableEditsBox.AddDisableEditsBoxToWorld");

	AVoxelDisableEditsBox_AddDisableEditsBoxToWorld_Params params {};
	params.InWorld = InWorld;
	params.Bounds = Bounds;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AVoxelDisableEditsBox::AfterRead()
{
	AVoxelPlaceableItemActor::AfterRead();

	READ_PTR_FULL(Box, UBoxComponent);
}

void AVoxelDisableEditsBox::BeforeDelete()
{
	AVoxelPlaceableItemActor::BeforeDelete();

	DELE_PTR_FULL(Box);
}

void UVoxelEmptyWorldGenerator::AfterRead()
{
	UVoxelTransformableWorldGenerator::AfterRead();

}

void UVoxelEmptyWorldGenerator::BeforeDelete()
{
	UVoxelTransformableWorldGenerator::BeforeDelete();

}

// Function:
//		Offset -> 0x003483D0
//		Name   -> Function Voxel.VoxelErosion.Step
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelErosion::Step(int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelErosion.Step");

	UVoxelErosion_Step_Params params {};
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00347880
//		Name   -> Function Voxel.VoxelErosion.Init
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UVoxelErosion::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelErosion.Init");

	UVoxelErosion_Init_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003477D0
//		Name   -> Function Voxel.VoxelErosion.GetWaterHeightTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UVoxelErosion::GetWaterHeightTexture(float Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelErosion.GetWaterHeightTexture");

	UVoxelErosion_GetWaterHeightTexture_Params params {};
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00347430
//		Name   -> Function Voxel.VoxelErosion.GetTerrainHeightTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UVoxelErosion::GetTerrainHeightTexture(float Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelErosion.GetTerrainHeightTexture");

	UVoxelErosion_GetTerrainHeightTexture_Params params {};
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00347350
//		Name   -> Function Voxel.VoxelErosion.GetSedimentTexture
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UVoxelErosion::GetSedimentTexture(float Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelErosion.GetSedimentTexture");

	UVoxelErosion_GetSedimentTexture_Params params {};
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVoxelErosion::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RainMapInit, UTexture2D);
	READ_PTR_FULL(HeightmapInit, UTexture2D);
}

void UVoxelErosion::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RainMapInit);
	DELE_PTR_FULL(HeightmapInit);
}

void UVoxelFlatWorldGenerator::AfterRead()
{
	UVoxelWorldGenerator::AfterRead();

}

void UVoxelFlatWorldGenerator::BeforeDelete()
{
	UVoxelWorldGenerator::BeforeDelete();

}

// Function:
//		Offset -> 0x00347860
//		Name   -> Function Voxel.VoxelHeightmapAsset.GetWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVoxelHeightmapAsset::GetWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelHeightmapAsset.GetWidth");

	UVoxelHeightmapAsset_GetWidth_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00346F00
//		Name   -> Function Voxel.VoxelHeightmapAsset.GetHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVoxelHeightmapAsset::GetHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelHeightmapAsset.GetHeight");

	UVoxelHeightmapAsset_GetHeight_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVoxelHeightmapAsset::AfterRead()
{
	UVoxelWorldGenerator::AfterRead();

}

void UVoxelHeightmapAsset::BeforeDelete()
{
	UVoxelWorldGenerator::BeforeDelete();

}

void UVoxelHeightmapAssetFloat::AfterRead()
{
	UVoxelHeightmapAsset::AfterRead();

}

void UVoxelHeightmapAssetFloat::BeforeDelete()
{
	UVoxelHeightmapAsset::BeforeDelete();

}

void UVoxelHeightmapAssetUINT16::AfterRead()
{
	UVoxelHeightmapAsset::AfterRead();

}

void UVoxelHeightmapAssetUINT16::BeforeDelete()
{
	UVoxelHeightmapAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x00347BE0
//		Name   -> Function Voxel.VoxelHierarchicalInstancedStaticMeshComponent.RemoveVoxelInstancesOverlappingSphere
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVoxelHierarchicalInstancedStaticMeshComponent::RemoveVoxelInstancesOverlappingSphere(const struct FVector& Position, float Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelHierarchicalInstancedStaticMeshComponent.RemoveVoxelInstancesOverlappingSphere");

	UVoxelHierarchicalInstancedStaticMeshComponent_RemoveVoxelInstancesOverlappingSphere_Params params {};
	params.Position = Position;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00347B40
//		Name   -> Function Voxel.VoxelHierarchicalInstancedStaticMeshComponent.RemoveVoxelInstancesOverlappingBox
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FBox                                        Bounds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVoxelHierarchicalInstancedStaticMeshComponent::RemoveVoxelInstancesOverlappingBox(const struct FBox& Bounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelHierarchicalInstancedStaticMeshComponent.RemoveVoxelInstancesOverlappingBox");

	UVoxelHierarchicalInstancedStaticMeshComponent_RemoveVoxelInstancesOverlappingBox_Params params {};
	params.Bounds = Bounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVoxelHierarchicalInstancedStaticMeshComponent::AfterRead()
{
	UHierarchicalInstancedStaticMeshComponent::AfterRead();

}

void UVoxelHierarchicalInstancedStaticMeshComponent::BeforeDelete()
{
	UHierarchicalInstancedStaticMeshComponent::BeforeDelete();

}

void UVoxelInvokerComponent::AfterRead()
{
	USceneComponent::AfterRead();

}

void UVoxelInvokerComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

void UVoxelInvokerAutoCameraComponent::AfterRead()
{
	UVoxelInvokerComponent::AfterRead();

}

void UVoxelInvokerAutoCameraComponent::BeforeDelete()
{
	UVoxelInvokerComponent::BeforeDelete();

}

void AVoxelLandscapeImporter::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Landscape, ALandscape);
}

void AVoxelLandscapeImporter::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Landscape);
}

void AVoxelMarker::AfterRead()
{
	AActor::AfterRead();

}

void AVoxelMarker::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function:
//		Offset -> 0x00348590
//		Name   -> Function Voxel.VoxelProjectionMarker.UpdateProjectionMarker
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Voxel_EVoxelMode                                   Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EditDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              HeightOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVoxelProjectionMarker::UpdateProjectionMarker(class AVoxelWorld* World, Voxel_EVoxelMode Mode, const struct FVector& Position, const struct FVector& Normal, float Radius, float EditDistance, float HeightOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionMarker.UpdateProjectionMarker");

	AVoxelProjectionMarker_UpdateProjectionMarker_Params params {};
	params.World = World;
	params.Mode = Mode;
	params.Position = Position;
	params.Normal = Normal;
	params.Radius = Radius;
	params.EditDistance = EditDistance;
	params.HeightOffset = HeightOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AVoxelProjectionMarker::AfterRead()
{
	AVoxelMarker::AfterRead();

	READ_PTR_FULL(Decal, UDecalComponent);
	READ_PTR_FULL(MaterialInstance, UMaterialInstanceDynamic);
}

void AVoxelProjectionMarker::BeforeDelete()
{
	AVoxelMarker::BeforeDelete();

	DELE_PTR_FULL(Decal);
	DELE_PTR_FULL(MaterialInstance);
}

// Function:
//		Offset -> 0x003487B0
//		Name   -> Function Voxel.VoxelSphereMarker.UpdateSphereMarker
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Voxel_EVoxelMode                                   Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVoxelSphereMarker::UpdateSphereMarker(class AVoxelWorld* World, Voxel_EVoxelMode Mode, const struct FVector& Position, float Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereMarker.UpdateSphereMarker");

	AVoxelSphereMarker_UpdateSphereMarker_Params params {};
	params.World = World;
	params.Mode = Mode;
	params.Position = Position;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AVoxelSphereMarker::AfterRead()
{
	AVoxelMarker::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(MaterialParent, UMaterialInterface);
	READ_PTR_FULL(Material, UMaterialInstanceDynamic);
}

void AVoxelSphereMarker::BeforeDelete()
{
	AVoxelMarker::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(MaterialParent);
	DELE_PTR_FULL(Material);
}

// Function:
//		Offset -> 0x00348450
//		Name   -> Function Voxel.VoxelBoxMarker.UpdateBoxMarker
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Voxel_EVoxelMode                                   Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVoxelBoxMarker::UpdateBoxMarker(class AVoxelWorld* World, Voxel_EVoxelMode Mode, const struct FIntBox& Bounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelBoxMarker.UpdateBoxMarker");

	AVoxelBoxMarker_UpdateBoxMarker_Params params {};
	params.World = World;
	params.Mode = Mode;
	params.Bounds = Bounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AVoxelBoxMarker::AfterRead()
{
	AVoxelMarker::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(MaterialParent, UMaterialInterface);
	READ_PTR_FULL(Material, UMaterialInstanceDynamic);
}

void AVoxelBoxMarker::BeforeDelete()
{
	AVoxelMarker::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(MaterialParent);
	DELE_PTR_FULL(Material);
}

void UVoxelMaterialCollectionBase::AfterRead()
{
	UObject::AfterRead();

}

void UVoxelMaterialCollectionBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UVoxelBasicMaterialCollection::AfterRead()
{
	UVoxelMaterialCollectionBase::AfterRead();

}

void UVoxelBasicMaterialCollection::BeforeDelete()
{
	UVoxelMaterialCollectionBase::BeforeDelete();

}

void UVoxelMaterialCollectionSingle::AfterRead()
{
	UObject::AfterRead();

}

void UVoxelMaterialCollectionSingle::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UVoxelMaterialCollectionDouble::AfterRead()
{
	UObject::AfterRead();

}

void UVoxelMaterialCollectionDouble::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UVoxelMaterialCollectionTriple::AfterRead()
{
	UObject::AfterRead();

}

void UVoxelMaterialCollectionTriple::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UVoxelMaterialCollection::AfterRead()
{
	UVoxelMaterialCollectionBase::AfterRead();

	READ_PTR_FULL(SingleMaterialTemplate, UMaterial);
	READ_PTR_FULL(DoubleMaterialTemplate, UMaterial);
	READ_PTR_FULL(TripleMaterialTemplate, UMaterial);
}

void UVoxelMaterialCollection::BeforeDelete()
{
	UVoxelMaterialCollectionBase::BeforeDelete();

	DELE_PTR_FULL(SingleMaterialTemplate);
	DELE_PTR_FULL(DoubleMaterialTemplate);
	DELE_PTR_FULL(TripleMaterialTemplate);
}

void AVoxelMeshImporter::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMesh);
	READ_PTR_FULL(MeshComponent, UStaticMeshComponent);
	READ_PTR_FULL(MaterialInstance, UMaterialInstanceDynamic);
	READ_PTR_FULL(CachedStaticMesh, UStaticMesh);
}

void AVoxelMeshImporter::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(MeshComponent);
	DELE_PTR_FULL(MaterialInstance);
	DELE_PTR_FULL(CachedStaticMesh);
}

void UVoxelSpawner::AfterRead()
{
	UObject::AfterRead();

}

void UVoxelSpawner::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UVoxelMeshSpawner::AfterRead()
{
	UVoxelSpawner::AfterRead();

	READ_PTR_FULL(Mesh, UStaticMesh);
	READ_PTR_FULL(ActorTemplate, UClass);
	READ_PTR_FULL(HISMTemplate, UClass);
}

void UVoxelMeshSpawner::BeforeDelete()
{
	UVoxelSpawner::BeforeDelete();

	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(ActorTemplate);
	DELE_PTR_FULL(HISMTemplate);
}

void UVoxelDemoNetDriver::AfterRead()
{
	UDemoNetDriver::AfterRead();

}

void UVoxelDemoNetDriver::BeforeDelete()
{
	UDemoNetDriver::BeforeDelete();

}

void UVoxelIpNetDriver::AfterRead()
{
	UIpNetDriver::AfterRead();

}

void UVoxelIpNetDriver::BeforeDelete()
{
	UIpNetDriver::BeforeDelete();

}

void UVoxelSteamNetDriver::AfterRead()
{
	USteamNetDriverCopy::AfterRead();

}

void UVoxelSteamNetDriver::BeforeDelete()
{
	USteamNetDriverCopy::BeforeDelete();

}

void AVoxelPart::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(World, AVoxelWorld);
}

void AVoxelPart::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(World);
}

void AVoxelPartSimpleMesh::AfterRead()
{
	AVoxelPart::AfterRead();

}

void AVoxelPartSimpleMesh::BeforeDelete()
{
	AVoxelPart::BeforeDelete();

}

void AVoxelPartSimpleMeshWithAutoDisable::AfterRead()
{
	AVoxelPartSimpleMesh::AfterRead();

	READ_PTR_FULL(AutoDisableComponent, UVoxelAutoDisableComponent);
}

void AVoxelPartSimpleMeshWithAutoDisable::BeforeDelete()
{
	AVoxelPartSimpleMesh::BeforeDelete();

	DELE_PTR_FULL(AutoDisableComponent);
}

// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function Voxel.VoxelPartCube.OnCubesCreated
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<class AStaticMeshActor*>                    Cubes                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AVoxelPartCube::OnCubesCreated(TArray<class AStaticMeshActor*> Cubes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPartCube.OnCubesCreated");

	AVoxelPartCube_OnCubesCreated_Params params {};
	params.Cubes = Cubes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AVoxelPartCube::AfterRead()
{
	AVoxelPart::AfterRead();

	READ_PTR_FULL(Material, UMaterialInterface);
}

void AVoxelPartCube::BeforeDelete()
{
	AVoxelPart::BeforeDelete();

	DELE_PTR_FULL(Material);
}

// Function:
//		Offset -> 0x0034E4E0
//		Name   -> Function Voxel.VoxelPhysicsTools.RemoveFloatingBlocks
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<class AVoxelPart*>                          SpawnedActors                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ClassToSpawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelPhysicsTools::STATIC_RemoveFloatingBlocks(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<class AVoxelPart*>* SpawnedActors, class AVoxelWorld* World, const struct FIntBox& Bounds, class UClass* ClassToSpawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPhysicsTools.RemoveFloatingBlocks");

	UVoxelPhysicsTools_RemoveFloatingBlocks_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Bounds = Bounds;
	params.ClassToSpawn = ClassToSpawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnedActors != nullptr)
		*SpawnedActors = params.SpawnedActors;

}


void UVoxelPhysicsTools::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelPhysicsTools::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x0034D6F0
//		Name   -> Function Voxel.VoxelPlaceableItemsUtilities.AddWorms
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     RotationAmplitude                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     NoiseDir                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              NoiseSegmentLength                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     InitialDir                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VoxelSegmentLength                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumSegments                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              SplitProbability                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              SplitProbabilityGain                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BranchMeanSize                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BranchSizeVariation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelPlaceableItemsUtilities::STATIC_AddWorms(class AVoxelWorld* World, float Radius, int Seed, const struct FVector& RotationAmplitude, const struct FVector& NoiseDir, float NoiseSegmentLength, const struct FVector& Start, const struct FVector& InitialDir, float VoxelSegmentLength, int NumSegments, float SplitProbability, float SplitProbabilityGain, int BranchMeanSize, int BranchSizeVariation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelPlaceableItemsUtilities.AddWorms");

	UVoxelPlaceableItemsUtilities_AddWorms_Params params {};
	params.World = World;
	params.Radius = Radius;
	params.Seed = Seed;
	params.RotationAmplitude = RotationAmplitude;
	params.NoiseDir = NoiseDir;
	params.NoiseSegmentLength = NoiseSegmentLength;
	params.Start = Start;
	params.InitialDir = InitialDir;
	params.VoxelSegmentLength = VoxelSegmentLength;
	params.NumSegments = NumSegments;
	params.SplitProbability = SplitProbability;
	params.SplitProbabilityGain = SplitProbabilityGain;
	params.BranchMeanSize = BranchMeanSize;
	params.BranchSizeVariation = BranchSizeVariation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UVoxelPlaceableItemsUtilities::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelPlaceableItemsUtilities::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x0034E710
//		Name   -> Function Voxel.VoxelProceduralMeshComponent.ResumeVoxelCollisions
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UVoxelProceduralMeshComponent::STATIC_ResumeVoxelCollisions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProceduralMeshComponent.ResumeVoxelCollisions");

	UVoxelProceduralMeshComponent_ResumeVoxelCollisions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function Voxel.VoxelProceduralMeshComponent.InitChunk
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		unsigned char                                      LOD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     ChunkBounds                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelProceduralMeshComponent::InitChunk(unsigned char LOD, const struct FIntBox& ChunkBounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProceduralMeshComponent.InitChunk");

	UVoxelProceduralMeshComponent_InitChunk_Params params {};
	params.LOD = LOD;
	params.ChunkBounds = ChunkBounds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0034DDE0
//		Name   -> Function Voxel.VoxelProceduralMeshComponent.FreezeVoxelCollisions
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UVoxelProceduralMeshComponent::STATIC_FreezeVoxelCollisions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProceduralMeshComponent.FreezeVoxelCollisions");

	UVoxelProceduralMeshComponent_FreezeVoxelCollisions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0034DAE0
//		Name   -> Function Voxel.VoxelProceduralMeshComponent.AreVoxelCollisionsFrozen
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelProceduralMeshComponent::STATIC_AreVoxelCollisionsFrozen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProceduralMeshComponent.AreVoxelCollisionsFrozen");

	UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVoxelProceduralMeshComponent::AfterRead()
{
	UMeshComponent::AfterRead();

	READ_PTR_FULL(ProcMeshBodySetup, UBodySetup);
	READ_PTR_FULL(BodySetupBeingCooked, UBodySetup);
}

void UVoxelProceduralMeshComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

	DELE_PTR_FULL(ProcMeshBodySetup);
	DELE_PTR_FULL(BodySetupBeingCooked);
}

// Function:
//		Offset -> 0x0034F720
//		Name   -> Function Voxel.VoxelProjectionTools.SetValueProjectionNew
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		Voxel_EBlueprintSuccess                            Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Voxel_EFailReason                                  FailReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     LockerName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FModifiedVoxelValue>                 ModifiedVoxels                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCurveFloat*                                 StrengthCurve                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ToolHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EditDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StepInVoxel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LockTimeoutInSeconds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bShowRaycasts                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelProjectionTools::STATIC_SetValueProjectionNew(Voxel_EBlueprintSuccess* Branches, Voxel_EFailReason* FailReason, struct FString* LockerName, TArray<struct FModifiedVoxelValue>* ModifiedVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, float Radius, float Strength, class UCurveFloat* StrengthCurve, float ToolHeight, float EditDistance, float StepInVoxel, float LockTimeoutInSeconds, bool bShowRaycasts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.SetValueProjectionNew");

	UVoxelProjectionTools_SetValueProjectionNew_Params params {};
	params.World = World;
	params.Position = Position;
	params.Normal = Normal;
	params.Radius = Radius;
	params.Strength = Strength;
	params.StrengthCurve = StrengthCurve;
	params.ToolHeight = ToolHeight;
	params.EditDistance = EditDistance;
	params.StepInVoxel = StepInVoxel;
	params.LockTimeoutInSeconds = LockTimeoutInSeconds;
	params.bShowRaycasts = bShowRaycasts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
	if (LockerName != nullptr)
		*LockerName = params.LockerName;
	if (ModifiedVoxels != nullptr)
		*ModifiedVoxels = params.ModifiedVoxels;

}


// Function:
//		Offset -> 0x0034F1E0
//		Name   -> Function Voxel.VoxelProjectionTools.SetValueProjectionAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		Voxel_EBlueprintSuccess                            Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Voxel_EFailReason                                  FailReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     LockerName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FModifiedVoxelValue>                 ModifiedVoxels                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCurveFloat*                                 StrengthCurve                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ToolHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EditDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StepInVoxel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LockTimeoutInSeconds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bShowRaycasts                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelProjectionTools::STATIC_SetValueProjectionAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, Voxel_EBlueprintSuccess* Branches, Voxel_EFailReason* FailReason, struct FString* LockerName, TArray<struct FModifiedVoxelValue>* ModifiedVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, float Radius, float Strength, class UCurveFloat* StrengthCurve, float ToolHeight, float EditDistance, float StepInVoxel, float LockTimeoutInSeconds, bool bShowRaycasts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.SetValueProjectionAsync");

	UVoxelProjectionTools_SetValueProjectionAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;
	params.Normal = Normal;
	params.Radius = Radius;
	params.Strength = Strength;
	params.StrengthCurve = StrengthCurve;
	params.ToolHeight = ToolHeight;
	params.EditDistance = EditDistance;
	params.StepInVoxel = StepInVoxel;
	params.LockTimeoutInSeconds = LockTimeoutInSeconds;
	params.bShowRaycasts = bShowRaycasts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
	if (LockerName != nullptr)
		*LockerName = params.LockerName;
	if (ModifiedVoxels != nullptr)
		*ModifiedVoxels = params.ModifiedVoxels;

}


// Function:
//		Offset -> 0x0034ECE0
//		Name   -> Function Voxel.VoxelProjectionTools.SetMaterialProjectionNew
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		Voxel_EBlueprintSuccess                            Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Voxel_EFailReason                                  FailReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     LockerName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FModifiedVoxelMaterial>              ModifiedVoxels                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelPaintMaterial                         PaintMaterial                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCurveFloat*                                 StrengthCurve                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ToolHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EditDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StepInVoxel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LockTimeoutInSeconds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bShowRaycasts                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelProjectionTools::STATIC_SetMaterialProjectionNew(Voxel_EBlueprintSuccess* Branches, Voxel_EFailReason* FailReason, struct FString* LockerName, TArray<struct FModifiedVoxelMaterial>* ModifiedVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, const struct FVoxelPaintMaterial& PaintMaterial, class UCurveFloat* StrengthCurve, float Radius, float ToolHeight, float EditDistance, float StepInVoxel, float LockTimeoutInSeconds, bool bShowRaycasts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.SetMaterialProjectionNew");

	UVoxelProjectionTools_SetMaterialProjectionNew_Params params {};
	params.World = World;
	params.Position = Position;
	params.Normal = Normal;
	params.PaintMaterial = PaintMaterial;
	params.StrengthCurve = StrengthCurve;
	params.Radius = Radius;
	params.ToolHeight = ToolHeight;
	params.EditDistance = EditDistance;
	params.StepInVoxel = StepInVoxel;
	params.LockTimeoutInSeconds = LockTimeoutInSeconds;
	params.bShowRaycasts = bShowRaycasts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
	if (LockerName != nullptr)
		*LockerName = params.LockerName;
	if (ModifiedVoxels != nullptr)
		*ModifiedVoxels = params.ModifiedVoxels;

}


// Function:
//		Offset -> 0x0034E730
//		Name   -> Function Voxel.VoxelProjectionTools.SetMaterialProjectionAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		Voxel_EBlueprintSuccess                            Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Voxel_EFailReason                                  FailReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     LockerName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FModifiedVoxelMaterial>              ModifiedVoxels                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelPaintMaterial                         PaintMaterial                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCurveFloat*                                 StrengthCurve                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ToolHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EditDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StepInVoxel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LockTimeoutInSeconds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bShowRaycasts                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelProjectionTools::STATIC_SetMaterialProjectionAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, Voxel_EBlueprintSuccess* Branches, Voxel_EFailReason* FailReason, struct FString* LockerName, TArray<struct FModifiedVoxelMaterial>* ModifiedVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, const struct FVoxelPaintMaterial& PaintMaterial, class UCurveFloat* StrengthCurve, float Radius, float ToolHeight, float EditDistance, float StepInVoxel, float LockTimeoutInSeconds, bool bShowRaycasts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.SetMaterialProjectionAsync");

	UVoxelProjectionTools_SetMaterialProjectionAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;
	params.Normal = Normal;
	params.PaintMaterial = PaintMaterial;
	params.StrengthCurve = StrengthCurve;
	params.Radius = Radius;
	params.ToolHeight = ToolHeight;
	params.EditDistance = EditDistance;
	params.StepInVoxel = StepInVoxel;
	params.LockTimeoutInSeconds = LockTimeoutInSeconds;
	params.bShowRaycasts = bShowRaycasts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
	if (FailReason != nullptr)
		*FailReason = params.FailReason;
	if (LockerName != nullptr)
		*LockerName = params.LockerName;
	if (ModifiedVoxels != nullptr)
		*ModifiedVoxels = params.ModifiedVoxels;

}


// Function:
//		Offset -> 0x0034E110
//		Name   -> Function Voxel.VoxelProjectionTools.GetVoxelsProjectionAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		Voxel_EBlueprintSuccess                            Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FGetVoxelProjectionVoxel>            OutVoxels                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ToolHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EditDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StepInVoxel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bShowRaycasts                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelProjectionTools::STATIC_GetVoxelsProjectionAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, Voxel_EBlueprintSuccess* Branches, TArray<struct FGetVoxelProjectionVoxel>* OutVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, float Radius, float ToolHeight, float EditDistance, float StepInVoxel, bool bShowRaycasts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.GetVoxelsProjectionAsync");

	UVoxelProjectionTools_GetVoxelsProjectionAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;
	params.Normal = Normal;
	params.Radius = Radius;
	params.ToolHeight = ToolHeight;
	params.EditDistance = EditDistance;
	params.StepInVoxel = StepInVoxel;
	params.bShowRaycasts = bShowRaycasts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
	if (OutVoxels != nullptr)
		*OutVoxels = params.OutVoxels;

}


// Function:
//		Offset -> 0x0034DE00
//		Name   -> Function Voxel.VoxelProjectionTools.GetVoxelsProjection
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		Voxel_EBlueprintSuccess                            Branches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FGetVoxelProjectionVoxel>            OutVoxels                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ToolHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EditDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StepInVoxel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bShowRaycasts                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelProjectionTools::STATIC_GetVoxelsProjection(Voxel_EBlueprintSuccess* Branches, TArray<struct FGetVoxelProjectionVoxel>* OutVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, float Radius, float ToolHeight, float EditDistance, float StepInVoxel, bool bShowRaycasts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelProjectionTools.GetVoxelsProjection");

	UVoxelProjectionTools_GetVoxelsProjection_Params params {};
	params.World = World;
	params.Position = Position;
	params.Normal = Normal;
	params.Radius = Radius;
	params.ToolHeight = ToolHeight;
	params.EditDistance = EditDistance;
	params.StepInVoxel = StepInVoxel;
	params.bShowRaycasts = bShowRaycasts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
	if (OutVoxels != nullptr)
		*OutVoxels = params.OutVoxels;

}


void UVoxelProjectionTools::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelProjectionTools::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UVoxelWorldSaveObject::AfterRead()
{
	UObject::AfterRead();

}

void UVoxelWorldSaveObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x0034DC70
//		Name   -> Function Voxel.VoxelSaveUtilities.DecompressVoxelSave
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FVoxelCompressedWorldSave                   CompressedSave                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FVoxelUncompressedWorldSave                 OutUncompressedSave                                        (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelSaveUtilities::STATIC_DecompressVoxelSave(const struct FVoxelCompressedWorldSave& CompressedSave, struct FVoxelUncompressedWorldSave* OutUncompressedSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSaveUtilities.DecompressVoxelSave");

	UVoxelSaveUtilities_DecompressVoxelSave_Params params {};
	params.CompressedSave = CompressedSave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutUncompressedSave != nullptr)
		*OutUncompressedSave = params.OutUncompressedSave;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0034DB10
//		Name   -> Function Voxel.VoxelSaveUtilities.CompressVoxelSave
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FVoxelUncompressedWorldSave                 UncompressedSave                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FVoxelCompressedWorldSave                   OutCompressedSave                                          (Parm, OutParm, NativeAccessSpecifierPublic)
void UVoxelSaveUtilities::STATIC_CompressVoxelSave(const struct FVoxelUncompressedWorldSave& UncompressedSave, struct FVoxelCompressedWorldSave* OutCompressedSave)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSaveUtilities.CompressVoxelSave");

	UVoxelSaveUtilities_CompressVoxelSave_Params params {};
	params.UncompressedSave = UncompressedSave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCompressedSave != nullptr)
		*OutCompressedSave = params.OutCompressedSave;

}


void UVoxelSaveUtilities::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelSaveUtilities::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UVoxelSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UVoxelSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UVoxelSpawnerConfig::AfterRead()
{
	UObject::AfterRead();

}

void UVoxelSpawnerConfig::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UVoxelSpawnerGroup::AfterRead()
{
	UVoxelSpawner::AfterRead();

}

void UVoxelSpawnerGroup::BeforeDelete()
{
	UVoxelSpawner::BeforeDelete();

}

// Function:
//		Offset -> 0x00354480
//		Name   -> Function Voxel.VoxelSphereTools.SetValueSphereAsync
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelSphereTools::STATIC_SetValueSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVector& Position, float Radius, float Value, bool bConvertToVoxelSpace, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SetValueSphereAsync");

	UVoxelSphereTools_SetValueSphereAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;
	params.Radius = Radius;
	params.Value = Value;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00354270
//		Name   -> Function Voxel.VoxelSphereTools.SetValueSphere
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelSphereTools::STATIC_SetValueSphere(class AVoxelWorld* World, const struct FVector& Position, float Radius, float Value, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SetValueSphere");

	UVoxelSphereTools_SetValueSphere_Params params {};
	params.World = World;
	params.Position = Position;
	params.Radius = Radius;
	params.Value = Value;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00353EE0
//		Name   -> Function Voxel.VoxelSphereTools.SetMaterialSphereAsync
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelPaintMaterial                         PaintMaterial                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCurveFloat*                                 StrengthCurve                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelSphereTools::STATIC_SetMaterialSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVector& Position, float Radius, const struct FVoxelPaintMaterial& PaintMaterial, class UCurveFloat* StrengthCurve, bool bConvertToVoxelSpace, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SetMaterialSphereAsync");

	UVoxelSphereTools_SetMaterialSphereAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;
	params.Radius = Radius;
	params.PaintMaterial = PaintMaterial;
	params.StrengthCurve = StrengthCurve;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00353C40
//		Name   -> Function Voxel.VoxelSphereTools.SetMaterialSphere
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVoxelPaintMaterial                         PaintMaterial                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCurveFloat*                                 StrengthCurve                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelSphereTools::STATIC_SetMaterialSphere(class AVoxelWorld* World, const struct FVector& Position, float Radius, const struct FVoxelPaintMaterial& PaintMaterial, class UCurveFloat* StrengthCurve, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.SetMaterialSphere");

	UVoxelSphereTools_SetMaterialSphere_Params params {};
	params.World = World;
	params.Position = Position;
	params.Radius = Radius;
	params.PaintMaterial = PaintMaterial;
	params.StrengthCurve = StrengthCurve;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00353770
//		Name   -> Function Voxel.VoxelSphereTools.RemoveSphereAsync
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelSphereTools::STATIC_RemoveSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVector& Position, float Radius, bool bConvertToVoxelSpace, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.RemoveSphereAsync");

	UVoxelSphereTools_RemoveSphereAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;
	params.Radius = Radius;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003535A0
//		Name   -> Function Voxel.VoxelSphereTools.RemoveSphere
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelSphereTools::STATIC_RemoveSphere(class AVoxelWorld* World, const struct FVector& Position, float Radius, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.RemoveSphere");

	UVoxelSphereTools_RemoveSphere_Params params {};
	params.World = World;
	params.Position = Position;
	params.Radius = Radius;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003524B0
//		Name   -> Function Voxel.VoxelSphereTools.AddSphereAsync
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelSphereTools::STATIC_AddSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVector& Position, float Radius, bool bConvertToVoxelSpace, bool bUpdateRender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.AddSphereAsync");

	UVoxelSphereTools_AddSphereAsync_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.Position = Position;
	params.Radius = Radius;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003522E0
//		Name   -> Function Voxel.VoxelSphereTools.AddSphere
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConvertToVoxelSpace                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateRender                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowFailure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelSphereTools::STATIC_AddSphere(class AVoxelWorld* World, const struct FVector& Position, float Radius, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelSphereTools.AddSphere");

	UVoxelSphereTools_AddSphere_Params params {};
	params.World = World;
	params.Position = Position;
	params.Radius = Radius;
	params.bConvertToVoxelSpace = bConvertToVoxelSpace;
	params.bUpdateRender = bUpdateRender;
	params.bAllowFailure = bAllowFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVoxelSphereTools::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelSphereTools::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UVoxelSphereWorldGenerator::AfterRead()
{
	UVoxelWorldGenerator::AfterRead();

}

void UVoxelSphereWorldGenerator::BeforeDelete()
{
	UVoxelWorldGenerator::BeforeDelete();

}

void AVoxelSplineImporter::AfterRead()
{
	AActor::AfterRead();

}

void AVoxelSplineImporter::BeforeDelete()
{
	AActor::BeforeDelete();

}

void AVoxelStaticWorld::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(BaseMesh, UStaticMeshComponent);
}

void AVoxelStaticWorld::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(BaseMesh);
}

// Function:
//		Offset -> 0x003547E0
//		Name   -> Function Voxel.VoxelStatsHelper.StopRecordingStatsAndSaveStatsFile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UVoxelStatsHelper::STATIC_StopRecordingStatsAndSaveStatsFile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelStatsHelper.StopRecordingStatsAndSaveStatsFile");

	UVoxelStatsHelper_StopRecordingStatsAndSaveStatsFile_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003547E0
//		Name   -> Function Voxel.VoxelStatsHelper.StartRecordingStats
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UVoxelStatsHelper::STATIC_StartRecordingStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelStatsHelper.StartRecordingStats");

	UVoxelStatsHelper_StartRecordingStats_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UVoxelStatsHelper::AfterRead()
{
	UObject::AfterRead();

}

void UVoxelStatsHelper::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x00352EB0
//		Name   -> Function Voxel.VoxelTools.Flatten
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDontModifyVoxelsAroundPosition                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDontModifyEmptyVoxels                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDontModifyFullVoxels                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LockTimeoutInSeconds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bShowModifiedVoxels                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bShowTestedVoxels                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoxelTools::STATIC_Flatten(class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, float Radius, float Strength, bool bDontModifyVoxelsAroundPosition, bool bDontModifyEmptyVoxels, bool bDontModifyFullVoxels, float LockTimeoutInSeconds, bool bShowModifiedVoxels, bool bShowTestedVoxels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelTools.Flatten");

	UVoxelTools_Flatten_Params params {};
	params.World = World;
	params.Position = Position;
	params.Normal = Normal;
	params.Radius = Radius;
	params.Strength = Strength;
	params.bDontModifyVoxelsAroundPosition = bDontModifyVoxelsAroundPosition;
	params.bDontModifyEmptyVoxels = bDontModifyEmptyVoxels;
	params.bDontModifyFullVoxels = bDontModifyFullVoxels;
	params.LockTimeoutInSeconds = LockTimeoutInSeconds;
	params.bShowModifiedVoxels = bShowModifiedVoxels;
	params.bShowTestedVoxels = bShowTestedVoxels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVoxelTools::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelTools::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x00353AD0
//		Name   -> Function Voxel.VoxelUtilitiesLibrary.SetBoxAsDirty
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSetValuesAsDirty                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSetMaterialsAsDirty                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelUtilitiesLibrary::STATIC_SetBoxAsDirty(class AVoxelWorld* World, const struct FIntBox& Bounds, bool bSetValuesAsDirty, bool bSetMaterialsAsDirty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelUtilitiesLibrary.SetBoxAsDirty");

	UVoxelUtilitiesLibrary_SetBoxAsDirty_Params params {};
	params.World = World;
	params.Bounds = Bounds;
	params.bSetValuesAsDirty = bSetValuesAsDirty;
	params.bSetMaterialsAsDirty = bSetMaterialsAsDirty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003539A0
//		Name   -> Function Voxel.VoxelUtilitiesLibrary.RoundVoxels
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntBox                                     Bounds                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bOnlyEditedVoxels                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelUtilitiesLibrary::STATIC_RoundVoxels(class AVoxelWorld* World, const struct FIntBox& Bounds, bool bOnlyEditedVoxels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelUtilitiesLibrary.RoundVoxels");

	UVoxelUtilitiesLibrary_RoundVoxels_Params params {};
	params.World = World;
	params.Bounds = Bounds;
	params.bOnlyEditedVoxels = bOnlyEditedVoxels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00352080
//		Name   -> Function Voxel.VoxelUtilitiesLibrary.AddNeighborsToSet
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
void UVoxelUtilitiesLibrary::STATIC_AddNeighborsToSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelUtilitiesLibrary.AddNeighborsToSet");

	UVoxelUtilitiesLibrary_AddNeighborsToSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UVoxelUtilitiesLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelUtilitiesLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void AVoxelWorldInterface::AfterRead()
{
	AActor::AfterRead();

}

void AVoxelWorldInterface::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function:
//		Offset -> 0x00354760
//		Name   -> Function Voxel.VoxelWorld.SetWorldGeneratorObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UVoxelWorldGenerator*                        NewGenerator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVoxelWorld::SetWorldGeneratorObject(class UVoxelWorldGenerator* NewGenerator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.SetWorldGeneratorObject");

	AVoxelWorld_SetWorldGeneratorObject_Params params {};
	params.NewGenerator = NewGenerator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003546E0
//		Name   -> Function Voxel.VoxelWorld.SetWorldGeneratorClass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      NewGeneratorClass                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVoxelWorld::SetWorldGeneratorClass(class UClass* NewGeneratorClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.SetWorldGeneratorClass");

	AVoxelWorld_SetWorldGeneratorClass_Params params {};
	params.NewGeneratorClass = NewGeneratorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003541F0
//		Name   -> Function Voxel.VoxelWorld.SetOctreeDepth
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewDepth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVoxelWorld::SetOctreeDepth(int NewDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.SetOctreeDepth");

	AVoxelWorld_SetOctreeDepth_Params params {};
	params.NewDepth = NewDepth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x003534F0
//		Name   -> Function Voxel.VoxelWorld.LocalToGlobalFloat
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AVoxelWorld::LocalToGlobalFloat(const struct FVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.LocalToGlobalFloat");

	AVoxelWorld_LocalToGlobalFloat_Params params {};
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00353440
//		Name   -> Function Voxel.VoxelWorld.LocalToGlobal
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FIntVector                                  Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AVoxelWorld::LocalToGlobal(const struct FIntVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.LocalToGlobal");

	AVoxelWorld_LocalToGlobal_Params params {};
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00353420
//		Name   -> Function Voxel.VoxelWorld.IsCreated
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AVoxelWorld::IsCreated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.IsCreated");

	AVoxelWorld_IsCreated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00353370
//		Name   -> Function Voxel.VoxelWorld.GlobalToLocalFloat
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AVoxelWorld::GlobalToLocalFloat(const struct FVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.GlobalToLocalFloat");

	AVoxelWorld_GlobalToLocalFloat_Params params {};
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003532C0
//		Name   -> Function Voxel.VoxelWorld.GlobalToLocal
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntVector                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntVector AVoxelWorld::GlobalToLocal(const struct FVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.GlobalToLocal");

	AVoxelWorld_GlobalToLocal_Params params {};
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x003531E0
//		Name   -> Function Voxel.VoxelWorld.GetNeighboringPositions
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     GlobalPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FIntVector>                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FIntVector> AVoxelWorld::GetNeighboringPositions(const struct FVector& GlobalPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.GetNeighboringPositions");

	AVoxelWorld_GetNeighboringPositions_Params params {};
	params.GlobalPosition = GlobalPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00352E90
//		Name   -> Function Voxel.VoxelWorld.DestroyWorld
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVoxelWorld::DestroyWorld()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.DestroyWorld");

	AVoxelWorld_DestroyWorld_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00352E70
//		Name   -> Function Voxel.VoxelWorld.CreateWorld
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AVoxelWorld::CreateWorld()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.CreateWorld");

	AVoxelWorld_CreateWorld_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00352200
//		Name   -> Function Voxel.VoxelWorld.AddOffset
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FIntVector                                  OffsetInVoxels                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bMoveActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AVoxelWorld::AddOffset(const struct FIntVector& OffsetInVoxels, bool bMoveActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorld.AddOffset");

	AVoxelWorld_AddOffset_Params params {};
	params.OffsetInVoxels = OffsetInVoxels;
	params.bMoveActor = bMoveActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AVoxelWorld::AfterRead()
{
	AVoxelWorldInterface::AfterRead();

	READ_PTR_FULL(SaveObject, UVoxelWorldSaveObject);
	READ_PTR_FULL(BakedMeshTemplate, UStaticMesh);
	READ_PTR_FULL(BakedMeshComponentTemplate, UClass);
	READ_PTR_FULL(VoxelMaterial, UMaterialInterface);
	READ_PTR_FULL(TessellatedVoxelMaterial, UMaterialInterface);
	READ_PTR_FULL(MaterialCollection, UVoxelMaterialCollectionBase);
	READ_PTR_FULL(ProcMeshClass, UClass);
	READ_PTR_FULL(SpawnerConfig, UVoxelSpawnerConfig);
	READ_PTR_FULL(PrimitiveComponent, UPrimitiveComponent);
}

void AVoxelWorld::BeforeDelete()
{
	AVoxelWorldInterface::BeforeDelete();

	DELE_PTR_FULL(SaveObject);
	DELE_PTR_FULL(BakedMeshTemplate);
	DELE_PTR_FULL(BakedMeshComponentTemplate);
	DELE_PTR_FULL(VoxelMaterial);
	DELE_PTR_FULL(TessellatedVoxelMaterial);
	DELE_PTR_FULL(MaterialCollection);
	DELE_PTR_FULL(ProcMeshClass);
	DELE_PTR_FULL(SpawnerConfig);
	DELE_PTR_FULL(PrimitiveComponent);
}

// Function:
//		Offset -> 0x00354800
//		Name   -> Function Voxel.VoxelWorldGeneratorTools.UpdateMinimapFromWorldGenerator
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class AVoxelWorld*                                 World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  InTexture                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  OutTexture                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       RChannelName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       GChannelName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       BChannelName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AChannelName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                StartX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                StartY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SizeX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SizeY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelWorldGeneratorTools::STATIC_UpdateMinimapFromWorldGenerator(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, class UTexture2D* InTexture, class UTexture2D** OutTexture, const struct FName& RChannelName, const struct FName& GChannelName, const struct FName& BChannelName, const struct FName& AChannelName, int Scale, int StartX, int StartY, int SizeX, int SizeY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorldGeneratorTools.UpdateMinimapFromWorldGenerator");

	UVoxelWorldGeneratorTools_UpdateMinimapFromWorldGenerator_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.World = World;
	params.InTexture = InTexture;
	params.RChannelName = RChannelName;
	params.GChannelName = GChannelName;
	params.BChannelName = BChannelName;
	params.AChannelName = AChannelName;
	params.Scale = Scale;
	params.StartX = StartX;
	params.StartY = StartY;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTexture != nullptr)
		*OutTexture = params.OutTexture;

}


// Function:
//		Offset -> 0x00352A50
//		Name   -> Function Voxel.VoxelWorldGeneratorTools.CreateTextureFromWorldGeneratorCustomOutput
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  OutTexture                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVoxelWorldGenerator*                        WorldGenerator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FName, int>                            Seeds                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FName                                       UniqueName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MinValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              VoxelSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                StartX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                StartY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SizeX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SizeY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelWorldGeneratorTools::STATIC_CreateTextureFromWorldGeneratorCustomOutput(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UTexture2D** OutTexture, class UVoxelWorldGenerator* WorldGenerator, TMap<struct FName, int> Seeds, const struct FName& UniqueName, float MinValue, float MaxValue, float VoxelSize, int StartX, int StartY, int SizeX, int SizeY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorldGeneratorTools.CreateTextureFromWorldGeneratorCustomOutput");

	UVoxelWorldGeneratorTools_CreateTextureFromWorldGeneratorCustomOutput_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.WorldGenerator = WorldGenerator;
	params.Seeds = Seeds;
	params.UniqueName = UniqueName;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;
	params.VoxelSize = VoxelSize;
	params.StartX = StartX;
	params.StartY = StartY;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTexture != nullptr)
		*OutTexture = params.OutTexture;

}


// Function:
//		Offset -> 0x003526E0
//		Name   -> Function Voxel.VoxelWorldGeneratorTools.CreateTextureFromWorldGeneratorColorOutput
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  OutTexture                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVoxelWorldGenerator*                        WorldGenerator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FName, int>                            Seeds                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		float                                              VoxelSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                StartX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                StartY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SizeX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SizeY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVoxelWorldGeneratorTools::STATIC_CreateTextureFromWorldGeneratorColorOutput(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UTexture2D** OutTexture, class UVoxelWorldGenerator* WorldGenerator, TMap<struct FName, int> Seeds, float VoxelSize, int StartX, int StartY, int SizeX, int SizeY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Voxel.VoxelWorldGeneratorTools.CreateTextureFromWorldGeneratorColorOutput");

	UVoxelWorldGeneratorTools_CreateTextureFromWorldGeneratorColorOutput_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.WorldGenerator = WorldGenerator;
	params.Seeds = Seeds;
	params.VoxelSize = VoxelSize;
	params.StartX = StartX;
	params.StartY = StartY;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTexture != nullptr)
		*OutTexture = params.OutTexture;

}


void UVoxelWorldGeneratorTools::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UVoxelWorldGeneratorTools::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
