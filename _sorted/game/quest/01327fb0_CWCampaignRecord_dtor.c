// addr: 0x01327fb0
// name: CWCampaignRecord_dtor
// subsystem: common/game/quest
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWCampaignRecord_dtor(void * this) */

void __fastcall CWCampaignRecord_dtor(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a campaign record by releasing four std::string fields and resetting
                       their small-string metadata. Evidence is the four string slots and callers
                       that store campaign strings such as Tcg_Opponent.name101 and
                       campaignImage_101. */
  pvVar1 = ExceptionList;
  puStack_8 = &LAB_016799b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 2;
  if (0xf < *(uint *)((int)this + 0x70)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x5c));
  }
  *(undefined4 *)((int)this + 0x70) = 0xf;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  local_4 = 1;
  if (0xf < *(uint *)((int)this + 0x54)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x40));
  }
  *(undefined4 *)((int)this + 0x54) = 0xf;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  local_4 = 0;
  if (0xf < *(uint *)((int)this + 0x34)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x20));
  }
  *(undefined4 *)((int)this + 0x34) = 0xf;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  local_4 = 0xffffffff;
  if (0xf < *(uint *)((int)this + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  ExceptionList = pvVar1;
  return;
}

