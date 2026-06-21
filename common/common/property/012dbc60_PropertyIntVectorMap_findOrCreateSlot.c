// addr: 0x012dbc60
// name: PropertyIntVectorMap_findOrCreateSlot
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall PropertyIntVectorMap_findOrCreateSlot(void *param_1,int *param_2)

{
  int *key;
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *hint_node;
  undefined4 *puVar3;
  undefined1 local_38 [8];
  undefined1 local_30 [4];
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Looks up an integer-keyed tree node and inserts a default value container
                       when absent, returning the value storage at node+0x10. Evidence is
                       lower_bound-style comparisons on node key and construction/freeing of a
                       PropertyVector temporary for insertion. */
  puStack_8 = &LAB_01671180;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  ExceptionList = &local_c;
  puVar3 = *(undefined4 **)((int)param_1 + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar3 == *(undefined4 **)((int)param_1 + 4)) || (*param_2 < (int)puVar3[3])) {
    local_2c = (void *)0x0;
    local_28 = 0;
    local_24 = 0;
    local_4 = 0;
    hint_node = (void *)FUN_012d88e0(param_2,local_30);
    local_4._0_1_ = 1;
    puVar3 = PropertyTree21_insertOrFindIntKey(param_1,local_38,param_1,puVar3,hint_node,key);
    param_1 = (void *)*puVar3;
    puVar3 = (undefined4 *)puVar3[1];
    local_4 = (uint)local_4._1_3_ << 8;
    PropertyVector_freeStorageAt8(local_20);
    local_4 = 0xffffffff;
    if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = (void *)0x0;
    local_28 = 0;
    local_24 = 0;
  }
  local_4 = 0xffffffff;
  if (param_1 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (puVar3 == *(undefined4 **)((int)param_1 + 4)) {
    FUN_00d83c2d();
  }
  ExceptionList = local_c;
  return puVar3 + 4;
}

