// addr: 0x00a44b70
// name: AreaJournalMgr_setTrackByRegionId
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AreaJournalMgr_setTrackByRegionId(void * this, int regionId_) */

void __thiscall AreaJournalMgr_setTrackByRegionId(void *this,int regionId_)

{
  undefined4 *puVar1;
  
                    /* Finds the region definition with the requested region id, stores its track
                       key as the pending/current selection, and applies area-track arbitration. If
                       no region matches it falls back to track id 1 before applying. */
  if (*(int *)((int)this + 0x20) != 0) {
    puVar1 = *(undefined4 **)(*(int *)((int)this + 0x20) + 8);
    while( true ) {
      if (puVar1 == (undefined4 *)0x0) {
        *(undefined4 *)((int)this + 0xc) = 1;
        AreaJournalMgr_ApplyAreaTrack();
        return;
      }
      if (puVar1[5] == regionId_) break;
      puVar1 = (undefined4 *)puVar1[8];
    }
    *(undefined4 *)((int)this + 0xc) = *puVar1;
    AreaJournalMgr_ApplyAreaTrack();
  }
  return;
}

