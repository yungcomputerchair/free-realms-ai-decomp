// addr: 0x00cc42c0
// name: CurrentMountDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CurrentMountDataSource_ctor(void * this, void * owner) */

void * __thiscall CurrentMountDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.CurrentMount data source, installs
                       CurrentMountDataSource vtables, stores owner, and clears a flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160bbe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_CurrentMount_01b788e4);
  *(undefined ***)this = CurrentMountDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = CurrentMountDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = CurrentMountDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  ExceptionList = local_c;
  return this;
}

