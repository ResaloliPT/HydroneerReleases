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
	 * BlueprintGeneratedClass BP_StoreGoldenHeadStatue.BP_StoreGoldenHeadStatue_C
	 * Size -> 0x0008 (FullSize[0x0348] - InheritedSize[0x0340])
	 */
	class ABP_StoreGoldenHeadStatue_C : public ABP_ParentStoreItem_C
	{
	public:
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
