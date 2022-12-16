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
	 * BlueprintGeneratedClass BP_ConveyorSplitter.BP_ConveyorSplitter_C
	 * Size -> 0x0096 (FullSize[0x0502] - InheritedSize[0x046C])
	 */
	class ABP_ConveyorSplitter_C : public ABP_ParentConveyor_C
	{
	public:

		unsigned char                                            UnknownData_ARLE[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0470(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UAC_Storage_C*                                     AC_Storage;                                              // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     CheckerBox;                                              // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     SplitBox;                                                // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     StraightBox;                                             // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		TArray<class ABP_ParentItem_C*>                          ItemsToMove;                                             // 0x0498(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		struct FTimerHandle                                      ConveyorTimerHandle;                                     // 0x04A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		TArray<class ABP_ParentItem_C*>                          ItemsToSplit;                                            // 0x04B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		TArray<class ABP_GameCharacter_C*>                       CharactersToSplit;                                       // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		struct FTimerHandle                                      ConveyorTimerHandle2;                                    // 0x04D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		TArray<class UClass*>                                    TestClasses;                                             // 0x04D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		struct FVector                                           SplitDelta;                                              // 0x04E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FVector                                           StraightDelta;                                           // 0x04F4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     UseStraight;                                             // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     UseSplit;                                                // 0x0501(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


	public:

		void ChangeBeltSpeed();

		void OnCompleted_D71D75334F9626EA72C9BCAE6444C682();

		void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
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

		void BndEvt__CheckerBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(
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

		void BndEvt__CheckerBox_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(
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

		void ActorLoaded();

		void RemoveFromStraight(
class AActor* Actor
);

		void ExecuteUbergraph_BP_ConveyorSplitter(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
