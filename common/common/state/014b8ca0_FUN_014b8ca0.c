// addr: 0x014b8ca0
// name: FUN_014b8ca0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014b8ca0(int *param_1,void *param_2)

{
  void *this;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  int iVar2;
  
                    /* Deserializes a single string field at this+4 after the common FUN_01441e20
                       gate and virtual begin/end hooks. No class-identifying evidence is present.
                        */
  this = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    FUN_01441e20(this);
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      bVar1 = Deserializer_readString(this,param_1 + 1);
      uVar3 = extraout_var_01;
      if (bVar1) {
        iVar2 = (**(code **)(*param_1 + 0x14))(this);
        return iVar2;
      }
    }
  }
  return (uint)uVar3 << 8;
}

