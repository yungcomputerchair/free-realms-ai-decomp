// addr: 0x01235910
// name: UI_ScreenFactory_MatchmakingScreen_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UI_ScreenFactory_MatchmakingScreen_ctor(void * this) */

void __fastcall UI_ScreenFactory_MatchmakingScreen_ctor(void *this)

{
                    /* Constructs the MatchmakingScreen screen factory by installing
                       UI::ScreenFactory<UI::MatchmakingScreen>::vftable. */
  *(undefined ***)this = UI::IScreenFactory::vftable;
  *(undefined ***)this = UI::ScreenFactory<UI::MatchmakingScreen>::vftable;
  return;
}

