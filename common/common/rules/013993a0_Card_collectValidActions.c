// addr: 0x013993a0
// name: Card_collectValidActions
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall Card_collectValidActions(int param_1,void *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void **unaff_EDI;
  int local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 *local_4;
  
                    /* Collects valid card actions into a PointerVector after checking each
                       candidate. */
  local_14 = param_1;
  PointerVector_pushBack(param_2,&local_14,unaff_EDI);
  local_4 = *(undefined4 **)(param_1 + 0x10);
  local_14 = param_1 + 0xc;
  local_c = (undefined4 *)*local_4;
  local_10 = local_14;
  while( true ) {
    puVar3 = local_c;
    iVar2 = local_10;
    if ((local_10 == 0) || (local_10 != local_14)) {
      FUN_00d83c2d();
    }
    if (puVar3 == local_4) break;
    if (iVar2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    puVar1 = (undefined4 *)puVar3[6];
    if (puVar1 < (undefined4 *)puVar3[5]) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    puVar4 = (undefined4 *)puVar3[5];
    if ((undefined4 *)puVar3[6] < puVar4) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (puVar3 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if (puVar4 == puVar1) break;
      if (puVar3 == (undefined4 *)0xfffffff0) {
        FUN_00d83c2d();
      }
      if ((undefined4 *)puVar3[6] <= puVar4) {
        FUN_00d83c2d();
      }
      (**(code **)(*(int *)*puVar4 + 0x34))(param_2);
      if ((undefined4 *)puVar3[6] <= puVar4) {
        FUN_00d83c2d();
      }
      puVar4 = puVar4 + 1;
    }
    FUN_01340aa0();
  }
  return;
}

