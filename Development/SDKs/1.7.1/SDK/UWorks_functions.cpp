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

void FUWorksSteamID::AfterRead()
{
}

void FUWorksSteamID::BeforeDelete()
{
}

void FUWorksGameID::AfterRead()
{
}

void FUWorksGameID::BeforeDelete()
{
}

void FUWorksPublishedFileID::AfterRead()
{
}

void FUWorksPublishedFileID::BeforeDelete()
{
}

void FUWorksSteamItemDef::AfterRead()
{
}

void FUWorksSteamItemDef::BeforeDelete()
{
}

void FUWorksSteamItemInstanceID::AfterRead()
{
}

void FUWorksSteamItemInstanceID::BeforeDelete()
{
}

void UUWorks::AfterRead()
{
	UObject::AfterRead();

}

void UUWorks::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UUWorksInterface::AfterRead()
{
	UUWorks::AfterRead();

}

void UUWorksInterface::BeforeDelete()
{
	UUWorks::BeforeDelete();

}

void UUWorksRequest::AfterRead()
{
	UUWorks::AfterRead();

}

void UUWorksRequest::BeforeDelete()
{
	UUWorks::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
