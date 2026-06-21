// addr: 0x0144afd0
// name: FUN_0144afd0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0144afd0(int *param_1,void *param_2)

{
  void *value;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  int unaff_ESI;
  
                    /* Version-gated deserializer wrapper: reads a nested object via FUN_014474d0
                       and optionally an integer field before finalizing. Owning class unknown. */
  value = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StreamAdapter_readThenCommit(param_1,value);
    uVar3 = extraout_var_00;
    if (bVar1) {
      if (0 < unaff_ESI) {
        bVar1 = Deserializer_readInteger(value,param_1 + 2);
        uVar3 = extraout_var_01;
        if (!bVar1) goto LAB_0144afeb;
      }
      iVar2 = (**(code **)(*param_1 + 0x14))(value);
      return iVar2;
    }
  }
LAB_0144afeb:
  return (uint)uVar3 << 8;
}

