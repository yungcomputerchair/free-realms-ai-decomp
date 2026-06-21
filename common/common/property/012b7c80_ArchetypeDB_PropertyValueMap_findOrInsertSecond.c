// addr: 0x012b7c80
// name: ArchetypeDB_PropertyValueMap_findOrInsertSecond
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall ArchetypeDB_PropertyValueMap_findOrInsertSecond(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 local_40 [8];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_24 [4];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Finds or inserts an ArchetypeDB property-value map entry using the pair's
                       second-value copy constructor and returns the value payload. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166d660;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_c;
  puVar6 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar6[1] + 0x25) == '\0') {
    puVar2 = (undefined4 *)puVar6[1];
    do {
      if ((int)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar6 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x25) == '\0');
  }
  if ((puVar6 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (int)puVar6[3])) {
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_4 = 1;
    pvVar4 = PropertyValuePair_copyConstructSecond(local_24,param_2,local_38);
    local_4._0_1_ = 2;
    piVar5 = (int *)ArchetypeDB_PropertyValueMap_insertSecond(local_40,param_1,puVar6,pvVar4);
    param_1 = *piVar5;
    puVar6 = (undefined4 *)piVar5[1];
    local_4 = CONCAT31(local_4._1_3_,1);
    PropertyVector_freeStorage2(local_20);
    local_4 = 0xffffffff;
    PropertyVector_freeStorage2(local_38);
  }
  if (param_1 == 0) {
    FUN_00d83c2d(uVar1);
  }
  if (puVar6 == *(undefined4 **)(param_1 + 4)) {
    FUN_00d83c2d(uVar1);
  }
  ExceptionList = local_c;
  return puVar6 + 4;
}

