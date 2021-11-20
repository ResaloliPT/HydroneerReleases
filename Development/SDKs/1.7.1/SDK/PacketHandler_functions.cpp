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

void FNetAnalyticsDataConfig::AfterRead()
{
}

void FNetAnalyticsDataConfig::BeforeDelete()
{
}

void UHandlerComponentFactory::AfterRead()
{
	UObject::AfterRead();

}

void UHandlerComponentFactory::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNetAnalyticsAggregatorConfig::AfterRead()
{
	UObject::AfterRead();

}

void UNetAnalyticsAggregatorConfig::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UPacketHandlerProfileConfig::AfterRead()
{
	UObject::AfterRead();

}

void UPacketHandlerProfileConfig::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
