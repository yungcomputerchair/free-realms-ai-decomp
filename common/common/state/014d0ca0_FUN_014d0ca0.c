// addr: 0x014d0ca0
// name: FUN_014d0ca0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014d0ca0(int *param_1,void *param_2)

{
  char extraout_AL;
  bool bVar1;
  char extraout_AL_00;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  int iVar2;
  int unaff_EDI;
  void *local_4;
  
                    /* Deserializes through FUN_014d6880, then a compound member at this+8 via
                       FUN_014d09a0 and a boolean-like integer stored at this+0x18. Class identity
                       is not visible. */
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = GuildCommand_deserialize(param_1,param_2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      local_4 = param_2;
      FUN_014d09a0(param_1 + 2);
      uVar3 = extraout_var_01;
      if (extraout_AL_00 != '\0') {
        bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xfffffff0);
        *(bool *)(param_1 + 6) = unaff_EDI != 0;
        uVar3 = extraout_var_02;
        if (bVar1) {
          iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
          return iVar2;
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

