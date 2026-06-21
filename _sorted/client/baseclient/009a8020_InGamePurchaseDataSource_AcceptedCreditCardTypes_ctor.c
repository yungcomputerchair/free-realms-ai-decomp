// addr: 0x009a8020
// name: InGamePurchaseDataSource_AcceptedCreditCardTypes_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_AcceptedCreditCardTypes_ctor(void * this, void
   * name, void * owner) */

void * __thiscall
InGamePurchaseDataSource_AcceptedCreditCardTypes_ctor(void *this,void *name,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the InGamePurchaseDataSource::AcceptedCreditCardTypes GUI data
                       source by running GuiDsTable construction, initializing InternalDsBase owner
                       storage, and installing AcceptedCreditCardTypes vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159dfe6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,name);
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::InternalDsBase::vftable;
  *(void **)((int)this + 600) = owner;
  *(undefined ***)this = InGamePurchaseDataSource::AcceptedCreditCardTypes::vftable;
  *(undefined ***)((int)this + 0x30) = InGamePurchaseDataSource::AcceptedCreditCardTypes::vftable;
  *(undefined ***)((int)this + 0x34) = InGamePurchaseDataSource::AcceptedCreditCardTypes::vftable;
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::AcceptedCreditCardTypes::vftable;
  *(undefined4 *)((int)this + 0x25c) = 0;
  ExceptionList = local_c;
  return this;
}

