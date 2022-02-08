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
	 * 		Name   -> PredefindFunction UUWorks.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorks::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorks.UWorks");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorks.UWorksInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksRequest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorks.UWorksRequest");
		return ptr;
	}

}


