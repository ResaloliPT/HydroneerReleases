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
	 * BlueprintGeneratedClass BTT_FindNode.BTT_FindNode_C
	 * Size -> 0x0108 (FullSize[0x01B0] - InheritedSize[0x00A8])
	 */
	class UBTT_FindNode_C : public UBTTask_BlueprintBase
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		struct FBlackboardKeySelector                            TargetNode;                                              // 0x00B0(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            DefaultLocation;                                         // 0x00D8(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            TargetLocation;                                          // 0x0100(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            TargetNodeType;                                          // 0x0128(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            Time;                                                    // 0x0150(0x0028) Edit, BlueprintVisible


		TArray<E_AI_NodeType>                                    NodeTypes;                                               // 0x0178(0x0010) Edit, BlueprintVisible


		class ABP_AI_Node_C*                                     Node;                                                    // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		TArray<class ABP_AI_Node_C*>                             PreviousNodes;                                           // 0x0190(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		class APawn*                                             Pawn;                                                    // 0x01A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class ABP_NPC_C*                                         NPC;                                                     // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


	public:

		void SetNodeValues();

		void CheckLastNodes(
class ABP_AI_Node_C* Node
, 
bool* Result
);

		void CheckNodeValidity(
class ABP_AI_Node_C* Node
, 
bool* Result
);

		void Default();

		void EvaluateNodes(
TArray<class ABP_AI_Node_C*>* Array
, 
TArray<float>* Modifier
, 
class ABP_AI_Node_C** Node
);

		void CommitNode();

		void FindCloseNode(
class ABP_AI_Node_C** Node
);

		void FindNextNode(
class ABP_AI_Node_C** Node
);

		void ReceiveExecuteAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
);

		void ExecuteUbergraph_BTT_FindNode(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
