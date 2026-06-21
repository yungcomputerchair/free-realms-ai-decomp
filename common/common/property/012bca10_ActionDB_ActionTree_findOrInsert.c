// addr: 0x012bca10
// name: ActionDB_ActionTree_findOrInsert
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall ActionDB_ActionTree_findOrInsert(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 local_30 [8];
  undefined1 local_28 [4];
  undefined1 auStack_24 [8];
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Looks up an action id in ActionDB's action tree and inserts a default
                       node/value when absent, returning the value area. Evidence is PropertyTree15
                       and ActionDB_* tree helper callees and ActionDB callers. */
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_0166dd98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar5[1] + 0x1d) == '\0') {
    puVar1 = (undefined4 *)puVar5[1];
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar5 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x1d) == '\0');
  }
  if ((puVar5 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puVar5[3])) {
    pvVar3 = (void *)PropertyTree15_ctor((int)local_28);
    local_4 = (void *)0x0;
    pvVar3 = PropertyTree15_pairCopyConstruct(local_1c,param_2,pvVar3);
    local_4._0_1_ = 1;
    piVar4 = (int *)ActionDB_ActionTree_insertNode(local_30,param_1,puVar5,pvVar3);
    param_1 = *piVar4;
    puVar5 = (undefined4 *)piVar4[1];
    local_4 = (void *)((uint)local_4._1_3_ << 8);
    PropertyTree15_clearAndFreeHeader((int)local_18);
    PropertyTree15_clearAndFreeHeader((int)auStack_24);
  }
  if (param_1 == 0) {
    FUN_00d83c2d();
  }
  if (puVar5 == *(undefined4 **)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  ExceptionList = local_4;
  return puVar5 + 4;
}

