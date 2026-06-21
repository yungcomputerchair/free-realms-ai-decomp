// addr: 0x00a27250
// name: LobbyDataSourceManager_EncounterListDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyDataSourceManager_EncounterListDataSource_ctor(void * this, void *
   owner) */

void * __thiscall LobbyDataSourceManager_EncounterListDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.EncounterGameList data source, installs
                       EncounterListDataSource vtables, stores owner, clears a flag, and initializes
                       an IString field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b03e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_EncounterGameList_01b4c508);
  *(undefined ***)this = LobbyDataSourceManager::EncounterListDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = LobbyDataSourceManager::EncounterListDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = LobbyDataSourceManager::EncounterListDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined ***)((int)this + 0x25c) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x260) = &DAT_01be670c;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  ExceptionList = local_c;
  return this;
}

