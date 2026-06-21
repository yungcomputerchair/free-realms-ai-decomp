// addr: 0x00648732
// name: FUN_00648732
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
FUN_00648732(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  undefined4 uVar6;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined2 local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined1 local_8 [4];
  
                    /* Performs a case-insensitive GUI text/control operation: checks control state,
                       wraps string parameters, lowercases wide characters, and dispatches helper
                       calls. No exact method evidence, so left unnamed. */
  uVar6 = param_3;
  if ((param_1[0x18] & 2U) == 0) {
    piVar1 = param_1 + 9;
    cVar3 = FUN_004c0ec3(piVar1,DAT_01bd0a90,param_2,param_3,param_4,param_5);
    if (cVar3 != '\0') {
      param_5._3_1_ = param_1[0x41] != 0;
      FUN_00643f7f();
      FUN_0062d6df(local_10,&param_2);
      FUN_006216a4(1,2);
      param_1[0x3b] = param_1[0x3b] | 0x8000000;
      param_1[0x3a] = param_1[0x3a];
      FUN_0040f97f(0);
      (**(code **)(*param_1 + 0x228))(0,0);
      if (param_5._3_1_ == '\0') {
        local_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        local_30 = 0;
        local_14 = DAT_01bd7064;
        local_2c = param_2;
        local_28 = param_4;
        (**(code **)(*param_1 + 0x110))(&local_30);
        if ((local_30 & 0x24924) != 0) {
          FUN_004d93a3();
        }
        if ((param_1[0x3c] & 0x20U) != 0) {
          param_2 = 0xfa;
          (**(code **)(*piVar1 + 0x18))(DAT_01bd3c1c,piVar1,&param_2);
          ResourceOffsetTable_setEntryOffset(param_1,(uint)DAT_01bd4f80,param_2);
        }
      }
      return 1;
    }
    cVar3 = FUN_004c0ec3(piVar1,DAT_01bd11dc,param_2,uVar6,param_4,param_5);
    if (cVar3 != '\0') {
      if (param_1[0x41] == 0) {
        return 1;
      }
      FUN_0062ea87(&param_2);
      iVar2 = param_1[0x41];
      if (*(int *)(iVar2 + 8) != 0) {
        return 1;
      }
      if (*(int *)(iVar2 + 0x14) != 0) {
        if ((param_1[0x3b] & 0x4000000U) == 0) {
          return 1;
        }
        if ((param_1[0x3d] & 0x10000000U) != 0) {
          return 1;
        }
        param_1[0x3a] = param_1[0x3a];
        param_1[0x3b] = param_1[0x3b] & 0xf7ffffff;
        FUN_006216a4(0,2);
        (**(code **)(*param_1 + 0x228))(0,0);
        return 1;
      }
      FUN_00643fb4();
      param_1[0x3b] = param_1[0x3b] & 0xf7ffffff;
      param_1[0x3a] = param_1[0x3a];
      FUN_0040fa82();
      local_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      local_14 = DAT_01bd30f0;
      local_2c = param_2;
      local_28 = param_4;
      local_30 = 0;
      (**(code **)(*param_1 + 0x110))(&local_30);
      if ((local_30 & 0x24924) != 0) {
        FUN_004d93a3();
      }
LAB_00648900:
      uVar6 = FUN_0062fb57(2);
      return uVar6;
    }
    cVar3 = FUN_004c0ec3(piVar1,DAT_01bd4f1c,param_2,uVar6,param_4,param_5);
    if (cVar3 == '\0') {
      cVar3 = FUN_004c0ec3(piVar1,DAT_01bcfee8,param_2,uVar6,param_4,param_5);
      if (cVar3 != '\0') goto LAB_00648900;
    }
    else {
      local_c = param_1[0x3a];
      if (((param_1[0x3b] & 0x4000000U) != 0) || ((param_1[0x3b] & 0x8000000U) != 0)) {
        FUN_006480c3(2);
        return 1;
      }
    }
    if (((char)param_5 != '\0') && (cVar3 = FUN_0060f48b(&param_3,local_8), cVar3 != '\0')) {
      wVar4 = _towlower((wint_t)uVar6);
      wVar5 = _towlower((wint_t)param_3);
      if (wVar5 == wVar4) goto LAB_00648900;
    }
  }
  uVar6 = FUN_004380de(param_2,uVar6,param_4,param_5);
  return uVar6;
}

