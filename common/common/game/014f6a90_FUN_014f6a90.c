// addr: 0x014f6a90
// name: FUN_014f6a90
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_014f6a90(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_EDI;
  void *local_10;
  int local_c;
  int *local_4;
  
                    /* Vector/map lookup helper with weak evidence: verifies an id is in a vector,
                       then looks up the same id in an int map and returns mapped value, -1, or
                       zero. */
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 < *(int **)(param_1 + 0x34)) {
    FUN_00d83c2d();
  }
  piVar2 = *(int **)(param_1 + 0x34);
  piVar4 = piVar2;
  if (*(int **)(param_1 + 0x38) < piVar2) {
    FUN_00d83c2d();
  }
  for (; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 1) {
  }
  piVar1 = *(int **)(param_1 + 0x38);
  local_4 = piVar2;
  if (piVar1 < *(int **)(param_1 + 0x34)) {
    FUN_00d83c2d();
  }
  if (param_1 == -0x30) {
    FUN_00d83c2d();
  }
  if (piVar4 == piVar1) {
    return 0xffffffff;
  }
  StdRbTreeInt_find_alt((void *)(param_1 + 0x40),&local_10,&param_2,unaff_EDI);
  iVar3 = *(int *)(param_1 + 0x44);
  if ((local_10 == (void *)0x0) || (local_10 != (void *)(param_1 + 0x40))) {
    FUN_00d83c2d();
  }
  if (local_c != iVar3) {
    if (local_10 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (local_c == *(int *)((int)local_10 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(local_c + 0x10);
  }
  return 0;
}

