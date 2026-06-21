// addr: 0x014f0910
// name: FUN_014f0910
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014f0910(int *param_1,void *param_2)

{
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  int iVar2;
  int unaff_EDI;
  int *local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    NetworkCommand_deserializeTemplate(param_1,param_2);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readInteger(param_2,param_1 + 1);
      uVar3 = extraout_var_01;
      if (bVar1) {
        if (1 < unaff_EDI) {
          FUN_012aa320();
          bVar1 = Deserializer_readStringVector(&local_4,param_1 + 2);
          uVar3 = extraout_var_02;
          if (bVar1) {
            FUN_012aa320();
            bVar1 = Deserializer_readStringVector(&local_4,param_1 + 6);
            uVar3 = extraout_var_03;
            if (bVar1) goto LAB_014f0994;
          }
          return (uint)uVar3 << 8;
        }
LAB_014f0994:
        iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
        return iVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

