// addr: 0x012d7910
// name: FUN_012d7910
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __thiscall FUN_012d7910(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
                    /* Scans a 4-byte value range stored at object offsets 0x40..0x44 for a target
                       value and returns true when the target is absent. Evidence is the linear loop
                       comparing *piVar2 to param_2 with range sanity checks; no class identity is
                       available. */
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 < *(int **)(param_1 + 0x40)) {
    FUN_00d83c2d();
  }
  piVar2 = *(int **)(param_1 + 0x40);
  if (*(int **)(param_1 + 0x44) < piVar2) {
    FUN_00d83c2d();
  }
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 1) {
  }
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 < *(int **)(param_1 + 0x40)) {
    FUN_00d83c2d();
  }
  if (param_1 == -0x3c) {
    FUN_00d83c2d();
  }
  return piVar2 == piVar1;
}

