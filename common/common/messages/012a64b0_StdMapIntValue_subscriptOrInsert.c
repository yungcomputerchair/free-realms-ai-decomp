// addr: 0x012a64b0
// name: StdMapIntValue_subscriptOrInsert
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall StdMapIntValue_subscriptOrInsert(int param_1,int *param_2)

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
  
                    /* Implements std::map-like operator[]/find-or-insert for a smaller int-keyed
                       tree: it searches by key, default-constructs the value on miss, inserts it,
                       and returns the value slot. Evidence is red-black tree navigation, default
                       value construction, and return of node+4. */
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_0166be88;
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
    pvVar3 = MessageDB_IntTextMap_ctor(local_28);
    local_4 = (void *)0x0;
    pvVar3 = MessageDB_VersionCachePair_ctor(local_1c,param_2,pvVar3);
    local_4._0_1_ = 1;
    piVar4 = (int *)FUN_012a6160(local_30,param_1,puVar5,pvVar3);
    param_1 = *piVar4;
    puVar5 = (undefined4 *)piVar4[1];
    local_4 = (void *)((uint)local_4._1_3_ << 8);
    MessageDB_IntTextMap_dtor(local_18);
    MessageDB_IntTextMap_dtor(auStack_24);
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

