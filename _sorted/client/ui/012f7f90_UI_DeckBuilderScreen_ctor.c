// addr: 0x012f7f90
// name: UI_DeckBuilderScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_DeckBuilderScreen_ctor(void * this) */

void * __fastcall UI_DeckBuilderScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::DeckBuilderScreen by running FRTWDeckBuilderScreen
                       construction and installing UI::DeckBuilderScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674f58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_FRTWDeckBuilderScreen_ctor(this);
  *(undefined ***)this = UI::DeckBuilderScreen::vftable;
  ExceptionList = local_c;
  return this;
}

