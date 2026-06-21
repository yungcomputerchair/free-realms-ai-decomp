// addr: 0x012f7820
// name: UI_LoginScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_LoginScreen_ctor(void * this) */

void * __fastcall UI_LoginScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::LoginScreen by running the LoginScreenBase constructor and
                       installing UI::LoginScreen::vftable. Class name is explicit in the vtable
                       symbol. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_LoginScreenBase_ctor(this);
  *(undefined ***)this = UI::LoginScreen::vftable;
  ExceptionList = local_c;
  return this;
}

