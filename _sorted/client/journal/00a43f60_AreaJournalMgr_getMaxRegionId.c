// addr: 0x00a43f60
// name: AreaJournalMgr_getMaxRegionId
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AreaJournalMgr_getMaxRegionId(void * this) */

int __fastcall AreaJournalMgr_getMaxRegionId(void *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* Scans loaded Adventurer's Journal region definitions and returns the greatest
                       region id, or zero if no definition table is present. */
  iVar2 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    piVar3 = *(int **)(*(int *)((int)this + 0x20) + 8);
    while (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[8];
      if (iVar2 <= iVar1) {
        iVar2 = iVar1;
      }
    }
  }
  return iVar2;
}

