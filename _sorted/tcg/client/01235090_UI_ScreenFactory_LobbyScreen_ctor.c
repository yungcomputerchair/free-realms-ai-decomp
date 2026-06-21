// addr: 0x01235090
// name: UI_ScreenFactory_LobbyScreen_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UI_ScreenFactory_LobbyScreen_ctor(void * this) */

void __fastcall UI_ScreenFactory_LobbyScreen_ctor(void *this)

{
                    /* Constructs the LobbyScreen factory object by writing the IScreenFactory
                       vtable followed by UI::ScreenFactory<UI::LobbyScreen>::vftable. */
  *(undefined ***)this = UI::IScreenFactory::vftable;
  *(undefined ***)this = UI::ScreenFactory<UI::LobbyScreen>::vftable;
  return;
}

