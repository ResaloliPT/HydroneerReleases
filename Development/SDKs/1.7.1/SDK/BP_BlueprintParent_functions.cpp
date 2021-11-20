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

// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function BP_BlueprintParent.BP_BlueprintParent_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BlueprintParent_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BlueprintParent.BP_BlueprintParent_C.UserConstructionScript");

	ABP_BlueprintParent_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_BlueprintParent_C::AfterRead()
{
	ABP_ParentTool_C::AfterRead();

	READ_PTR_FULL(TextRender, UTextRenderComponent);
	READ_PTR_FULL(ItemToMake, UClass);
	READ_PTR_FULL(PurchaseReqItem, UClass);
	READ_PTR_FULL(CraftRequiredClass, UClass);
}

void ABP_BlueprintParent_C::BeforeDelete()
{
	ABP_ParentTool_C::BeforeDelete();

	DELE_PTR_FULL(TextRender);
	DELE_PTR_FULL(ItemToMake);
	DELE_PTR_FULL(PurchaseReqItem);
	DELE_PTR_FULL(CraftRequiredClass);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
