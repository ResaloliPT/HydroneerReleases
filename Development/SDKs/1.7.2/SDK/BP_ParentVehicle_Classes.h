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
	 * BlueprintGeneratedClass BP_ParentVehicle.BP_ParentVehicle_C
	 * Size -> 0x00ED (FullSize[0x048D] - InheritedSize[0x03A0])
	 */
	class ABP_ParentVehicle_C : public AWheeledVehicle
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVoxelInvokerComponent*                              VoxelInvoker;                                            // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    PhysicsCullSphere;                                       // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PlayerSeat;                                              // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WaterPlane;                                              // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Needle;                                                  // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       FuelTankCollision;                                       // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Exit;                                                    // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm;                                               // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_E06C01AB490BF9D41D0EA98534B95E6E;  // 0x03F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_0__Direction_E06C01AB490BF9D41D0EA98534B95E6E;  // 0x03FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L7CT[0x3];                                   // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SoundFadeOut_NewTrack_0_7D82B0C64166B1EAE47258B66BC0C45A; // 0x0408(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  SoundFadeOut__Direction_7D82B0C64166B1EAE47258B66BC0C45A; // 0x040C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5MSF[0x3];                                   // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SoundFadeOut;                                            // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Fuel;                                                    // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Dirt;                                                    // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterLevelBottom;                                        // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterLevelTop;                                           // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Moving_;                                                 // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L4YY[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     MovementSound;                                           // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                VehicleName;                                             // 0x0438(0x0018) Edit, BlueprintVisible
		class FText                                                VehicleDescription;                                      // 0x0450(0x0018) Edit, BlueprintVisible
		int32_t                                                    DirtQualityAverage;                                      // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InputAxis;                                               // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        PhysicsBLockTimer;                                       // 0x0470(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RightMovementTimer;                                      // 0x0478(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ForwardMovementTimer;                                    // 0x0480(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      Steering;                                                // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LMBdown;                                                 // 0x048C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EmptyFuelSoundCheck();
		void FindSuitableExit(bool* Success, struct FVector* Location);
		void SoundFadeOut__FinishedFunc();
		void SoundFadeOut__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void InpActEvt_Jump_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_PlayerLeft_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_PlayerLeft_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_PlayerRight_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_PlayerRight_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_PlayerForward_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_PlayerForward_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_PlayerBackward_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_PlayerBackward_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_CKJump_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_CKJump_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4(float AxisValue);
		void CheckFuel();
		void ReceiveBeginPlay();
		void PostLoad();
		void LockMovement_(bool Lock_);
		void DecrementFuel(float AmountToDecrease);
		void OverrideExitVehicle();
		void OverrideRMB(bool Down_);
		void OverrideLMB(bool Down_);
		void OverrideActionKey(bool Down_);
		void Enter_Vehicle();
		void ExitVehicle();
		void OverrideEnterVehicle();
		void BndEvt__PhysicsCullSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void TypeBPhysicsLock();
		void StartPhysicsBLock();
		void Left();
		void Right();
		void Forward();
		void Backwards();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__FuelTankCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_1(float AxisValue);
		void ExecuteUbergraph_BP_ParentVehicle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
