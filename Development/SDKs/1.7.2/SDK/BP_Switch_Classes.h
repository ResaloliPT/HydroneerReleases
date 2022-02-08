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
	 * BlueprintGeneratedClass BP_Switch.BP_Switch_C
	 * Size -> 0x0040 (FullSize[0x0398] - InheritedSize[0x0358])
	 */
	class ABP_Switch_C : public ABP_SceneNode_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CurrentSelection;                                        // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0PRT[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<class FName>                                        Options;                                                 // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class AActor*>                                      OptionsActors;                                           // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void SelectNext();
		void SelectPrevious();
		void RegisterSwitch();
		void SetSelection(int32_t Value);
		void ReceiveBeginPlay();
		void OnSetNodeVisibility(bool NewVisibility);
		void ExecuteUbergraph_BP_Switch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
