#pragma once

// Name: Hydroneer, Version: 1.7.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Voxel.IntBoxLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UIntBoxLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.IntBoxLibrary");
		return ptr;
	}



	struct FIntBox STATIC_TranslateBox(const struct FIntBox& Box, const struct FIntVector& Position);
	struct FIntBox STATIC_Scale(const struct FIntBox& Box, int Scale);
	struct FIntBox STATIC_Overlap(const struct FIntBox& A, const struct FIntBox& B);
	struct FIntBox STATIC_MakeBoxFromLocalPositionAndRadius(const struct FIntVector& Position, int Radius);
	bool STATIC_IsVectorInsideBox(const struct FIntBox& Box, const struct FVector& Position);
	bool STATIC_IsIntVectorInsideBox(const struct FIntBox& Box, const struct FIntVector& Position);
	bool STATIC_Intersect(const struct FIntBox& Box, const struct FIntBox& Other);
	struct FIntVector STATIC_GetSize(const struct FIntBox& Box);
	TArray<struct FIntVector> STATIC_GetCorners(const struct FIntBox& Box);
	struct FVector STATIC_GetCenter(const struct FIntBox& Box);
	struct FString STATIC_Conv_IntBoxToString(const struct FIntBox& IntBox);
	bool STATIC_Contains(const struct FIntBox& Box, const struct FIntBox& Other);
	struct FIntBox STATIC_AddPoint(const struct FIntBox& Box, const struct FIntVector& Point);
	struct FIntBox STATIC_AddBox(const struct FIntBox& Box, const struct FIntBox& BoxToAdd);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.SteamNetDriverCopy
// 0x0008 (FullSize[0x0770] - InheritedSize[0x0768])
class USteamNetDriverCopy : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData_2HOG[0x8];                                     // 0x0768(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.SteamNetDriverCopy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelActor
// 0x0000 (FullSize[0x0330] - InheritedSize[0x0330])
class AVoxelActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelActor");
		return ptr;
	}



	void SetStaticMesh(class UStaticMesh* Mesh);
	void SetInstanceRandom(float Value);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelActorWithStaticMesh
// 0x0008 (FullSize[0x0338] - InheritedSize[0x0330])
class AVoxelActorWithStaticMesh : public AVoxelActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                       // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelActorWithStaticMesh");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelActorWithStaticMeshAndAutoDisable
// 0x0008 (FullSize[0x0340] - InheritedSize[0x0338])
class AVoxelActorWithStaticMeshAndAutoDisable : public AVoxelActorWithStaticMesh
{
public:
	class UVoxelAutoDisableComponent*                  AutoDisableComponent;                                      // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelActorWithStaticMeshAndAutoDisable");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelPlaceableItemActor
// 0x0000 (FullSize[0x0330] - InheritedSize[0x0330])
class AVoxelPlaceableItemActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelPlaceableItemActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelAssetActor
// 0x0078 (FullSize[0x03A8] - InheritedSize[0x0330])
class AVoxelAssetActor : public AVoxelPlaceableItemActor
{
public:
	struct FVoxelTransformableWorldGeneratorPicker     WorldGenerator;                                            // 0x0330(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MHU6[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, int>                            Seeds;                                                     // 0x0350(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class USceneComponent*                             Root;                                                      // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelAssetActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelAssetTools
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelAssetTools : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelAssetTools");
		return ptr;
	}



