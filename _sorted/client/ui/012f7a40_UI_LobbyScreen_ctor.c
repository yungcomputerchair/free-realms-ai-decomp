// addr: 0x012f7a40
// name: UI_LobbyScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_LobbyScreen_ctor(void * this) */

void * __fastcall UI_LobbyScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::LobbyScreen by running LobbyScreenBase construction and
                       installing UI::LobbyScreen::vftable. Class name is explicit in the vtable
                       symbol. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_LobbyScreenBase_ctor(this);
  *(undefined ***)this = UI::LobbyScreen::vftable;
  ExceptionList = local_c;
  return this;
}

