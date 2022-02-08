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
	 * Class OnlineSubsystemUWorks.IpConnectionUWorks
	 * Size -> 0x0000 (FullSize[0x18E8] - InheritedSize[0x18E8])
	 */
	class UIpConnectionUWorks : public UIpConnection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUWorks.IpNetDriverUWorks
	 * Size -> 0x0038 (FullSize[0x07A0] - InheritedSize[0x0768])
	 */
	class UIpNetDriverUWorks : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_UDA9[0x38];                                  // 0x0768(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
