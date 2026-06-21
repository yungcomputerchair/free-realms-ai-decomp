// addr: 0x01234e70
// name: UI_ScreenFactory_LoginScreen_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UI_ScreenFactory_LoginScreen_ctor(void * this) */

void __fastcall UI_ScreenFactory_LoginScreen_ctor(void *this)

{
                    /* Constructs a UI::ScreenFactory specialized for UI::LoginScreen by installing
                       the IScreenFactory vtable and then the LoginScreen factory vtable. */
  *(undefined ***)this = UI::IScreenFactory::vftable;
  *(undefined ***)this = UI::ScreenFactory<UI::LoginScreen>::vftable;
  return;
}

