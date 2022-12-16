﻿#pragma once

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
	 * BlueprintGeneratedClass BP_Scales.BP_Scales_C
	 * Size -> 0x0038 (FullSize[0x0440] - InheritedSize[0x0408])
	 */
	class ABP_Scales_C : public ABP_ParentBuild_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0408(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UAC_StoreFunctions_C*                              AC_StoreFunctions;                                       // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UTextRenderComponent*                              WeightText;                                              // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UTextRenderComponent*                              CashText;                                                // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USphereComponent*                                  Sphere1;                                                 // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		TArray<class ABP_ParentResource_C*>                      Resources;                                               // 0x0430(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


	public:

		void OnCompleted_E9BAF2A0467AD0C7E9847791200360B9();

		void BndEvt__Sphere1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void UpdatePrices();

		void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
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

		void ExecuteUbergraph_BP_Scales(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
