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
	 * BlueprintGeneratedClass BP_PatrolSpline.BP_PatrolSpline_C
	 * Size -> 0x0012 (FullSize[0x0232] - InheritedSize[0x0220])
	 */
	class ABP_PatrolSpline_C : public AActor
	{
	public:

		class USplineComponent*                                  Spline;                                                  // 0x0220(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		bool                                                     ClosedLoop;                                              // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor


		bool                                                     SnapToNavigation;                                        // 0x0231(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor


	public:

		void UserConstructionScript();

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
