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
	 * BlueprintGeneratedClass BP_ScreenshotCam.BP_ScreenshotCam_C
	 * Size -> 0x0078 (FullSize[0x0408] - InheritedSize[0x0390])
	 */
	class ABP_ScreenshotCam_C : public APawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0390(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFloatingPawnMovement*                               FloatingPawnMovement;                                    // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUI_ScreenshotCam_C*                                 UI;                                                      // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ForwardMovementTimer;                                    // 0x03B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RightMovementTimer;                                      // 0x03C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        DownTimer;                                               // 0x03C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_GameController_C*                                PlayerController;                                        // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FKey                                                E_Key;                                                   // 0x03D8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		E_CameraFilters_E_CameraFilters                            CurrentFilter;                                           // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KQOA[0x3];                                   // 0x03F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedModifier;                                           // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ScreenshotBoundary_C*                            Boundary;                                                // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Greenscreen_C*                                   GreenScreen;                                             // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InpActEvt_PlayerForward_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_PlayerForward_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_PlayerBackward_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_PlayerBackward_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_PlayerLeft_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_PlayerLeft_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_PlayerRight_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_PlayerRight_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key);
		void Forward();
		void Backwards();
		void Left();
		void Right();
		void ToggleCinematicBars();
		void DownTime();
		void UpTime();
		void ChangeTime(float Amount);
		void ReceiveBeginPlay();
		void ChangeFilter(bool Next_);
		void ResetFilters();
		void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4(float AxisValue);
		void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3(float AxisValue);
		void ChangeFOV(float Amount);
		void ChangeSpeed(float Amount);
		void ReceiveEndPlay(Engine_EEndPlayReason EndPlayReason);
		void ToggleGreenscreen();
		void ExecuteUbergraph_BP_ScreenshotCam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
