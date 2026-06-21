// addr: 0x00a27190
// name: LobbyDataSourceManager_GameListDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyDataSourceManager_GameListDataSource_ctor(void * this, void *
   owner) */

void * __thiscall LobbyDataSourceManager_GameListDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the BaseClient.LobbyGameList data source, installs
                       GameListDataSource vtables, stores owner, clears a flag, and initializes an
                       IString filter/name field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b03a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_LobbyGameList_01b4c504);
  *(undefined ***)this = LobbyDataSourceManager::GameListDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = LobbyDataSourceManager::GameListDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = LobbyDataSourceManager::GameListDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined ***)((int)this + 0x25c) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x260) = &DAT_01be670c;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  ExceptionList = local_c;
  return this;
}

