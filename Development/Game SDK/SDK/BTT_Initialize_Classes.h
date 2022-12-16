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
	 * BlueprintGeneratedClass BTT_Initialize.BTT_Initialize_C
	 * Size -> 0x0150 (FullSize[0x01F8] - InheritedSize[0x00A8])
	 */
	class UBTT_Initialize_C : public UBTTask_BlueprintBase
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		struct FBlackboardKeySelector                            Initialized;                                             // 0x00B0(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            SpawnLocation;                                           // 0x00D8(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            SpawnRotation;                                           // 0x0100(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            RequestActor;                                            // 0x0128(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            PatrolPath;                                              // 0x0150(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            State;                                                   // 0x0178(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            HasRequest;                                              // 0x01A0(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            LookAtActor;                                             // 0x01C8(0x0028) Edit, BlueprintVisible


		class ABP_NPC_C*                                         NPC;                                                     // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


	public:

		void ReceiveExecuteAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
);

		void RequestProcessStarted(
class AActor* Target
);

		void RequestInit();

		void RequestComplete();

		void RequestLookAt(
class AActor* Actor
);

		void ExecuteUbergraph_BTT_Initialize(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
