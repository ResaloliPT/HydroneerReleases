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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ParentHat.BP_ParentHat_C.Equip
	 */
	struct ABP_ParentHat_C_Equip_Params
	{
	public:
		bool                                                       Equiped_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHat.BP_ParentHat_C.OverrideHatOn
	 */
	struct ABP_ParentHat_C_OverrideHatOn_Params
	{
	};

	/**
	 * Function BP_ParentHat.BP_ParentHat_C.OverrideHatOff
	 */
	struct ABP_ParentHat_C_OverrideHatOff_Params
	{
	};

	/**
	 * Function BP_ParentHat.BP_ParentHat_C.OverrideMouseActivated
	 */
	struct ABP_ParentHat_C_OverrideMouseActivated_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ParentHat.BP_ParentHat_C.ExecuteUbergraph_BP_ParentHat
	 */
	struct ABP_ParentHat_C_ExecuteUbergraph_BP_ParentHat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
