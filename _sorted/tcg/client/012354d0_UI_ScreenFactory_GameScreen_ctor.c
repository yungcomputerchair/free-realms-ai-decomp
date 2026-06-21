// addr: 0x012354d0
// name: UI_ScreenFactory_GameScreen_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UI_ScreenFactory_GameScreen_ctor(void * this) */

void __fastcall UI_ScreenFactory_GameScreen_ctor(void *this)

{
                    /* Constructs the GameScreen screen factory by setting IScreenFactory and
                       UI::ScreenFactory<UI::GameScreen> vtables. */
  *(undefined ***)this = UI::IScreenFactory::vftable;
  *(undefined ***)this = UI::ScreenFactory<UI::GameScreen>::vftable;
  return;
}

