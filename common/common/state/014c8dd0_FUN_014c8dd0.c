// addr: 0x014c8dd0
// name: FUN_014c8dd0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014c8dd0(int *param_1,int *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  int iVar2;
  int *local_4;
  
                    /* Deserializes two integers, an integer vector, and a final integer after
                       FUN_013b2910. No safe class name is present. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar1 = LobbyCommand_deserialize(param_1,param_2);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      local_4 = param_2;
      bVar1 = Deserializer_readInteger(param_2,param_1 + 3);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readIntegerVector(&local_4,param_1 + 4);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(param_2,param_1 + 8);
          uVar3 = extraout_var_03;
          if (bVar1) {
            iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
            return iVar2;
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

