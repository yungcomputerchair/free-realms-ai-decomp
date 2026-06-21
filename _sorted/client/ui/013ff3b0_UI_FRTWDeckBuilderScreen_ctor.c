// addr: 0x013ff3b0
// name: UI_FRTWDeckBuilderScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_FRTWDeckBuilderScreen_ctor(void * this) */

void * __fastcall UI_FRTWDeckBuilderScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::FRTWDeckBuilderScreen by running DeckBuilderScreenBase
                       construction and installing UI::FRTWDeckBuilderScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01690848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_DeckBuilderScreenBase_ctor(this);
  *(undefined ***)this = UI::FRTWDeckBuilderScreen::vftable;
  ExceptionList = local_c;
  return this;
}

