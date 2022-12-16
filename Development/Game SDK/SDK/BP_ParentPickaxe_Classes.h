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
	 * BlueprintGeneratedClass BP_ParentPickaxe.BP_ParentPickaxe_C
	 * Size -> 0x002F (FullSize[0x03F8] - InheritedSize[0x03C9])
	 */
	class ABP_ParentPickaxe_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_SBTQ[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UAC_ResourceSpawn_C*                               AC_ResourceSpawn;                                        // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UAC_Splitter_C*                                    AC_Splitter;                                             // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UAC_Animator_C*                                    AC_Animator;                                             // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		int32_t                                                  MaxDepth;                                                // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    DigRadius;                                               // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void DigVoxels(
class ABP_GameController_C* Controller
, 
const struct FVector& AtLocation
, 
class ABP_HydroVoxelWorld_C* VoxelWorld
);

		void DigTimer();

		void TryDig(
class ABP_GameController_C* Controller
, 
class AActor* HitActor
, 
const struct FVector& HitLocation
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

		void Animate();

		void LMBUpWhileCarrying();

		void OverrideDroppedItem(
class ABP_GameCharacter_C* Character
);

		void ExecuteUbergraph_BP_ParentPickaxe(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
