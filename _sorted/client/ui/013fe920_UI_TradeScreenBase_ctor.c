// addr: 0x013fe920
// name: UI_TradeScreenBase_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_TradeScreenBase_ctor(void * this) */

void * __fastcall UI_TradeScreenBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::TradeScreenBase by running UI::ScreenBase construction and
                       installing UI::TradeScreenBase::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01690548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_ScreenBase_ctor(this);
  *(undefined ***)this = UI::TradeScreenBase::vftable;
  ExceptionList = local_c;
  return this;
}

