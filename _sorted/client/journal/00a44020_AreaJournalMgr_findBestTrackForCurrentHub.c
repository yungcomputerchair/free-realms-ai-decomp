// addr: 0x00a44020
// name: AreaJournalMgr_findBestTrackForCurrentHub
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AreaJournalMgr_findBestTrackForCurrentHub(void * this, bool
   requireAvailable_) */

void __thiscall AreaJournalMgr_findBestTrackForCurrentHub(void *this,bool requireAvailable_)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_c;
  uint local_4;
  
                    /* Chooses the best track id for the current hub: prefers the lowest-priority
                       uncompleted track, falls back to the highest-priority completed track, and
                       stores the chosen id at this+0x1c. */
  if (*(int *)((int)this + 0x20) == 0) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    return;
  }
  puVar1 = *(uint **)(*(int *)((int)this + 0x20) + 0x130);
  uVar4 = 0x7fffffff;
  uVar5 = 0x80000000;
  local_c = 0;
  local_4 = 0;
  do {
    if (puVar1 == (uint *)0x0) {
      if ((!requireAvailable_) || (local_c != 0)) {
        local_4 = local_c;
      }
      *(uint *)((int)this + 0x1c) = local_4;
      return;
    }
    if (puVar1[1] == *(uint *)((int)this + 0x18)) {
      if (*(int *)((int)this + 0x24) != 0) {
        for (iVar3 = *(int *)(*(int *)((int)this + 0x24) + 0x14 + (*puVar1 & 0x1f) * 4); iVar3 != 0;
            iVar3 = *(int *)(iVar3 + 0x10)) {
          if (*(uint *)(iVar3 + 0xc) == *puVar1) {
            bVar2 = true;
            goto LAB_00a4408e;
          }
        }
      }
      bVar2 = false;
LAB_00a4408e:
      if (((int)puVar1[2] < (int)uVar4) && (!bVar2)) {
        if (requireAvailable_) {
          uVar6 = *puVar1;
          FUN_008a6740(uVar6);
          iVar3 = FUN_00c7a610(uVar6);
          if (iVar3 == 0) goto LAB_00a440bf;
        }
        local_c = *puVar1;
        uVar4 = puVar1[2];
      }
LAB_00a440bf:
      if (((int)uVar5 < (int)puVar1[2]) && (bVar2)) {
        local_4 = *puVar1;
        uVar5 = puVar1[2];
      }
    }
    puVar1 = (uint *)puVar1[3];
  } while( true );
}

