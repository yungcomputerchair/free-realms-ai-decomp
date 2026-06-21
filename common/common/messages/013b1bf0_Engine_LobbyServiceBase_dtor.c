// addr: 0x013b1bf0
// name: Engine_LobbyServiceBase_dtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_LobbyServiceBase_dtor(void * thisObj) */

void __fastcall Engine_LobbyServiceBase_dtor(void *thisObj)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Engine::LobbyServiceBase: installs the LobbyServiceBase
                       vtable, destroys an owned std tree/map member, then destroys the
                       LobbyView/base portion. Evidence is Engine::LobbyServiceBase::vftable, call
                       to the tree destroy helper, and call to Engine_LobbyView_dtor. */
  puStack_8 = &LAB_016876e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)thisObj = Engine::LobbyServiceBase::vftable;
  local_4 = 1;
  MessageDB_IntTextMap_dtor((void *)((int)thisObj + 0x124));
  Engine_LobbyView_dtor((void *)((int)thisObj + 8));
  FUN_01230d30();
  ExceptionList = puStack_8;
  return;
}

