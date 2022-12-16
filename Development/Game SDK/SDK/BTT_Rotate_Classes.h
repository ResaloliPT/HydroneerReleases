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
	 * BlueprintGeneratedClass BTT_Rotate.BTT_Rotate_C
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	class UBTT_Rotate_C : public UBTTask_BlueprintBase
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		struct FBlackboardKeySelector                            TargetRotation;                                          // 0x00B0(0x0028) Edit, BlueprintVisible


		float                                                    RotateTime;                                              // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FRotator                                          StartRotation;                                           // 0x00DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		struct FRotator                                          EndRotation;                                             // 0x00E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_5WXP[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FTimerHandle                                      RotationTimer;                                           // 0x00F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


	public:

		void ReceiveExecuteAI(
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

		void RotationComplete();

		void ExecuteUbergraph_BTT_Rotate(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
