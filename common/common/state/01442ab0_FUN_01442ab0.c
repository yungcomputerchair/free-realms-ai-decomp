// addr: 0x01442ab0
// name: FUN_01442ab0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01442ab0(int *param_1,void *param_2)

{
  void *this;
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  int iVar2;
  
                    /* Deserializer wrapper that reads two integer fields, a string/complex field,
                       and two more integer fields before finalizing. Owning class is not evident.
                        */
  this = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readInteger(this,param_1 + 1);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(this,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readString(this,param_1 + 3);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(this,param_1 + 10);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readInteger(this,param_1 + 0xb);
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

