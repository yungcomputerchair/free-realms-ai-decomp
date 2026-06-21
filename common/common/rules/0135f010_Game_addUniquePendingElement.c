// addr: 0x0135f010
// name: Game_addUniquePendingElement
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Game_addUniquePendingElement(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void **unaff_EDI;
  
                    /* Adds a non-null element pointer to a Game-owned vector only if enabled and
                       not already present. */
  iVar2 = param_2;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x14d) == '\0')) {
    piVar1 = *(int **)(param_1 + 0x370);
    if (piVar1 < *(int **)(param_1 + 0x36c)) {
      FUN_00d83c2d();
    }
    piVar3 = *(int **)(param_1 + 0x36c);
    if (*(int **)(param_1 + 0x370) < piVar3) {
      FUN_00d83c2d();
    }
    for (; (piVar3 != piVar1 && (*piVar3 != iVar2)); piVar3 = piVar3 + 1) {
    }
    piVar1 = *(int **)(param_1 + 0x370);
    if (piVar1 < *(int **)(param_1 + 0x36c)) {
      FUN_00d83c2d();
    }
    if ((void *)(param_1 + 0x368) == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar3 == piVar1) {
      PointerVector_pushBack((void *)(param_1 + 0x368),&param_2,unaff_EDI);
    }
  }
  return;
}