	void STATIC_ImportAssetAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, class UVoxelTransformableWorldGenerator* Asset, const struct FTransform& Transform, int Priority, bool bConvertToVoxelSpace, bool bUpdateRender);
	void STATIC_ImportAsset(class AVoxelWorld* World, class UVoxelTransformableWorldGenerator* Asset, const struct FTransform& Transform, int Priority, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelAutoDisableComponent
// 0x0038 (FullSize[0x0130] - InheritedSize[0x00F8])
class UVoxelAutoDisableComponent : public UActorComponent
{
public:
	unsigned char                                      MaxVoxelChunksLODForPhysics;                               // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BLJ5[0x3];                                     // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeToWaitBeforeActivating;                                // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TickInterval;                                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z8VM[0x2C];                                    // 0x0104(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelAutoDisableComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelBlueprintLibrary");
		return ptr;
	}



	void STATIC_UpdatePosition(class AVoxelWorld* World, const struct FIntVector& Position);
	void STATIC_UpdateBounds(class AVoxelWorld* World, const struct FIntBox& Bounds, bool bWaitForAllChunksToFinishUpdating);
	void STATIC_UpdateAll(class AVoxelWorld* World);
	void STATIC_Undo(class AVoxelWorld* World);
	struct FIntVector STATIC_Substract_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right);
	void STATIC_SpawnFloatingVoxelActors(class AVoxelWorld* World, const struct FIntBox& Bounds, TArray<class AVoxelActor*>* OutActors);
	struct FVoxelMaterial STATIC_SetIndexB(const struct FVoxelMaterial& Material, unsigned char Index);
	struct FVoxelMaterial STATIC_SetIndexA(const struct FVoxelMaterial& Material, unsigned char Index);
	struct FVoxelMaterial STATIC_SetIndex(const struct FVoxelMaterial& Material, unsigned char Index);
	struct FVoxelMaterial STATIC_SetColor(const struct FVoxelMaterial& Material, const struct FLinearColor& Color);
	struct FVoxelMaterial STATIC_SetBlend(const struct FVoxelMaterial& Material, float Blend);
	void STATIC_SaveFrame(class AVoxelWorld* World);
	void STATIC_Redo(class AVoxelWorld* World);
	struct FIntVector STATIC_Multiply_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right);
	struct FIntVector STATIC_Multiply_IntVectorInt(const struct FIntVector& Left, int Right);
	struct FIntVector STATIC_Multiply_IntIntVector(int Left, const struct FIntVector& Right);
	struct FIntBox STATIC_MakeBoxFromGlobalPositionAndRadius(class AVoxelWorld* World, const struct FVector& GlobalPosition, float RadiusInVoxels);
	bool STATIC_IsGlobalVoxelPoolCreated(class UObject* WorldContextObject);
	int STATIC_GetTaskCount(class AVoxelWorld* World);
	struct FVector STATIC_GetNormal(class AVoxelWorld* World, const struct FIntVector& Position);
	int STATIC_GetMin_Intvector(const struct FIntVector& Vector);
	int STATIC_GetMax_Intvector(const struct FIntVector& Vector);
	int STATIC_GetIntOutput(class AVoxelWorld* World, const struct FName& Name, int X, int Y, int Z);
	unsigned char STATIC_GetIndexB(const struct FVoxelMaterial& Material);
	unsigned char STATIC_GetIndexA(const struct FVoxelMaterial& Material);
	unsigned char STATIC_GetIndex(const struct FVoxelMaterial& Material);
	float STATIC_GetFloatOutput(class AVoxelWorld* World, const struct FName& Name, int X, int Y, int Z);
	struct FLinearColor STATIC_GetColor(const struct FVoxelMaterial& Material);
	struct FIntBox STATIC_GetBounds(class AVoxelWorld* World);
	unsigned char STATIC_GetBlend(const struct FVoxelMaterial& Material);
	struct FIntVector STATIC_Divide_IntVectorInt(const struct FIntVector& Left, int Right);
	void STATIC_DestroyGlobalVoxelThreadPool(class UObject* WorldContextObject);
	struct FVoxelPaintMaterial STATIC_CreateSingleIndexPaintMaterial(unsigned char Index);
	struct FVoxelPaintMaterial STATIC_CreateRGBPaintMaterial(const struct FLinearColor& Color, float Amount, bool bPaintR, bool bPaintG, bool bPaintB, bool bPaintA);
	struct FVoxelMaterial STATIC_CreateMaterialFromIndex(unsigned char Index);
	struct FVoxelMaterial STATIC_CreateMaterialFromDoubleIndex(unsigned char IndexA, unsigned char IndexB, float Blend);
	struct FVoxelMaterial STATIC_CreateMaterialFromColor(const struct FLinearColor& Color);
	void STATIC_CreateGlobalVoxelThreadPool(class UObject* WorldContextObject, int NumberOfThreads);
	struct FVoxelPaintMaterial STATIC_CreateDoubleIndexSetPaintMaterial(unsigned char IndexA, unsigned char IndexB, float Blend, bool bSetIndexA, bool bSetIndexB, bool bSetBlend);
	struct FVoxelPaintMaterial STATIC_CreateDoubleIndexBlendPaintMaterial(unsigned char Index, float Amount);
	void STATIC_ClearFrames(class AVoxelWorld* World);
	void STATIC_CacheValues(class AVoxelWorld* World, const struct FIntBox& Bounds);
	void STATIC_CacheMaterials(class AVoxelWorld* World, const struct FIntBox& Bounds);
	void STATIC_BindVoxelGenerationEvent(class AVoxelWorld* World, const struct FScriptDelegate& OnGenerate, bool bFireExistingOnes, int ChunkSize, int GenerationDistanceInChunks);
	void STATIC_BindVoxelChunkEvents(class AVoxelWorld* World, const struct FScriptDelegate& OnActivate, const struct FScriptDelegate& OnDeactivate, bool bFireExistingOnes, int ChunkSize, int ActivationDistanceInChunks);
	void STATIC_BindDelegateToChunkGeneration(class AVoxelWorld* World, const struct FScriptDelegate& Event);
	bool STATIC_AreCollisionsEnabled(class AVoxelWorld* World, const struct FVector& Position, int* LOD, bool bConvertToVoxelSpace);
	struct FVoxelMaterial STATIC_ApplyPaintMaterial(const struct FVoxelMaterial& Material, const struct FVoxelPaintMaterial& PaintMaterial);
	void STATIC_ApplyLODSettings(class AVoxelWorld* World);
	void STATIC_AddInstances(class AVoxelWorld* World, class UStaticMesh* Mesh, TArray<struct FTransform> Transforms, TArray<struct FLinearColor> Colors, bool bEnableCollisions, float StartCullDistance, float EndCullDistance, class UClass* ActorTemplate, const struct FVector& FloatingDetectionOffset, float BuildDelay, class UClass* HISMTemplate);
	struct FIntVector STATIC_Add_IntVectorIntVector(const struct FIntVector& Left, const struct FIntVector& Right);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelBoxTools
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelBoxTools : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelBoxTools");
		return ptr;
	}



	void STATIC_SetValueBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntBox& Bounds, float Value, bool bUpdateRender);
	bool STATIC_SetValueBox(class AVoxelWorld* World, const struct FIntBox& Bounds, float Value, bool bUpdateRender, bool bAllowFailure);
	void STATIC_SetMaterialBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntBox& Bounds, const struct FVoxelPaintMaterial& PaintMaterial, bool bUpdateRender);
	bool STATIC_SetMaterialBox(class AVoxelWorld* World, const struct FIntBox& Bounds, const struct FVoxelPaintMaterial& PaintMaterial, bool bUpdateRender, bool bAllowFailure);
	void STATIC_RemoveBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntBox& Bounds, bool bUpdateRender);
	bool STATIC_RemoveBox(class AVoxelWorld* World, const struct FIntBox& Bounds, bool bUpdateRender, bool bAllowFailure);
	void STATIC_AddBoxAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntBox& Bounds, bool bUpdateRender);
	bool STATIC_AddBox(class AVoxelWorld* World, const struct FIntBox& Bounds, bool bUpdateRender, bool bAllowFailure);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelChannel
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UVoxelChannel : public UChannel
{
public:
	unsigned char                                      UnknownData_JDBA[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelChannel");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelCharacter
// 0x0008 (FullSize[0x0750] - InheritedSize[0x0748])
class AVoxelCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_WWSO[0x8];                                     // 0x0748(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelCharacter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelCraterTools
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelCraterTools : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelCraterTools");
		return ptr;
	}



	void STATIC_AddCraterAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVector& Position, float Radius, float PositionsSampleRate, TArray<struct FIntVector>* SampledPositions, bool bConvertToVoxelSpace, bool bUpdateRender);
	bool STATIC_AddCrater(class AVoxelWorld* World, const struct FVector& Position, float Radius, float PositionsSampleRate, TArray<struct FIntVector>* SampledPositions, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelWorldGenerator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelWorldGenerator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelWorldGenerator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelTransformableWorldGenerator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelTransformableWorldGenerator : public UVoxelWorldGenerator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelTransformableWorldGenerator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelDataAsset
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UVoxelDataAsset : public UVoxelTransformableWorldGenerator
{
public:
	bool                                               bSubtractiveAsset;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateMipmaps;                                          // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T90H[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntVector                                  PositionOffset;                                            // 0x002C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                                  Size;                                                      // 0x0038(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NumMips;                                                   // 0x0044(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Voxel_EVoxelDataAssetImportSource                  Source;                                                    // 0x0048(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5L05[0x3];                                     // 0x0048(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_LLLX[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Paths;                                                     // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NQIH[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VoxelCustomVersion;                                        // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           MaterialConfigFlag;                                        // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LARJ[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelDataAsset");
		return ptr;
	}



	struct FIntVector GetSize();
	struct FIntBox GetBounds();
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelDataTools
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelDataTools : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelDataTools");
		return ptr;
	}



	void STATIC_SetValueAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntVector& Position, float Value, bool bUpdateRender);
	bool STATIC_SetValue(class AVoxelWorld* World, const struct FIntVector& Position, float Value, bool bUpdateRender, bool bAllowFailure);
	void STATIC_SetMaterialAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FIntVector& Position, const struct FVoxelMaterial& Material, bool bUpdateRender);
	bool STATIC_SetMaterial(class AVoxelWorld* World, const struct FIntVector& Position, const struct FVoxelMaterial& Material, bool bUpdateRender, bool bAllowFailure);
	bool STATIC_LoadFromSave(class AVoxelWorld* World, const struct FVoxelUncompressedWorldSave& Save, bool bUpdateRender);
	bool STATIC_LoadFromCompressedSave(class AVoxelWorld* World, const struct FVoxelCompressedWorldSave& Save, bool bUpdateRender);
	void STATIC_GetValueAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float* Value, class AVoxelWorld* World, const struct FIntVector& Position);
	bool STATIC_GetValue(float* Value, class AVoxelWorld* World, const struct FIntVector& Position, bool bAllowFailure);
	void STATIC_GetSave(class AVoxelWorld* World, struct FVoxelUncompressedWorldSave* OutSave);
	void STATIC_GetMaterialAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, struct FVoxelMaterial* Material, class AVoxelWorld* World, const struct FIntVector& Position);
	bool STATIC_GetMaterial(struct FVoxelMaterial* Material, class AVoxelWorld* World, const struct FIntVector& Position, bool bAllowFailure);
	void STATIC_GetCompressedSave(class AVoxelWorld* World, struct FVoxelCompressedWorldSave* OutSave);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelDebugUtilities
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelDebugUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelDebugUtilities");
		return ptr;
	}



	void STATIC_DrawDebugIntBox(class AVoxelWorld* World, const struct FIntBox& Box, float LifeTime, float Thickness, const struct FLinearColor& Color);
	void STATIC_DebugVoxelsInsideBounds(class AVoxelWorld* World, const struct FIntBox& Bounds, const struct FLinearColor& Color, float LifeTime, float Thickness, bool bDebugDensities, const struct FLinearColor& TextColor);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelDisableEditsBox
