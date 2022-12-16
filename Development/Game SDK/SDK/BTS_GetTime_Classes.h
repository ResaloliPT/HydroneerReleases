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
	 * BlueprintGeneratedClass BTS_GetTime.BTS_GetTime_C
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class UBTS_GetTime_C : public UBTService_BlueprintBase
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		struct FBlackboardKeySelector                            Time;                                                    // 0x00A0(0x0028) Edit, BlueprintVisible


		class ABP_DayNightCycle_C*                               DayNightCycle;                                           // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void CalcTimeChunk(
E_TimeChunks* TimeChunk
);

		void ReceiveActivationAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
);

		void ReceiveTickAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
, 
float DeltaSeconds
);

		void ExecuteUbergraph_BTS_GetTime(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
