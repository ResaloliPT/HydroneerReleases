#pragma once

/**
 * Name: Hydroneer
 * Version: 2.1.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------

	/**
	 * BlueprintGeneratedClass BP_Rake.BP_Rake_C
	 * Size -> 0x0078 (FullSize[0x0441] - InheritedSize[0x03C9])
	 */
	class ABP_Rake_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_INGR[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UStaticMeshComponent*                              SM_Rake_Add;                                             // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UAC_ResourceSpawn_C*                               AC_ResourceSpawn;                                        // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UArrowComponent*                                   Arrow3;                                                  // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UArrowComponent*                                   Arrow2;                                                  // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UArrowComponent*                                   Arrow1;                                                  // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UArrowComponent*                                   Arrow;                                                   // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              Cube;                                                    // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UAC_Animator_C*                                    AC_Animator;                                             // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		struct FTimerHandle                                      LocationTimerHandle;                                     // 0x0418(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		struct FVector                                           PrevLoc;                                                 // 0x0420(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		int32_t                                                  RakeDirection;                                           // 0x042C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		int32_t                                                  MaxDepth;                                                // 0x0430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     HasHit;                                                  // 0x0434(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     Add;                                                     // 0x0435(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_TENY[0x2];                                   // 0x0436(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class ABP_HydroVoxelWorld_C*                             VoxelWorld;                                              // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		bool                                                     Debug;                                                   // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


	public:

		void TestDepthLocation(
const struct FVector& Location
, 
bool* CanModify
);

		float TestAreaDensity(
class USceneComponent* Component
);

		void GetPlayerCameraInfo(
struct FVector* Location
, 
struct FVector* ForwardVector
, 
float* BuildingLength
, 
struct FRotator* Rotation
);

		void TryFindVoxelWorldHit(
TArray<struct FHitResult>* Hits
, 
struct FHitResult* Hit
, 
class ABP_HydroVoxelWorld_C** VoxelWorld
);

		struct FVoxelIntBox GetBoxBoundsInVoxel(
class AVoxelWorld* VoxelWorld
, 
float Offset
, 
float Bounds
);

		struct FRotator NormalToClampedRotation(
const struct FVector& Normal
, 
float Inrement
, 
const struct FTransform& T
);

		void FlattenVoxels(
class ABP_HydroVoxelWorld_C* VoxelWorld
, 
EVoxelSDFMergeMode MergeMode
, 
float Radius
, 
int32_t Strength
);

		void Rake(
class ABP_GameController_C* Controller
);

		void LMBDownWhileCarrying(
class ABP_GameController_C* Controller
, 
class AActor* HitActor
, 
const struct FVector& HitLocation
, 
bool* ConsumeInput
);

		void TestUsability();

		void Box_Tracing(
bool* Result
);

		void UserConstructionScript();

		void OverridePickedup();

		void OverrideDroppedItem(
class ABP_GameCharacter_C* Character
);

		void LocationTimer();

		void OverrideAnimFinished();

		void RMBDownWhileCarrying(
class ABP_GameController_C* Controller
, 
class AActor* Hit_Actor
, 
const struct FVector& HitLocation
);

		void ExecuteUbergraph_BP_Rake(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
