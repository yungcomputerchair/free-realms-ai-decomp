// addr: 0x013ff750
// name: UI_MatchmakingScreenBase_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_MatchmakingScreenBase_ctor(void * this) */

void * __fastcall UI_MatchmakingScreenBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::MatchmakingScreenBase by running UI::ScreenBase construction
                       and installing UI::MatchmakingScreenBase::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016909f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_ScreenBase_ctor(this);
  *(undefined ***)this = UI::MatchmakingScreenBase::vftable;
  ExceptionList = local_c;
  return this;
}

