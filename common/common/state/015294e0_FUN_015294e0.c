// addr: 0x015294e0
// name: FUN_015294e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_015294e0(int *param_1,void *param_2)

{
  code *pcVar1;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar2;
  uint3 extraout_var;
  uint3 uVar4;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar3;
  int *local_4;
  
                    /* Generic command/query deserializer: reads integer or string fields with hooks
                       and/or nested payloads, but no strings/RTTI identify the exact command or
                       query class. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar4 = extraout_var;
  if (extraout_AL != '\0') {
    FUN_013bcf60(param_2);
    uVar4 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar2 = Deserializer_readInteger(param_2,(int *)&local_4);
      uVar4 = extraout_var_01;
      if (bVar2) {
        pcVar1 = *(code **)(*param_1 + 0x14);
        *(bool *)(param_1 + 0x11) = local_4 != (int *)0x0;
        iVar3 = (*pcVar1)(param_2);
        return iVar3;
      }
    }
  }
  return (uint)uVar4 << 8;
}

