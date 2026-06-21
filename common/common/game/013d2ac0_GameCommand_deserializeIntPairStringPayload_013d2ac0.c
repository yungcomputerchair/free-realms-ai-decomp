// addr: 0x013d2ac0
// name: GameCommand_deserializeIntPairStringPayload_013d2ac0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall GameCommand_deserializeIntPairStringPayload_013d2ac0(int *param_1,int *param_2)

{
  char extraout_AL;
  bool bVar1;
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
  int iVar2;
  int unaff_EDI;
  int *local_4;
  
                    /* Deserializes a command payload with integer fields, a string, and int-pair
                       vector data, using version-gated fields before finalization. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,param_1 + 3);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readString(param_2,param_1 + 0xb);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(param_2,param_1 + 0x12);
          uVar3 = extraout_var_03;
          if (bVar1) {
            local_4 = param_2;
            Game_deserializeIntPairVector_01300190(&local_4,param_1 + 0x13);
            Game_deserializeIntPairVector_01300190(&local_4,param_1 + 0x16);
            bVar1 = Deserializer_readInteger(param_2,param_1 + 0x19);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readString(param_2,param_1 + 0x21);
              uVar3 = extraout_var_05;
              if (bVar1) {
                bVar1 = Deserializer_readInteger(param_2,param_1 + 0x28);
                uVar3 = extraout_var_06;
                if (bVar1) {
                  bVar1 = Deserializer_readString(param_2,param_1 + 0x29);
                  uVar3 = extraout_var_07;
                  if (bVar1) {
                    if (1 < unaff_EDI) {
                      bVar1 = Deserializer_readString(param_2,param_1 + 4);
                      uVar3 = extraout_var_08;
                      if (!bVar1) goto LAB_013d2adc;
                      bVar1 = Deserializer_readString(param_2,param_1 + 0x1a);
                      uVar3 = extraout_var_09;
                      if (!bVar1) goto LAB_013d2adc;
                    }
                    if (2 < unaff_EDI) {
                      FUN_012aa320();
                      local_4 = param_2;
                      bVar1 = Deserializer_readStringVector(&local_4,param_1 + 0x3e);
                      uVar3 = extraout_var_10;
                      if (!bVar1) goto LAB_013d2adc;
                    }
                    iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
                    return iVar2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_013d2adc:
  return (uint)uVar3 << 8;
}

