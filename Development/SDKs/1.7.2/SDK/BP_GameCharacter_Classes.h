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
	 * BlueprintGeneratedClass BP_GameCharacter.BP_GameCharacter_C
	 * Size -> 0x00F4 (FullSize[0x0844] - InheritedSize[0x0750])
	 */
	class ABP_GameCharacter_C : public AVoxelCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0750(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     CartSocket;                                              // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDecalComponent*                                     Decal;                                                   // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SafetySocket;                                            // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BuildSocket;                                             // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     HeadSocket;                                              // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PlayerHand;                                              // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RelativeRotSocket;                                       // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ResourceSocket;                                          // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SpringSocket;                                            // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm;                                               // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVoxelInvokerComponent*                              VoxelInvoker;                                            // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_5B7C34844FE3339F4853FABEAF5B603C;  // 0x07B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_0__Direction_5B7C34844FE3339F4853FABEAF5B603C;  // 0x07BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EP2L[0x3];                                   // 0x07BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExplosionTimeLine_NewTrack_0_EC5F789A48CC562531DBFCB24F8D2C78; // 0x07C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  ExplosionTimeLine__Direction_EC5F789A48CC562531DBFCB24F8D2C78; // 0x07CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7CZE[0x3];                                   // 0x07CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ExplosionTimeLine;                                       // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Free_;                                                   // 0x07D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1RD8[0x7];                                   // 0x07D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_Water_C*>                                 WaterVolumesImIn;                                        // 0x07E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AActor*>                                      DropScanSphereOverlapping;                               // 0x07F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		struct FTimerHandle                                        ForwardMovementTimer;                                    // 0x0800(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RightMovementTimer;                                      // 0x0808(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       Headbob_;                                                // 0x0810(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8ZGZ[0x7];                                   // 0x0811(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        WalkingFootstepTimer;                                    // 0x0818(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RunningFootstepTimer;                                    // 0x0820(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       UsingCart_;                                              // 0x0828(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_87Z2[0x3];                                   // 0x0829(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CartRotSpeed;                                            // 0x082C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsingPallet_;                                            // 0x0830(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KHWB[0x7];                                   // 0x0831(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        FlyingHatVertTimerHandle;                                // 0x0838(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      FlyingVertDirection;                                     // 0x0840(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlaySoundJump();
		void FootstepWood();
		void FootstepDirt();
		void FootstepWater();
		void ExplosionTimeLine__FinishedFunc();
		void ExplosionTimeLine__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void InpActEvt_Jump_K2Node_InputActionEvent_20(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_19(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_18(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_17(const struct FKey& Key);
		void InpActEvt_PlayerForward_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_PlayerForward_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_PlayerBackward_K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_PlayerBackward_K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_PlayerLeft_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_PlayerLeft_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_PlayerRight_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_PlayerRight_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_Sprint_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Sprint_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_CKSprint_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_CKSprint_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_CKJump_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_CKJump_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_CKCrouch_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_CKCrouch_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3(float AxisValue);
		void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4(float AxisValue);
		void ReceiveBeginPlay();
		void FootstepTimer();
		void Forward();
		void Backwards();
		void Left();
		void Right();
		void FootstepTimer2();
		void ExplosionVignette();
		void NukeVignette();
		void FlyingHatVertTimer();
		void ExecuteUbergraph_BP_GameCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
