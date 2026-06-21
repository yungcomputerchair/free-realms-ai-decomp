// addr: 0x013947e0
// name: FUN_013947e0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __fastcall FUN_013947e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* When a flag at +0x69 is set, asks the object at +0x30 for a vector via
                       virtual +0x144 and checks whether this object is present in that vector.
                       Exact class/method is unclear. */
  puStack_8 = &LAB_01684458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0x69) != '\0') {
    local_18 = (int *)0x0;
    local_14 = (int *)0x0;
    local_10 = 0;
    local_4 = 0;
    (**(code **)(**(int **)(param_1 + 0x30) + 0x144))
              (local_1c,DAT_01b839d8 ^ (uint)&stack0xffffffcc);
    piVar1 = local_14;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    piVar4 = local_18;
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    for (; (piVar2 = local_14, piVar4 != piVar1 && (*piVar4 != param_1)); piVar4 = piVar4 + 1) {
    }
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (piVar4 != piVar2) {
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
    ExceptionList = (void **)0x0;
  }
  uVar3 = (uint)ExceptionList & 0xffffff00;
  ExceptionList = local_c;
  return uVar3;
}

