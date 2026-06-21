// addr: 0x00c8ed60
// name: CharacterStatsDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CharacterStatsDataSource_ctor(void * this, void * owner) */

void * __thiscall CharacterStatsDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.PlayerStats data source, installs
                       CharacterStatsDataSource vtables, and stores owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01606678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_PlayerStats_01b74978);
  *(undefined ***)this = CharacterStatsDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = CharacterStatsDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = CharacterStatsDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

