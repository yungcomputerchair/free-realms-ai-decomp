// addr: 0x012c4060
// name: Campaign_processDeliveryEntryVector
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Campaign_processDeliveryEntryVector(void * campaign, uint key_) */

bool __thiscall Campaign_processDeliveryEntryVector(void *this,void *campaign,uint key_)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 local_8 [8];
  
                    /* Processes a campaign item-delivery entry: looks up a keyed tree entry and
                       iterates its 16-byte vector payload, invoking a handler for each item. */
  iVar1 = *(int *)((int)this + 0x38);
  piVar4 = (int *)FUN_012c2af0(local_8,&campaign);
  iVar2 = *piVar4;
  iVar3 = piVar4[1];
  if ((iVar2 == 0) || (iVar2 != (int)this + 0x34)) {
    FUN_00d83c2d();
  }
  if (iVar3 == iVar1) {
    return false;
  }
  if (iVar2 == 0) {
    FUN_00d83c2d();
  }
  if (iVar3 == *(int *)(iVar2 + 4)) {
    FUN_00d83c2d();
  }
  campaign = *(void **)(iVar3 + 0x18);
  if (campaign < *(void **)(iVar3 + 0x14)) {
    FUN_00d83c2d();
  }
  if (iVar3 == *(int *)(iVar2 + 4)) {
    FUN_00d83c2d();
  }
  pvVar5 = *(void **)(iVar3 + 0x14);
  if (*(void **)(iVar3 + 0x18) < pvVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (iVar3 == -0x10) {
      FUN_00d83c2d();
    }
    if (pvVar5 == campaign) break;
    if (iVar3 == -0x10) {
      FUN_00d83c2d();
    }
    if (*(void **)(iVar3 + 0x18) <= pvVar5) {
      FUN_00d83c2d();
    }
    FUN_012c3e50(pvVar5);
    if (*(void **)(iVar3 + 0x18) <= pvVar5) {
      FUN_00d83c2d();
    }
    pvVar5 = (void *)((int)pvVar5 + 0x10);
  }
  return true;
}

