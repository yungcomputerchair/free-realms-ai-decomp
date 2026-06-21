// addr: 0x013fea30
// name: UI_TournamentScreenBase_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_TournamentScreenBase_ctor(void * this) */

void * __fastcall UI_TournamentScreenBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::TournamentScreenBase by running UI::ScreenBase construction
                       and installing UI::TournamentScreenBase::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016905d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_ScreenBase_ctor(this);
  *(undefined ***)this = UI::TournamentScreenBase::vftable;
  ExceptionList = local_c;
  return this;
}

