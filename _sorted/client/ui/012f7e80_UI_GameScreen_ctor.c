// addr: 0x012f7e80
// name: UI_GameScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_GameScreen_ctor(void * this) */

void * __fastcall UI_GameScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::GameScreen by running FRTWGameScreen construction and
                       installing UI::GameScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674ec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_FRTWGameScreen_ctor(this);
  *(undefined ***)this = UI::GameScreen::vftable;
  ExceptionList = local_c;
  return this;
}

