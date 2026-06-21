// addr: 0x01380220
// name: IntToObjectTree_findOrCreateSlot
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall IntToObjectTree_findOrCreateSlot(int param_1,int *param_2)

{
  uint valueSrc_;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 local_30 [12];
  undefined1 auStack_24 [8];
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Finds or inserts an integer-keyed tree entry and returns the value field.
                       Evidence is lower_bound-style key comparisons, temporary construction via
                       FUN_0137f770, insertion via FUN_01380020, and RB-tree cleanup calls. */
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_01682508;
  local_c = ExceptionList;
  valueSrc_ = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x1d) == '\0') {
    puVar2 = (undefined4 *)puVar4[1];
    do {
      if ((int)puVar2[3] < *param_2) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x1d) == '\0');
  }
  if ((puVar4 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puVar4[3])) {
    puVar2 = (undefined4 *)FUN_01247380();
    local_4 = (void *)0x0;
    puVar2 = IntToObjectTree_nodeValue_copyConstruct(local_1c,param_2,puVar2,valueSrc_);
    local_4._0_1_ = 1;
    piVar3 = (int *)IntToObjectTree_insertNode(local_30,param_1,puVar4,puVar2);
    param_1 = *piVar3;
    puVar4 = (undefined4 *)piVar3[1];
    local_4 = (void *)((uint)local_4._1_3_ << 8);
    StdRbTree_destroyAndFree(local_18);
    StdRbTree_destroyAndFree(auStack_24);
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

