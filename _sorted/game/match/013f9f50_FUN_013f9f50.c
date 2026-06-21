// addr: 0x013f9f50
// name: FUN_013f9f50
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __thiscall FUN_013f9f50(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
                    /* Scans the vector member at offsets +0x5c/+0x60 and returns whether the
                       supplied integer/pointer value is present. Exact owning class is unclear from
                       this isolated helper. */
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 < *(int **)(param_1 + 0x5c)) {
    FUN_00d83c2d();
  }
  piVar2 = *(int **)(param_1 + 0x5c);
  if (*(int **)(param_1 + 0x60) < piVar2) {
    FUN_00d83c2d();
  }
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 1) {
  }
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 < *(int **)(param_1 + 0x5c)) {
    FUN_00d83c2d();
  }
  if (param_1 == -0x58) {
    FUN_00d83c2d();
  }
  return piVar2 != piVar1;
}

