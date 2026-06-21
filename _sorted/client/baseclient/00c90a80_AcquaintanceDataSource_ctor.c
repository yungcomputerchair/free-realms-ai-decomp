// addr: 0x00c90a80
// name: AcquaintanceDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AcquaintanceDataSource_ctor(void * this, void * owner) */

void * __thiscall AcquaintanceDataSource_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Acquaintances data source, installs
                       AcquaintanceDataSource vtables, and stores owner/context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01606a38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Acquaintances_01b74e9c);
  *(undefined ***)this = AcquaintanceDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = AcquaintanceDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = AcquaintanceDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  ExceptionList = local_c;
  return this;
}

