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
	 * Class HTML5Networking.WebSocketConnection
	 * Size -> 0x0010 (FullSize[0x1898] - InheritedSize[0x1888])
	 */
	class UWebSocketConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_ZM46[0x10];                                  // 0x1888(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HTML5Networking.WebSocketNetDriver
	 * Size -> 0x0010 (FullSize[0x0730] - InheritedSize[0x0720])
	 */
	class UWebSocketNetDriver : public UNetDriver
	{
	public:
		int32_t                                                    WebSocketPort;                                           // 0x0720(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GH7[0xC];                                   // 0x0724(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
