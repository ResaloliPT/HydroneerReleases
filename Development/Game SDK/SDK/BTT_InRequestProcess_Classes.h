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
	 * BlueprintGeneratedClass BTT_InRequestProcess.BTT_InRequestProcess_C
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class UBTT_InRequestProcess_C : public UBTTask_BlueprintBase
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		struct FBlackboardKeySelector                            RequestActor;                                            // 0x00B0(0x0028) Edit, BlueprintVisible


	public:

		void ReceiveExecuteAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
);

		void FinishRequestProcess();

		void ReceiveAbortAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
);

		void ExecuteUbergraph_BTT_InRequestProcess(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
