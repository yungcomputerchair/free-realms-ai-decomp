// addr: 0x00bdd3a0
// name: FUN_00bdd3a0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00bdd3a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
                    /* SoeUtil::Array-style reallocation helper for 0x24-byte
                       ClientProgressiveQuestSlot-like elements; allocates new storage, copies
                       existing elements, frees old storage, and updates capacity. */
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(param_2,&param_2,param_3);
  if (puVar1 != (undefined4 *)param_1[1]) {
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      iVar5 = 0;
      if (0 < param_1[2]) {
        iVar4 = 0;
        puVar2 = puVar1;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(param_1[1] + iVar4);
            puVar7 = puVar2;
            for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x24;
          puVar2 = puVar2 + 9;
        } while (iVar5 < param_1[2]);
      }
      (**(code **)(*param_1 + 8))(param_1[1],param_1[3]);
    }
    param_1[1] = (int)puVar1;
    param_1[3] = unaff_ESI;
  }
  return;
}

