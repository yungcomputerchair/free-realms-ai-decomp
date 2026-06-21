// addr: 0x009a7ba0
// name: InGamePurchaseDataSource_StoreBundleActiveSort_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_StoreBundleActiveSort_ctor(void * this, void *
   name, void * owner) */

void * __thiscall
InGamePurchaseDataSource_StoreBundleActiveSort_ctor(void *this,void *name,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the InGamePurchaseDataSource::StoreBundleActiveSort GUI data
                       source by running GuiDsTable construction, initializing InternalDsBase owner
                       storage, and installing StoreBundleActiveSort vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159de74;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,name);
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::InternalDsBase::vftable;
  *(void **)((int)this + 600) = owner;
  local_4 = 1;
  *(undefined ***)this = InGamePurchaseDataSource::StoreBundleActiveSort::vftable;
  *(undefined ***)((int)this + 0x30) = InGamePurchaseDataSource::StoreBundleActiveSort::vftable;
  *(undefined ***)((int)this + 0x34) = InGamePurchaseDataSource::StoreBundleActiveSort::vftable;
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::StoreBundleActiveSort::vftable;
  FUN_00725ee0(PTR_s_BaseClient_InGamePurchase_StoreI_01b45a14);
  ExceptionList = local_c;
  return this;
}

