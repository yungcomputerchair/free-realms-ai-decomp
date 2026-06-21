// addr: 0x0143f490
// name: Engine_LobbyView_dtor
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Engine_LobbyView_dtor(void * thisObj) */

void __fastcall Engine_LobbyView_dtor(void *thisObj)

{
  uint uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for Engine::LobbyView: installs the LobbyView vtable and delegates
                       to its base/member cleanup helper. Evidence is the direct
                       Engine::LobbyView::vftable assignment and destructor-style exception frame.
                        */
  puStack_8 = &LAB_01698528;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  *(undefined ***)thisObj = Engine::LobbyView::vftable;
  local_4 = 0xffffffff;
  local_10 = thisObj;
  Engine_LobbyViewBase_init(uVar1);
  ExceptionList = local_c;
  return;
}

