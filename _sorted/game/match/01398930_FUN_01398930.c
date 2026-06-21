// addr: 0x01398930
// name: FUN_01398930
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01398930(int *param_1,void *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  undefined1 local_10 [12];
  
                    /* Collects modifier/value pointers from each card modifier group into an output
                       vector, then ensures default modifier entries are added when a virtual check
                       fails. It skips entries with null value at +4. */
  piVar1 = (int *)param_1[0x14];
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (param_1 == (int *)0xffffffb4) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (param_1 == (int *)0xffffffb4) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)param_1[0x14]) {
      FUN_00d83c2d();
    }
    uVar3 = piVar2[7];
    if (uVar3 < (uint)piVar2[6]) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)param_1[0x14]) {
      FUN_00d83c2d();
    }
    uVar8 = piVar2[6];
    if ((uint)piVar2[7] < uVar8) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar2 == (int *)0xffffffec) {
        FUN_00d83c2d();
      }
      if (uVar8 == uVar3) break;
      if (piVar2 == (int *)0xffffffec) {
        FUN_00d83c2d();
      }
      if ((uint)piVar2[7] <= uVar8) {
        FUN_00d83c2d();
      }
      if (*(int *)(uVar8 + 4) != 0) {
        if ((uint)piVar2[7] <= uVar8) {
          FUN_00d83c2d();
        }
        uVar4 = *(uint *)((int)param_2 + 4);
        if ((uVar4 == 0) ||
           ((uint)((int)(*(int *)((int)param_2 + 0xc) - uVar4) >> 2) <=
            (uint)((int)(*(int *)((int)param_2 + 8) - uVar4) >> 2))) {
          uVar6 = *(uint *)((int)param_2 + 8);
          if (uVar6 < uVar4) {
            FUN_00d83c2d();
          }
          FUN_0137db20(local_10,param_2,uVar6,(undefined4 *)(uVar8 + 4));
        }
        else {
          puVar5 = *(undefined4 **)((int)param_2 + 8);
          *puVar5 = *(undefined4 *)(uVar8 + 4);
          *(undefined4 **)((int)param_2 + 8) = puVar5 + 1;
        }
      }
      if ((uint)piVar2[7] <= uVar8) {
        FUN_00d83c2d();
      }
      uVar8 = uVar8 + 0xc;
    }
    FUN_0134f4a0();
  }
  cVar7 = (**(code **)(*param_1 + 0x1e8))();
  if (cVar7 == '\0') {
    Card_checkModifierPredicate68(param_1,param_2,3);
    (**(code **)(*param_1 + 0x114))(param_2,1);
  }
  return 1;
}

