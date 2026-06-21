// addr: 0x012f82c0
// name: UI_MatchmakingScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_MatchmakingScreen_ctor(void * this) */

void * __fastcall UI_MatchmakingScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::MatchmakingScreen by running MatchmakingScreenBase
                       construction and installing UI::MatchmakingScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01675108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_MatchmakingScreenBase_ctor(this);
  *(undefined ***)this = UI::MatchmakingScreen::vftable;
  ExceptionList = local_c;
  return this;
}

