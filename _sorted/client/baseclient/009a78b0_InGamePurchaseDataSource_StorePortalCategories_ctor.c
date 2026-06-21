// addr: 0x009a78b0
// name: InGamePurchaseDataSource_StorePortalCategories_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_StorePortalCategories_ctor(void * this, void *
   name, void * owner) */

void * __thiscall
InGamePurchaseDataSource_StorePortalCategories_ctor(void *this,void *name,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the InGamePurchaseDataSource::StorePortalCategories GUI data
                       source by running GuiDsTable construction, initializing InternalDsBase owner
                       storage, and installing StorePortalCategories vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159dd66;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,name);
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::InternalDsBase::vftable;
  *(void **)((int)this + 600) = owner;
  *(undefined ***)this = InGamePurchaseDataSource::StorePortalCategories::vftable;
  *(undefined ***)((int)this + 0x30) = InGamePurchaseDataSource::StorePortalCategories::vftable;
  *(undefined ***)((int)this + 0x34) = InGamePurchaseDataSource::StorePortalCategories::vftable;
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::StorePortalCategories::vftable;
  ExceptionList = local_c;
  return this;
}

