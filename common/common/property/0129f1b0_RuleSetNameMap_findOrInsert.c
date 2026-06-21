// addr: 0x0129f1b0
// name: RuleSetNameMap_findOrInsert
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall RuleSetNameMap_findOrInsert(int param_1,int *param_2)

{
  uint srcValue;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 local_30 [8];
  undefined1 local_28 [4];
  undefined1 auStack_24 [8];
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Looks up a key in a RuleSetNameMap tree and inserts a default node if absent,
                       returning the value area. Evidence is RuleSetNameMap ctor/copy/clear callees
                       and RuleSetDB/ActionDB index callers. */
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_0166b1d8;
  local_c = ExceptionList;
  srcValue = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x1d) == '\0');
  }
  if ((puVar4 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puVar4[3])) {
    piVar3 = (int *)RuleSetNameMap_ctor((int)local_28);
    local_4 = (void *)0x0;
    piVar3 = RuleSetNameMapNodePair_copyCtor(local_1c,param_2,piVar3,srcValue);
    local_4._0_1_ = 1;
    piVar3 = (int *)RuleSetNameMap_insertNode(local_30,param_1,puVar4,piVar3);
    param_1 = *piVar3;
    puVar4 = (undefined4 *)piVar3[1];
    local_4 = (void *)((uint)local_4._1_3_ << 8);
    RuleSetNameMap_clear((int)local_18);
    RuleSetNameMap_clear((int)auStack_24);
  }
  if (param_1 == 0) {
    FUN_00d83c2d();
  }
  if (puVar4 == *(undefined4 **)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  ExceptionList = local_4;
  return puVar4 + 4;
}

