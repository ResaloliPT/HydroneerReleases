#ifndef UE4SS_SDK_UdpMessaging_HPP
#define UE4SS_SDK_UdpMessaging_HPP

#include "UdpMessaging_enums.hpp"

struct FUdpMockMessage
{
    TArray<uint8> Data;                                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

class UUdpMessagingSettings : public UObject
{
    bool EnabledByDefault;                                                            // 0x0028 (size: 0x1)
    bool EnableTransport;                                                             // 0x0029 (size: 0x1)
    bool bAutoRepair;                                                                 // 0x002A (size: 0x1)
    bool bStopServiceWhenAppDeactivates;                                              // 0x002B (size: 0x1)
    FString UnicastEndpoint;                                                          // 0x0030 (size: 0x10)
    FString MulticastEndpoint;                                                        // 0x0040 (size: 0x10)
    EUdpMessageFormat MessageFormat;                                                  // 0x0050 (size: 0x1)
    uint8 MulticastTimeToLive;                                                        // 0x0051 (size: 0x1)
    TArray<FString> StaticEndpoints;                                                  // 0x0058 (size: 0x10)
    bool EnableTunnel;                                                                // 0x0068 (size: 0x1)
    FString TunnelUnicastEndpoint;                                                    // 0x0070 (size: 0x10)
    FString TunnelMulticastEndpoint;                                                  // 0x0080 (size: 0x10)
    TArray<FString> RemoteTunnelEndpoints;                                            // 0x0090 (size: 0x10)

}; // Size: 0xA0

#endif
