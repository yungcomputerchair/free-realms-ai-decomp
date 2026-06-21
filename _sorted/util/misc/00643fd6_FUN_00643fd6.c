// addr: 0x00643fd6
// name: FUN_00643fd6
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
FUN_00643fd6(int *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_20 [12];
  uint local_14;
  uint local_10;
  uint local_c;
  char local_5;
  
                    /* Handles a GUI bitmap/control rendering or hit-test path, falling back when
                       disabled and otherwise computing bounds/state and dispatching through
                       graphics helper calls. No exact class/method evidence, so left unnamed. */
  if ((param_1[0x18] & 2U) != 0) {
    FUN_00419a70(DAT_01bd426c);
    uVar4 = FUN_004065d8(param_2,param_3,param_4,param_5,param_6);
    return uVar4;
  }
  cVar2 = FUN_004c0f9f(param_1 + 9,DAT_01bd0a90,param_2,param_3,param_4);
  if (cVar2 != '\0') {
    iVar1 = param_1[0x41];
    FUN_00643f7f();
    local_5 = (char)param_3;
    FUN_0062d799(local_20,&local_5);
    param_1[0x3b] = param_1[0x3b] | 0x8000000;
    param_1[0x3a] = param_1[0x3a];
    if ((param_1[0x3b] & 0x4000000U) == 0) {
      FUN_0042280f(0);
      FUN_0040f97f(0);
      param_1[0x3b] = param_1[0x3b] | 0x4000000;
      param_1[0x3a] = param_1[0x3a];
      piVar5 = (int *)FUN_0040f8f0();
      if (piVar5 == param_1) {
        FUN_006216a4(1,2);
      }
      (**(code **)(*param_1 + 0x228))(0,0);
      local_24 = DAT_01bd28f0;
      local_3c = param_3;
      local_38 = param_4;
      local_34 = param_5;
      local_30 = param_6;
      local_40 = 0;
      local_28 = 0;
      local_2c = 0;
      (**(code **)(*param_1 + 0x110))(&local_40);
      if ((local_40 & 0x24924) != 0) {
        FUN_004d93a3();
      }
      if ((param_1[0x3b] & 0x4000000U) == 0) {
        return 1;
      }
      if (iVar1 != 0) {
        return 1;
      }
      if ((param_1[0x3c] & 0x20U) == 0) {
        return 1;
      }
      param_3 = 0xfa;
      (**(code **)(param_1[9] + 0x18))(DAT_01bd3c1c,param_1 + 9,&param_3);
      ResourceOffsetTable_setEntryOffset(param_1,(uint)DAT_01bd4f80,param_3);
      return 1;
    }
    if (iVar1 != 0) {
      return 1;
    }
    goto LAB_006445b0;
  }
  cVar2 = FUN_004c0f9f(param_1 + 9,DAT_01bd11dc,param_2,param_3,param_4);
  if (cVar2 != '\0') {
    uVar6 = param_1[0x3b];
    FUN_00619893();
    if (param_1[0x41] != 0) {
      local_5 = (char)param_3;
      FUN_0062eadc(&local_5);
      if ((*(int *)(param_1[0x41] + 8) == 0) && (*(int *)(param_1[0x41] + 0x14) == 0)) {
        FUN_00643fb4();
        param_1[0x3b] = param_1[0x3b] & 0xf7ffffff;
        param_1[0x3a] = param_1[0x3a];
      }
    }
    if ((param_1[0x3b] & 0x4000000U) == 0) {
      return 1;
    }
    iVar1 = param_1[0x41];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
      return 1;
    }
    param_1[0x3a] = param_1[0x3a];
    param_1[0x3b] = param_1[0x3b] & 0xfbffffff;
    if (iVar1 == 0) {
      FUN_00422996();
      FUN_0040fa82();
      if ((param_1[0x3c] & 0x20U) != 0) {
        FUN_00424fe0(DAT_01bd4f80);
        FUN_00424fe0(DAT_01bd584c);
      }
    }
    else {
      FUN_00422996();
    }
    local_24 = DAT_01bd3760;
    local_3c = param_3;
    local_38 = param_4;
    local_34 = param_5;
    local_30 = param_6;
    local_40 = 0;
    local_28 = 0;
    local_2c = 0;
    (**(code **)(*param_1 + 0x110))(&local_40);
    if ((local_40 & 0x24924) != 0) {
      FUN_004d93a3();
    }
    if (((uVar6 & 0x8000000) != 0) && (param_1[0x41] == 0)) {
      FUN_0062fb57(2);
      return 1;
    }
    goto LAB_006445b0;
  }
  sVar3 = (short)param_2;
  if (sVar3 == DAT_01bc7524) {
    cVar2 = (**(code **)(*param_1 + 0x260))(param_5,param_6,0,0);
    if (cVar2 != '\0') {
      if ((param_1[0x3d] & 0x10000000U) != 0) goto LAB_0064434d;
LAB_0064446e:
      local_c = CONCAT31(local_c._1_3_,1);
      local_5 = '\x01';
      goto LAB_0064448b;
    }
    if ((param_1[0x3d] & 0x10000000U) == 0) goto LAB_0064434d;
    local_10 = FUN_00619893();
    param_1[0x3d] = param_1[0x3d] & 0xefffffff;
    param_1[0x3c] = param_1[0x3c];
    local_c = FUN_00619893();
    if ((((param_1[0x3b] & 0x4000000U) != 0) && ((param_1[0x3c] & 0x10000000U) == 0)) &&
       (*(int *)(param_1[0x41] + 8) == 0)) {
      uVar6 = param_1[0x3b] & 0xf7ffffff;
      param_1[0x3a] = param_1[0x3a];
      uVar7 = 0;
      goto LAB_00644510;
    }
    if (local_10 == local_c) goto LAB_0064434d;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = DAT_01bd18e4;
    local_38 = local_10;
    local_40 = 0;
    local_3c = local_c;
    (**(code **)(*param_1 + 0x110))(&local_40);
    if ((local_40 & 0x24924) != 0) {
      FUN_004d93a3();
    }
    local_3c = local_c;
    local_38 = local_10;
  }
  else {
    if (sVar3 == DAT_01bc7430) {
      cVar2 = (**(code **)(*param_1 + 0x260))(param_5,param_6,0,0);
      if (cVar2 == '\0') goto LAB_0064434d;
      goto LAB_0064446e;
    }
    if (sVar3 != DAT_01bc7388) goto LAB_0064434d;
    local_c = local_c & 0xffffff00;
    local_5 = '\0';
LAB_0064448b:
    local_14 = FUN_00619893();
    param_1[0x3d] = param_1[0x3d] & 0xefffffff;
    param_1[0x3c] = param_1[0x3c];
    if (local_5 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x10000000;
    }
    param_1[0x3c] = param_1[0x3c];
    param_1[0x3d] = param_1[0x3d] | uVar6;
    local_10 = FUN_00619893();
    uVar6 = param_1[0x3b];
    if (((uVar6 & 0x4000000) != 0) && ((param_1[0x3c] & 0x10000000U) == 0)) {
      param_1[0x3a] = param_1[0x3a];
      uVar7 = local_c;
      if ((char)local_c == '\0') {
        uVar6 = uVar6 & 0xf7ffffff;
      }
      else {
        uVar6 = uVar6 | 0x8000000;
      }
LAB_00644510:
      param_1[0x3b] = uVar6;
      FUN_006216a4(uVar7,2);
      goto LAB_006445b0;
    }
    if (local_14 == local_10) {
LAB_0064434d:
      uVar4 = FUN_004065d8(param_2,param_3,param_4,param_5,param_6);
      return uVar4;
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = DAT_01bd18e4;
    local_38 = local_14;
    local_40 = 0;
    local_3c = local_10;
    (**(code **)(*param_1 + 0x110))(&local_40);
    if ((local_40 & 0x24924) != 0) {
      FUN_004d93a3();
    }
    local_3c = local_10;
    local_38 = local_14;
  }
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_40 = 0;
  local_24 = DAT_01bd14bc;
  (**(code **)(*param_1 + 0x110))(&local_40);
  if ((local_40 & 0x24924) != 0) {
    FUN_004d93a3();
  }
LAB_006445b0:
  (**(code **)(*param_1 + 0x228))(0,0);
  return 1;
}

