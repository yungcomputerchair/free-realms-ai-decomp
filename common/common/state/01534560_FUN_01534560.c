// addr: 0x01534560
// name: FUN_01534560
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01534560(int *param_1,void *param_2)

{
  char extraout_AL;
  bool bVar1;
  char extraout_AL_00;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
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
  int iVar2;
  int unaff_EDI;
  undefined1 local_8 [4];
  void *pvStack_4;
  
                    /* Deserializes a state/command object with a mix of string and integer fields
                       through virtual begin/end hooks. No class-identifying evidence is present. */
  (**(code **)(*param_1 + 0x10))(param_2,local_8);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StreamAdapter_readThenCommit(param_1,param_2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        pvStack_4 = param_2;
        FUN_00420fb6();
        bVar1 = Deserializer_readIntegerVector(&pvStack_4,param_1 + 6);
        uVar3 = extraout_var_02;
        if (bVar1) {
          FUN_012aa320();
          bVar1 = Deserializer_readStringVector(&stack0xfffffff4,param_1 + 10);
          uVar3 = extraout_var_03;
          if (bVar1) {
            FUN_00420fb6();
            bVar1 = Deserializer_readIntegerVector(&pvStack_4,param_1 + 0xe);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(param_2,param_1 + 0x22);
              uVar3 = extraout_var_05;
              if (bVar1) {
                bVar1 = Deserializer_readInteger(param_2,param_1 + 0x23);
                uVar3 = extraout_var_06;
                if (bVar1) {
                  if (1 < unaff_EDI) {
                    bVar1 = Deserializer_readInteger(param_2,param_1 + 3);
                    uVar3 = extraout_var_07;
                    if (!bVar1) goto LAB_015346f5;
                    FUN_00420fb6();
                    bVar1 = Deserializer_readIntegerVector(&pvStack_4,param_1 + 0x12);
                    uVar3 = extraout_var_08;
                    if (!bVar1) goto LAB_015346f5;
                    FUN_00420fb6();
                    bVar1 = Deserializer_readIntegerVector(&pvStack_4,param_1 + 0x16);
                    uVar3 = extraout_var_09;
                    if (!bVar1) goto LAB_015346f5;
                    FUN_00420fb6();
                    bVar1 = Deserializer_readIntegerVector(&pvStack_4,param_1 + 0x1e);
                    uVar3 = extraout_var_10;
                    if (!bVar1) goto LAB_015346f5;
                    bVar1 = Deserializer_readInteger(param_2,param_1 + 4);
                    uVar3 = extraout_var_11;
                    if (!bVar1) goto LAB_015346f5;
                    bVar1 = Deserializer_readInteger(param_2,param_1 + 5);
                    uVar3 = extraout_var_12;
                    if (!bVar1) goto LAB_015346f5;
                  }
                  if (2 < unaff_EDI) {
                    FUN_00420fb6();
                    bVar1 = Deserializer_readIntegerVector(&pvStack_4,param_1 + 0x1a);
                    uVar3 = extraout_var_13;
                    if (!bVar1) goto LAB_015346f5;
                  }
                  if (3 < unaff_EDI) {
                    FUN_01534190();
                    pvStack_4 = param_2;
                    GameCommand_deserializeNestedList_015341d0(param_1 + 0x24);
                    uVar3 = extraout_var_14;
                    if (extraout_AL_00 == '\0') goto LAB_015346f5;
                  }
                  iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
                  return iVar2;
                }
              }
            }
          }
        }
LAB_015346f5:
        return (uint)uVar3 << 8;
      }
    }
  }
  return (uint)uVar3 << 8;
}

