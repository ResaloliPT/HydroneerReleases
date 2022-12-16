﻿#pragma once

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
	 * BlueprintGeneratedClass BP_ShelfPlinth.BP_ShelfPlinth_C
	 * Size -> 0x0008 (FullSize[0x0458] - InheritedSize[0x0450])
	 */
	class ABP_ShelfPlinth_C : public ABP_ParentShelf_C
	{
	public:

		class USC_ShelfLocation_C*                               SC_ShelfLocation;                                        // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


	public:

		void UserConstructionScript();

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
