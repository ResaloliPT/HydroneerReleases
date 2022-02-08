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
	 * BlueprintGeneratedClass BP_ParentBuildStorage.BP_ParentBuildStorage_C
	 * Size -> 0x0120 (FullSize[0x0650] - InheritedSize[0x0530])
	 */
	class ABP_ParentBuildStorage_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StoredItem8;                                             // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StoredItem7;                                             // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StoredItem6;                                             // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StoredItem5;                                             // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StoredItem4;                                             // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StoredItem3;                                             // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StoredItem2;                                             // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StoredItem1;                                             // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      AcceptedItemTypes;                                       // 0x0578(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    StorageLimit;                                            // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StoredItems;                                             // 0x058C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_StoredItem                                       Stored1;                                                 // 0x0590(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_StoredItem                                       Stored2;                                                 // 0x05A8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_StoredItem                                       Stored3;                                                 // 0x05C0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_StoredItem                                       Stored4;                                                 // 0x05D8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_StoredItem                                       Stored5;                                                 // 0x05F0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_StoredItem                                       Stored6;                                                 // 0x0608(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_StoredItem                                       Stored7;                                                 // 0x0620(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_StoredItem                                       Stored8;                                                 // 0x0638(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FindTheRod(class UStaticMesh* SM, E_Rod_E_Rod* Type);
		void FindTheFishy(class UStaticMesh* SM, E_FishType_E_FishType* Type);
		void FindEmptySpot(int32_t* Free_Slot);
		void New_Storage_Item(class ABP_ParentItem_C* Item, float Size);
		void RemoveItem(class UPrimitiveComponent* Component);
		void SpawnItemToPlayer(const struct FS_StoredItem& StoredItem, int32_t Slot);
		void OverrideLoaded();
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void LoadStorage(const struct FS_StoredItem& StoredItem, int32_t Item);
		void OverrideItemStored(const struct FS_StoredItem& Single_Item, int32_t Slot);
		void OverrideItemWithdrawn(const struct FS_StoredItem& Single_Item, int32_t Slot);
		void OverrideStorageLoaded(const struct FS_StoredItem& SingleItem, int32_t Slot);
		void ExecuteUbergraph_BP_ParentBuildStorage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
