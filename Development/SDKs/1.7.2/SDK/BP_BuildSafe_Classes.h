#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
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
	 * BlueprintGeneratedClass BP_BuildSafe.BP_BuildSafe_C
	 * Size -> 0x0029 (FullSize[0x0679] - InheritedSize[0x0650])
	 */
	class ABP_BuildSafe_C : public ABP_ParentBuildStorage_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0650(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Shelves;                                                 // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Door;                                                    // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      OpenCloseDoor_NewTrack_0_A07CF6AF493B2B22215935BE73F11CB3; // 0x0668(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  OpenCloseDoor__Direction_A07CF6AF493B2B22215935BE73F11CB3; // 0x066C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JGFE[0x3];                                   // 0x066D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  OpenCloseDoor;                                           // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoorOpen_;                                               // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OpenCloseDoor__FinishedFunc();
		void OpenCloseDoor__UpdateFunc();
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void ClickDoor();
		void OverrideStorageLoaded(const struct FS_StoredItem& SingleItem, int32_t Slot);
		void OverrideItemStored(const struct FS_StoredItem& Single_Item, int32_t Slot);
		void ExecuteUbergraph_BP_BuildSafe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
