// addr: 0x012f7d70
// name: UI_TournamentScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_TournamentScreen_ctor(void * this) */

void * __fastcall UI_TournamentScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::TournamentScreen by running TournamentScreenBase construction
                       and installing UI::TournamentScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_TournamentScreenBase_ctor(this);
  *(undefined ***)this = UI::TournamentScreen::vftable;
  ExceptionList = local_c;
  return this;
}

