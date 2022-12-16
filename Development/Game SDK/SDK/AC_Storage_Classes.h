﻿#pragma once

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
	 * BlueprintGeneratedClass AC_Storage.AC_Storage_C
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UAC_Storage_C : public UActorComponent
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient


		struct FTimerHandle                                      StorageTimerHandle;                                      // 0x00B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		TArray<class ABP_ParentItem_C*>                          InStorageZone;                                           // 0x00C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		TArray<class ABP_ParentItem_C*>                          Stored;                                                  // 0x00D0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		E_PhyReact                                               LockedPhysicalReaction;                                  // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


		unsigned char                                            UnknownData_PEIB[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class FScriptMulticastDelegate                           ItemAttached;                                            // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


		class FScriptMulticastDelegate                           ItemDetached;                                            // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


	public:

		bool IsItemAttached(
class AActor* ItemToFind
);

		void CanStoreItem(
class ABP_ParentItem_C* Item
, 
bool* Result
);

		void ReturnAllContents(
TArray<class ABP_ParentItem_C*>* AllItemsInside
);

		void TryAttachItem(
class ABP_ParentItem_C* Item
);

		void LockAllIn();

		void RemoveItemFromStorage(
class ABP_ParentItem_C* Item
);

		void ItemLeftStorageZone(
class ABP_ParentItem_C* Item
);

		void DetachStorageItem(
class ABP_ParentItem_C* Item
);

		void AttachOnGrounded(
class ABP_ParentItem_C* Item
);

		void UnbindAttachOnGrounded(
class ABP_ParentItem_C* Item
);

		void AttachGrounded(
class ABP_ParentItem_C* Target
);

		void CheckStorageConflict(
class ABP_ParentItem_C* Item
, 
class UAC_Storage_C* Storage
);

		void AddItemToStorage(
class ABP_ParentItem_C* Item
);

		void StoredItemPickedUp(
class ABP_ParentItem_C* ItemPickedUp
);

		void ItemStored(
class ABP_ParentItem_C* Item
);

		void StorageTimer();

		void ExecuteUbergraph_AC_Storage(
int32_t EntryPoint
);

		void ItemDetached__DelegateSignature();

		void ItemAttached__DelegateSignature();

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
