// addr: 0x01306270
// name: FUN_01306270
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01306270(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  piVar1 = *(int **)(param_1 + 0x24);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (param_1 == -0x20) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      return 0;
    }
    if (param_1 == -0x20) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(param_1 + 0x24)) {
      FUN_00d83c2d();
    }
    piVar3 = (int *)piVar2[6];
    if (piVar3 < (int *)piVar2[5]) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(param_1 + 0x24)) {
      FUN_00d83c2d();
    }
    piVar4 = (int *)piVar2[5];
    if ((int *)piVar2[6] < piVar4) {
      FUN_00d83c2d();
    }
    for (; (piVar4 != piVar3 && (*piVar4 != param_2)); piVar4 = piVar4 + 1) {
    }
    if (piVar2 == (int *)*(int *)(param_1 + 0x24)) {
      FUN_00d83c2d();
    }
    piVar3 = (int *)piVar2[6];
    if (piVar3 < (int *)piVar2[5]) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)0xfffffff0) {
      FUN_00d83c2d();
    }
    if (piVar4 != piVar3) break;
    FUN_01303940();
  }
  if (piVar2 == (int *)*(int *)(param_1 + 0x24)) {
    FUN_00d83c2d();
  }
  return piVar2[3];
}

