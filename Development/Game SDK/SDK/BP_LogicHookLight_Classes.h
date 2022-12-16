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
	 * BlueprintGeneratedClass BP_LogicHookLight.BP_LogicHookLight_C
	 * Size -> 0x0050 (FullSize[0x0478] - InheritedSize[0x0428])
	 */
	class ABP_LogicHookLight_C : public ABP_ParentHook_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class USphereComponent*                                  Sphere;                                                  // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USpotLightComponent*                               SpotLight;                                               // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    Timeline_1_Alpha_57A53BA042C5E263D5C22CBF1D8B8EAA;       // 0x0440(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       Timeline_1__Direction_57A53BA042C5E263D5C22CBF1D8B8EAA;  // 0x0444(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_YO7Q[0x3];                                   // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                Timeline_2;                                              // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    Timeline_0_NewTrack_0_D9E9CE0D445A7192AE7F4A820EFDA114;  // 0x0450(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       Timeline_0__Direction_D9E9CE0D445A7192AE7F4A820EFDA114;  // 0x0454(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_TV54[0x3];                                   // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                Timeline_1;                                              // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UMaterialInstanceDynamic*                          DynamicMaterial;                                         // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class FString                                            PreviousLogic;                                           // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash


	public:

		float GetLightValue();

		void UpdatePlantLight(
class AActor* PlantActor
, 
float LightValue
);

		void LightPlants(
float LightValue
);

		void TraceForParents();

		void TurnOffLight();

		void HookFunctionality(
class ABP_ParentItem_C* HookedTo
, 
class USceneComponent* Component
, 
bool* CanPass
);

		void UserConstructionScript();

		void Timeline_0__FinishedFunc();

		void Timeline_0__UpdateFunc();

		void Timeline_1__FinishedFunc();

		void Timeline_1__UpdateFunc();

		void RaiseBrightness(
bool Up
);

		void ChangeColor(
const struct FVector& A
);

		void NewLogicInput(
class ABP_ParentLogic_C* LogicItem
);

		void OverridePickedup();

		void ActorLoaded();

		void BndEvt__BP_LogicHookLight_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
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

		void BndEvt__BP_LogicHookLight_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void ExecuteUbergraph_BP_LogicHookLight(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
