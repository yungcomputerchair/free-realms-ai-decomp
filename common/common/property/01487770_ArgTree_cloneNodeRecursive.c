// addr: 0x01487770
// name: ArgTree_cloneNodeRecursive
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall ArgTree_cloneNodeRecursive(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Recursively clones an argument tree node, copying value data and child nodes.
                        */
  iVar4 = param_2;
  puStack_8 = &LAB_016a14b1;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  local_4 = 1;
  *param_1 = ArgTree::vftable;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  FUN_012fa910(uVar5);
  local_4._0_1_ = 2;
  RbTree_initHeader_01487610(param_1 + 7);
  local_4 = CONCAT31(local_4._1_3_,3);
  param_1[10] = *(undefined4 *)(iVar4 + 0x28);
  param_1[0xb] = *(undefined4 *)(iVar4 + 0x2c);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(iVar4 + 0x30);
  FUN_013010e0(iVar4 + 0x10);
  piVar1 = *(int **)(iVar4 + 0x20);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (iVar4 == -0x1c) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) break;
    if (iVar4 == -0x1c) {
      FUN_00d83c2d();
    }
    if (piVar2 == (int *)*(int *)(iVar4 + 0x20)) {
      FUN_00d83c2d();
    }
    param_2 = piVar2[3];
    if (piVar2 == (int *)*(int *)(iVar4 + 0x20)) {
      FUN_00d83c2d();
    }
    iVar3 = piVar2[4];
    if (iVar3 != 0) {
      pvVar6 = Mem_Alloc(0x34);
      local_4._0_1_ = 4;
      if (pvVar6 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = ArgTree_cloneNodeRecursive(iVar3);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      puVar8 = (undefined4 *)ArgTree_getOrCreateChildSlot(&param_2);
      *puVar8 = uVar7;
    }
    FUN_01485df0();
  }
  ExceptionList = local_c;
  return param_1;
}

