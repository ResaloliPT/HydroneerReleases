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
	 * BlueprintGeneratedClass BP_ShelfRodStorage.BP_ShelfRodStorage_C
	 * Size -> 0x0040 (FullSize[0x0490] - InheritedSize[0x0450])
	 */
	class ABP_ShelfRodStorage_C : public ABP_ParentShelf_C
	{
	public:

		class USC_ShelfLocation_C*                               SC_ShelfLocation7;                                       // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USC_ShelfLocation_C*                               SC_ShelfLocation6;                                       // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USC_ShelfLocation_C*                               SC_ShelfLocation5;                                       // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USC_ShelfLocation_C*                               SC_ShelfLocation4;                                       // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USC_ShelfLocation_C*                               SC_ShelfLocation3;                                       // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USC_ShelfLocation_C*                               SC_ShelfLocation2;                                       // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USC_ShelfLocation_C*                               SC_ShelfLocation1;                                       // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USC_ShelfLocation_C*                               SC_ShelfLocation;                                        // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


	public:

		void SetAttachedMeshCollisionProfile(
class UStaticMeshComponent* Mesh
, 
const class FName& CollisionProfile
);

		void UserConstructionScript();

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
