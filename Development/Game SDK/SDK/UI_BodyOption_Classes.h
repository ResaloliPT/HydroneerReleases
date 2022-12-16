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
	 * WidgetBlueprintGeneratedClass UI_BodyOption.UI_BodyOption_C
	 * Size -> 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
	 */
	class UUI_BodyOption_C : public UUserWidget
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UButton*                                           Button_Option;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UImage*                                            Image_OptionIcon;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UImage*                                            Image_OptionIconHighlight;                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class FScriptMulticastDelegate                           OnPressed;                                               // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


		class FName                                              BodyID;                                                  // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


		class USoundBase*                                        PressSound;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


	public:

		void ToggleSelection(
bool isSelected
);

		void Construct();

		void BndEvt__UI_StyleOption_Button_Option_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();

		void ExecuteUbergraph_UI_BodyOption(
int32_t EntryPoint
);

		void OnPressed__DelegateSignature(
class UWidget* Widget
, 
const class FName& BodyID
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
