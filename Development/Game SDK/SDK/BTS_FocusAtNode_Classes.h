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
	 * BlueprintGeneratedClass BTS_FocusAtNode.BTS_FocusAtNode_C
	 * Size -> 0x0048 (FullSize[0x00E0] - InheritedSize[0x0098])
	 */
	class UBTS_FocusAtNode_C : public UBTService_BlueprintBase
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		struct FBlackboardKeySelector                            Node;                                                    // 0x00A0(0x0028) Edit, BlueprintVisible


		class ABP_AI_Node_C*                                     TargetNode;                                              // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class AAIController*                                     Controller;                                              // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class APawn*                                             Pawn;                                                    // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void ReceiveActivationAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
);

		void ReceiveDeactivationAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
);

		void ExecuteUbergraph_BTS_FocusAtNode(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
