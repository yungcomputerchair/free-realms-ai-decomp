// addr: 0x014a7bf0
// name: FUN_014a7bf0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014a7bf0(int *param_1,void *param_2)

{
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  int iVar2;
  int unaff_EDI;
  int local_4;
  
                    /* Generic deserialize/read helper: reads integers, strings, nested commands, or
                       validated child nodes from a Deserializer, but no strings/RTTI identify the
                       specific command or node class. */
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = NetworkCommand_deserializeTwoCommonFields(param_1,param_2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,&local_4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        param_1[3] = local_4;
        bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xfffffff0);
        uVar3 = extraout_var_02;
        if (bVar1) {
          *(bool *)(param_1 + 4) = unaff_EDI != 0;
          iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
          return iVar2;
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

