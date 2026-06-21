// addr: 0x013f3010
// name: StateMachine_popReturnValueMapWithKey
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall StateMachine_popReturnValueMapWithKey(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  rsize_t _DstSize;
  char cVar5;
  int iVar6;
  int *piVar7;
  
                    /* Searches pending return-value maps from newest to oldest for one containing
                       the requested key, removes that map from the vector, and returns it. Evidence
                       is restore-state callers asking for specific keys before consuming return
                       values. */
  piVar2 = *(int **)(param_1 + 0x24);
  if (*(int **)(param_1 + 0x28) < piVar2) {
    FUN_00d83c2d();
  }
  piVar7 = *(int **)(param_1 + 0x28);
  if (piVar7 < *(int **)(param_1 + 0x24)) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == -0x20) {
      FUN_00d83c2d();
    }
    if (piVar7 == piVar2) {
      return 0;
    }
    if (param_1 == -0x20) {
      FUN_00d83c2d();
    }
    if (piVar7 <= *(int **)(param_1 + 0x24)) {
      FUN_00d83c2d();
    }
    piVar1 = piVar7 + -1;
    if (*(int **)(param_1 + 0x28) <= piVar1) {
      FUN_00d83c2d();
    }
    iVar3 = *piVar1;
    cVar5 = PointerVector_iteratorNotAtEnd(param_2);
    if (cVar5 == '\x01') break;
    bVar4 = piVar7 <= *(int **)(param_1 + 0x24);
    piVar7 = piVar1;
    if (bVar4) {
      FUN_00d83c2d();
    }
  }
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 < *(int **)(param_1 + 0x24)) {
    FUN_00d83c2d();
  }
  piVar7 = *(int **)(param_1 + 0x24);
  if (*(int **)(param_1 + 0x28) < piVar7) {
    FUN_00d83c2d();
  }
  for (; (piVar7 != piVar2 && (*piVar7 != iVar3)); piVar7 = piVar7 + 1) {
  }
  piVar2 = *(int **)(param_1 + 0x28);
  if (piVar2 < *(int **)(param_1 + 0x24)) {
    FUN_00d83c2d();
  }
  if (param_1 == -0x20) {
    FUN_00d83c2d();
  }
  if (piVar7 != piVar2) {
    iVar6 = *(int *)(param_1 + 0x28) - (int)(piVar7 + 1) >> 2;
    if (0 < iVar6) {
      _DstSize = iVar6 * 4;
      _memmove_s(piVar7,_DstSize,piVar7 + 1,_DstSize);
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -4;
  }
  return iVar3;
}

