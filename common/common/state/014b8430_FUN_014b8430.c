// addr: 0x014b8430
// name: FUN_014b8430
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014b8430(int *param_1,void *param_2)

{
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  int iVar2;
  int unaff_EDI;
  int local_4;
  
                    /* Deserializes through FUN_01441e20, then reads an integer-as-bool into this+4
                       and another integer into this+8. Class/method identity is not recoverable
                       from the provided context. */
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    FUN_01441e20(param_2);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readInteger(param_2,&local_4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        *(bool *)(param_1 + 1) = local_4 != 0;
        bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xfffffff0);
        uVar3 = extraout_var_02;
        if (bVar1) {
          param_1[2] = unaff_EDI;
          iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
          return iVar2;
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

