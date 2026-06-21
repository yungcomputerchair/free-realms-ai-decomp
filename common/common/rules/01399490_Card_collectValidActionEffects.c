// addr: 0x01399490
// name: Card_collectValidActionEffects
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Card_collectValidActionEffects(int *param_1,void *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  void **unaff_EDI;
  int *piVar6;
  int *local_14;
  int *local_10;
  undefined4 *local_c;
  undefined4 *local_4;
  
                    /* Collects valid action effects into a PointerVector after checking each
                       candidate. */
  iVar1 = *param_3;
  piVar6 = param_3;
  while (iVar1 != 0) {
    cVar4 = (**(code **)(*param_1 + 0x124))(*piVar6);
    if (cVar4 != '\0') {
      local_14 = param_1;
      PointerVector_pushBack(param_2,&local_14,unaff_EDI);
    }
    piVar6 = piVar6 + 1;
    iVar1 = *piVar6;
  }
  local_4 = (undefined4 *)param_1[4];
  local_14 = param_1 + 3;
  local_c = (undefined4 *)*local_4;
  local_10 = local_14;
  while( true ) {
    puVar3 = local_c;
    piVar6 = local_10;
    if ((local_10 == (int *)0x0) || (local_10 != local_14)) {
      FUN_00d83c2d();
    }
    if (puVar3 == local_4) break;
    if (piVar6 == (int *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == (undefined4 *)piVar6[1]) {
      FUN_00d83c2d();
    }
    puVar2 = (undefined4 *)puVar3[6];
    if (puVar2 < (undefined4 *)puVar3[5]) {
      FUN_00d83c2d();
    }
    if (puVar3 == (undefined4 *)piVar6[1]) {
      FUN_00d83c2d();
    }
    puVar5 = (undefined4 *)puVar3[5];
    if ((undefined4 *)puVar3[6] < puVar5) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (puVar3 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (puVar5 == puVar2) break;
      if (puVar3 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((undefined4 *)puVar3[6] <= puVar5) {
        FUN_00d83c2d();
      }
      (**(code **)(*(int *)*puVar5 + 0x38))(param_2,param_3);
      if ((undefined4 *)puVar3[6] <= puVar5) {
        FUN_00d83c2d();
      }
      puVar5 = puVar5 + 1;
    }
    FUN_01340aa0();
  }
  return;
}

