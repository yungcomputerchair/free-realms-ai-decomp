// addr: 0x013ff620
// name: UI_FRTWCampaignScreen_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_FRTWCampaignScreen_ctor(void * this) */

void * __fastcall UI_FRTWCampaignScreen_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::FRTWCampaignScreen by running CampaignScreenBase construction
                       and installing UI::FRTWCampaignScreen::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01690968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_CampaignScreenBase_ctor(this);
  *(undefined ***)this = UI::FRTWCampaignScreen::vftable;
  ExceptionList = local_c;
  return this;
}

