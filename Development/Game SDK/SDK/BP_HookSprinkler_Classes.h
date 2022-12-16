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
	 * BlueprintGeneratedClass BP_HookSprinkler.BP_HookSprinkler_C
	 * Size -> 0x0028 (FullSize[0x0450] - InheritedSize[0x0428])
	 */
	class ABP_HookSprinkler_C : public ABP_ParentHook_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UNiagaraComponent*                                 Niagara;                                                 // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              StaticMesh1;                                             // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    SphereRadius;                                            // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_JMEK[0x4];                                   // 0x0444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FTimerHandle                                      SprinklerTimer;                                          // 0x0448(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


	public:

		void SprinklerWater();

		void ToggleSprinklerTimer(
bool On
);

		void SpinActor();

		void UpdateSpreadSize(
float InSphereRadius
);

		void HookFunctionality(
class ABP_ParentItem_C* HookedTo
, 
class USceneComponent* Component
, 
bool* CanPass
);

		void OverridePickedup();

		void OverrideStartPlacing();

		void OverrideParentNoWater();

		void OverrideHookCheckRot();

		void ReceiveTick(
float DeltaSeconds
);

		void ExecuteUbergraph_BP_HookSprinkler(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
