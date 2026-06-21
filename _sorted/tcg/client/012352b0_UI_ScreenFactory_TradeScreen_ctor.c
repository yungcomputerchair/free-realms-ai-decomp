// addr: 0x012352b0
// name: UI_ScreenFactory_TradeScreen_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UI_ScreenFactory_TradeScreen_ctor(void * this) */

void __fastcall UI_ScreenFactory_TradeScreen_ctor(void *this)

{
                    /* Constructs the TradeScreen screen factory by installing the base
                       IScreenFactory vtable and then UI::ScreenFactory<UI::TradeScreen>::vftable.
                        */
  *(undefined ***)this = UI::IScreenFactory::vftable;
  *(undefined ***)this = UI::ScreenFactory<UI::TradeScreen>::vftable;
  return;
}

