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

void UUI_Error_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image_79, UImage);
}

void UUI_Error_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image_79);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
