// addr: 0x01329170
// name: CWCampaignMap_getDefaultCampaign
// subsystem: common/game/quest
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CWCampaignMap_getDefaultCampaign(void * this) */

void * __fastcall CWCampaignMap_getDefaultCampaign(void *this)

{
  int iVar1;
  void *pvVar2;
  int local_c;
  void *local_8;
  int local_4;
  
                    /* Returns the default campaign record keyed by id 0x65, creating it through the
                       map operator[] fallback when absent. Evidence is the fixed key 0x65 and
                       default record constructor containing 'Cham Syndulla'/'Question the Captain'.
                        */
  pvVar2 = (void *)((int)this + 8);
  local_c = 0x65;
  FUN_01328080(&local_8,&local_c);
  iVar1 = *(int *)((int)this + 0xc);
  if ((local_8 == (void *)0x0) || (local_8 != pvVar2)) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    if (local_8 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)((int)local_8 + 4)) {
      FUN_00d83c2d();
    }
    return (void *)(local_4 + 0x10);
  }
  iVar1 = *(int *)((int)this + 0xc);
  if ((local_8 == (void *)0x0) || (local_8 != pvVar2)) {
    FUN_00d83c2d();
  }
  local_c = 0x65;
  if (local_4 == iVar1) {
    pvVar2 = CWCampaignMap_getOrCreateCampaign(pvVar2,&local_c);
    return pvVar2;
  }
  pvVar2 = CWCampaignMap_getOrCreateCampaign(pvVar2,&local_c);
  return pvVar2;
}

