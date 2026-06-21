// addr: 0x01492080
// name: FUN_01492080
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01492080(int *param_1,void *param_2)

{
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  char extraout_AL_01;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  int iVar2;
  int unaff_EDI;
  int local_4;
  
                    /* Generic deserialize/read helper: reads integers, strings, nested commands, or
                       validated child nodes from a Deserializer, but no strings/RTTI identify the
                       specific command or node class. */
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    FUN_01494230(param_2);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readInteger(param_2,&local_4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        param_1[7] = local_4;
        bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xfffffff0);
        uVar3 = extraout_var_02;
        if (bVar1) {
          param_1[8] = unaff_EDI;
          (**(code **)(param_1[9] + 0x24))(param_2);
          uVar3 = extraout_var_03;
          if (extraout_AL_01 != '\0') {
            iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
            return iVar2;
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

