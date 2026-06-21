// addr: 0x009a77f0
// name: InGamePurchaseDataSource_StoreBundleGroups_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_StoreBundleGroups_ctor(void * this, void *
   name, void * owner) */

void * __thiscall InGamePurchaseDataSource_StoreBundleGroups_ctor(void *this,void *name,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the InGamePurchaseDataSource::StoreBundleGroups GUI data source by
                       running GuiDsTable construction, initializing InternalDsBase owner storage,
                       and installing StoreBundleGroups vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159dd26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,name);
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::InternalDsBase::vftable;
  *(void **)((int)this + 600) = owner;
  *(undefined ***)this = InGamePurchaseDataSource::StoreBundleGroups::vftable;
  *(undefined ***)((int)this + 0x30) = InGamePurchaseDataSource::StoreBundleGroups::vftable;
  *(undefined ***)((int)this + 0x34) = InGamePurchaseDataSource::StoreBundleGroups::vftable;
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::StoreBundleGroups::vftable;
  *(undefined4 *)((int)this + 0x25c) = 0;
  ExceptionList = local_c;
  return this;
}

