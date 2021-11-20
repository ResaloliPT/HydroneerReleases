#pragma once

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

// AnimBlueprintGeneratedClass ABP_Pickup.ABP_Pickup_C
// 0x0800 (FullSize[0x1130] - InheritedSize[0x0930])
class UABP_Pickup_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0930(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_40E8C5314509C46A90B48CA5473B2347;       // 0x0938(0x0020)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_636005FD4DCF29DB05423A83AA0B0A73; // 0x0958(0x00E0)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_F256790E4D6E8C3635500386E59FA19A; // 0x0A38(0x0010)
	unsigned char                                      UnknownData_KKCQ[0x8];                                     // 0x0A48(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A9CD66EA49199DEA016885B68264EE32;     // 0x0A50(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_59B95EE44E6E0C4937D055836CAA84BF;     // 0x0C00(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F3C9B6F3496AA6A43837E7A1A4ACD774;     // 0x0DB0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B2D9E95B4E1FDF3BB34E1B951E547975;     // 0x0F60(0x01B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CF9BEB6D4E554A3C053D50A5B2F248F8; // 0x1110(0x0020)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Pickup.ABP_Pickup_C");
		return ptr;
	}



	void ExecuteUbergraph_ABP_Pickup(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
