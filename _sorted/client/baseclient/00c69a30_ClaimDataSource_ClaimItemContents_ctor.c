// addr: 0x00c69a30
// name: ClaimDataSource_ClaimItemContents_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClaimDataSource_ClaimItemContents_ctor(void * this, void * owner) */

void * __thiscall ClaimDataSource_ClaimItemContents_ctor(void *this,void *owner)

{
  uint uVar1;
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the ClaimDataSource ClaimItemContents table, initializes
                       InternalDsBase owner storage, installs vtables, and runs an item contents
                       setup helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fff04;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  *(undefined ***)((int)this + 0x254) = ClaimDataSource::InternalDsBase::vftable;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  local_4 = 1;
  *(undefined ***)this = ClaimDataSource::ClaimItemContents::vftable;
  *(undefined ***)((int)this + 0x30) = ClaimDataSource::ClaimItemContents::vftable;
  *(undefined ***)((int)this + 0x34) = ClaimDataSource::ClaimItemContents::vftable;
  *(undefined ***)((int)this + 0x254) = ClaimDataSource::ClaimItemContents::vftable;
  FUN_01060c60(uVar1);
  ExceptionList = local_c;
  return this;
}

