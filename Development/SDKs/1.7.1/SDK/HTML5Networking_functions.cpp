// Name: Hydroneer, Version: 1.7.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void UWebSocketConnection::AfterRead()
{
	UNetConnection::AfterRead();

}

void UWebSocketConnection::BeforeDelete()
{
	UNetConnection::BeforeDelete();

}

void UWebSocketNetDriver::AfterRead()
{
	UNetDriver::AfterRead();

}

void UWebSocketNetDriver::BeforeDelete()
{
	UNetDriver::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
