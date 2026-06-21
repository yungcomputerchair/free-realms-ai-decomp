// addr: 0x010ad090
// name: Deep_ModelEntity_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
Deep_ModelEntity_ctor(undefined4 *param_1,undefined4 param_2,void *param_3,undefined4 param_4)

{
  void *skeletonDefinition;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Deep::ModelEntity and initializes its model definition/material
                       state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016472c6;
  local_c = ExceptionList;
  skeletonDefinition = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  ExceptionList = &local_c;
  FUN_00766d80();
  local_4 = 0;
  *param_1 = Deep::ModelEntity::vftable;
  FUN_010acd30();
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar2 = &DAT_01bc2660;
  puVar3 = param_1 + 0x58;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  FUN_00764c50(param_4);
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0x18))(param_1 + 0x58);
  }
  if (param_1[1] != 0) {
    FUN_007351c0();
  }
  Deep_ModelEntity_setModelDefinition(param_2,0,0);
  FUN_010ac650(param_1,param_3,skeletonDefinition);
  ExceptionList = local_c;
  return param_1;
}

