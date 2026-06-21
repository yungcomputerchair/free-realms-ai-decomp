// addr: 0x01511980
// name: UI_GameScreenBase_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_GameScreenBase_ctor(void * this) */

void * __fastcall UI_GameScreenBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::GameScreenBase by running UI::ScreenBase construction and
                       installing UI::GameScreenBase::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b6a68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_ScreenBase_ctor(this);
  *(undefined ***)this = UI::GameScreenBase::vftable;
  ExceptionList = local_c;
  return this;
}

