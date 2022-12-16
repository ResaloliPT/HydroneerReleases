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
	 * BlueprintGeneratedClass BP_HookMerger.BP_HookMerger_C
	 * Size -> 0x0030 (FullSize[0x049C] - InheritedSize[0x046C])
	 */
	class ABP_HookMerger_C : public ABP_ParentConveyor_C
	{
	public:

		unsigned char                                            UnknownData_6Z1P[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0470(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UBoxComponent*                                     Box;                                                     // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		TArray<class ABP_ParentItem_C*>                          ItemsToMove;                                             // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		struct FVector                                           BeltDelta;                                               // 0x0490(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void ChangeBeltSpeed();

		void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
, 
bool bFromSweep
, 
const struct FHitResult& SweepResult
);

		void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void ReceiveTick(
float DeltaSeconds
);

		void ExecuteUbergraph_BP_HookMerger(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
