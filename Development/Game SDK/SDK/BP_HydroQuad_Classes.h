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
	 * BlueprintGeneratedClass BP_HydroQuad.BP_HydroQuad_C
	 * Size -> 0x0044 (FullSize[0x0778] - InheritedSize[0x0734])
	 */
	class ABP_HydroQuad_C : public ABP_ParentVehicle_C
	{
	public:

		unsigned char                                            UnknownData_0UGN[0x4];                                   // 0x0734(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0738(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class USpotLightComponent*                               Headlights1;                                             // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   HandleL;                                                 // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   HandleR;                                                 // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAC_Storage_C*                                     AC_Storage;                                              // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     StorageBox;                                              // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		TArray<class UClass*>                                    BannedItems;                                             // 0x0768(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


	public:

		void PostPlayerAttached(
bool Attached
);

		void SetStoredItemMass(
class ABP_ParentItem_C* Item
, 
float MassInKg
);

		void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
, 
bool bFromSweep
, 
const struct FHitResult& SweepResult
);

		void BndEvt__BP_HydroTruck_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void ReceiveTick(
float DeltaSeconds
);

		void ExecuteUbergraph_BP_HydroQuad(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
