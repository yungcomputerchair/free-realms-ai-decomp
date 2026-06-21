// addr: 0x01511870
// name: UI_MenuScreenBase_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_MenuScreenBase_ctor(void * this) */

void * __fastcall UI_MenuScreenBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::MenuScreenBase by running UI::ScreenBase construction and
                       installing UI::MenuScreenBase::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b69d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_ScreenBase_ctor(this);
  *(undefined ***)this = UI::MenuScreenBase::vftable;
  ExceptionList = local_c;
  return this;
}

