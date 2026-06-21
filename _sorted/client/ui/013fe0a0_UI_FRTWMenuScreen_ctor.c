// addr: 0x013fe0a0
// name: UI_FRTWMenuScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_FRTWMenuScreen_ctor(void * this) */

void * __fastcall UI_FRTWMenuScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::FRTWMenuScreen by running MenuScreenBase construction and
                       installing UI::FRTWMenuScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01690258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_MenuScreenBase_ctor(this);
  *(undefined ***)this = UI::FRTWMenuScreen::vftable;
  ExceptionList = local_c;
  return this;
}

