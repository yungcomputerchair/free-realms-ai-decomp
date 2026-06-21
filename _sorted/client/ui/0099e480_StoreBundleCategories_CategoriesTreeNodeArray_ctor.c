// addr: 0x0099e480
// name: StoreBundleCategories_CategoriesTreeNodeArray_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StoreBundleCategories_CategoriesTreeNodeArray_ctor(void * this) */

void __fastcall StoreBundleCategories_CategoriesTreeNodeArray_ctor(void *this)

{
                    /* Constructs the SoeUtil::Array used for
                       InGamePurchaseDataSource::StoreBundleCategories::CategoriesTreeNode pointers
                       by installing its vtable and zeroing storage/count/capacity. Class role is
                       explicit in the template vtable. */
  *(undefined ***)this =
       SoeUtil::Array<InGamePurchaseDataSource::StoreBundleCategories::CategoriesTreeNode*,0,1>::
       vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}

