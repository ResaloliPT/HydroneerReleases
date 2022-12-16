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
	 * BlueprintGeneratedClass BP_ParentPipeIntake.BP_ParentPipeIntake_C
	 * Size -> 0x0045 (FullSize[0x0485] - InheritedSize[0x0440])
	 */
	class ABP_ParentPipeIntake_C : public ABP_ParentPipe_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UStaticMeshComponent*                              Clip4;                                                   // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              Clip3;                                                   // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              Clip2;                                                   // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              Clip1;                                                   // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   Scene;                                                   // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      WaterFlowHandle;                                         // 0x0470(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		class UAudioComponent*                                   IntakeSound;                                             // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    BasePressure;                                            // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     Dev;                                                     // 0x0484(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor


	public:

		void TrySetDevMaterial();

		void CreateProxyItem();

		void UserConstructionScript();

		void OverridePlacedDown(
class ABP_GameCharacter_C* Character
);

		void WaterFlow();

		void OverridePickedup();

		void LoadCompleted();

		void ExecuteUbergraph_BP_ParentPipeIntake(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
