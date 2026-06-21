// addr: 0x00c65600
// name: FactoryInfoDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FactoryInfoDataSource_ctor(void * this, void * owner) */

void * __thiscall FactoryInfoDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.FactoryInfo data source, installs
                       FactoryInfoDataSource vtables, stores owner, and clears state fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ff808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_FactoryInfo_01b71970);
  *(undefined ***)this = FactoryInfoDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = FactoryInfoDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = FactoryInfoDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  ExceptionList = local_c;
  return this;
}

