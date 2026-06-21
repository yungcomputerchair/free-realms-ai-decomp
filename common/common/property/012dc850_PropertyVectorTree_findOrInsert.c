// addr: 0x012dc850
// name: PropertyVectorTree_findOrInsert
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall PropertyVectorTree_findOrInsert(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 local_38 [8];
  undefined1 local_30 [4];
  void *local_2c;
  void *local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Looks up an integer-keyed property vector tree node and inserts a newly
                       constructed PropertyVector node if the key is absent, returning the node
                       value area. Evidence is PropertyVector_clear, PropertyVector construction,
                       and tree insert helper calls. */
  puStack_8 = &LAB_01671300;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar5[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar5 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puVar5[3])) {
    local_2c = (void *)0x0;
    local_28 = (void *)0x0;
    local_24 = 0;
    local_4 = 0;
    pvVar3 = StdVectorOwner_copyHeaderAndVector
                       (local_20,param_2,local_30,(void *)(DAT_01b839d8 ^ (uint)&stack0xffffffbc));
    local_4._0_1_ = 1;
    piVar4 = (int *)PropertyVectorTree_insertNode(local_38,param_1,puVar5,pvVar3);
    param_1 = *piVar4;
    puVar5 = (undefined4 *)piVar4[1];
    local_4 = (uint)local_4._1_3_ << 8;
    PropertyVector_clear((int)local_20);
    local_4 = 0xffffffff;
    if (local_2c != (void *)0x0) {
      StdStringRange_destroy(local_2c,local_28);
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = (void *)0x0;
    local_28 = (void *)0x0;
    local_24 = 0;
  }
  local_4 = 0xffffffff;
  if (param_1 == 0) {
    FUN_00d83c2d();
  }
  if (puVar5 == *(undefined4 **)(param_1 + 4)) {
    FUN_00d83c2d();
  }
  ExceptionList = local_c;
  return puVar5 + 4;
}

