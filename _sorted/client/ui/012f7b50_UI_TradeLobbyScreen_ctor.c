// addr: 0x012f7b50
// name: UI_TradeLobbyScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_TradeLobbyScreen_ctor(void * this) */

void * __fastcall UI_TradeLobbyScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::TradeLobbyScreen by running TradeLobbyScreenBase construction
                       and installing UI::TradeLobbyScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_TradeLobbyScreenBase_ctor(this);
  *(undefined ***)this = UI::TradeLobbyScreen::vftable;
  ExceptionList = local_c;
  return this;
}

