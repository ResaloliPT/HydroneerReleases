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
	 * WidgetBlueprintGeneratedClass UI_BodyPanel.UI_BodyPanel_C
	 * Size -> 0x0058 (FullSize[0x02B8] - InheritedSize[0x0260])
	 */
	class UUI_BodyPanel_C : public UUserWidget
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UTextBlock*                                        Text_Description;                                        // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class UWrapBox*                                          WrapBox_Options;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash


		class FText                                              Text;                                                    // 0x0278(0x0018) Edit, BlueprintVisible


		E_ClothingSlots                                          ClothingSlot;                                            // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_NC5Z[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class FScriptMulticastDelegate                           OnUpdateBody;                                            // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


		class UUI_CustomizationMenu_C*                           CustomizationMenu;                                       // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class USoundBase*                                        Sound;                                                   // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


	public:

		void UpdateSelectionVisual(
const class FName& SelectedOption
);

		void Update(
class UWidget* Widget
, 
const class FName& BodyID
);

		void Init(
TArray<class FName>* BodyOptions
, 
const class FName& SelectedOption
);

		void PreConstruct(
bool IsDesignTime
);

		void ExecuteUbergraph_UI_BodyPanel(
int32_t EntryPoint
);

		void OnUpdateBody__DelegateSignature(
const class FName& BodyID
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
