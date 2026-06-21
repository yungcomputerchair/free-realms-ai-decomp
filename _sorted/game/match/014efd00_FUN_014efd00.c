// addr: 0x014efd00
// name: FUN_014efd00
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014efd00(int param_1)

{
  int *piVar1;
  int *piVar2;
  
                    /* Iterates a linked list/tree rooted at offset +8 and calls a helper for each
                       node, returning success. Exact class and node semantics are unclear. */
  piVar1 = *(int **)(param_1 + 8);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (param_1 == -4) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    FUN_004d21f9();
  }
  return 1;
}

