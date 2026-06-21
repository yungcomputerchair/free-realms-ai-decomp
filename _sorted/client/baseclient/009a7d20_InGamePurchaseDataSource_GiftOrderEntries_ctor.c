// addr: 0x009a7d20
// name: InGamePurchaseDataSource_GiftOrderEntries_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_GiftOrderEntries_ctor(void * this, void *
   name, void * owner) */

void * __thiscall InGamePurchaseDataSource_GiftOrderEntries_ctor(void *this,void *name,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the InGamePurchaseDataSource::GiftOrderEntries GUI data source by
                       running GuiDsTable construction, initializing InternalDsBase owner storage,
                       and installing GiftOrderEntries vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159dee6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,name);
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::InternalDsBase::vftable;
  *(void **)((int)this + 600) = owner;
  *(undefined ***)this = InGamePurchaseDataSource::GiftOrderEntries::vftable;
  *(undefined ***)((int)this + 0x30) = InGamePurchaseDataSource::GiftOrderEntries::vftable;
  *(undefined ***)((int)this + 0x34) = InGamePurchaseDataSource::GiftOrderEntries::vftable;
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::GiftOrderEntries::vftable;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  ExceptionList = local_c;
  return this;
}

