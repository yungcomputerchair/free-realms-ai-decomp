// addr: 0x01496b80
// name: FUN_01496b80
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01496b80(int *param_1,void *param_2)

{
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  int iStack_14;
  int aiStack_10 [3];
  int local_4;
  
                    /* Generic deserialize/read helper: reads integers, strings, nested commands, or
                       validated child nodes from a Deserializer, but no strings/RTTI identify the
                       specific command or node class. */
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = QueryNode_validateAndApplyChild(param_1,param_2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,&local_4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        param_1[4] = local_4;
        bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xffffffe4);
        uVar3 = extraout_var_02;
        if (bVar1) {
          param_1[5] = unaff_EDI;
          bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xffffffe8);
          uVar3 = extraout_var_03;
          if (bVar1) {
            param_1[6] = unaff_ESI;
            bVar1 = Deserializer_readInteger(param_2,&iStack_14);
            uVar3 = extraout_var_04;
            if (bVar1) {
              param_1[7] = iStack_14;
              bVar1 = Deserializer_readInteger(param_2,aiStack_10);
              uVar3 = extraout_var_05;
              if (bVar1) {
                param_1[8] = aiStack_10[0];
                iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
                return iVar2;
              }
            }
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

