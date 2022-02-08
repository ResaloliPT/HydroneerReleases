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
	 * BlueprintGeneratedClass BP_Plinth.BP_Plinth_C
	 * Size -> 0x0008 (FullSize[0x0658] - InheritedSize[0x0650])
	 */
	class ABP_Plinth_C : public ABP_ParentBuildStorage_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0650(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OverrideStorageLoaded(const struct FS_StoredItem& SingleItem, int32_t Slot);
		void OverrideItemStored(const struct FS_StoredItem& Single_Item, int32_t Slot);
		void ExecuteUbergraph_BP_Plinth(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
