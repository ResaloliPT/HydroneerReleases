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
	 * BlueprintGeneratedClass BP_CaughtFish.BP_CaughtFish_C
	 * Size -> 0x0020 (FullSize[0x0408] - InheritedSize[0x03E8])
	 */
	class ABP_CaughtFish_C : public ABP_ParentResource_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UAC_Heat_C*                                        AC_Heat;                                                 // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		E_FishType                                               Type;                                                    // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


		unsigned char                                            UnknownData_DTPZ[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UMaterialInstanceDynamic*                          DynamicMaterial;                                         // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void CreateProxyItem();

		void UserConstructionScript();

		void InFire(
bool SlowBurn
);

		void OutOfFire();

		void FullHeat();

		void HeatUpdated(
float Heat
);

		void ActorLoaded();

		void LoadFishType();

		void ExecuteUbergraph_BP_CaughtFish(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
