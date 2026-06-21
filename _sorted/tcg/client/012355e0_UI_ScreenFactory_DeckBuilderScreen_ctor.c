// addr: 0x012355e0
// name: UI_ScreenFactory_DeckBuilderScreen_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UI_ScreenFactory_DeckBuilderScreen_ctor(void * this) */

void __fastcall UI_ScreenFactory_DeckBuilderScreen_ctor(void *this)

{
                    /* Constructs the DeckBuilderScreen screen factory by installing the matching
                       UI::ScreenFactory vtable. */
  *(undefined ***)this = UI::IScreenFactory::vftable;
  *(undefined ***)this = UI::ScreenFactory<UI::DeckBuilderScreen>::vftable;
  return;
}

