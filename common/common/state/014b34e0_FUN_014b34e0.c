// addr: 0x014b34e0
// name: FUN_014b34e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014b34e0(int *param_1,void *param_2)

{
  void *stream;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  int iVar2;
  
                    /* Generic deserialize/read helper: reads integers, strings, nested commands, or
                       validated child nodes from a Deserializer, but no strings/RTTI identify the
                       specific command or node class. */
  stream = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  bVar1 = MatchCommand_deserializeWithCommonFields(param_1,stream);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Deserializer_readInteger(stream,param_1 + 3);
    uVar3 = extraout_var_00;
    if (bVar1) {
      iVar2 = (**(code **)(*param_1 + 0x14))(stream);
      return iVar2;
    }
  }
  return (uint)uVar3 << 8;
}

