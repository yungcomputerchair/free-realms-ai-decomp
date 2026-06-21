// addr: 0x01441720
// name: FUN_01441720
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01441720(int *param_1,void *param_2)

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
  int iVar2;
  
                    /* Deserializer wrapper matching the 014402d0 family: nested object plus two
                       string/complex fields. Class identity is not visible. */
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
          iVar2 = (**(code **)(*param_1 + 0x14))(this);
          return iVar2;
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

