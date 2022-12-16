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
	 * BlueprintGeneratedClass BP_ParentCraftedResource.BP_ParentCraftedResource_C
	 * Size -> 0x001C (FullSize[0x0404] - InheritedSize[0x03E8])
	 */
	class ABP_ParentCraftedResource_C : public ABP_ParentResource_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		TArray<struct FS_ResourceClassAndWeight>                 CraftedMaterials;                                        // 0x03F0(0x0010) Edit, BlueprintVisible, SaveGame, ExposeOnSpawn


		float                                                    PercentModifyer;                                         // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void ReceiveTick(
float DeltaSeconds
);

		void ExecuteUbergraph_BP_ParentCraftedResource(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
