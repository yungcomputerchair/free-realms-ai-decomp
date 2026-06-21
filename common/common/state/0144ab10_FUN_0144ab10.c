// addr: 0x0144ab10
// name: FUN_0144ab10
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0144ab10(int *param_1,void *param_2)

{
  void *value;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  int iVar2;
  
                    /* Deserializer wrapper that deserializes a nested object via FUN_014474d0,
                       reads three integer fields, and finalizes. Exact class is unresolved. */
  value = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StreamAdapter_readThenCommit(param_1,value);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(value,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(value,param_1 + 3);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(value,param_1 + 4);
          uVar3 = extraout_var_03;
          if (bVar1) {
            iVar2 = (**(code **)(*param_1 + 0x14))(value);
            return iVar2;
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

