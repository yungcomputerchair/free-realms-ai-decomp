// addr: 0x01308f30
// name: FUN_01308f30
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01308f30(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Tests whether a card/type id is allowed for the object's mode at +0x1c. Modes
                       9-10 check membership in a temporary id vector; modes 6-8 and 2 delegate to
                       FUN_01306270 and require result 2. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016768a8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 - 9U < 2) {
    FUN_01308810(local_1c);
    piVar1 = local_14;
    local_4 = 0;
    if (local_14 < local_18) {
      FUN_00d83c2d(uVar2);
    }
    piVar5 = local_18;
    piVar3 = local_14;
    if (local_14 < local_18) {
      FUN_00d83c2d(uVar2);
      piVar3 = local_14;
    }
    for (; (piVar5 != piVar1 && (*piVar5 != param_2)); piVar5 = piVar5 + 1) {
    }
    if (piVar3 < local_18) {
      FUN_00d83c2d(uVar2);
    }
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d(uVar2);
    }
    if (piVar5 != piVar3) {
      local_4 = 0xffffffff;
      if (local_18 == (int *)0x0) {
        ExceptionList = local_c;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    local_4 = 0xffffffff;
    if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  else if (iVar4 - 6U < 3) {
    iVar4 = FUN_01306270(param_2);
    if (iVar4 == 2) {
      ExceptionList = local_c;
      return 1;
    }
  }
  else if ((iVar4 == 2) && (iVar4 = FUN_01306270(param_2), iVar4 == 2)) {
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

