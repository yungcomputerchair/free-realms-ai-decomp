// addr: 0x01396190
// name: FUN_01396190
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01396190(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_10 [12];
  
                    /* Appends all ids from each nested vector in the object's list at +0xc4 into
                       the output vector. It grows the output vector as needed while iterating each
                       node's vector. */
  piVar1 = *(int **)(param_1 + 0xc4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (param_1 == -0xc0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (param_1 == -0xc0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(param_1 + 0xc4)) {
      FUN_00d83c2d();
    }
    puVar3 = (undefined4 *)piVar2[6];
    if (puVar3 < (undefined4 *)piVar2[5]) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(param_1 + 0xc4)) {
      FUN_00d83c2d();
    }
    puVar7 = (undefined4 *)piVar2[5];
    if ((undefined4 *)piVar2[6] < puVar7) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (puVar7 == puVar3) break;
      if (piVar2 == (int *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((undefined4 *)piVar2[6] <= puVar7) {
        FUN_00d83c2d();
      }
      uVar4 = *(uint *)(param_2 + 4);
      if ((uVar4 == 0) ||
         ((uint)((int)(*(int *)(param_2 + 0xc) - uVar4) >> 2) <=
          (uint)((int)(*(int *)(param_2 + 8) - uVar4) >> 2))) {
        uVar6 = *(uint *)(param_2 + 8);
        if (uVar6 < uVar4) {
          FUN_00d83c2d();
        }
        FUN_01335180(local_10,param_2,uVar6,puVar7);
      }
      else {
        puVar5 = *(undefined4 **)(param_2 + 8);
        *puVar5 = *puVar7;
        *(undefined4 **)(param_2 + 8) = puVar5 + 1;
      }
      if ((undefined4 *)piVar2[6] <= puVar7) {
        FUN_00d83c2d();
      }
      puVar7 = puVar7 + 1;
    }
    FUN_0138cca0();
  }
  return;
}

