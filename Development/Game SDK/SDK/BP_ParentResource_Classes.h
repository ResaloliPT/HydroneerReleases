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
	 * BlueprintGeneratedClass BP_ParentResource.BP_ParentResource_C
	 * Size -> 0x0028 (FullSize[0x03E8] - InheritedSize[0x03C0])
	 */
	class ABP_ParentResource_C : public ABP_ParentItem_C
	{
	public:

		float                                                    Weight;                                                  // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


		int32_t                                                  BaseValue;                                               // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		TArray<class UBoxComponent*>                             ConveyorsColliding;                                      // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference


		bool                                                     DoNotClear;                                              // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_34AW[0x3];                                   // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		float                                                    MinScaleSize;                                            // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    MaxScaleSize;                                            // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    ScaleMultiplyer;                                         // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void SetDoNotClear(
bool DoNotClear
);

		void CreateProxyItem();

		void SetResourceSize();

		void UserConstructionScript();

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
