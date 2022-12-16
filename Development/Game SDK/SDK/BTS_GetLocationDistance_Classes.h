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
	 * BlueprintGeneratedClass BTS_GetLocationDistance.BTS_GetLocationDistance_C
	 * Size -> 0x0058 (FullSize[0x00F0] - InheritedSize[0x0098])
	 */
	class UBTS_GetLocationDistance_C : public UBTService_BlueprintBase
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		struct FBlackboardKeySelector                            TargetLocation;                                          // 0x00A0(0x0028) Edit, BlueprintVisible


		struct FBlackboardKeySelector                            Distance;                                                // 0x00C8(0x0028) Edit, BlueprintVisible


	public:

		void ReceiveTickAI(
class AAIController* OwnerController
, 
class APawn* ControlledPawn
, 
float DeltaSeconds
);

		void ExecuteUbergraph_BTS_GetLocationDistance(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
