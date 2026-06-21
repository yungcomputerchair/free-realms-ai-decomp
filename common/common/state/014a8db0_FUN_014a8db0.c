// addr: 0x014a8db0
// name: FUN_014a8db0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014a8db0(int *param_1,void *param_2)

{
  code *pcVar1;
  char extraout_AL;
  bool bVar2;
  uint3 extraout_var;
  uint3 uVar4;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar3;
  int *local_4;
  
                    /* Generic deserialize/read helper: reads integers, strings, nested commands, or
                       validated child nodes from a Deserializer, but no strings/RTTI identify the
                       specific command or node class. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar4 = extraout_var;
  if (extraout_AL != '\0') {
    bVar2 = NetworkCommand_deserializeTwoCommonFields(param_1,param_2);
    uVar4 = extraout_var_00;
    if (bVar2) {
      bVar2 = Deserializer_readInteger(param_2,(int *)&local_4);
      uVar4 = extraout_var_01;
      if (bVar2) {
        pcVar1 = *(code **)(*param_1 + 0x14);
        *(bool *)(param_1 + 3) = local_4 != (int *)0x0;
        iVar3 = (*pcVar1)(param_2);
        return iVar3;
      }
    }
  }
  return (uint)uVar4 << 8;
}

