// addr: 0x014c7c00
// name: FUN_014c7c00
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014c7c00(int *param_1,int *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  int *vector;
  int *local_4;
  
                    /* Deserializes an integer vector and a secondary compound/list member via
                       FUN_014c7ad0 after FUN_013b2910. No class identity is available. */
  vector = param_2;
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar1 = LobbyCommand_deserialize(param_1,param_2);
  uVar3 = extraout_var;
  if (bVar1) {
    local_4 = param_2;
    bVar1 = Deserializer_readIntegerVector(&local_4,param_1 + 2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      local_4 = param_2;
      bVar1 = LobbyCommand_deserializeIntVector(&local_4,param_1 + 6,vector);
      uVar3 = extraout_var_01;
      if (bVar1) {
        iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
        return iVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

