// addr: 0x012f7c60
// name: UI_TradeScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_TradeScreen_ctor(void * this) */

void * __fastcall UI_TradeScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::TradeScreen by running TradeScreenBase construction and
                       installing UI::TradeScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674da8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_TradeScreenBase_ctor(this);
  *(undefined ***)this = UI::TradeScreen::vftable;
  ExceptionList = local_c;
  return this;
}

