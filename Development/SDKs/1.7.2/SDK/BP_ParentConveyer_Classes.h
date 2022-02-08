#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
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
	 * BlueprintGeneratedClass BP_ParentConveyer.BP_ParentConveyer_C
	 * Size -> 0x001D (FullSize[0x0581] - InheritedSize[0x0564])
	 */
	class ABP_ParentConveyer_C : public ABP_ParentWaterItem_C
	{
	public:
		unsigned char                                              UnknownData_P7I1[0x4];                                   // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0568(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       AntiLockBox;                                             // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Arrow;                                                   // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       ValveOn_;                                                // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CornerChecker(class ABP_ParentConveyer_C* Conveyor, class ABP_ParentItem_C* Item, bool* FirstTime_);
		void MultiBoxConveyorCheck(class ABP_ParentItem_C* Item, bool* CanDoNewVel);
		void ConveyorCollisionChecker(class AActor* Other_Actor, bool* CanPush_);
		void OverrideDroppedItem();
		void BndEvt__AntiLockBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__AntiLockBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OverrideStartPlacing();
		void StopBeltBug(class UPrimitiveComponent* Belt);
		void OverridePlacedDown();
		void ShovelTapped(int32_t Stacks, int32_t Quality);
		void ExecuteUbergraph_BP_ParentConveyer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
