// addr: 0x013fdf90
// name: UI_LoginScreenBase_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_LoginScreenBase_ctor(void * this) */

void * __fastcall UI_LoginScreenBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::LoginScreenBase by running UI::ScreenBase construction and
                       installing UI::LoginScreenBase::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016901c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_ScreenBase_ctor(this);
  *(undefined ***)this = UI::LoginScreenBase::vftable;
  ExceptionList = local_c;
  return this;
}

