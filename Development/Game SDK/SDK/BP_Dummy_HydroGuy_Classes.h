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
	 * BlueprintGeneratedClass BP_Dummy_HydroGuy.BP_Dummy_HydroGuy_C
	 * Size -> 0x0034 (FullSize[0x08DC] - InheritedSize[0x08A8])
	 */
	class ABP_Dummy_HydroGuy_C : public ABP_Character_HydroGuy_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x08A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UAC_Highlight_C*                                   AC_Highlight;                                            // 0x08B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneCaptureComponent2D*                          Capture_Head;                                            // 0x08B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   HeadCaptureSKT;                                          // 0x08C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USpotLightComponent*                               SpotLight;                                               // 0x08C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneCaptureComponent2D*                          Capture_Body;                                            // 0x08D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		int32_t                                                  ActivePlayerIndex;                                       // 0x08D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void InitStyle(
const struct FS_CharacterStyle& Style
);

		void DummyHighlight(
bool Highlight
);

		void SetRenderTargetxxx(
class UTextureRenderTarget2D* RenderTarget
);

		void ToggleFrameCapture(
bool Capture_Every_Frame
);

		void UserConstructionScript();

		void ReceiveBeginPlay();

		void ReceiveTick(
float DeltaSeconds
);

		void ExecuteUbergraph_BP_Dummy_HydroGuy(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
