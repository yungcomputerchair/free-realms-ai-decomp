// addr: 0x00c69980
// name: ClaimDataSource_AvailableItems_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClaimDataSource_AvailableItems_ctor(void * this, void * owner) */

void * __thiscall ClaimDataSource_AvailableItems_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the ClaimDataSource AvailableItems table, initializes
                       InternalDsBase owner storage, and installs AvailableItems vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ffeb6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  *(undefined ***)((int)this + 0x254) = ClaimDataSource::InternalDsBase::vftable;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  *(undefined ***)this = ClaimDataSource::AvailableItems::vftable;
  *(undefined ***)((int)this + 0x30) = ClaimDataSource::AvailableItems::vftable;
  *(undefined ***)((int)this + 0x34) = ClaimDataSource::AvailableItems::vftable;
  *(undefined ***)((int)this + 0x254) = ClaimDataSource::AvailableItems::vftable;
  ExceptionList = local_c;
  return this;
}

