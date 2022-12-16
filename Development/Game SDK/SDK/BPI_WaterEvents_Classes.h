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
	 * BlueprintGeneratedClass BPI_WaterEvents.BPI_WaterEvents_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_WaterEvents_C : public UInterface
	{
	public:

		void HasWater();

		void HasNoWater();

		void WaterParticleHit();

		void InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
