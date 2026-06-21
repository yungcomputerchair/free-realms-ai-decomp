// addr: 0x012d7750
// name: FUN_012d7750
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_012d7750(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  int local_4;
  
                    /* Looks up a property-like tree entry by key, falling back to key 0 if the
                       first lookup misses, and returns the entry value at +0x10 or 0. No exact
                       class identity is available. */
  FUN_012d71f0(&local_8,&param_2);
  iVar1 = *(int *)(param_1 + 0x34);
  if (param_1 + 0x30 != local_8) {
    FUN_00d83c2d();
  }
  if (iVar1 != local_4) {
    if (local_8 == 0) {
      FUN_00d83c2d();
    }
    if (local_4 == *(int *)(local_8 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(local_4 + 0x10);
  }
  param_2 = 0;
  piVar4 = (int *)FUN_012d71f0(&local_8,&param_2);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  iVar3 = *(int *)(param_1 + 0x34);
  if (param_1 + 0x30 != iVar1) {
    FUN_00d83c2d();
  }
  if (iVar3 != iVar2) {
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(iVar2 + 0x10);
  }
  return 0;
}

