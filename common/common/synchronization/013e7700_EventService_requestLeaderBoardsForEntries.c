// addr: 0x013e7700
// name: EventService_requestLeaderBoardsForEntries
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventService_requestLeaderBoardsForEntries(void * this, void *
   entryVector) */

void __thiscall EventService_requestLeaderBoardsForEntries(void *this,void *entryVector)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  void *handle;
  undefined4 *puVar9;
  undefined1 local_28 [16];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Iterates an event-entry vector, removes or processes entries based on virtual
                       checks, and dispatches EventCommand_RequestEventLeaderBoard commands for
                       collected entries. */
  puStack_8 = &LAB_0168df50;
  local_c = ExceptionList;
  uVar7 = DAT_01b839d8 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = 0;
  puVar9 = *(undefined4 **)((int)entryVector + 4);
  if (*(undefined4 **)((int)entryVector + 8) < puVar9) {
    FUN_00d83c2d(uVar7);
  }
  while( true ) {
    puVar1 = *(undefined4 **)((int)entryVector + 8);
    if (puVar1 < *(undefined4 **)((int)entryVector + 4)) {
      FUN_00d83c2d(uVar7);
    }
    piVar8 = local_18;
    if (puVar9 == puVar1) break;
    if (*(undefined4 **)((int)entryVector + 8) <= puVar9) {
      FUN_00d83c2d(uVar7);
    }
    piVar8 = (int *)FUN_013e2290(local_28,puVar9);
    iVar2 = *piVar8;
    iVar3 = *(int *)((int)this + 0x4c);
    iVar4 = piVar8[1];
    if ((iVar2 == 0) || (iVar2 != (int)this + 0x48)) {
      FUN_00d83c2d(uVar7);
    }
    if (iVar4 == iVar3) {
      if (*(undefined4 **)((int)entryVector + 8) <= puVar9) {
        FUN_00d83c2d();
      }
      FUN_0042c155(puVar9);
    }
    else {
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (iVar4 == *(int *)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      cVar6 = (**(code **)(*(int *)this + 0xa4))(iVar4 + 0x10);
      if (cVar6 == '\0') {
        if (*(undefined4 **)((int)entryVector + 8) <= puVar9) {
          FUN_00d83c2d();
        }
        (**(code **)(*(int *)this + 0xb0))(*puVar9);
      }
      else {
        if (*(undefined4 **)((int)entryVector + 8) <= puVar9) {
          FUN_00d83c2d();
        }
        FUN_0042c155(puVar9);
      }
    }
    if (*(undefined4 **)((int)entryVector + 8) <= puVar9) {
      FUN_00d83c2d();
    }
    puVar9 = puVar9 + 1;
  }
  if (local_14 < local_18) {
    FUN_00d83c2d(uVar7);
  }
  while( true ) {
    piVar5 = local_14;
    if (local_14 < local_18) {
      FUN_00d83c2d(uVar7);
    }
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (piVar8 == piVar5) break;
    EventCommand_RequestEventLeaderBoard_ctor(local_28);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (local_14 <= piVar8) {
      FUN_00d83c2d();
    }
    FUN_0144aee0(local_28,*piVar8);
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    local_4 = local_4 & 0xffffff00;
    EventCommand_RequestEventLeaderBoard_dtor(local_28);
    if (local_14 <= piVar8) {
      FUN_00d83c2d();
    }
    piVar8 = piVar8 + 1;
  }
  local_4 = 0xffffffff;
  if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return;
}

