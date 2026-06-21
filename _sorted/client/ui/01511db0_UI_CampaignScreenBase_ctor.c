// addr: 0x01511db0
// name: UI_CampaignScreenBase_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * UI_CampaignScreenBase_ctor(void * this) */

void * __fastcall UI_CampaignScreenBase_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs UI::CampaignScreenBase by running UI::ScreenBase construction and
                       installing UI::CampaignScreenBase::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b6c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UI_ScreenBase_ctor(this);
  *(undefined ***)this = UI::CampaignScreenBase::vftable;
  ExceptionList = local_c;
  return this;
}

