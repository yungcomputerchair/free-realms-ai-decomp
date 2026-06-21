// addr: 0x00922890
// name: GuiDsTable_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuiDsTable_ctor(void * this, void * source) */

void * __thiscall GuiDsTable_ctor(void *this,void *source)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GuiDsTable, initializing IDataAccessTable and GuiUserDataTable
                       bases before installing the GuiDsTable vtables and clearing its flag byte. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158e87e;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FUN_00822990(source);
  *(undefined ***)((int)this + 0x30) = IDataAccessTable::vftable;
  *(undefined ***)((int)this + 0x34) = GuiUserDataTable::vftable;
  *(undefined4 *)((int)this + 0x38) = 0;
  local_4 = 1;
  *(undefined ***)this = GuiDsTable::vftable;
  *(undefined ***)((int)this + 0x30) = GuiDsTable::vftable;
  *(undefined ***)((int)this + 0x34) = GuiDsTable::vftable;
  *(undefined1 *)((int)this + 0x3c) = 0;
  FUN_0091e7c0(uVar1);
  ExceptionList = local_c;
  return this;
}

