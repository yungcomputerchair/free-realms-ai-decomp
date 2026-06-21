// addr: 0x012f81b0
// name: UI_CampaignScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_CampaignScreen_ctor(void * this) */

void * __fastcall UI_CampaignScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::CampaignScreen by running FRTWCampaignScreen construction and
                       installing UI::CampaignScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01675078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_FRTWCampaignScreen_ctor(this);
  *(undefined ***)this = UI::CampaignScreen::vftable;
  ExceptionList = local_c;
  return this;
}

