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
	 * BlueprintGeneratedClass BP_HookVegDicer.BP_HookVegDicer_C
	 * Size -> 0x0050 (FullSize[0x0478] - InheritedSize[0x0428])
	 */
	class ABP_HookVegDicer_C : public ABP_ParentHook_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UStaticMeshComponent*                              BladeR2;                                                 // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              BladeR1;                                                 // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              BladeL3;                                                 // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              BladeL2;                                                 // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              BladeL1;                                                 // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UBoxComponent*                                     ShredBox;                                                // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    AnimationTimeline_Track3_C3958A4747FD4797740C3BB469185897; // 0x0460(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    AnimationTimeline_Track2_C3958A4747FD4797740C3BB469185897; // 0x0464(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    AnimationTimeline_Track1_C3958A4747FD4797740C3BB469185897; // 0x0468(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       AnimationTimeline__Direction_C3958A4747FD4797740C3BB469185897; // 0x046C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_QJFT[0x3];                                   // 0x046D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                AnimationTimeline;                                       // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


	public:

		void CutVeg(
class AActor* Actor
);

		void HookFunctionality(
class ABP_ParentItem_C* HookedTo
, 
class USceneComponent* Component
, 
bool* CanPass
);

		void AnimationTimeline__FinishedFunc();

		void AnimationTimeline__UpdateFunc();

		void OverridePickedup();

		void OverrideParentNoWater();

		void BndEvt__ShredBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
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

		void ToggleCut(
bool Toggle
);

		void Anim();

		void ExecuteUbergraph_BP_HookVegDicer(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
