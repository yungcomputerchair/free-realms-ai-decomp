// addr: 0x012353c0
// name: UI_ScreenFactory_TournamentScreen_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UI_ScreenFactory_TournamentScreen_ctor(void * this) */

void __fastcall UI_ScreenFactory_TournamentScreen_ctor(void *this)

{
                    /* Constructs the TournamentScreen screen factory by setting the
                       UI::ScreenFactory<UI::TournamentScreen> vtable. */
  *(undefined ***)this = UI::IScreenFactory::vftable;
  *(undefined ***)this = UI::ScreenFactory<UI::TournamentScreen>::vftable;
  return;
}

