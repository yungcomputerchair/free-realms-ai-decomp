// addr: 0x014c5500
// name: FUN_014c5500
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014c5500(int *param_1,int *param_2)

{
  bool bVar1;
  char extraout_AL;
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
  int iVar2;
  int unaff_EDI;
  int *local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar1 = LobbyCommand_deserialize(param_1,param_2);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Deserializer_readInteger(param_2,param_1 + 9);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(param_2,param_1 + 7);
        uVar3 = extraout_var_02;
        if (bVar1) {
          local_4 = param_2;
          Deserializer_readTripleIntList(param_1 + 3);
          uVar3 = extraout_var_03;
          if (extraout_AL != '\0') {
            bVar1 = Deserializer_readInteger(param_2,param_1 + 8);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(param_2,param_1 + 10);
              uVar3 = extraout_var_05;
              if (bVar1) {
                bVar1 = Deserializer_readString(param_2,param_1 + 0xb);
                uVar3 = extraout_var_06;
                if (bVar1) {
                  if (1 < unaff_EDI) {
                    local_4 = param_2;
                    FUN_014c5180(param_1 + 0x12);
                    uVar3 = extraout_var_07;
                    if (extraout_AL_00 == '\0') goto LAB_014c5524;
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
LAB_014c5524:
  return (uint)uVar3 << 8;
}

