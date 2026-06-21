// addr: 0x004b6bac
// name: FUN_004b6bac
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_004b6bac(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined3 extraout_var;
  void *pvVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_4c [28];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
                    /* Looks up or creates a cached UI/text cell/glyph entry, computes
                       bounds/visibility from multiple rectangles, and returns the entry through an
                       out pointer. No exact class evidence. */
  iVar9 = *param_1;
  if ((*(int *)(iVar9 + 0xbc) <= (int)((uint)param_2 & 0xffff)) &&
     ((int)((uint)param_2 & 0xffff) <= *(int *)(iVar9 + 0xc0))) {
    uVar10 = (uint)param_2 >> 7 & 0x1ff;
    iVar3 = *(int *)(iVar9 + 0xd0 + uVar10 * 4);
    if ((iVar3 != 0) || (iVar3 = FUN_004918fa(uVar10,1), iVar3 != 0)) {
      piVar4 = (int *)(iVar3 + ((uint)param_2 & 0x7f) * 0x4c);
      piVar8 = piVar4 + 5;
      if ((((piVar4[9] < 1) || (piVar4[10] < 1)) && (piVar4[0xd] == 0)) && (piVar4[0x10] == 0)) {
        local_8 = piVar4;
        (**(code **)(**(int **)(iVar9 + 0x44) + 0x114))(param_2,piVar8);
        piVar4[7] = *(int *)(iVar9 + 0x48) - *(int *)(iVar9 + 0x60);
        piVar4[8] = *(int *)(iVar9 + 0x4c) - *(int *)(iVar9 + 100);
        iVar3 = *(int *)(iVar9 + 0x5c);
        *piVar8 = *piVar8 + *(int *)(iVar9 + 0x58);
        piVar4[6] = piVar4[6] + iVar3;
        piVar4 = local_8;
      }
      goto LAB_004b6c47;
    }
  }
  piVar4 = (int *)0x0;
LAB_004b6c47:
  *param_3 = (int)piVar4;
  if (piVar4 != (int *)0x0) {
    if (piVar4[4] != 0) {
      return 1;
    }
    local_8 = piVar4;
    FUN_00483a11(*(undefined4 *)(*param_1 + 0x30),*param_1 + 0x2c);
    local_10 = local_18;
    local_c = local_14;
    while( true ) {
      FUN_00483a11(*(undefined4 *)(*param_1 + 0x34),*param_1 + 0x2c);
      cVar2 = FUN_00483583(&local_18);
      if (cVar2 != '\0') break;
      piVar8 = (int *)FUN_00483562();
      if (*(uint *)(*piVar8 + 4) < *(uint *)(*param_1 + 0x28)) {
        piVar8 = (int *)FUN_00483562();
        uVar10 = *(uint *)(*piVar8 + 4) % *(uint *)(*param_1 + 0x24);
        piVar8 = (int *)FUN_00483562();
        param_3 = (int *)((*(int *)(*piVar8 + 4) - uVar10) / *(uint *)(*param_1 + 0x24));
        puVar5 = (undefined4 *)FUN_00483562();
        piVar8 = (int *)*puVar5;
        piVar6 = (int *)*piVar8;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0xc))();
        }
        if ((int *)piVar4[4] != (int *)0x0) {
          (**(code **)(*(int *)piVar4[4] + 0x10))(0);
        }
        piVar4[4] = *piVar8;
        iVar9 = *(int *)(*param_1 + 0x18);
        piVar4[1] = *(int *)(*param_1 + 0x1c) * (int)param_3;
        *piVar4 = iVar9 * uVar10;
        iVar9 = *(int *)(*param_1 + 0x1c);
        piVar4[2] = *(int *)(*param_1 + 0x18);
        piVar4[3] = iVar9;
        local_20 = *piVar4;
        local_1c = piVar4[1];
        local_18 = piVar4[2] + -1 + local_20;
        local_14 = piVar4[3] + -1 + local_1c;
        FUN_00483562();
        FUN_004e820b(&local_20,0);
        piVar8 = (int *)FUN_00483562();
        *(int *)(*piVar8 + 4) = *(int *)(*piVar8 + 4) + 1;
        FUN_00483562();
        FUN_004b0688(&local_8);
        piVar8 = (int *)FUN_00483562();
        goto LAB_004b7079;
      }
      FUN_00483a41();
    }
    FUN_00483a11(*(undefined4 *)(*param_1 + 0x30),*param_1 + 0x2c);
    local_10 = local_18;
    local_c = local_14;
    iVar9 = *param_1;
    while( true ) {
      FUN_00483a11(*(undefined4 *)(iVar9 + 0x34),iVar9 + 0x2c);
      cVar2 = FUN_00483583(&local_18);
      if (cVar2 != '\0') break;
      FUN_00483562();
      puVar5 = (undefined4 *)FUN_004aa8be();
      piVar8 = (int *)*puVar5;
      piVar6 = (int *)FUN_00483562();
      if (*(char *)(*piVar6 + 0x4c) == '\0') {
        FUN_004c9ebe();
        puVar5 = (undefined4 *)FUN_00483562();
        (**(code **)(*(int *)param_1[1] + 0xd4))(*(undefined4 *)*puVar5,local_4c);
        piVar6 = (int *)FUN_00483562();
        *(undefined1 *)(*piVar6 + 0x4c) = 1;
        FUN_00483562();
        FUN_004e8134(local_4c,0);
        FUN_004c9f6e();
      }
      local_30 = *piVar8;
      local_2c = piVar8[1];
      local_28 = piVar8[2] + -1 + local_30;
      local_24 = piVar8[3] + -1 + local_2c;
      piVar6 = (int *)FUN_00483562();
      cVar2 = RectRegion_classifyRectCoverage((void *)(*piVar6 + 0x14),&local_30);
      if (CONCAT31(extraout_var,cVar2) == 0) {
        if ((int *)piVar8[4] != (int *)0x0) {
          (**(code **)(*(int *)piVar8[4] + 0x10))(0);
        }
        piVar8[4] = 0;
        puVar5 = (undefined4 *)FUN_00483562();
        piVar6 = (int *)*puVar5;
        piVar1 = (int *)*piVar6;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xc))();
        }
        if ((int *)piVar4[4] != (int *)0x0) {
          (**(code **)(*(int *)piVar4[4] + 0x10))(0);
        }
        piVar4[4] = *piVar6;
        iVar9 = piVar8[1];
        *piVar4 = *piVar8;
        piVar4[1] = iVar9;
        iVar9 = *(int *)(*param_1 + 0x1c);
        piVar4[2] = *(int *)(*param_1 + 0x18);
        piVar4[3] = iVar9;
        local_30 = *piVar4;
        local_2c = piVar4[1];
        local_28 = piVar4[2] + -1 + local_30;
        local_24 = piVar4[3] + -1 + local_2c;
        FUN_00483562();
        FUN_004e820b(&local_30,0);
        puVar5 = (undefined4 *)FUN_00492724();
        *puVar5 = piVar4;
        piVar4[0x11] = piVar8[0x11];
        local_14 = piVar8[0x12];
        goto LAB_004b7095;
      }
      FUN_00483a41();
      iVar9 = *param_1;
    }
    pvVar7 = Mem_Alloc(0x50);
    if (pvVar7 == (void *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)FUN_004ab730();
    }
    param_3 = piVar8;
    iVar9 = FUN_0047bc69(0x5c);
    if (iVar9 == 0) {
      param_2 = (int *)0x0;
    }
    else {
      iVar9 = *param_1;
      local_18 = *(int *)(iVar9 + 0x24) * *(int *)(iVar9 + 0x18);
      local_14 = *(int *)(iVar9 + 0x20) * *(int *)(iVar9 + 0x1c);
      param_2 = (int *)FUN_0048621e(*(undefined4 *)(iVar9 + 0x14),&local_18);
    }
    if ((int *)*piVar8 != (int *)0x0) {
      (**(code **)(*(int *)*piVar8 + 0x10))(0);
    }
    *piVar8 = (int)param_2;
    (**(code **)(*param_2 + 0x140))(*(undefined4 *)(*param_1 + 0x40));
    piVar8[1] = 1;
    *(undefined1 *)(piVar8 + 0x13) = 0;
    if ((int *)*piVar8 != (int *)0x0) {
      (**(code **)(*(int *)*piVar8 + 0xc))();
    }
    if ((int *)piVar4[4] != (int *)0x0) {
      (**(code **)(*(int *)piVar4[4] + 0x10))(0);
    }
    piVar4[4] = *piVar8;
    *piVar4 = 0;
    piVar4[1] = 0;
    iVar9 = *(int *)(*param_1 + 0x1c);
    piVar4[2] = *(int *)(*param_1 + 0x18);
    piVar4[3] = iVar9;
    FUN_004b2eea(&param_3);
    FUN_004aa8e6();
    FUN_004b0688(&local_8);
    local_30 = *piVar4;
    local_2c = piVar4[1];
    local_28 = piVar4[2] + -1 + local_30;
    local_24 = piVar4[3] + -1 + local_2c;
    FUN_004aa8e6();
    FUN_004e820b(&local_30,0);
    piVar8 = (int *)FUN_004aa8e6();
LAB_004b7079:
    FUN_00492b17(**(undefined4 **)(*piVar8 + 0xc),*piVar8 + 8);
    piVar4[0x11] = local_18;
LAB_004b7095:
    piVar4[0x12] = local_14;
  }
  return 0;
}