// 0x0008 (FullSize[0x0338] - InheritedSize[0x0330])
class AVoxelDisableEditsBox : public AVoxelPlaceableItemActor
{
public:
	class UBoxComponent*                               Box;                                                       // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelDisableEditsBox");
		return ptr;
	}



	void STATIC_AddDisableEditsBoxToWorld(class AVoxelWorld* InWorld, const struct FIntBox& Bounds, bool bUpdateRender);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelEmptyWorldGenerator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelEmptyWorldGenerator : public UVoxelTransformableWorldGenerator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelEmptyWorldGenerator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelErosion
// 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
class UVoxelErosion : public UObject
{
public:
	int                                                Size;                                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gravity;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SedimentCapacity;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SedimentDissolving;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SedimentDeposition;                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RainStrength;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Evaporation;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VW4F[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  RainMapInit;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  HeightmapInit;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4GY9[0xB8];                                    // 0x0060(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelErosion");
		return ptr;
	}



	void Step(int Count);
	void Init();
	class UTexture2D* GetWaterHeightTexture(float Max);
	class UTexture2D* GetTerrainHeightTexture(float Max);
	class UTexture2D* GetSedimentTexture(float Max);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelFlatWorldGenerator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelFlatWorldGenerator : public UVoxelWorldGenerator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelFlatWorldGenerator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelHeightmapAsset
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UVoxelHeightmapAsset : public UVoxelWorldGenerator
{
public:
	float                                              Scale;                                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightScale;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightOffset;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdditionalThickness;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Precision;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Height;                                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                VoxelCustomVersion;                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           MaterialConfigFlag;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RR3Z[0x14];                                    // 0x004C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelHeightmapAsset");
		return ptr;
	}



