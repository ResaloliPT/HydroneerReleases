﻿/**
 * Name: Hydroneer
 * Version: 2.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNetAnalyticsAggregatorConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetAnalyticsAggregatorConfig::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NetCore.NetAnalyticsAggregatorConfig");
		return ptr;
	}

}

