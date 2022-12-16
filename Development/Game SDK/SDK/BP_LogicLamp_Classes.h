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
	 * BlueprintGeneratedClass BP_LogicLamp.BP_LogicLamp_C
	 * Size -> 0x0058 (FullSize[0x0490] - InheritedSize[0x0438])
	 */
	class ABP_LogicLamp_C : public ABP_ParentLogic_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class USphereComponent*                                  Sphere;                                                  // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UPointLightComponent*                              PointLight;                                              // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UBoxComponent*                                     X_Box;                                                   // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    Timeline_1_Alpha_84368258460F6123A22817984FC3F5D3;       // 0x0458(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       Timeline_1__Direction_84368258460F6123A22817984FC3F5D3;  // 0x045C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_WOUA[0x3];                                   // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                Timeline_2;                                              // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    Timeline_0_NewTrack_0_C2C9A124406F1D886A4A548612A6B781;  // 0x0468(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       Timeline_0__Direction_C2C9A124406F1D886A4A548612A6B781;  // 0x046C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_7RWA[0x3];                                   // 0x046D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                Timeline_1;                                              // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class FString                                            PreviousLogic;                                           // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash


		class UMaterialInstanceDynamic*                          DynamicMaterial;                                         // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		float GetLightValue();

		void LightPlants(
float LightValue
);

		void UpdateLight(
bool Loading
);

		void UserConstructionScript();

		void Timeline_0__FinishedFunc();

		void Timeline_0__UpdateFunc();

		void Timeline_1__FinishedFunc();

		void Timeline_1__UpdateFunc();

		void OverrideLogicIn(
class USceneComponent* Component
);

		void OverridePickedup();

		void RaiseBrightness(
bool Up
);

		void ChangeColor(
const struct FVector& A
);

		void ActorLoaded();

		void BndEvt__BP_LogicLamp_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
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

		void BndEvt__BP_LogicLamp_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void ExecuteUbergraph_BP_LogicLamp(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
