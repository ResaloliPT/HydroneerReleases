/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UIpConnectionUWorks.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIpConnectionUWorks::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUWorks.IpConnectionUWorks");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UIpNetDriverUWorks.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIpNetDriverUWorks::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUWorks.IpNetDriverUWorks");
		return ptr;
	}

}


