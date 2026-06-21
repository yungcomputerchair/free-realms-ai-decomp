// addr: 0x01411430
// name: FUN_01411430
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01411430(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
                    /* Game validation traversal helper: iterates card instance data entries and
                       calls a virtual validator callback for each 3-dword subrecord. */
  piVar1 = *(int **)(param_2 + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(param_2 + 4)) {
      FUN_00d83c2d();
    }
    uVar3 = piVar2[3];
    if (piVar2 == (int *)*(int *)(param_2 + 4)) {
      FUN_00d83c2d();
    }
    puVar4 = (undefined4 *)piVar2[7];
    uVar5 = piVar2[4];
    if (puVar4 < (undefined4 *)piVar2[6]) {
      FUN_00d83c2d();
    }
    puVar6 = (undefined4 *)piVar2[6];
    if ((undefined4 *)piVar2[7] < puVar6) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar2 == (int *)0xffffffec) {
        FUN_00d83c2d();
      }
      if (puVar6 == puVar4) break;
      if (piVar2 == (int *)0xffffffec) {
        FUN_00d83c2d();
      }
      if ((((undefined4 *)piVar2[7] <= puVar6) &&
          (FUN_00d83c2d(), (undefined4 *)piVar2[7] <= puVar6)) &&
         (FUN_00d83c2d(), (undefined4 *)piVar2[7] <= puVar6)) {
        FUN_00d83c2d();
      }
      (**(code **)(*param_1 + 4))(uVar3,uVar5,*puVar6,puVar6[1],puVar6[2]);
      if ((undefined4 *)piVar2[7] <= puVar6) {
        FUN_00d83c2d();
      }
      puVar6 = puVar6 + 3;
    }
    FUN_0134f4a0();
  }
  return 1;
}

