// addr: 0x013fed50
// name: UI_FRTWGameScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_FRTWGameScreen_ctor(void * this) */

void * __fastcall UI_FRTWGameScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::FRTWGameScreen by running GameScreenBase construction,
                       installing UI::FRTWGameScreen::vftable, and initializing two small flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016906a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_GameScreenBase_ctor(this);
  *(undefined ***)this = UI::FRTWGameScreen::vftable;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x29) = 1;
  ExceptionList = local_c;
  return this;
}

