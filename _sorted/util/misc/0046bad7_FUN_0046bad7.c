// addr: 0x0046bad7
// name: FUN_0046bad7
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int FUN_0046bad7(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
                    /* Updates a rectangular region/paint node for a second branch of a region
                       operation, merging coverage and bounds when the target changes. Exact class
                       evidence absent. */
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar6 = FUN_004f7dfd(param_3), iVar6 == 1)) {
    if (param_5 != 1) {
      local_c = *(undefined4 *)(param_1 + 0x1c);
      local_18 = *(int *)(param_1 + 0x10);
      local_10 = *(undefined4 *)(param_1 + 0x18);
      local_14 = *(undefined4 *)(param_1 + 0x14);
      cVar3 = RectRegion_classifyRectCoverage((void *)param_4[2],&local_18);
      if (CONCAT31(extraout_var,cVar3) != 1) goto LAB_0046bb1f;
    }
    iVar6 = *(int *)(param_2 + 8);
    local_8 = FUN_004655ae(param_1,param_2,*param_4,param_4[1],0);
    if ((local_8 != 0) && (iVar6 != *(int *)(param_2 + 8))) {
      local_18 = *(int *)(param_3 + 0xc);
      iVar6 = *(int *)(param_3 + 0x10);
      iVar4 = *(int *)(param_3 + 0x14) + -1;
      iVar8 = *(int *)(param_3 + 0x18) + -1;
      iVar7 = *(int *)(param_1 + 0x10);
      if (local_18 < *(int *)(param_1 + 0x10)) {
        iVar7 = local_18;
      }
      *(int *)(param_1 + 0x10) = iVar7;
      if (iVar4 < *(int *)(param_1 + 0x18)) {
        iVar4 = *(int *)(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x18) = iVar4;
      iVar4 = *(int *)(param_1 + 0x14);
      if (iVar6 < *(int *)(param_1 + 0x14)) {
        iVar4 = iVar6;
      }
      *(int *)(param_1 + 0x14) = iVar4;
      iVar6 = *(int *)(param_1 + 0x1c);
      if (*(int *)(param_1 + 0x1c) <= iVar8) {
        iVar6 = iVar8;
      }
      *(int *)(param_1 + 0x1c) = iVar6;
      if (param_5 != 1) {
        if (*(void **)(param_1 + 0xc) == (void *)0x0) {
          uVar5 = FUN_00466ce6();
          *(undefined4 *)(param_1 + 0xc) = uVar5;
          FUN_004dbd55(param_4[2]);
        }
        else {
          RectRegion_intersectWithRegion(*(void **)(param_1 + 0xc),(void *)param_4[2],0);
        }
        iVar6 = *(int *)(param_1 + 0xc);
        iVar4 = *(int *)(iVar6 + 0x10);
        iVar7 = *(int *)(iVar6 + 0xc);
        iVar8 = *(int *)(iVar6 + 0x14) + -1;
        iVar6 = *(int *)(iVar6 + 0x18) + -1;
        if ((((*(int *)(param_1 + 0x1c) < iVar4) || (iVar6 < *(int *)(param_1 + 0x14))) ||
            (iVar1 = *(int *)(param_1 + 0x10), iVar8 < iVar1)) ||
           (iVar2 = *(int *)(param_1 + 0x18), iVar2 < iVar7)) {
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        }
        else {
          if (iVar7 < iVar1) {
            iVar7 = iVar1;
          }
          *(int *)(param_1 + 0x10) = iVar7;
          if (iVar2 <= iVar8) {
            iVar8 = iVar2;
          }
          *(int *)(param_1 + 0x18) = iVar8;
          iVar7 = *(int *)(param_1 + 0x14);
          if (*(int *)(param_1 + 0x14) <= iVar4) {
            iVar7 = iVar4;
          }
          *(int *)(param_1 + 0x14) = iVar7;
          if (*(int *)(param_1 + 0x1c) <= iVar6) {
            iVar6 = *(int *)(param_1 + 0x1c);
          }
          *(int *)(param_1 + 0x1c) = iVar6;
        }
      }
    }
  }
  else {
LAB_0046bb1f:
    local_8 = 2;
  }
  return local_8;
}

