// addr: 0x014b9b80
// name: FUN_014b9b80
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014b9b80(int *param_1,void *param_2)

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
  uint3 extraout_var_04;
  int iVar2;
  
                    /* Deserializes a string, two integers, and a trailing string after
                       FUN_01441e20. No class-identifying evidence is present. */
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
        bVar1 = Deserializer_readInteger(this,param_1 + 8);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(this,param_1 + 9);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readString(this,param_1 + 10);
            uVar3 = extraout_var_04;
            if (bVar1) {
              iVar2 = (**(code **)(*param_1 + 0x14))(this);
              return iVar2;
            }
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

