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
	 * BlueprintGeneratedClass BP_CutVegStacker.BP_CutVegStacker_C
	 * Size -> 0x0038 (FullSize[0x0478] - InheritedSize[0x0440])
	 */
	class ABP_CutVegStacker_C : public ABP_ParentPipe_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UBoxComponent*                                     UpperBox;                                                // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     LowerBox;                                                // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              WaterNub;                                                // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     X_Box;                                                   // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		bool                                                     Water;                                                   // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     CanUseLever;                                             // 0x0469(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_MVNE[0x6];                                   // 0x046A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class ABP_ParentResource_C*                              CompressedTarget;                                        // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void Combine_Cut_Veg(
class ABP_ParentResource_C* Item
);

		void FindTotalWeight(
TArray<class ABP_ParentResource_C*>* Gems
, 
float* TotalWeight
);

		void TimerTillEmpty();

		void BndEvt__BP_LogicCompressor_LowerBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(
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

		void BndEvt__BP_LogicCompressor_LowerBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void OverrideWaterIn(
class USceneComponent* Component
, 
float RootPressure
);

		void FlashLowerCollisions();

		void BndEvt__BP_CutVegStacker_UpperBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
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

		void ExecuteUbergraph_BP_CutVegStacker(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
