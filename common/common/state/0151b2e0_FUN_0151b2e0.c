// addr: 0x0151b2e0
// name: FUN_0151b2e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0151b2e0(int *param_1,void *param_2)

{
  void *reader;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  
                    /* Generic command/query deserializer: reads integer or string fields with hooks
                       and/or nested payloads, but no strings/RTTI identify the exact command or
                       query class. */
  reader = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readIntegerWithHooks(param_1,reader);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(reader,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        iVar2 = (**(code **)(*param_1 + 0x14))(reader);
        return iVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

