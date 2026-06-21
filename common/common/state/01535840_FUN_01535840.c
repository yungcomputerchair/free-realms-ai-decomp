// addr: 0x01535840
// name: FUN_01535840
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01535840(int *param_1,void *param_2)

{
  code *pcVar1;
  char extraout_AL;
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
    bVar2 = StreamAdapter_readThenCommit(param_1,param_2);
    uVar4 = extraout_var_00;
    if (bVar2) {
      bVar2 = Deserializer_readInteger(param_2,(int *)&local_4);
      uVar4 = extraout_var_01;
      if (bVar2) {
        pcVar1 = *(code **)(*param_1 + 0x14);
        *(bool *)(param_1 + 2) = local_4 != (int *)0x0;
        iVar3 = (*pcVar1)(param_2);
        return iVar3;
      }
    }
  }
  return (uint)uVar4 << 8;
}

