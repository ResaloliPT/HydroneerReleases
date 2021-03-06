#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.6
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
	 * BlueprintGeneratedClass BP_GravityTool.BP_GravityTool_C
	 * Size -> 0x0057 (FullSize[0x03C0] - InheritedSize[0x0369])
	 */
	class ABP_GravityTool_C : public ABP_ParentTool_C
	{
	public:
		unsigned char                                              UnknownData_0G4D[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAC_Animator_C*                                      AC_Animator;                                             // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_1_NewTrack_0_E8AD02A9401E7C0B74B4E6AEDCDC8CB7;  // 0x0380(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_E8AD02A9401E7C0B74B4E6AEDCDC8CB7;  // 0x0384(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AXJ0[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_ParentItem_C*                                    GravityItem;                                             // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        GravityTimerHandle;                                      // 0x0398(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            RandomRot;                                               // 0x03A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D4HM[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DynamicMat;                                              // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     WandSound;                                               // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, const struct FVector& HitLocation, bool* ConsumeInput_);
		void UserConstructionScript();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Animate();
		void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
		void GravTimer();
		void StopLiftingObject(bool Add_Velocity_);
		void StartLiftingObject(class AActor* Object);
		void TurnOnHeat(bool Heat_);
		void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit_Actor, const struct FVector& HitLocation);
		void LMBDown(class AActor* HitActor);
		void ExecuteUbergraph_BP_GravityTool(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
