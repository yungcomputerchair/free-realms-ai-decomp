// addr: 0x014a71f0
// name: FUN_014a71f0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014a71f0(int *param_1,void *param_2)

{
  void *stream;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  int iVar2;
  int unaff_ESI;
  
                    /* Generic deserialize/read helper: reads integers, strings, nested commands, or
                       validated child nodes from a Deserializer, but no strings/RTTI identify the
                       specific command or node class. */
  stream = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = NetworkCommand_deserializeTwoCommonFields(param_1,stream);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(stream,param_1 + 4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(stream,param_1 + 6);
        uVar3 = extraout_var_02;
        if (bVar1) {
          if (1 < unaff_ESI) {
            bVar1 = Deserializer_readInteger(stream,param_1 + 7);
            uVar3 = extraout_var_03;
            if (!bVar1) goto LAB_014a720b;
          }
          if (2 < unaff_ESI) {
            bVar1 = Deserializer_readInteger(stream,param_1 + 8);
            uVar3 = extraout_var_04;
            if (!bVar1) goto LAB_014a720b;
          }
          iVar2 = (**(code **)(*param_1 + 0x14))(stream);
          return iVar2;
        }
      }
    }
  }
LAB_014a720b:
  return (uint)uVar3 << 8;
}

