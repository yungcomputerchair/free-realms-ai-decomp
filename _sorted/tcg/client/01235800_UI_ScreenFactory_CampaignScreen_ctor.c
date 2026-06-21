// addr: 0x01235800
// name: UI_ScreenFactory_CampaignScreen_ctor
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UI_ScreenFactory_CampaignScreen_ctor(void * this) */

void __fastcall UI_ScreenFactory_CampaignScreen_ctor(void *this)

{
                    /* Constructs the CampaignScreen screen factory by setting the base and
                       specialized UI screen factory vtables. */
  *(undefined ***)this = UI::IScreenFactory::vftable;
  *(undefined ***)this = UI::ScreenFactory<UI::CampaignScreen>::vftable;
  return;
}

