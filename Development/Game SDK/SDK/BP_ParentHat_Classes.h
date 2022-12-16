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
	 * BlueprintGeneratedClass BP_ParentHat.BP_ParentHat_C
	 * Size -> 0x0047 (FullSize[0x0410] - InheritedSize[0x03C9])
	 */
	class ABP_ParentHat_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_AN42[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class ABP_ParentHat_C*                                   ProxyHat;                                                // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FTransform                                        HatOffset;                                               // 0x03E0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor


	public:

		void CreateProxyHat();

		void ToggleProxyHat(
bool On
);

		void OverrideHatOn(
class ABP_GameCharacter_C* Character
);

		void OverrideHatOff(
class ABP_GameCharacter_C* Character
);

		void Equip(
bool Equiped
, 
class ABP_GameCharacter_C* Character
);

		void BPI_Unhighlight(
class ABP_GameController_C* Controller
);

		void BPI_Highlight(
class ABP_GameController_C* Controller
);

		void ReceiveDestroyed();

		void ExecuteUbergraph_BP_ParentHat(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
