// addr: 0x00a447d0
// name: AreaJournalMgr_ApplyAreaTrack
// subsystem: common/client/journal
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall AreaJournalMgr_ApplyAreaTrack(void *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* Preserves the existing identified symbol AreaJournalMgr_ApplyAreaTrack; code
                       initializes or operates on that class and is queued for sidecar write-back.
                        */
  bVar1 = true;
  if (*(int *)((int)param_1 + 8) == 0) {
    iVar3 = *(int *)((int)param_1 + 0x10);
    if ((iVar3 == 0) &&
       (cVar2 = AreaJournalMgr_FindBestTrack_UNGUARDED_CRASH(*(undefined4 *)((int)param_1 + 0xc),1),
       iVar3 = 0, cVar2 != '\0')) {
      iVar3 = *(int *)((int)param_1 + 0xc);
    }
  }
  else {
    bVar1 = false;
    iVar3 = *(int *)((int)param_1 + 8);
  }
  if ((*(int *)((int)param_1 + 4) != 0) && (iVar3 == *(int *)((int)param_1 + 4))) {
    return;
  }
  *(int *)((int)param_1 + 4) = iVar3;
  if (bVar1) {
    iVar5 = 0;
    iVar6 = 0;
    iVar3 = AreaJournalMgr_getMaxRegionId(param_1);
    if (0 < iVar3) {
      do {
        iVar3 = *(int *)((int)param_1 + 4);
        iVar5 = AreaJournalMgr_ResolveTrackForKey_guarded(iVar3,*(int *)((int)param_1 + 8) != 0);
        if (iVar5 != 0) break;
        iVar4 = AreaJournalMgr_getMaxRegionId(param_1);
        iVar3 = iVar3 % iVar4 + 1;
        cVar2 = AreaJournalMgr_FindBestTrack_UNGUARDED_CRASH(iVar3,1);
        if (cVar2 == '\0') {
          iVar3 = *(int *)((int)param_1 + 4);
        }
        *(int *)((int)param_1 + 4) = iVar3;
        iVar6 = iVar6 + 1;
        iVar3 = AreaJournalMgr_getMaxRegionId(param_1);
      } while (iVar6 < iVar3);
    }
    if (*(int *)((int)param_1 + 0x18) == iVar5) goto LAB_00a448b4;
    *(int *)((int)param_1 + 0x18) = iVar5;
  }
  else {
    iVar3 = AreaJournalMgr_ResolveTrackForKey_guarded(iVar3,0);
    if (*(int *)((int)param_1 + 0x18) == iVar3) goto LAB_00a448b4;
    *(int *)((int)param_1 + 0x18) = iVar3;
  }
  AreaJournalMgr_findBestTrackForCurrentHub(param_1,false);
  JournalUiObserver_markDirtyAndNotify(*(void **)((int)param_1 + 0x2c));
  (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x10))();
LAB_00a448b4:
  (**(code **)(**(int **)((int)param_1 + 0x28) + 0x10))();
  JournalUiObserver_markDirtyAndNotify(*(void **)((int)param_1 + 0x2c));
  (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x10))();
  FUN_00c978b0();
                    /* WARNING: Could not recover jumptable at 0x00a448e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)param_1 + 0x30) + 0x10))();
  return;
}

