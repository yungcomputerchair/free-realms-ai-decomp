// addr: 0x013fe810
// name: UI_TradeLobbyScreenBase_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_TradeLobbyScreenBase_ctor(void * this) */

void * __fastcall UI_TradeLobbyScreenBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::TradeLobbyScreenBase by running UI::ScreenBase construction
                       and installing UI::TradeLobbyScreenBase::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016904b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_ScreenBase_ctor(this);
  *(undefined ***)this = UI::TradeLobbyScreenBase::vftable;
  ExceptionList = local_c;
  return this;
}

