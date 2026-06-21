// addr: 0x0143fd20
// name: FUN_0143fd20
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0143fd20(int *param_1,void *param_2)

{
  void *this;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  int iVar2;
  
                    /* Deserializer wrapper that reads one integer and two string/complex fields
                       before finalizing. The owning class is unresolved. */
  this = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readInteger(this,param_1 + 1);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readString(this,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readString(this,param_1 + 9);
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

