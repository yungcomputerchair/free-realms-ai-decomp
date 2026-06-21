// addr: 0x00cc4200
// name: MountListDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MountListDataSource_ctor(void * this, void * owner) */

void * __thiscall MountListDataSource_ctor(void *this,void *owner)

{
  uint uVar1;
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.MountList data source, stores owner/context,
                       initializes mount list internals, and clears flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160bbb6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_MountList_01b788e0);
  local_4 = 0;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)this = MountListDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = MountListDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = MountListDataSource::vftable;
  *(undefined4 *)((int)this + 600) = in_stack_00000008;
  FUN_00b059c0(uVar1);
  *(undefined1 *)((int)this + 0x2b0) = 0;
  *(undefined1 *)((int)this + 0x2b1) = 0;
  ExceptionList = local_c;
  return this;
}

