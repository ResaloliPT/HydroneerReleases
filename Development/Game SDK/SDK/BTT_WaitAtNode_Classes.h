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
	 * BlueprintGeneratedClass BTT_WaitAtNode.BTT_WaitAtNode_C
	 * Size -> 0x0090 (FullSize[0x0138] - InheritedSize[0x00A8])
	 */
	class UBTT_WaitAtNode_C : public UBTTask_BlueprintBase
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		struct FBlackboardKeySelector                            Time;                                                    // 0x00B0(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            TargetNode;                                              // 0x00D8(0x0028) Edit, BlueprintVisible


		float                                                    MinWait;                                                 // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    MaxWait;                                                 // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class ABP_AI_Node_C*                                     Node;                                                    // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class ABP_NPC_C*                                         NPC;                                                     // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		struct FVector                                           StartLocation;                                           // 0x0118(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_6IAR[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UABP_HydroGuy_C*                                   AnimBP;                                                  // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		struct FTimerHandle                                      WaitTimer;                                               // 0x0130(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


	public:

		void ClearNode();

		void ClearPose();

		void SetCharacterVelocity(
bool Start
);

		void EndTask();

		void CanFindNewNode(
bool* Result
);

		void ReceiveTickAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
, 
float DeltaSeconds
);

		void ReceiveExecuteAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
);

		void TimerWait();

		void WaitAtNode();

		void InitAnimNode();

		void AbortMove();

		void ReceiveAbortAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
);

		void StopWait();

		void ExecuteUbergraph_BTT_WaitAtNode(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
