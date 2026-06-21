// addr: 0x009a7ad0
// name: InGamePurchaseDataSource_StoreBundleActiveFilters_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_StoreBundleActiveFilters_ctor(void * this,
   void * name, void * owner) */

void * __thiscall
InGamePurchaseDataSource_StoreBundleActiveFilters_ctor(void *this,void *name,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the InGamePurchaseDataSource::StoreBundleActiveFilters GUI data
                       source by running GuiDsTable construction, initializing InternalDsBase owner
                       storage, and installing StoreBundleActiveFilters vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159de34;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,name);
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::InternalDsBase::vftable;
  *(void **)((int)this + 600) = owner;
  local_4 = 1;
  *(undefined ***)this = InGamePurchaseDataSource::StoreBundleActiveFilters::vftable;
  *(undefined ***)((int)this + 0x30) = InGamePurchaseDataSource::StoreBundleActiveFilters::vftable;
  *(undefined ***)((int)this + 0x34) = InGamePurchaseDataSource::StoreBundleActiveFilters::vftable;
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::StoreBundleActiveFilters::vftable;
  FUN_00725ee0(PTR_s_BaseClient_InGamePurchase_StoreI_01b45a14);
  *(undefined4 *)((int)this + 0x370) = 0;
  ExceptionList = local_c;
  return this;
}

