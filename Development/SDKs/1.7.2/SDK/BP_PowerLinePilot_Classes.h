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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_PowerLinePilot.BP_PowerLinePilot_C
	 * Size -> 0x000E (FullSize[0x0590] - InheritedSize[0x0582])
	 */
	class ABP_PowerLinePilot_C : public ABP_ParentPower_C
	{
	public:
		unsigned char                                              UnknownData_FAJM[0x6];                                   // 0x0582(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0588(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OverrideFirstPower();
		void OverrideNoPower();
		void ExecuteUbergraph_BP_PowerLinePilot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
