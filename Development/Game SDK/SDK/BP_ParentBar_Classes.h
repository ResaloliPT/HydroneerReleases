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
	 * BlueprintGeneratedClass BP_ParentBar.BP_ParentBar_C
	 * Size -> 0x0018 (FullSize[0x0400] - InheritedSize[0x03E8])
	 */
	class ABP_ParentBar_C : public ABP_ParentResource_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UAC_Heat_C*                                        AC_Heat;                                                 // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UMaterialInstanceDynamic*                          DynamicMaterial;                                         // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void UserConstructionScript();

		void HasWater();

		void FullHeat();

		void HeatUpdated(
float Heat
);

		void HasNoWater();

		void InFire(
bool SlowBurn
);

		void OutOfFire();

		void WaterParticleHit();

		void InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
);

		void ExecuteUbergraph_BP_ParentBar(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
