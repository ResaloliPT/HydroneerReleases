﻿// Name: Hydroneer, Version: 1.7.1

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

void FUdpMockMessage::AfterRead()
{
}

void FUdpMockMessage::BeforeDelete()
{
}

void UUdpMessagingSettings::AfterRead()
{
	UObject::AfterRead();

}

void UUdpMessagingSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