	int GetWidth();
	int GetHeight();
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelHeightmapAssetFloat
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UVoxelHeightmapAssetFloat : public UVoxelHeightmapAsset
{
public:
	unsigned char                                      UnknownData_DAY9[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelHeightmapAssetFloat");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelHeightmapAssetUINT16
// 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
class UVoxelHeightmapAssetUINT16 : public UVoxelHeightmapAsset
{
public:
	struct FString                                     Heightmap;                                                 // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Voxel_EVoxelMaterialConfig                         MaterialConfig;                                            // 0x0070(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YDYM[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Weightmaps;                                                // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FVoxelHeightmapImporterWeightmapInfos> WeightmapsInfos;                                           // 0x0088(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AH63[0x10];                                    // 0x0098(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelHeightmapAssetUINT16");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelHierarchicalInstancedStaticMeshComponent
// 0x00A8 (FullSize[0x0830] - InheritedSize[0x0788])
class UVoxelHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_C5Z9[0x8];                                     // 0x0788(0x0008) Fix Super Size
	unsigned char                                      UnknownData_1H2L[0xA0];                                    // 0x0790(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelHierarchicalInstancedStaticMeshComponent");
		return ptr;
	}



	int RemoveVoxelInstancesOverlappingSphere(const struct FVector& Position, float Radius);
	int RemoveVoxelInstancesOverlappingBox(const struct FBox& Bounds);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelInvokerComponent
// 0x0028 (FullSize[0x0280] - InheritedSize[0x0258])
class UVoxelInvokerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_3B8L[0x4];                                     // 0x0258(0x0004) Fix Super Size
	float                                              PredictionTime;                                            // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseForLODs;                                               // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseForCollisions;                                         // 0x0261(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GJA9[0x2];                                     // 0x0262(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CollisionsRange;                                           // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseForNavmesh;                                            // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IVG4[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NavmeshRange;                                              // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GenerationRange;                                           // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WC34[0xC];                                     // 0x0274(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelInvokerComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelInvokerAutoCameraComponent
// 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
class UVoxelInvokerAutoCameraComponent : public UVoxelInvokerComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelInvokerAutoCameraComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelLandscapeImporter
// 0x0020 (FullSize[0x0350] - InheritedSize[0x0330])
class AVoxelLandscapeImporter : public AActor
{
public:
	class ALandscape*                                  Landscape;                                                 // 0x0330(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Voxel_EVoxelMaterialConfig                         MaterialConfig;                                            // 0x0338(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z97D[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVoxelLandscapeImporterLayerInfo>    LayerInfos;                                                // 0x0340(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelLandscapeImporter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelMarker
// 0x0000 (FullSize[0x0330] - InheritedSize[0x0330])
class AVoxelMarker : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelMarker");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelProjectionMarker
// 0x0010 (FullSize[0x0340] - InheritedSize[0x0330])
class AVoxelProjectionMarker : public AVoxelMarker
{
public:
	class UDecalComponent*                             Decal;                                                     // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelProjectionMarker");
		return ptr;
	}



	void UpdateProjectionMarker(class AVoxelWorld* World, Voxel_EVoxelMode Mode, const struct FVector& Position, const struct FVector& Normal, float Radius, float EditDistance, float HeightOffset);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelSphereMarker
// 0x0018 (FullSize[0x0348] - InheritedSize[0x0330])
class AVoxelSphereMarker : public AVoxelMarker
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          MaterialParent;                                            // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    Material;                                                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelSphereMarker");
		return ptr;
	}



	void UpdateSphereMarker(class AVoxelWorld* World, Voxel_EVoxelMode Mode, const struct FVector& Position, float Radius);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelBoxMarker
// 0x0018 (FullSize[0x0348] - InheritedSize[0x0330])
class AVoxelBoxMarker : public AVoxelMarker
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          MaterialParent;                                            // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    Material;                                                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelBoxMarker");
		return ptr;
	}



	void UpdateBoxMarker(class AVoxelWorld* World, Voxel_EVoxelMode Mode, const struct FIntBox& Bounds);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelMaterialCollectionBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelMaterialCollectionBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelMaterialCollectionBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelBasicMaterialCollection
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UVoxelBasicMaterialCollection : public UVoxelMaterialCollectionBase
{
public:
	TArray<struct FVoxelBasicMaterialCollectionElement> Materials;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelBasicMaterialCollection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelMaterialCollectionSingle
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UVoxelMaterialCollectionSingle : public UObject
{
public:
	TMap<unsigned char, class UMaterialInterface*>     Map;                                                       // 0x0028(0x0050) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelMaterialCollectionSingle");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelMaterialCollectionDouble
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UVoxelMaterialCollectionDouble : public UObject
{
public:
	TMap<struct FVoxelMaterialCollectionDoubleIndex, class UMaterialInterface*> Map;                                                       // 0x0028(0x0050) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelMaterialCollectionDouble");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelMaterialCollectionTriple
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UVoxelMaterialCollectionTriple : public UObject
{
public:
	TMap<struct FVoxelMaterialCollectionTripleIndex, class UMaterialInterface*> Map;                                                       // 0x0028(0x0050) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelMaterialCollectionTriple");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelMaterialCollection
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UVoxelMaterialCollection : public UVoxelMaterialCollectionBase
{
public:
	bool                                               bEnableTessellation;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHidePhysicalMaterials;                                    // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PY3X[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   SingleMaterialTemplate;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   DoubleMaterialTemplate;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   TripleMaterialTemplate;                                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVoxelMaterialCollectionElement>     Materials;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialFunction*>                   MaterialFunctions;                                         // 0x0058(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<class UPhysicalMaterial*>                   PhysicalMaterials;                                         // 0x0068(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	struct FVoxelMaterialCollectionGenerated           GeneratedMaterials;                                        // 0x0078(0x0018) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVoxelMaterialCollectionGenerated           GeneratedMaterialsTess;                                    // 0x0090(0x0018) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelMaterialCollection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelMeshImporter
// 0x00C0 (FullSize[0x03F0] - InheritedSize[0x0330])
class AVoxelMeshImporter : public AActor
{
public:
	class UStaticMesh*                                 StaticMesh;                                                // 0x0330(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VoxelSize;                                                 // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImportUV;                                                 // 0x033C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTwoBytesUV;                                               // 0x033D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetMaterialIndex;                                         // 0x033E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CustomMaterialIndex;                                       // 0x033F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideLeaks;                                                // 0x0340(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G3ZV[0x3];                                     // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DistanceFieldOffset;                                       // 0x0344(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxVoxelDistanceFromTriangle;                              // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceDivisor;                                           // 0x034C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bComputeExactDistance;                                     // 0x0350(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HIQS[0x3];                                     // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           SizeX;                                                     // 0x0354(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SizeY;                                                     // 0x0358(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SizeZ;                                                     // 0x035C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           NumberOfVoxels;                                            // 0x0360(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SizeInMB;                                                  // 0x0368(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3Z9[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        MeshComponent;                                             // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0378(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBox                                        CachedBox;                                                 // 0x0380(0x001C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I3TN[0x4];                                     // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 CachedStaticMesh;                                          // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                             CachedVertices;                                            // 0x03A8(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8457[0x8];                                     // 0x03B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  CachedTransform;                                           // 0x03C0(0x0030) (Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelMeshImporter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelSpawner
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelSpawner : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelSpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelMeshSpawner
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UVoxelMeshSpawner : public UVoxelSpawner
{
public:
	class UStaticMesh*                                 Mesh;                                                      // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActorTemplate;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceSpawnActor;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableCollision;                                          // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSendMaterialThroughInstanceRandom;                        // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XY0V[0x1];                                     // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartCullDistance;                                         // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndCullDistance;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BuildDelay;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HISMTemplate;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseDensity;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PositionOffset;                                            // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FloatingDetectionOffset;                                   // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	Voxel_EVoxelMeshSpawnerScaling                     Scaling;                                                   // 0x0078(0x0001) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U02I[0x3];                                     // 0x0078(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FFloatInterval                              ScaleX;                                                    // 0x007C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                              ScaleY;                                                    // 0x0084(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                              ScaleZ;                                                    // 0x008C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomRotation;                                            // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L15P[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Voxel_EVoxelMeshSpawnerRotation                    RotationAlignment;                                         // 0x0098(0x0001) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P8SS[0x3];                                     // 0x0095(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              MinAngleWithWorldUp;                                       // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAngleWithWorldUp;                                       // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7S61[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelMeshSpawner");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelDemoNetDriver
// 0x0048 (FullSize[0x0E80] - InheritedSize[0x0E38])
class UVoxelDemoNetDriver : public UDemoNetDriver
{
public:
	unsigned char                                      UnknownData_0XBC[0x48];                                    // 0x0E38(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelDemoNetDriver");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelIpNetDriver
// 0x0048 (FullSize[0x07B0] - InheritedSize[0x0768])
class UVoxelIpNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData_ICQY[0x48];                                    // 0x0768(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelIpNetDriver");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelSteamNetDriver
// 0x0048 (FullSize[0x07B8] - InheritedSize[0x0770])
class UVoxelSteamNetDriver : public USteamNetDriverCopy
{
public:
	unsigned char                                      UnknownData_79QD[0x48];                                    // 0x0770(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelSteamNetDriver");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelPart
// 0x0020 (FullSize[0x0350] - InheritedSize[0x0330])
class AVoxelPart : public AActor
{
public:
	class AVoxelWorld*                                 World;                                                     // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoaded;                                                  // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0GB9[0x8];                                     // 0x0348(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelPart");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelPartSimpleMesh
// 0x0040 (FullSize[0x0390] - InheritedSize[0x0350])
class AVoxelPartSimpleMesh : public AVoxelPart
{
public:
	unsigned char                                      UnknownData_3ZRA[0x40];                                    // 0x0350(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelPartSimpleMesh");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelPartSimpleMeshWithAutoDisable
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AVoxelPartSimpleMeshWithAutoDisable : public AVoxelPartSimpleMesh
{
public:
	class UVoxelAutoDisableComponent*                  AutoDisableComponent;                                      // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelPartSimpleMeshWithAutoDisable");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelPartCube
// 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
class AVoxelPartCube : public AVoxelPart
{
public:
	class UMaterialInterface*                          Material;                                                  // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelPartCube");
		return ptr;
	}



	void OnCubesCreated(TArray<class AStaticMeshActor*> Cubes);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelPhysicsTools
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelPhysicsTools : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelPhysicsTools");
		return ptr;
	}



	void STATIC_RemoveFloatingBlocks(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<class AVoxelPart*>* SpawnedActors, class AVoxelWorld* World, const struct FIntBox& Bounds, class UClass* ClassToSpawn);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelPlaceableItemsUtilities
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelPlaceableItemsUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelPlaceableItemsUtilities");
		return ptr;
	}



	void STATIC_AddWorms(class AVoxelWorld* World, float Radius, int Seed, const struct FVector& RotationAmplitude, const struct FVector& NoiseDir, float NoiseSegmentLength, const struct FVector& Start, const struct FVector& InitialDir, float VoxelSegmentLength, int NumSegments, float SplitProbability, float SplitProbabilityGain, int BranchMeanSize, int BranchSizeVariation);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelProceduralMeshComponent
// 0x0090 (FullSize[0x0630] - InheritedSize[0x05A0])
class UVoxelProceduralMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_FVQZ[0x10];                                    // 0x05A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  ProcMeshBodySetup;                                         // 0x05B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EC5X[0x20];                                    // 0x05B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVoxelProcMeshSection>               ProcMeshSections;                                          // 0x05D8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UBodySetup*                                  BodySetupBeingCooked;                                      // 0x05E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KC0Q[0x40];                                    // 0x05F0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelProceduralMeshComponent");
		return ptr;
	}



	void STATIC_ResumeVoxelCollisions();
	void InitChunk(unsigned char LOD, const struct FIntBox& ChunkBounds);
	void STATIC_FreezeVoxelCollisions();
	bool STATIC_AreVoxelCollisionsFrozen();
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelProjectionTools
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelProjectionTools : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelProjectionTools");
		return ptr;
	}



	void STATIC_SetValueProjectionNew(Voxel_EBlueprintSuccess* Branches, Voxel_EFailReason* FailReason, struct FString* LockerName, TArray<struct FModifiedVoxelValue>* ModifiedVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, float Radius, float Strength, class UCurveFloat* StrengthCurve, float ToolHeight, float EditDistance, float StepInVoxel, float LockTimeoutInSeconds, bool bShowRaycasts);
	void STATIC_SetValueProjectionAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, Voxel_EBlueprintSuccess* Branches, Voxel_EFailReason* FailReason, struct FString* LockerName, TArray<struct FModifiedVoxelValue>* ModifiedVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, float Radius, float Strength, class UCurveFloat* StrengthCurve, float ToolHeight, float EditDistance, float StepInVoxel, float LockTimeoutInSeconds, bool bShowRaycasts);
	void STATIC_SetMaterialProjectionNew(Voxel_EBlueprintSuccess* Branches, Voxel_EFailReason* FailReason, struct FString* LockerName, TArray<struct FModifiedVoxelMaterial>* ModifiedVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, const struct FVoxelPaintMaterial& PaintMaterial, class UCurveFloat* StrengthCurve, float Radius, float ToolHeight, float EditDistance, float StepInVoxel, float LockTimeoutInSeconds, bool bShowRaycasts);
	void STATIC_SetMaterialProjectionAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, Voxel_EBlueprintSuccess* Branches, Voxel_EFailReason* FailReason, struct FString* LockerName, TArray<struct FModifiedVoxelMaterial>* ModifiedVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, const struct FVoxelPaintMaterial& PaintMaterial, class UCurveFloat* StrengthCurve, float Radius, float ToolHeight, float EditDistance, float StepInVoxel, float LockTimeoutInSeconds, bool bShowRaycasts);
	void STATIC_GetVoxelsProjectionAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, Voxel_EBlueprintSuccess* Branches, TArray<struct FGetVoxelProjectionVoxel>* OutVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, float Radius, float ToolHeight, float EditDistance, float StepInVoxel, bool bShowRaycasts);
	void STATIC_GetVoxelsProjection(Voxel_EBlueprintSuccess* Branches, TArray<struct FGetVoxelProjectionVoxel>* OutVoxels, class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, float Radius, float ToolHeight, float EditDistance, float StepInVoxel, bool bShowRaycasts);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelWorldSaveObject
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UVoxelWorldSaveObject : public UObject
{
public:
	struct FVoxelCompressedWorldSave                   Save;                                                      // 0x0028(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                Depth;                                                     // 0x0048(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5GDZ[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelWorldSaveObject");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelSaveUtilities
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelSaveUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelSaveUtilities");
		return ptr;
	}



	bool STATIC_DecompressVoxelSave(const struct FVoxelCompressedWorldSave& CompressedSave, struct FVoxelUncompressedWorldSave* OutUncompressedSave);
	void STATIC_CompressVoxelSave(const struct FVoxelUncompressedWorldSave& UncompressedSave, struct FVoxelCompressedWorldSave* OutCompressedSave);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelSettings
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UVoxelSettings : public UDeveloperSettings
{
public:
	bool                                               bShowNotifications;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K2X3[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelSpawnerConfig
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UVoxelSpawnerConfig : public UObject
{
public:
	Voxel_EVoxelSpawnerConfigRayWorldType              WorldType;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KBLO[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVoxelSpawnerConfigHeightElement>    HeightSpawners;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVoxelSpawnerConfigElement>          RaySpawners;                                               // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelSpawnerConfig");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelSpawnerGroup
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UVoxelSpawnerGroup : public UVoxelSpawner
{
public:
	bool                                               bNormalizeProbabilitiesOnEdit;                             // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WTDJ[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVoxelSpawnerGroupChild>             Children;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              BaseDensity;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RYSN[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelSpawnerGroup");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelSphereTools
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelSphereTools : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelSphereTools");
		return ptr;
	}



	void STATIC_SetValueSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVector& Position, float Radius, float Value, bool bConvertToVoxelSpace, bool bUpdateRender);
	bool STATIC_SetValueSphere(class AVoxelWorld* World, const struct FVector& Position, float Radius, float Value, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure);
	void STATIC_SetMaterialSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVector& Position, float Radius, const struct FVoxelPaintMaterial& PaintMaterial, class UCurveFloat* StrengthCurve, bool bConvertToVoxelSpace, bool bUpdateRender);
	bool STATIC_SetMaterialSphere(class AVoxelWorld* World, const struct FVector& Position, float Radius, const struct FVoxelPaintMaterial& PaintMaterial, class UCurveFloat* StrengthCurve, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure);
	void STATIC_RemoveSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVector& Position, float Radius, bool bConvertToVoxelSpace, bool bUpdateRender);
	bool STATIC_RemoveSphere(class AVoxelWorld* World, const struct FVector& Position, float Radius, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure);
	void STATIC_AddSphereAsync(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, const struct FVector& Position, float Radius, bool bConvertToVoxelSpace, bool bUpdateRender);
	bool STATIC_AddSphere(class AVoxelWorld* World, const struct FVector& Position, float Radius, bool bConvertToVoxelSpace, bool bUpdateRender, bool bAllowFailure);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelSphereWorldGenerator
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UVoxelSphereWorldGenerator : public UVoxelWorldGenerator
{
public:
	float                                              Radius;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVoxelMaterial                              Material;                                                  // 0x002C(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               InverseOutsideInside;                                      // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PADJ[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelSphereWorldGenerator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelSplineImporter
// 0x0028 (FullSize[0x0358] - InheritedSize[0x0330])
class AVoxelSplineImporter : public AActor
{
public:
	TArray<class USplineComponent*>                    Splines;                                                   // 0x0330(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              VoxelSize;                                                 // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UDJX[0x4];                                     // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USphereComponent*>                    Spheres;                                                   // 0x0348(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelSplineImporter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelStaticWorld
// 0x0018 (FullSize[0x0348] - InheritedSize[0x0330])
class AVoxelStaticWorld : public AActor
{
public:
	class UStaticMeshComponent*                        BaseMesh;                                                  // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStaticMeshComponent*>                Meshes;                                                    // 0x0338(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelStaticWorld");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelStatsHelper
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelStatsHelper : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelStatsHelper");
		return ptr;
	}



	void STATIC_StopRecordingStatsAndSaveStatsFile();
	void STATIC_StartRecordingStats();
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelTools
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelTools : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelTools");
		return ptr;
	}



	bool STATIC_Flatten(class AVoxelWorld* World, const struct FVector& Position, const struct FVector& Normal, float Radius, float Strength, bool bDontModifyVoxelsAroundPosition, bool bDontModifyEmptyVoxels, bool bDontModifyFullVoxels, float LockTimeoutInSeconds, bool bShowModifiedVoxels, bool bShowTestedVoxels);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelUtilitiesLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelUtilitiesLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelUtilitiesLibrary");
		return ptr;
	}



	void STATIC_SetBoxAsDirty(class AVoxelWorld* World, const struct FIntBox& Bounds, bool bSetValuesAsDirty, bool bSetMaterialsAsDirty);
	void STATIC_RoundVoxels(class AVoxelWorld* World, const struct FIntBox& Bounds, bool bOnlyEditedVoxels);
	void STATIC_AddNeighborsToSet();
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelWorldInterface
// 0x0000 (FullSize[0x0330] - InheritedSize[0x0330])
class AVoxelWorldInterface : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelWorldInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelWorld
// 0x0468 (FullSize[0x0798] - InheritedSize[0x0330])
class AVoxelWorld : public AVoxelWorldInterface
{
public:
	struct FScriptMulticastDelegate                    OnWorldLoaded;                                             // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWorldDestroyed;                                          // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UVoxelWorldSaveObject*                       SaveObject;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                                   SaveFilePath;                                              // 0x0358(0x0010) (Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bAutomaticallySaveToFile;                                  // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAppendDateToSavePath;                                     // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecomputeNormalsBeforeBaking;                             // 0x036A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RVMJ[0x5];                                     // 0x036B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 BakedMeshTemplate;                                         // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BakedMeshComponentTemplate;                                // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                                   BakedDataPath;                                             // 0x0380(0x0010) (Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	int                                                NumberOfThreadsForPreview;                                 // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableFoliageInEditor;                                    // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OIEN[0x3];                                     // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VoxelSize;                                                 // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7GGV[0x4];                                     // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVoxelWorldGeneratorPicker                  WorldGenerator;                                            // 0x03A0(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TMap<struct FName, int>                            Seeds;                                                     // 0x03B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bCreateWorldAutomatically;                                 // 0x0408(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCameraIfNoInvokersFound;                               // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_27Z8[0x2];                                     // 0x040A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VoxelMassMultiplierInKg;                                   // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableUndoRedo;                                           // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableWorldRebasing;                                      // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableOnScreenMessages;                                  // 0x0412(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableDebugManager;                                      // 0x0413(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OctreeDepth;                                               // 0x0414(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WorldSizeInVoxel;                                          // 0x0418(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCustomWorldBounds;                                     // 0x041C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O5SJ[0x3];                                     // 0x041D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntBox                                     CustomWorldBounds;                                         // 0x0420(0x0018) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODLimit;                                                  // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HSV9[0x4];                                     // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, float>                        LODToMinDistance;                                          // 0x0440(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              InvokerDistanceThreshold;                                  // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDelayBetweenLODUpdates;                                 // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConstantLOD;                                              // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Voxel_EVoxelUVConfig                               UVConfig;                                                  // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N1BA[0x2];                                     // 0x049A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UVScale;                                                   // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Voxel_EVoxelNormalConfig                           NormalConfig;                                              // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Voxel_EVoxelMaterialConfig                         MaterialConfig;                                            // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FLFB[0x6];                                     // 0x04A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          VoxelMaterial;                                             // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          TessellatedVoxelMaterial;                                  // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVoxelMaterialCollectionBase*                MaterialCollection;                                        // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableTessellation;                                       // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SVCT[0x3];                                     // 0x04C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TessellationDistance;                                      // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TessellationBoundsExtension;                               // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAlphaAsHardness;                                       // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5VRM[0x3];                                     // 0x04CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, float>                        MaterialsHardness;                                         // 0x04D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bOneMaterialPerCubeSide;                                   // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Voxel_EVoxelRenderType                             RenderType;                                                // 0x0521(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDitherChunks;                                             // 0x0522(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F7F6[0x1];                                     // 0x0523(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChunksDitheringDuration;                                   // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCastFarShadow;                                            // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E91Z[0x7];                                     // 0x0529(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProcMeshClass;                                             // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChunksCullingLOD;                                          // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRenderWorld;                                              // 0x053C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWaitForOtherChunksToAvoidHoles;                           // 0x053D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8P0M[0x2];                                     // 0x053E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WaitForOtherChunksToAvoidHolesTimeout;                     // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOptimizeIndices;                                          // 0x0544(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QQ39[0x3];                                     // 0x0545(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVoxelSpawnerConfig*                         SpawnerConfig;                                             // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfInstancesPerHISM;                                  // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpawnersCollisionDistanceInVoxel;                          // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableCollisions;                                         // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bComputeVisibleChunksCollisions;                           // 0x0559(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AM6X[0x2];                                     // 0x055A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VisibleChunksCollisionsMaxLOD;                             // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyInstance                               CollisionPresets;                                          // 0x0560(0x0148) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bEnableNavmesh;                                            // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bComputeVisibleChunksNavmesh;                              // 0x06A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HDIW[0x2];                                     // 0x06AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VisibleChunksNavmeshMaxLOD;                                // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateGlobalPool;                                         // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFDG[0x3];                                     // 0x06B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfThreads;                                           // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMeshUpdatesPerTick;                                     // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GenerationEventsTickRate;                                  // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableMultiplayer;                                        // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4FD3[0x3];                                     // 0x06C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MultiplayerSyncRate;                                       // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x06C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsToggled;                                                // 0x06D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OFDJ[0xC7];                                    // 0x06D1(0x00C7) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelWorld");
		return ptr;
	}



	void SetWorldGeneratorObject(class UVoxelWorldGenerator* NewGenerator);
	void SetWorldGeneratorClass(class UClass* NewGeneratorClass);
	void SetOctreeDepth(int NewDepth);
	struct FVector LocalToGlobalFloat(const struct FVector& Position);
	struct FVector LocalToGlobal(const struct FIntVector& Position);
	bool IsCreated();
	struct FVector GlobalToLocalFloat(const struct FVector& Position);
	struct FIntVector GlobalToLocal(const struct FVector& Position);
	TArray<struct FIntVector> GetNeighboringPositions(const struct FVector& GlobalPosition);
	void DestroyWorld();
	void CreateWorld();
	void AddOffset(const struct FIntVector& OffsetInVoxels, bool bMoveActor);
	void AfterRead();
	void BeforeDelete();

};

// Class Voxel.VoxelWorldGeneratorTools
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVoxelWorldGeneratorTools : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Voxel.VoxelWorldGeneratorTools");
		return ptr;
	}



	void STATIC_UpdateMinimapFromWorldGenerator(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AVoxelWorld* World, class UTexture2D* InTexture, class UTexture2D** OutTexture, const struct FName& RChannelName, const struct FName& GChannelName, const struct FName& BChannelName, const struct FName& AChannelName, int Scale, int StartX, int StartY, int SizeX, int SizeY);
	void STATIC_CreateTextureFromWorldGeneratorCustomOutput(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UTexture2D** OutTexture, class UVoxelWorldGenerator* WorldGenerator, TMap<struct FName, int> Seeds, const struct FName& UniqueName, float MinValue, float MaxValue, float VoxelSize, int StartX, int StartY, int SizeX, int SizeY);
	void STATIC_CreateTextureFromWorldGeneratorColorOutput(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UTexture2D** OutTexture, class UVoxelWorldGenerator* WorldGenerator, TMap<struct FName, int> Seeds, float VoxelSize, int StartX, int StartY, int SizeX, int SizeY);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
