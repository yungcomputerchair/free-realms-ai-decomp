// addr: 0x004b5033
// name: FUN_004b5033
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_004b5033(int *param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [8];
  int local_20;
  int local_1c [4];
  int local_c;
  int local_8;
  
                    /* Updates aggregate metrics and child positions for an indexed collection when
                       items are inserted or removed; recalculates max extents and offsets. No
                       class/file evidence, so left unnamed. */
  local_20 = param_3 - param_5;
  iVar6 = 0;
  local_8 = 0;
  local_c = 0;
  local_1c[0] = FUN_00482d4b();
  if ((int)param_4 < 0) {
    param_4 = local_1c[0];
  }
  bVar1 = false;
  if (local_1c[0] == 0) {
    FUN_004adf12(param_3);
    param_5 = param_1[6];
    uVar7 = 0;
    if (param_3 != 0) {
      do {
        param_4 = param_2[uVar7];
        iVar6 = *(int *)(param_4 + 0x14);
        if (param_5 != iVar6) {
          if (param_5 < iVar6) {
            param_5 = iVar6;
          }
          bVar1 = true;
        }
        param_1[2] = param_1[2] + *(int *)(param_4 + 0xc);
        iVar6 = *(int *)(param_4 + 8) + *(int *)(param_4 + 0x10);
        if (param_1[3] < iVar6) {
          param_1[3] = iVar6;
        }
        FUN_004b2d32(&param_4);
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_3);
    }
    iVar6 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    param_4 = 0;
    if (param_3 != 0) {
      do {
        piVar2 = (int *)FUN_00482d7f(param_4);
        iVar4 = *piVar2;
        if (local_34 < *(int *)(iVar4 + 0x1c)) {
          local_34 = *(int *)(iVar4 + 0x1c);
        }
        if (local_2c < *(int *)(iVar4 + 0x24)) {
          local_2c = *(int *)(iVar4 + 0x24);
        }
        if (iVar6 < *(int *)(iVar4 + 0x18)) {
          iVar6 = *(int *)(iVar4 + 0x18);
        }
        if (local_30 < *(int *)(iVar4 + 0x20)) {
          local_30 = *(int *)(iVar4 + 0x20);
        }
        param_4 = param_4 + 1;
      } while (param_4 < param_3);
    }
    if (bVar1) {
      uVar7 = 0;
      param_1[6] = param_5;
      if (param_3 != 0) {
        do {
          iVar4 = param_2[uVar7];
          if (*(int *)(iVar4 + 0x14) < param_1[6]) {
            iVar5 = param_1[6] - *(int *)(iVar4 + 0x14);
            *(int *)(iVar4 + 8) = iVar5;
            iVar5 = *(int *)(iVar4 + 0x10) + iVar5;
            if (param_1[3] < iVar5) {
              param_1[3] = iVar5;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_3);
      }
    }
    param_1[2] = param_1[2] + local_30 + iVar6;
    *param_1 = *param_1 - param_1[7];
    param_1[1] = param_1[1] - param_1[8];
    *param_1 = *param_1 + iVar6;
    param_1[7] = iVar6;
    param_1[8] = local_34;
    param_1[1] = param_1[1] + local_34;
  }
  else {
    if ((param_5 != 0) && (iVar4 = param_4 + -1 + param_5, (int)param_4 <= iVar4)) {
      param_5 = (iVar4 - param_4) + 1;
      do {
        piVar2 = (int *)FUN_00482d7f(param_4);
        iVar4 = *piVar2;
        iVar6 = iVar6 - *(int *)(iVar4 + 0xc);
        local_8 = (local_8 + -1) - (*(int *)(iVar4 + 0x2c) + -1);
        if ((param_1[6] == *(int *)(iVar4 + 0x14)) ||
           (param_1[3] == *(int *)(iVar4 + 0x10) + *(int *)(iVar4 + 8))) {
          bVar1 = true;
        }
        FUN_0048108a(iVar4);
        FUN_0048334c(param_1[0xb],param_1 + 10);
        puVar3 = (undefined4 *)FUN_004a05ab(local_28,param_4);
        FUN_004a5c2a(&local_30,*puVar3,puVar3[1]);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      param_5 = 0;
      local_c = iVar6;
    }
    iVar4 = local_c;
    if (param_3 != 0) {
      FUN_004adf12(local_1c[0] + param_3);
      param_5 = (param_3 - 1) + param_4;
      param_3 = param_4;
      iVar4 = local_c;
      if ((int)param_4 <= param_5) {
        do {
          local_1c[0] = *param_2;
          iVar6 = iVar6 + *(int *)(local_1c[0] + 0xc);
          local_8 = local_8 + *(int *)(local_1c[0] + 0x2c);
          if ((param_1[6] != *(int *)(local_1c[0] + 0x14)) ||
             (param_1[3] < *(int *)(local_1c[0] + 0x10) + *(int *)(local_1c[0] + 8))) {
            bVar1 = true;
          }
          FUN_0048334c(param_1[0xb],param_1 + 10);
          puVar3 = (undefined4 *)FUN_004a05ab(&local_30,param_3);
          FUN_004b0351(local_28,*puVar3,puVar3[1],local_1c);
          param_3 = param_3 + 1;
          param_2 = param_2 + 1;
          iVar4 = iVar6;
        } while ((int)param_3 <= param_5);
      }
    }
    local_c = iVar4;
    iVar6 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    param_3 = 0;
    iVar4 = FUN_00482d4b();
    if (iVar4 != 0) {
      do {
        piVar2 = (int *)FUN_00482d7f(param_3);
        iVar4 = *piVar2;
        if (iVar6 < *(int *)(iVar4 + 0x1c)) {
          iVar6 = *(int *)(iVar4 + 0x1c);
        }
        if (local_2c < *(int *)(iVar4 + 0x24)) {
          local_2c = *(int *)(iVar4 + 0x24);
        }
        if (local_38 < *(int *)(iVar4 + 0x18)) {
          local_38 = *(int *)(iVar4 + 0x18);
        }
        if (local_30 < *(int *)(iVar4 + 0x20)) {
          local_30 = *(int *)(iVar4 + 0x20);
        }
        param_3 = param_3 + 1;
        uVar7 = FUN_00482d4b();
      } while (param_3 < uVar7);
    }
    if (bVar1) {
      param_5 = FUN_00482d4b();
      param_5 = param_5 + -1;
      param_1[6] = 0;
      param_3 = 0;
      if (-1 < param_5) {
        do {
          piVar2 = (int *)FUN_00482d7f(param_3);
          if (param_1[6] < *(int *)(*piVar2 + 0x14)) {
            param_1[6] = *(int *)(*piVar2 + 0x14);
          }
          param_3 = param_3 + 1;
        } while ((int)param_3 <= param_5);
      }
      param_3 = 0;
      if (-1 < param_5) {
        do {
          piVar2 = (int *)FUN_00482d7f(param_3);
          iVar4 = *piVar2;
          iVar5 = param_1[6] - *(int *)(iVar4 + 0x14);
          *(int *)(iVar4 + 8) = iVar5;
          iVar5 = iVar5 + *(int *)(iVar4 + 0x10);
          if (param_1[3] < iVar5) {
            param_1[3] = iVar5;
          }
          param_3 = param_3 + 1;
        } while ((int)param_3 <= param_5);
      }
    }
    param_1[2] = param_1[2] + local_30 + local_38;
    param_1[3] = param_1[3] + local_2c + iVar6;
    *param_1 = *param_1 - param_1[7];
    *param_1 = *param_1 + local_38;
    param_1[1] = param_1[1] - param_1[8];
    param_1[7] = local_38;
    param_1[8] = iVar6;
    param_1[1] = param_1[1] + iVar6;
    if ((local_8 != 0) || (local_c != 0)) {
      param_1[2] = param_1[2] + local_c;
      iVar4 = FUN_00482d4b();
      for (iVar6 = local_20 + param_4; iVar6 <= iVar4 + -1; iVar6 = iVar6 + 1) {
        piVar2 = (int *)FUN_00482d7f(iVar6);
        iVar5 = *piVar2;
        piVar2 = (int *)(iVar5 + 0x28);
        *piVar2 = *piVar2 + local_8;
        piVar2 = (int *)(iVar5 + 4);
        *piVar2 = *piVar2 + local_c;
      }
    }
  }
  return;
}

