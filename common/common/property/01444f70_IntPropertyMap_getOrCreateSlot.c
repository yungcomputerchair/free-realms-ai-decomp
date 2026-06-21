// addr: 0x01444f70
// name: IntPropertyMap_getOrCreateSlot
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall IntPropertyMap_getOrCreateSlot(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_10 [2];
  undefined1 local_8 [8];
  
                    /* Finds a red-black-tree entry by integer key, inserts a default zero value if
                       absent, validates the iterator, and returns the address of the mapped value
                       slot. */
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar4 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puVar4[3])) {
    local_10[0] = *param_2;
    local_10[1] = 0;
    piVar3 = (int *)IntPropertyMap_insertNode(local_8,param_1,puVar4,local_10);
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

