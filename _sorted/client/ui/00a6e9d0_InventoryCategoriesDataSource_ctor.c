// addr: 0x00a6e9d0
// name: InventoryCategoriesDataSource_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InventoryCategoriesDataSource_ctor(void * this, int owner_) */

void * __thiscall InventoryCategoriesDataSource_ctor(void *this,int owner_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs InventoryCategoriesDataSource for
                       BaseClient.InventoryCategoriesData, stores the owner/context at +0x38,
                       installs the class vtable, and initializes data through 00a6e480. The class
                       and data-source name are explicit. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b9dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009974a0(PTR_s_BaseClient_InventoryCategoriesDa_01b4fd00);
  local_4 = 0;
  *(int *)((int)this + 0x38) = owner_;
  *(undefined ***)this = InventoryCategoriesDataSource::vftable;
  InventoryCategoriesDataSource_rebuildTree(this);
  ExceptionList = local_c;
  return this;
}

