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
	 * BlueprintGeneratedClass PData_VoiceLines.PData_VoiceLines_C
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UPData_VoiceLines_C : public UPrimaryDataAsset
	{
	public:

		TArray<struct FS_VoiceLine>                              VoiceLines;                                              // 0x0030(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		TArray<struct FS_VoiceLine>                              VoiceLines_Positive;                                     // 0x0040(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		TArray<struct FS_VoiceLine>                              VoiceLines_Negative;                                     // 0x0050(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


	public:

		void RollVoiceline(
TArray<struct FS_VoiceLine>* VoiceLines
, 
class USoundBase** VoiceLine
);

		void GetVoiceLine(
E_VoiceContext Context
, 
class USoundBase** VoiceLine
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
