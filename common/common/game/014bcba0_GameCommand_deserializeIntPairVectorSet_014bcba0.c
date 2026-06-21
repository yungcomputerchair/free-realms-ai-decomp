// addr: 0x014bcba0
// name: GameCommand_deserializeIntPairVectorSet_014bcba0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall GameCommand_deserializeIntPairVectorSet_014bcba0(int *param_1,int *param_2)

{
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
  int iVar2;
  int unaff_EDI;
  int *local_4;
  
                    /* Deserializes a command payload containing several integer fields and int-pair
                       vectors, with version-gated fields. Concrete command class is not identified.
                        */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar1 = LobbyCommand_deserialize(param_1,param_2);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,param_1 + 3);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(param_2,param_1 + 10);
        uVar3 = extraout_var_02;
        if (bVar1) {
          local_4 = param_2;
          Game_deserializeIntPairVector_01300190(&local_4,param_1 + 4);
          Game_deserializeIntPairVector_01300190(&local_4,param_1 + 7);
          bVar1 = Deserializer_readInteger(param_2,param_1 + 0xb);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readInteger(param_2,param_1 + 0xc);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(param_2,param_1 + 0xd);
              uVar3 = extraout_var_05;
              if (bVar1) {
                bVar1 = Deserializer_readInteger(param_2,param_1 + 0xe);
                uVar3 = extraout_var_06;
                if (bVar1) {
                  if (1 < unaff_EDI) {
                    local_4 = param_2;
                    bVar1 = Deserializer_readIntegerVector(&local_4,param_1 + 0xf);
                    uVar3 = extraout_var_07;
                    if (!bVar1) goto LAB_014bcbc4;
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
LAB_014bcbc4:
  return (uint)uVar3 << 8;
}

