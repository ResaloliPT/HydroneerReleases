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
	 * BlueprintGeneratedClass BP_LogicRepeater.BP_LogicRepeater_C
	 * Size -> 0x0028 (FullSize[0x0460] - InheritedSize[0x0438])
	 */
	class ABP_LogicRepeater_C : public ABP_ParentLogic_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UAC_Animator_C*                                    AC_Animator;                                             // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              ARM;                                                     // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     X_Box;                                                   // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      RepeatTimer;                                             // 0x0458(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


	public:

		void OverridePlacedDown(
class ABP_GameCharacter_C* Character
);

		void ItemPickedUp(
class ABP_GameCharacter_C* Player
);

		void Repeat();

		void LoadCompleted();

		void ExecuteUbergraph_BP_LogicRepeater(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
