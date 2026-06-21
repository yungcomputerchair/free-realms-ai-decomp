// addr: 0x0136c9f0
// name: FUN_0136c9f0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0136c9f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_8 [8];
  
                    /* Looks up a vector-valued entry by key and returns its first element if the
                       vector exists and is non-empty, otherwise 0. It uses the tree at +0x140 and
                       helper FUN_0136bd70 to access the vector value. */
  iVar4 = *(int *)(param_1 + 0x144);
  piVar3 = (int *)FUN_01354a70(local_8,&stack0x00000004);
  if ((*piVar3 == 0) || (*piVar3 != param_1 + 0x140)) {
    FUN_00d83c2d();
  }
  if (piVar3[1] != iVar4) {
    iVar4 = Game_getOrCreateCommandQueueEntry(&stack0x00000004);
    if ((*(int *)(iVar4 + 4) != 0) && (*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 2 != 0)) {
      iVar4 = Game_getOrCreateCommandQueueEntry(&stack0x00000004);
      puVar2 = *(undefined4 **)(iVar4 + 4);
      puVar1 = *(undefined4 **)(iVar4 + 8);
      if (puVar1 < puVar2) {
        FUN_00d83c2d();
        puVar1 = *(undefined4 **)(iVar4 + 8);
      }
      if (puVar1 <= puVar2) {
        FUN_00d83c2d();
      }
      return *puVar2;
    }
  }
  return 0;
}

