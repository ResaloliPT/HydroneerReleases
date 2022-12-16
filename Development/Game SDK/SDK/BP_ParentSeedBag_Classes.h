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
	 * BlueprintGeneratedClass BP_ParentSeedBag.BP_ParentSeedBag_C
	 * Size -> 0x004B (FullSize[0x0414] - InheritedSize[0x03C9])
	 */
	class ABP_ParentSeedBag_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_UA4O[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		struct FTimerHandle                                      TraceTimerHandle;                                        // 0x03D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		class ABP_ParentCrop_C*                                  PlacingCrop;                                             // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UClass*                                            Crop;                                                    // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     CanPlace;                                                // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_XB8X[0x7];                                   // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class AActor*                                            FoundationCurrentlyLookingAt;                            // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		int32_t                                                  Stacks;                                                  // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FLinearColor                                      CropColor;                                               // 0x0404(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void SetNewStorePrice(
int32_t NewStack
);

		void DecrementOrDestroySeedBag();

		void SetStackMaterial();

		void FindIfActorIsRelevant(
class AActor* Actor
, 
class AActor** ValidIfRelevant
);

		void LMBDownWhileCarrying(
class ABP_GameController_C* Controller
, 
class AActor* HitActor
, 
const struct FVector& HitLocation
, 
bool* ConsumeInput
);

		void TraceTimer();

		void UserConstructionScript();

		void OnCompleted_23506D5C4318CBFF64D6F5AD9649931F();

		void LMBUpWhileCarrying();

		void ReceiveHit(
class UPrimitiveComponent* MyComp
, 
class AActor* Other
, 
class UPrimitiveComponent* OtherComp
, 
bool bSelfMoved
, 
const struct FVector& HitLocation
, 
const struct FVector& HitNormal
, 
const struct FVector& NormalImpulse
, 
const struct FHitResult& Hit
);

		void ActorLoaded();

		void OverrideDroppedItem(
class ABP_GameCharacter_C* Character
);

		void HydroCropper(
class ABP_PlantFoundation_C* Foundation
);

		void ExecuteUbergraph_BP_ParentSeedBag(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
