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
	 * Class LinearTimecode.LinearTimecodeComponent
	 * Size -> 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
	 */
	class ULinearTimecodeComponent : public USceneComponent
	{
	public:
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDropTimecode                                       DropTimecode;                                            // 0x0260(0x001C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V4OQ[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTimecodeChange;                                        // 0x0280(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SL1T[0x30];                                  // 0x0290(0x0030) MISSED OFFSET (PADDING)

	public:
		void STATIC_SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int32_t FrameNumber, struct FDropTimecode* OutTimecode);
		void STATIC_GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int32_t* FrameNumber);
		int32_t GetDropFrameNumber();
		static UClass* StaticClass();
	};

	/**
	 * Class LinearTimecode.DropTimecodeToStringConversion
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
