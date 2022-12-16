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
	 * BlueprintGeneratedClass BP_HookValve.BP_HookValve_C
	 * Size -> 0x0019 (FullSize[0x0441] - InheritedSize[0x0428])
	 */
	class ABP_HookValve_C : public ABP_ParentHook_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UAC_Animator_C*                                    AC_Animator;                                             // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              TurnyPart;                                               // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		bool                                                     Open;                                                    // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor


	public:

		void HookFunctionality(
class ABP_ParentItem_C* HookedTo
, 
class USceneComponent* Component
, 
bool* CanPass
);

		void LMBDownIsTarget(
class UPrimitiveComponent* Component
, 
class ABP_ParentItem_C* CarryingItem
, 
class ABP_GameController_C* Insigator
);

		void ActorLoaded();

		void ExecuteUbergraph_BP_HookValve(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
