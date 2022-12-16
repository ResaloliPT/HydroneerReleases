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
	 * BlueprintGeneratedClass BP_ParentConveyorDual.BP_ParentConveyorDual_C
	 * Size -> 0x007A (FullSize[0x04E6] - InheritedSize[0x046C])
	 */
	class ABP_ParentConveyorDual_C : public ABP_ParentConveyor_C
	{
	public:

		unsigned char                                            UnknownData_3UVF[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0470(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UBoxComponent*                                     ExitBox;                                                 // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     EntryBox;                                                // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		TArray<class ABP_ParentItem_C*>                          ItemsToMove;                                             // 0x0488(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		struct FTimerHandle                                      ConveyorTimerHandle;                                     // 0x0498(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		TArray<class ABP_ParentItem_C*>                          ItemsToMoveRight;                                        // 0x04A0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		TArray<class ABP_GameCharacter_C*>                       CharactersToMoveRight;                                   // 0x04B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		struct FTimerHandle                                      ConveyorTimerHandle2;                                    // 0x04C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		float                                                    ConveyorPlayerBoost;                                     // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FVector                                           EntryDelta;                                              // 0x04CC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FVector                                           ExitDelta;                                               // 0x04D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     UseEntry;                                                // 0x04E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     UseExit;                                                 // 0x04E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


	public:

		void ChangeBeltSpeed();

		void OnCompleted_0AB48E674288159A9BE50D9950BA00D1();

		void BeltTimer1();

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

		void BndEvt__ExitBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(
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

		void BndEvt__ExitBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void ActorLoaded();

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

		void ExecuteUbergraph_BP_ParentConveyorDual(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
