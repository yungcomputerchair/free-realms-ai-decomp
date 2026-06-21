// addr: 0x0147a5d0
// name: FUN_0147a5d0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0147a5d0(int *param_1,void *param_2)

{
  void *reader;
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
  
                    /* Generic deserialize/read helper: reads integers, strings, nested commands, or
                       validated child nodes from a Deserializer, but no strings/RTTI identify the
                       specific command or node class. */
  reader = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StateMachineState_deserializeWithPlayer(param_1,reader);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(reader,param_1 + 0x40);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(reader,param_1 + 0x3e);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(reader,param_1 + 0x3f);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readInteger(reader,param_1 + 0x41);
            uVar3 = extraout_var_04;
            if (bVar1) {
              iVar2 = (**(code **)(*param_1 + 0x14))(reader);
              return iVar2;
            }
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

