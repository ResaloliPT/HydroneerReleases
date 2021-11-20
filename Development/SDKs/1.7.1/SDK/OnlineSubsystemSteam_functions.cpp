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

void USteamAuthComponentModuleInterface::AfterRead()
{
	UHandlerComponentFactory::AfterRead();

}

void USteamAuthComponentModuleInterface::BeforeDelete()
{
	UHandlerComponentFactory::BeforeDelete();

}

void USteamNetConnection::AfterRead()
{
	UIpConnection::AfterRead();

}

void USteamNetConnection::BeforeDelete()
{
	UIpConnection::BeforeDelete();

}

void USteamNetDriver::AfterRead()
{
	UIpNetDriver::AfterRead();

}

void USteamNetDriver::BeforeDelete()
{
	UIpNetDriver::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
