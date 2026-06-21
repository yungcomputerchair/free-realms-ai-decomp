// addr: 0x012f7930
// name: UI_MenuScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_MenuScreen_ctor(void * this) */

void * __fastcall UI_MenuScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::MenuScreen by running the FRTWMenuScreen constructor chain and
                       installing UI::MenuScreen::vftable. Class name is explicit in the vtable
                       symbol. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_FRTWMenuScreen_ctor(this);
  *(undefined ***)this = UI::MenuScreen::vftable;
  ExceptionList = local_c;
  return this;
}

