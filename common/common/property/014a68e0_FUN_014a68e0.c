// addr: 0x014a68e0
// name: FUN_014a68e0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014a68e0(int *param_1,int *param_2)

{
  char extraout_AL;
  bool bVar1;
  char extraout_AL_00;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  int *local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = NetworkCommand_deserializeTwoCommonFields(param_1,param_2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      local_4 = param_2;
      FUN_014a6720(param_1 + 3);
      uVar3 = extraout_var_01;
      if (extraout_AL_00 != '\0') {
        iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
        return iVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

