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
	 * BlueprintGeneratedClass BP_Rod.BP_Rod_C
	 * Size -> 0x00C3 (FullSize[0x048C] - InheritedSize[0x03C9])
	 */
	class ABP_Rod_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_JP4E[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UAC_Animator_C*                                    AC_Animator;                                             // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UAC_ResourceSpawn_C*                               AC_ResourceSpawn;                                        // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   BobberHook;                                              // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class ULocalCableComponent*                              FishingWire2;                                            // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class ULocalCableComponent*                              FishingWire;                                             // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              Bobber;                                                  // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class ULocalCableComponent*                              LocalCable3;                                             // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class ULocalCableComponent*                              LocalCable2;                                             // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class ULocalCableComponent*                              LocalCable1;                                             // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class ULocalCableComponent*                              LocalCable;                                              // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   CableEnd3;                                               // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   CableEnd2;                                               // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   CableEnd1;                                               // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   CableEnd;                                                // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    BobbingZ;                                                // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_ZN1T[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UCurveFloat*                                       BobbingCurve;                                            // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      BobberTimer;                                             // 0x0458(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		bool                                                     CastOut;                                                 // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     Catchable;                                               // 0x0461(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_TYLX[0x2];                                   // 0x0462(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		float                                                    BaseZ;                                                   // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UCurveFloat*                                       SpawnCurve;                                              // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		E_Rod                                                    Type;                                                    // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


		unsigned char                                            UnknownData_BI2H[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TArray<class UMaterialInstanceDynamic*>                  DynamicCableMat;                                         // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		int32_t                                                  Luck;                                                    // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void LMBDownWhileCarrying(
class ABP_GameController_C* Controller
, 
class AActor* HitActor
, 
const struct FVector& HitLocation
, 
bool* ConsumeInput
);

		void SetUpRod();

		void CreateDynamicRodMats();

		void UserConstructionScript();

		void BndEvt__Bobber_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(
class UPrimitiveComponent* HitComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
const struct FVector& NormalImpulse
, 
const struct FHitResult& Hit
);

		void Bobbing();

		void StartFishing();

		void StopFishing();

		void SpawnFish();

		void OverrideDroppedItem(
class ABP_GameCharacter_C* Character
);

		void RMBDownWhileCarrying(
class ABP_GameController_C* Controller
, 
class AActor* Hit_Actor
, 
const struct FVector& HitLocation
);

		void ActorLoaded();

		void StartCasting(
class ABP_GameController_C* Controller
);

		void ExecuteUbergraph_BP_Rod(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
