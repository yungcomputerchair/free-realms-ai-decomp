// addr: 0x00a726b0
// name: FactoryToolsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FactoryToolsDataSource_ctor(void * this, void * owner) */

void * __thiscall FactoryToolsDataSource_ctor(void *this,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Factory.Tools data source, stores the owner,
                       installs FactoryToolsDataSource vtables, clears a flag, and runs a setup
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ba396;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Factory_Tools_01b50418);
  local_4 = 0;
  *(void **)((int)this + 0x254) = owner;
  *(undefined ***)this = FactoryToolsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = FactoryToolsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = FactoryToolsDataSource::vftable;
  *(undefined1 *)((int)this + 600) = 0;
  FUN_009e4860(uVar1);
  ExceptionList = local_c;
  return this;
}

