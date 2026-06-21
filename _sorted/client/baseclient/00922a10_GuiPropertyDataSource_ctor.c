// addr: 0x00922a10
// name: GuiPropertyDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuiPropertyDataSource_ctor(void * this, void * name) */

void * __thiscall GuiPropertyDataSource_ctor(void *this,void *name)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GuiPropertyDataSource by running the GuiDsTable base constructor
                       and installing GuiPropertyDataSource vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158e8e6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,name);
  local_4 = 0;
  *(undefined ***)this = GuiPropertyDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = GuiPropertyDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = GuiPropertyDataSource::vftable;
  FUN_008fe3d0(uVar1);
  ExceptionList = local_c;
  return this;
}

