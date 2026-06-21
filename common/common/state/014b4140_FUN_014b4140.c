// addr: 0x014b4140
// name: FUN_014b4140
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014b4140(int *param_1,int *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  int *local_4;
  
                    /* Generic deserialize/read helper: reads integers, strings, nested commands, or
                       validated child nodes from a Deserializer, but no strings/RTTI identify the
                       specific command or node class. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar1 = MatchCommand_deserializeWithCommonFields(param_1,param_2);
  uVar3 = extraout_var;
  if (bVar1) {
    local_4 = param_2;
    bVar1 = Deserializer_readIntegerVector(&local_4,param_1 + 3);
    uVar3 = extraout_var_00;
    if (bVar1) {
      local_4 = param_2;
      bVar1 = Deserializer_readIntegerVector(&local_4,param_1 + 7);
      uVar3 = extraout_var_01;
      if (bVar1) {
        iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
        return iVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

