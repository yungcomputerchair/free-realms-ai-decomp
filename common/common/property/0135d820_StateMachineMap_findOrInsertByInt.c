// addr: 0x0135d820
// name: StateMachineMap_findOrInsertByInt
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall StateMachineMap_findOrInsertByInt(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 local_14 [8];
  int local_c [3];
  
                    /* Finds or inserts a tree entry keyed by an integer and returns a pointer to
                       its value area. */
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x19) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x19) == '\0');
  }
  if ((puVar4 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puVar4[3])) {
    local_c[0] = *param_2;
    local_c[2] = 0;
    local_c[1] = 0;
    piVar3 = (int *)FUN_0135b5c0(local_14,param_1,puVar4,local_c);
    param_1 = *piVar3;
    puVar4 = (undefined4 *)piVar3[1];
  }
  if (param_1 == 0) {
    FUN_00d83c2d();
  }
  if (puVar4 == *(undefined4 **)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  return puVar4 + 4;
}

