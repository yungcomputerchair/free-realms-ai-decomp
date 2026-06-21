// addr: 0x01534fb0
// name: FUN_01534fb0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01534fb0(int *param_1,void *param_2)

{
  void *value;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  int iVar2;
  int unaff_ESI;
  
                    /* Generic command/query deserializer: reads integer or string fields with hooks
                       and/or nested payloads, but no strings/RTTI identify the exact command or
                       query class. */
  value = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StreamAdapter_readThenCommit(param_1,value);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(value,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        if (unaff_ESI < 2) {
LAB_01535012:
          iVar2 = (**(code **)(*param_1 + 0x14))(value);
          return iVar2;
        }
        bVar1 = Deserializer_readInteger(value,param_1 + 3);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(value,param_1 + 4);
          uVar3 = extraout_var_03;
          if (bVar1) goto LAB_01535012;
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

