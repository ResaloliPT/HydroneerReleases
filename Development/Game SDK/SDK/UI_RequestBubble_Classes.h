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
	 * WidgetBlueprintGeneratedClass UI_RequestBubble.UI_RequestBubble_C
	 * Size -> 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
	 */
	class UUI_RequestBubble_C : public UUserWidget
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UWidgetAnimation*                                  ScaleIn;                                                 // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash


		class UCanvasPanel*                                      CanvasPanel_Body;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UCanvasPanel*                                      CanvasPanel_HasRequest;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UCanvasPanel*                                      CanvasPanel_Main;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UImage*                                            Image;                                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UImage*                                            Image_104;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UThrobber*                                         Throbber_99;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UUI_RequestIcon_C*                                 UI_RequestIcon_Main;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UUI_RequestIcon_C*                                 UI_RequestIcon_Resource1;                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UUI_RequestIcon_C*                                 UI_RequestIcon_Resource2;                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UUI_RequestIcon_C*                                 UI_RequestIcon_Resource3;                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UUI_RequestIcon_C*                                 UI_RequestIcon_Reward;                                   // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class FScriptMulticastDelegate                           OnHidden;                                                // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


	public:

		void TogglePendingRequestVisibility(
bool Visible
);

		void ToggleContentsVisibility(
bool Visible
);

		void SetRequestContents(
const struct FST_NPC_Request& Request
);

		void Finished_ED982C7B431213DDA9CC8E968283411F();

		void Play_ScaleIn(
EUMGSequencePlayMode PlayMode
);

		void ExecuteUbergraph_UI_RequestBubble(
int32_t EntryPoint
);

		void OnHidden__DelegateSignature();

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
