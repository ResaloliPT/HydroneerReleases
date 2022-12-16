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
	 * BlueprintGeneratedClass BP_ParentShelf.BP_ParentShelf_C
	 * Size -> 0x0048 (FullSize[0x0450] - InheritedSize[0x0408])
	 */
	class ABP_ParentShelf_C : public ABP_ParentBuild_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0408(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		TArray<struct FS_ShelfItem>                              Accepted_Items;                                          // 0x0410(0x0010) Edit, BlueprintVisible


		struct FVector                                           StoredItemBoxTrace;                                      // 0x0420(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_RE6K[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TArray<class USC_ShelfLocation_C*>                       ShelfLocations;                                          // 0x0430(0x0010) Edit, BlueprintVisible, ContainsInstancedReference


		TArray<struct FS_SavedShelfItem>                         SavedShelfItems;                                         // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame


	public:

		void ContainsSpecial(
const struct FS_SavedShelfItem& ItemInfo
, 
int32_t* Index
, 
bool* Contains
);

		void Attach_Item(
class USceneComponent* ShelfLocation
, 
class ABP_ParentItem_C* Item
, 
const struct FS_ShelfItem& S_ShelfItem
);

		void Shelf_Trace(
TArray<struct FHitResult>* Hits
);

		void TraceForStoredItems();

		void CanStore(
class ABP_ParentItem_C* Item
, 
bool* CanStore
, 
class USC_ShelfLocation_C** Location
, 
struct FS_ShelfItem* ItemData
);

		void OnCompleted_671D6CD54910B7E9A078748F04436CA4();

		void NewItemToShelf(
class ABP_ParentItem_C* Item
);

		void ActorLoaded();

		void ActorPreSave();

		void LoadItemToShelf(
class ABP_ParentItem_C* Item
, 
class USceneComponent* Location
);

		void ExecuteUbergraph_BP_ParentShelf(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
