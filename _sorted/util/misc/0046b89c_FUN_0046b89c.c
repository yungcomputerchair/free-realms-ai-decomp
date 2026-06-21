// addr: 0x0046b89c
// name: FUN_0046b89c
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


byte FUN_0046b89c(int param_1,undefined4 param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* Updates a rectangular region/paint node for one branch of a region operation,
                       lazily creating an accumulation region and merging bounds. Exact class
                       evidence absent. */
  if (*(void **)(param_1 + 0xc) == (void *)0x0) {
    if (param_5 != 1) {
      local_14 = *(int *)(param_1 + 0x10);
      local_10 = *(int *)(param_1 + 0x14);
      local_c = *(int *)(param_1 + 0x18);
      local_8 = *(int *)(param_1 + 0x1c);
      cVar3 = RectRegion_classifyRectCoverage((void *)param_4[2],&local_14);
      if (CONCAT31(extraout_var,cVar3) != 1) goto LAB_0046b8e8;
      uVar5 = FUN_00466ce6();
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      FUN_004dbd55(param_4[2]);
    }
LAB_0046b9e4:
    FUN_004651ee(param_2);
    local_30 = local_30 + *param_4;
    local_28 = local_28 + *param_4;
    local_2c = local_2c + param_4[1];
    local_24 = local_24 + param_4[1];
    cVar3 = FUN_0046556b(param_1,&local_30,0);
    if (cVar3 == '\0') {
      bVar4 = -(*(int *)(*(int *)(param_1 + 4) + 0x10) != 0) & 2;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x10);
      if (*param_3 < *(int *)(param_1 + 0x10)) {
        iVar6 = *param_3;
      }
      *(int *)(param_1 + 0x10) = iVar6;
      iVar6 = *(int *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x18) <= param_3[2]) {
        iVar6 = param_3[2];
      }
      *(int *)(param_1 + 0x18) = iVar6;
      iVar6 = *(int *)(param_1 + 0x14);
      if (param_3[1] < *(int *)(param_1 + 0x14)) {
        iVar6 = param_3[1];
      }
      *(int *)(param_1 + 0x14) = iVar6;
      iVar6 = *(int *)(param_1 + 0x1c);
      if (*(int *)(param_1 + 0x1c) <= param_3[3]) {
        iVar6 = param_3[3];
      }
      *(int *)(param_1 + 0x1c) = iVar6;
      iVar6 = *(int *)(param_1 + 0xc);
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0x10);
        iVar9 = *(int *)(iVar6 + 0xc);
        iVar8 = *(int *)(iVar6 + 0x14) + -1;
        iVar6 = *(int *)(iVar6 + 0x18) + -1;
        if (((*(int *)(param_1 + 0x1c) < iVar7) || (iVar6 < *(int *)(param_1 + 0x14))) ||
           ((iVar1 = *(int *)(param_1 + 0x10), iVar8 < iVar1 ||
            (iVar2 = *(int *)(param_1 + 0x18), iVar2 < iVar9)))) {
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        }
        else {
          if (iVar9 < iVar1) {
            iVar9 = iVar1;
          }
          *(int *)(param_1 + 0x10) = iVar9;
          if (iVar2 <= iVar8) {
            iVar8 = iVar2;
          }
          *(int *)(param_1 + 0x18) = iVar8;
          iVar9 = *(int *)(param_1 + 0x14);
          if (*(int *)(param_1 + 0x14) <= iVar7) {
            iVar9 = iVar7;
          }
          *(int *)(param_1 + 0x14) = iVar9;
          if (*(int *)(param_1 + 0x1c) <= iVar6) {
            iVar6 = *(int *)(param_1 + 0x1c);
          }
          *(int *)(param_1 + 0x1c) = iVar6;
        }
      }
      bVar4 = 1;
    }
  }
  else {
    if (param_5 == 1) {
      cVar3 = RectRegion_classifyRectCoverage(*(void **)(param_1 + 0xc),param_3);
      if (CONCAT31(extraout_var_02,cVar3) == 1) goto LAB_0046b9e4;
    }
    else {
      local_14 = *(int *)(param_1 + 0x10);
      local_10 = *(int *)(param_1 + 0x14);
      local_c = *(int *)(param_1 + 0x18);
      local_8 = *(int *)(param_1 + 0x1c);
      cVar3 = RectRegion_classifyRectCoverage((void *)param_4[2],&local_14);
      if (CONCAT31(extraout_var_00,cVar3) == 1) {
        iVar6 = param_4[2];
        local_20 = *(int *)(iVar6 + 0x10);
        local_24 = *(int *)(iVar6 + 0xc);
        iVar7 = *(int *)(iVar6 + 0x14) + -1;
        iVar6 = *(int *)(iVar6 + 0x18) + -1;
        if ((((local_20 <= param_3[3]) && (param_3[1] <= iVar6)) && (*param_3 <= iVar7)) &&
           (local_24 <= param_3[2])) {
          local_14 = *param_3;
          if (local_14 <= local_24) {
            local_14 = local_24;
          }
          local_c = iVar7;
          if (param_3[2] <= iVar7) {
            local_c = param_3[2];
          }
          local_10 = param_3[1];
          if (local_10 <= local_20) {
            local_10 = local_20;
          }
          local_8 = param_3[3];
          if (iVar6 < local_8) {
            local_8 = iVar6;
          }
        }
        cVar3 = RectRegion_classifyRectCoverage(*(void **)(param_1 + 0xc),&local_14);
        if (CONCAT31(extraout_var_01,cVar3) == 1) {
          RectRegion_intersectWithRegion(*(void **)(param_1 + 0xc),(void *)param_4[2],0);
          goto LAB_0046b9e4;
        }
      }
    }
LAB_0046b8e8:
    bVar4 = 2;
  }
  return bVar4;
}

