// addr: 0x012351a0
// name: UI_ScreenFactory_TradeLobbyScreen_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UI_ScreenFactory_TradeLobbyScreen_ctor(void * this) */

void __fastcall UI_ScreenFactory_TradeLobbyScreen_ctor(void *this)

{
                    /* Constructs the TradeLobbyScreen screen factory by installing the
                       UI::ScreenFactory<UI::TradeLobbyScreen> vtable. */
  *(undefined ***)this = UI::IScreenFactory::vftable;
  *(undefined ***)this = UI::ScreenFactory<UI::TradeLobbyScreen>::vftable;
  return;
}

