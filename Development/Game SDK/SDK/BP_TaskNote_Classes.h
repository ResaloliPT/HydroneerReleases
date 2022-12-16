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
	 * BlueprintGeneratedClass BP_TaskNote.BP_TaskNote_C
	 * Size -> 0x0059 (FullSize[0x0422] - InheritedSize[0x03C9])
	 */
	class ABP_TaskNote_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_NV7E[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UWidgetComponent*                                  Widget;                                                  // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class FName                                              NPC_Tag;                                                 // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FST_NPC_Request                                   RequestData;                                             // 0x03E8(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash


		class UUIW_RequestNote_C*                                RequestWidget;                                           // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     Save;                                                    // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor


		bool                                                     WasInitialized;                                          // 0x0421(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


	public:

		void DestroyRequest();

		void ToggleSave(
bool Save
);

		void InitRequest(
const struct FST_NPC_Request& RequestData
, 
const class FName& NPC_ID
, 
const class FName& NPC_Name
);

		void OnCompleted_5929EB464363BF53FC91A1A6517F2BF2();

		void ItemPickedUp(
class ABP_GameCharacter_C* Player
);

		void ItemDropped();

		void ActorLoaded();

		void ReceiveBeginPlay();

		void ExecuteUbergraph_BP_TaskNote(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
