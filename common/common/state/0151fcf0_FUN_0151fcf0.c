// addr: 0x0151fcf0
// name: FUN_0151fcf0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x0151ffd4) */
/* WARNING: Removing unreachable block (ram,0x01520038) */

uint __thiscall FUN_0151fcf0(int *param_1,void *param_2)

{
  void *this;
  char extraout_AL;
  bool bVar1;
  char extraout_AL_00;
  char extraout_AL_01;
  uint3 extraout_var;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 uVar3;
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  uint3 extraout_var_06;
  uint3 extraout_var_07;
  uint3 extraout_var_08;
  uint3 extraout_var_09;
  uint3 extraout_var_10;
  uint3 extraout_var_11;
  uint3 extraout_var_12;
  uint3 extraout_var_13;
  uint3 extraout_var_14;
  uint3 extraout_var_15;
  uint3 extraout_var_16;
  uint3 extraout_var_17;
  uint3 extraout_var_18;
  uint3 extraout_var_19;
  uint uVar2;
  uint extraout_EAX;
  int unaff_EBP;
  int iVar4;
  void *local_2c;
  void *local_28;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Deserializes a state/command object with a mix of string and integer fields
                       through virtual begin/end hooks. No class-identifying evidence is present. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_016b85b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_28 = param_2;
  local_2c = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&local_20,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  uVar3 = extraout_var;
  if ((extraout_AL != '\0') &&
     (bVar1 = Deserializer_readIntegerWithHooks(param_1,param_2), uVar3 = extraout_var_00, bVar1)) {
    FUN_012aa320();
    bVar1 = Deserializer_readStringVector(&stack0xffffffd0,param_1 + 3);
    uVar3 = extraout_var_01;
    if (bVar1) {
      FUN_012aa320();
      bVar1 = Deserializer_readStringVector(&stack0xffffffd0,param_1 + 7);
      uVar3 = extraout_var_02;
      if (bVar1) {
        if ((int)local_28 < 2) {
          local_20 = 0;
          uStack_1c = 0;
          uStack_18 = 0;
          local_c = (void *)0x0;
          bVar1 = Deserializer_readStringVector(&stack0xffffffd0,auStack_24);
          if (!bVar1) {
            local_c = (void *)0xffffffff;
            StdVector_StdStringRange_clear(auStack_24);
            uVar3 = extraout_var_03;
            goto LAB_0151fdb0;
          }
          local_c = (void *)0xffffffff;
          StdVector_StdStringRange_clear(auStack_24);
        }
        FUN_012aa320();
        bVar1 = Deserializer_readStringVector(&stack0xffffffd0,param_1 + 0xb);
        uVar3 = extraout_var_04;
        if (bVar1) {
          FUN_00420fb6();
          bVar1 = Deserializer_readIntegerVector(&stack0xffffffcc,param_1 + 0xf);
          uVar3 = extraout_var_05;
          if (bVar1) {
            FUN_00420fb6();
            bVar1 = Deserializer_readIntegerVector(&stack0xffffffcc,param_1 + 0x13);
            uVar3 = extraout_var_06;
            if (bVar1) {
              FUN_00420fb6();
              bVar1 = Deserializer_readIntegerVector(&stack0xffffffcc,param_1 + 0x17);
              uVar3 = extraout_var_07;
              if (bVar1) {
                FUN_00420fb6();
                bVar1 = Deserializer_readIntegerVector(&stack0xffffffcc,param_1 + 0x1b);
                uVar3 = extraout_var_08;
                if (bVar1) {
                  FUN_00420fb6();
                  bVar1 = Deserializer_readIntegerVector(&stack0xffffffcc,param_1 + 0x1f);
                  uVar3 = extraout_var_09;
                  if (bVar1) {
                    FUN_00420fb6();
                    bVar1 = Deserializer_readIntegerVector(&stack0xffffffcc,param_1 + 0x23);
                    uVar3 = extraout_var_10;
                    if (bVar1) {
                      FUN_00420fb6();
                      bVar1 = Deserializer_readIntegerVector(&stack0xffffffcc,param_1 + 0x27);
                      uVar3 = extraout_var_11;
                      if (bVar1) {
                        FUN_00420fb6();
                        bVar1 = Deserializer_readIntegerVector(&stack0xffffffcc,param_1 + 0x2f);
                        uVar3 = extraout_var_12;
                        if (bVar1) {
                          FUN_00420fb6();
                          bVar1 = Deserializer_readIntegerVector(&stack0xffffffcc,param_1 + 0x33);
                          uVar3 = extraout_var_13;
                          if ((bVar1) &&
                             (bVar1 = Deserializer_readInteger(param_2,(int *)&local_2c),
                             uVar3 = extraout_var_14, bVar1)) {
                            StdVector16_clearAndReset(param_1 + 0x2b);
                            iVar4 = 0;
                            if (0 < (int)local_2c) {
                              do {
                                local_20 = 0;
                                uStack_1c = 0;
                                uStack_18 = 0;
                                local_c = (void *)0x1;
                                bVar1 = Deserializer_readIntegerVector(&stack0xffffffcc,auStack_24);
                                if (!bVar1) {
                                  local_c = (void *)0xffffffff;
                                  StdVector_clearStorage(auStack_24);
                                  ExceptionList = pvStack_14;
                                  return extraout_EAX & 0xffffff00;
                                }
                                FUN_0151f6a0(auStack_24);
                                local_c = (void *)0xffffffff;
                                StdVector_clearStorage(auStack_24);
                                iVar4 = iVar4 + 1;
                              } while (iVar4 < (int)local_2c);
                            }
                            this = pvStack_4;
                            bVar1 = Deserializer_readInteger(pvStack_4,param_1 + 2);
                            uVar3 = extraout_var_15;
                            if (bVar1) {
                              if ((int)local_28 < 2) {
LAB_0152004d:
                                uVar2 = (**(code **)(*param_1 + 0x14))(pvStack_4);
                                ExceptionList = pvStack_14;
                                return uVar2;
                              }
                              bVar1 = Deserializer_readInteger(this,(int *)&stack0xffffffcc);
                              uVar3 = extraout_var_16;
                              if (bVar1) {
                                FUN_014e4370();
                                iVar4 = 0;
                                if (0 < unaff_EBP) {
                                  do {
                                    FUN_01302e20(pvStack_4,&stack0xffffffd0);
                                    uVar3 = extraout_var_17;
                                    if (extraout_AL_00 == '\0') goto LAB_0151fdb0;
                                    iVar4 = iVar4 + 1;
                                  } while (iVar4 < unaff_EBP);
                                }
                                bVar1 = Deserializer_readInteger(pvStack_4,(int *)&stack0xffffffcc);
                                uVar3 = extraout_var_18;
                                if (bVar1) {
                                  FUN_014e4370();
                                  iVar4 = 0;
                                  if (0 < unaff_EBP) {
                                    do {
                                      FUN_01302e20(pvStack_4,&stack0xffffffd0);
                                      uVar3 = extraout_var_19;
                                      if (extraout_AL_01 == '\0') goto LAB_0151fdb0;
                                      iVar4 = iVar4 + 1;
                                    } while (iVar4 < unaff_EBP);
                                  }
                                  goto LAB_0152004d;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0151fdb0:
  ExceptionList = pvStack_14;
  return (uint)uVar3 << 8;
}

