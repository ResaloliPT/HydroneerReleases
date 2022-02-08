﻿#pragma once

// Name: Hydroneer, Version: 1.7.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DevCam.BP_DevCam_C
// 0x0010 (FullSize[0x03C8] - InheritedSize[0x03B8])
class ABP_DevCam_C : public ASpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                    // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DevCam.BP_DevCam_C");
		return ptr;
	}



	void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_4(float AxisValue);
	void ExecuteUbergraph_BP_DevCam(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif