// addr: 0x0152b5c0
// name: FUN_0152b5c0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0152b5c0(int *param_1,void *param_2)

{
  void *this;
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
  
                    /* Generic command/query deserializer: reads integer or string fields with hooks
                       and/or nested payloads, but no strings/RTTI identify the exact command or
                       query class. */
  this = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    FUN_013bcf60(this);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readString(this,param_1 + 0x11);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readString(this,param_1 + 0x18);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readString(this,param_1 + 0x1f);
          uVar3 = extraout_var_03;
          if (bVar1) {
            iVar2 = (**(code **)(*param_1 + 0x14))(this);
            return iVar2;
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

