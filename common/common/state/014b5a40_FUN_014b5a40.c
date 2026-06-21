// addr: 0x014b5a40
// name: FUN_014b5a40
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014b5a40(int *param_1,void *param_2)

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
  int unaff_EDI;
  
                    /* Deserializes a string and, for newer versions, a second string plus
                       boolean-like integer after FUN_01441e20. Class identity is unknown. */
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
        if ((int)param_1 < 2) {
LAB_014b5ab0:
          iVar2 = (**(code **)(*param_1 + 0x14))(this);
          return iVar2;
        }
        bVar1 = Deserializer_readString(this,param_1 + 8);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff4);
          uVar3 = extraout_var_03;
          if (bVar1) {
            *(bool *)(param_1 + 0xf) = unaff_EDI != 0;
            goto LAB_014b5ab0;
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

