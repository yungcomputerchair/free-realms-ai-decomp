// addr: 0x01390bf0
// name: FUN_01390bf0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01390bf0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
                    /* Returns whether any nested element in the object's list at +0xc4 maps to the
                       supplied id. It iterates nodes, then each node's vector, converts entries
                       through FUN_01418e00, and compares with param_2. */
  piVar1 = *(int **)(param_1 + 0xc4);
  piVar2 = (int *)*piVar1;
  do {
    if (param_1 == -0xc0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      return 0;
    }
    if (param_1 == -0xc0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(param_1 + 0xc4)) {
      FUN_00d83c2d();
    }
    uVar3 = piVar2[6];
    if (uVar3 < (uint)piVar2[5]) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(param_1 + 0xc4)) {
      FUN_00d83c2d();
    }
    uVar5 = piVar2[5];
    if ((uint)piVar2[6] < uVar5) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (uVar5 == uVar3) break;
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((uint)piVar2[6] <= uVar5) {
        FUN_00d83c2d();
      }
      iVar4 = FUN_01418e00();
      if (iVar4 == param_2) {
        return 1;
      }
      if ((uint)piVar2[6] <= uVar5) {
        FUN_00d83c2d();
      }
      uVar5 = uVar5 + 4;
    }
    FUN_0138cca0();
  } while( true );
}

