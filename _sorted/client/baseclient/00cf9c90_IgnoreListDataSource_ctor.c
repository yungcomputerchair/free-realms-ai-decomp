// addr: 0x00cf9c90
// name: IgnoreListDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * IgnoreListDataSource_ctor(void * this, void * owner) */

void * __thiscall IgnoreListDataSource_ctor(void *this,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.IgnoreList data source, stores owner, installs
                       vtables, and initializes ignore-list internals. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01610bf6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_IgnoreList_01b7ec34);
  local_4 = 0;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)this = IgnoreListDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = IgnoreListDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = IgnoreListDataSource::vftable;
  FUN_00cf9bd0(uVar1);
  ExceptionList = local_c;
  return this;
}

