// addr: 0x00a7a250
// name: BossesDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * BossesDataSource_ctor(void * this, void * owner) */

void * __thiscall BossesDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.Bosses data source, installs BossesDataSource
                       vtables, and stores the owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bb378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Bosses_01b50fac);
  *(undefined ***)this = BossesDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = BossesDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = BossesDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

