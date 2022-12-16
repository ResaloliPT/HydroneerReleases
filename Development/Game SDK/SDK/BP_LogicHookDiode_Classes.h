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
	 * BlueprintGeneratedClass BP_LogicHookDiode.BP_LogicHookDiode_C
	 * Size -> 0x0010 (FullSize[0x0438] - InheritedSize[0x0428])
	 */
	class ABP_LogicHookDiode_C : public ABP_ParentHook_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UPrimitiveComponent*                               AllowedEntryPoint;                                       // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void HookFunctionality(
class ABP_ParentItem_C* HookedTo
, 
class USceneComponent* Component
, 
bool* CanPass
);

		void OverridePartHooked(
class ABP_ParentBuild_C* HookedTo
);

		void LoadCompleted();

		void ExecuteUbergraph_BP_LogicHookDiode(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
