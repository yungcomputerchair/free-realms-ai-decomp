// addr: 0x00435d1a
// name: LayoutSolver_distributeSpan
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * LayoutSolver_distributeSpan(int *param_1,uint param_2,void *param_3,int param_4,char param_5)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *extraout_EAX;
  undefined4 *extraout_EAX_00;
  undefined4 *extraout_EAX_01;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *unaff_ESI;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  int *piVar11;
  int local_68 [5];
  uint local_54;
  int local_50;
  undefined1 local_4c [4];
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  void *local_c;
  int *local_8;
  
                    /* Distributes an available integer span across layout items using
                       min/max/preferred sizes, weights, and stretch flags, writing each computed
                       allocation back to the item records. It handles fixed, weighted, and bounded
                       growth cases. */
  uVar6 = param_2;
  iVar4 = 0;
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((param_4 != 0) || (param_5 != '\0')) {
    local_10 = (void *)0x0;
    param_2 = 0;
    if (uVar6 != 0) {
      piVar3 = param_1 + 2;
      uVar9 = uVar6;
      do {
        iVar8 = *piVar3;
        if (iVar4 < iVar8) {
          param_2 = 0;
          iVar4 = iVar8;
        }
        if (iVar4 == iVar8) {
          param_2 = param_2 + 1;
        }
        local_10 = (void *)((int)local_10 + iVar8);
        piVar3 = piVar3 + 7;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    local_18 = (uint)param_3 / uVar6;
    if ((param_5 != '\0') && ((int)local_18 <= iVar4)) {
      if (uVar6 == 0) {
        return local_10;
      }
      param_1 = param_1 + 6;
      do {
        *param_1 = iVar4;
        param_1 = param_1 + 7;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      return local_10;
    }
    if ((int)param_3 <= (int)local_10) {
      if (uVar6 == 0) {
        return local_10;
      }
      param_1 = param_1 + 6;
      do {
        *param_1 = param_1[-4];
        param_1 = param_1 + 7;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      return local_10;
    }
    if ((int)local_18 < iVar4) {
      iVar8 = 0;
      local_1c = 0;
      do {
        iVar8 = iVar8 + param_2;
        local_1c = local_1c + param_2 * iVar4;
        local_18 = ((int)param_3 - local_1c) / (uVar6 - iVar8);
        iVar5 = 0;
        param_2 = 0;
        if (uVar6 == 0) break;
        piVar3 = param_1 + 2;
        local_14 = uVar6;
        do {
          iVar1 = *piVar3;
          if ((iVar1 < iVar4) && ((int)local_18 < iVar1)) {
            if (iVar5 < iVar1) {
              param_2 = 0;
              iVar5 = iVar1;
            }
            if (iVar5 == iVar1) {
              param_2 = param_2 + 1;
            }
          }
          piVar3 = piVar3 + 7;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
        iVar4 = iVar5;
      } while (iVar5 != 0);
    }
    iVar4 = 0;
    if (uVar6 != 0) {
      puVar2 = (uint *)(param_1 + 6);
      uVar9 = uVar6;
      do {
        uVar7 = puVar2[-4];
        if ((int)puVar2[-4] < (int)local_18) {
          uVar7 = local_18;
        }
        *puVar2 = uVar7;
        iVar4 = iVar4 + uVar7;
        puVar2 = puVar2 + 7;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar9 = 0;
    if ((int)param_3 <= iVar4) {
      return param_3;
    }
    param_1 = param_1 + 6;
    do {
      if (uVar6 <= uVar9) {
        return param_3;
      }
      *param_1 = *param_1 + 1;
      iVar4 = iVar4 + 1;
      uVar9 = uVar9 + 1;
      param_1 = param_1 + 7;
    } while (iVar4 < (int)param_3);
    return param_3;
  }
  iVar8 = 0;
  iVar4 = 0;
  local_8 = (void *)0x0;
  local_c = (void *)0x0;
  if (param_2 != 0) {
    piVar3 = param_1 + 2;
    local_1c = param_2;
    do {
      local_8 = (int *)((int)local_8 + *piVar3);
      local_c = (void *)((int)local_c + piVar3[2]);
      piVar3[4] = *piVar3;
      if (*(char *)((int)piVar3 + 0xd) != '\0') {
        uVar6 = 1;
        if (*(byte *)(piVar3 + 3) != 0) {
          uVar6 = (uint)*(byte *)(piVar3 + 3);
          iVar4 = iVar4 + uVar6;
        }
        iVar8 = iVar8 + uVar6;
      }
      piVar3 = piVar3 + 7;
      local_1c = local_1c - 1;
    } while (local_1c != 0);
    local_1c = 0;
  }
  if ((int)param_3 <= (int)local_8) {
    return local_8;
  }
  if (iVar4 != 0) {
    local_1c = ((int)param_3 << 10) / iVar8;
    local_10 = (void *)0x0;
    uVar6 = 0;
    if (param_2 != 0) {
      piVar3 = param_1 + 4;
      do {
        if (*(char *)((int)piVar3 + 5) != '\0') {
          iVar4 = ((int)(*(byte *)(piVar3 + 1) * local_1c) >> 10) +
                  (uint)((int)uVar6 < (int)param_3 - ((int)(local_1c * iVar8) >> 10));
          if (iVar4 < piVar3[-2]) {
            iVar4 = piVar3[-2];
          }
          *piVar3 = iVar4;
        }
        local_10 = (void *)((int)local_10 + *piVar3);
        piVar3[2] = *piVar3;
        uVar6 = uVar6 + 1;
        piVar3 = piVar3 + 7;
      } while (uVar6 < param_2);
    }
    if (local_10 == param_3) {
      return local_10;
    }
  }
  uVar6 = 0;
  local_14 = 0;
  if (local_c == param_3) {
    if (param_2 == 0) {
      return local_c;
    }
    param_1 = param_1 + 6;
    do {
      *param_1 = param_1[-2];
      param_1 = param_1 + 7;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    return local_c;
  }
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  StdVectorPair_resize(local_4c,param_2);
  if (param_2 != 0) {
    do {
      puVar2 = StdVector_atElementPtr4(local_4c,uVar6);
      *puVar2 = uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2);
  }
  local_c = (void *)0x0;
  iVar4 = (int)param_3 - (int)local_8;
  local_18 = 0;
  uVar6 = local_1c;
  while ((local_48 != 0 && (iVar8 = local_44 - local_48 >> 2, iVar8 != 0))) {
    local_10 = (void *)((iVar4 << 10) / iVar8);
    uVar6 = iVar4 - (iVar8 * (int)local_10 >> 10);
    local_8 = (void *)0x0;
    local_1c = uVar6;
    while( true ) {
      if ((local_48 == 0) || ((void *)(local_44 - local_48 >> 2) <= local_8)) goto LAB_00435f35;
      piVar3 = StdVector_atElementPtr4(local_4c,(int)local_8);
      iVar8 = *piVar3;
      iVar5 = param_1[iVar8 * 7 + 3];
      if (param_1[iVar8 * 7 + 4] < param_1[iVar8 * 7 + 3]) {
        iVar5 = param_1[iVar8 * 7 + 4];
      }
      if (iVar5 < (int)((uint)((int)local_8 < (int)uVar6) + param_1[iVar8 * 7 + 2] +
                       ((int)local_10 >> 10))) break;
      local_8 = (int *)((int)local_8 + 1);
    }
    local_c = (void *)((int)local_c + iVar5);
    param_1[iVar8 * 7 + 6] = iVar5;
    iVar4 = iVar4 + (param_1[iVar8 * 7 + 2] - iVar5);
    FUN_00416f56(local_48,local_4c);
    Pair_copyAfterConstructingValue(local_24,local_2c,local_8,unaff_ESI);
    FUN_0041f3b5(local_34,*extraout_EAX,extraout_EAX[1]);
  }
LAB_00435f35:
  for (uVar9 = 0; (pvVar10 = local_c, local_48 != 0 && (uVar9 < (uint)(local_44 - local_48 >> 2)));
      uVar9 = uVar9 + 1) {
    piVar3 = StdVector_atElementPtr4(local_4c,uVar9);
    iVar4 = (uint)((int)uVar9 < (int)uVar6) + param_1[*piVar3 * 7 + 2] + ((int)local_10 >> 10);
    local_c = (void *)((int)local_c + iVar4);
    param_1[*piVar3 * 7 + 6] = iVar4;
  }
  if ((int)param_3 <= (int)local_c) {
    StdVector_clearStorage(local_4c);
    return pvVar10;
  }
  FUN_00420fb6();
  uVar6 = 0;
  if (param_2 != 0) {
    local_8 = param_1;
    do {
      piVar3 = local_8;
      piVar11 = local_68;
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar11 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar11 = piVar11 + 1;
      }
      if (((char)(local_54 >> 8) != '\0') && (local_50 < local_68[3])) {
        local_20 = uVar6;
        FUN_0042c155(&local_20);
        local_14 = local_14 + (local_54 & 0xff);
      }
      local_8 = local_8 + 7;
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2);
    if (local_14 != 0) {
      param_2 = local_14;
      for (pvVar10 = (void *)0x0; (local_48 != 0 && (pvVar10 < (void *)(local_44 - local_48 >> 2)));
          pvVar10 = (void *)((int)pvVar10 + 1)) {
        piVar3 = StdVector_atElementPtr4(local_4c,(int)pvVar10);
        if ((char)param_1[*piVar3 * 7 + 5] == '\0') {
          FUN_00416f56(local_48,local_4c);
          Pair_copyAfterConstructingValue(local_24,local_34,pvVar10,unaff_ESI);
          FUN_0041f3b5(local_2c,*extraout_EAX_00,extraout_EAX_00[1]);
          pvVar10 = (void *)((int)pvVar10 + -1);
        }
      }
      goto LAB_00435ff4;
    }
  }
  if (local_48 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = local_44 - local_48 >> 2;
  }
LAB_00435ff4:
  uVar6 = (int)param_3 - (int)local_c;
  local_14 = uVar6;
  while ((local_48 != 0 && (local_44 - local_48 >> 2 != 0))) {
    local_10 = (void *)((int)(uVar6 << 10) / (int)param_2);
    iVar4 = uVar6 - ((int)((int)local_10 * param_2) >> 10);
    local_8 = (void *)0x0;
    local_1c = iVar4;
    while( true ) {
      if ((local_48 == 0) || ((void *)(local_44 - local_48 >> 2) <= local_8)) goto LAB_00436173;
      piVar3 = StdVector_atElementPtr4(local_4c,(int)local_8);
      iVar8 = *piVar3;
      if (*(byte *)(param_1 + iVar8 * 7 + 5) == 0) {
        uVar9 = 1;
      }
      else {
        uVar9 = (uint)*(byte *)(param_1 + iVar8 * 7 + 5);
      }
      iVar5 = ((int)(uVar9 * (int)local_10) >> 10) + param_1[iVar8 * 7 + 6];
      if ((int)local_18 < iVar4) {
        uVar6 = iVar4 - local_18;
        if ((int)uVar9 <= (int)(iVar4 - local_18)) {
          uVar6 = uVar9;
        }
        iVar5 = iVar5 + uVar6;
        local_18 = local_18 + uVar6;
        uVar6 = local_14;
      }
      if (param_1[iVar8 * 7 + 3] < iVar5) break;
      local_8 = (int *)((int)local_8 + 1);
    }
    iVar4 = param_1[iVar8 * 7 + 6];
    iVar5 = param_1[iVar8 * 7 + 3];
    param_2 = param_2 - uVar9;
    param_1[iVar8 * 7 + 6] = iVar5;
    uVar6 = uVar6 + (iVar4 - iVar5);
    local_c = (void *)((int)local_c + (iVar5 - iVar4));
    local_14 = uVar6;
    FUN_00416f56(local_48,local_4c);
    Pair_copyAfterConstructingValue(local_2c,local_34,local_8,unaff_ESI);
    FUN_0041f3b5(local_3c,*extraout_EAX_01,extraout_EAX_01[1]);
  }
LAB_00436173:
  iVar4 = 0;
  local_8 = (int *)0x0;
  while ((uVar6 = 0, local_48 != 0 && (local_8 < (uint)(local_44 - local_48 >> 2)))) {
    piVar3 = StdVector_atElementPtr4(local_4c,(int)local_8);
    iVar8 = *piVar3;
    if (*(byte *)(param_1 + iVar8 * 7 + 5) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = (uint)*(byte *)(param_1 + iVar8 * 7 + 5);
    }
    iVar5 = ((int)(uVar6 * (int)local_10) >> 10) + param_1[iVar8 * 7 + 6];
    if (iVar4 < (int)local_1c) {
      uVar9 = local_1c - iVar4;
      if ((int)uVar6 <= (int)(local_1c - iVar4)) {
        uVar9 = uVar6;
      }
      iVar5 = iVar5 + uVar9;
      iVar4 = iVar4 + uVar9;
    }
    local_c = (void *)((int)local_c + (iVar5 - param_1[iVar8 * 7 + 6]));
    local_8 = (int *)((int)local_8 + 1);
    param_1[iVar8 * 7 + 6] = iVar5;
  }
  for (; (((int)local_c < (int)param_3 && (local_48 != 0)) &&
         (uVar6 < (uint)(local_44 - local_48 >> 2))); uVar6 = uVar6 + 1) {
    piVar3 = StdVector_atElementPtr4(local_4c,uVar6);
    local_c = (void *)((int)local_c + 1);
    param_1[*piVar3 * 7 + 6] = param_1[*piVar3 * 7 + 6] + 1;
  }
  StdVector_clearStorage(local_4c);
  return local_c;
}

