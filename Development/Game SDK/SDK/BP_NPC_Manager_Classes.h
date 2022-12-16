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
	 * BlueprintGeneratedClass BP_NPC_Manager.BP_NPC_Manager_C
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class ABP_NPC_Manager_C : public AActor
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UBillboardComponent*                               Billboard;                                               // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    RollRequestTime;                                         // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_LRCJ[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FTimerHandle                                      RequestTimer;                                            // 0x0238(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		float                                                    RequestProgression;                                      // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_L0E4[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UCurveFloat*                                       RequestProgressionCurve;                                 // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void ComponentsToSave(
TArray<class UActorComponent*>* Components
);

		void NPCID_COUNT(
TArray<class FName>* IDs
, 
const class FName& TestID
, 
int32_t* Count
);

		void NPCID_CHECK();

		void SetbackProgressRequests();

		void ProgressRequests();

		void Roll_NPC_Requests();

		void OnCompleted_A1BCB8F14656F69C2D83EBB37A90A4DF();

		void ActorLoaded();

		void ActorSaved();

		void ReceiveBeginPlay();

		void TryRollRequests();

		void InitRequestTimer();

		void ActorPreSave();

		void ExecuteUbergraph_BP_NPC_Manager(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
