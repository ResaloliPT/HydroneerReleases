﻿#pragma once

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
	 * Function BP_LogicReader.BP_LogicReader_C.OverrideNewLogic
	 */
	struct ABP_LogicReader_C_OverrideNewLogic_Params
	{
	public:
		class FString                                              Box;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              New_Logic;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicReader.BP_LogicReader_C.OverrideLoaded
	 */
	struct ABP_LogicReader_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicReader.BP_LogicReader_C.ExecuteUbergraph_BP_LogicReader
	 */
	struct ABP_LogicReader_C_ExecuteUbergraph_BP_LogicReader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
