#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * BlueprintGeneratedClass BP_CaughtFish.BP_CaughtFish_C
	 * Size -> 0x0027 (FullSize[0x03A0] - InheritedSize[0x0379])
	 */
	class ABP_CaughtFish_C : public ABP_ParentResource_C
	{
	public:
		unsigned char                                              UnknownData_ENM2[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAC_Heat_C*                                          AC_Heat;                                                 // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		E_FishType                                                 Type;                                                    // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_RZDY[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DynamicMaterial;                                         // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreateProxyItem();
		void UserConstructionScript();
		void InFire(bool SlowBurn_);
		void OutOfFire();
		void FullHeat();
		void HeatUpdated(float Heat);
		void ActorLoaded();
		void LoadFishType();
		void ExecuteUbergraph_BP_CaughtFish(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
