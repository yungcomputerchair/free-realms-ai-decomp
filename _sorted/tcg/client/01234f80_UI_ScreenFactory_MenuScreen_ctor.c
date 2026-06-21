// addr: 0x01234f80
// name: UI_ScreenFactory_MenuScreen_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UI_ScreenFactory_MenuScreen_ctor(void * this) */

void __fastcall UI_ScreenFactory_MenuScreen_ctor(void *this)

{
                    /* Constructs a UI::ScreenFactory specialized for UI::MenuScreen by installing
                       the base IScreenFactory vtable then the MenuScreen factory vtable. */
  *(undefined ***)this = UI::IScreenFactory::vftable;
  *(undefined ***)this = UI::ScreenFactory<UI::MenuScreen>::vftable;
  return;
}

