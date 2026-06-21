// addr: 0x014463b0
// name: FUN_014463b0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014463b0(int *param_1,void *param_2)

{
  void *this;
  char extraout_AL;
  char extraout_AL_00;
  bool bVar1;
  char extraout_AL_01;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  uint3 extraout_var_06;
  uint3 extraout_var_07;
  uint3 extraout_var_08;
  uint3 extraout_var_09;
  uint3 extraout_var_10;
  uint3 extraout_var_11;
  int iVar2;
  void *unaff_EDI;
  
                    /* Versioned deserializer reading a primary string, optional compound member,
                       additional strings, and optional flags after FUN_01441e20. No safe class name
                       is available. */
  this = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (((((extraout_AL != '\0') &&
        (FUN_01441e20(this), uVar3 = extraout_var_00, extraout_AL_00 != '\0')) &&
       (bVar1 = Deserializer_readString(this,param_1 + 1), uVar3 = extraout_var_01, bVar1)) &&
      (((int)param_1 < 2 ||
       ((FUN_01445070(param_1 + 8), uVar3 = extraout_var_02, extraout_AL_01 != '\0' &&
        (bVar1 = Deserializer_readString(this,param_1 + 0xb), uVar3 = extraout_var_03,
        unaff_EDI = this, bVar1)))))) &&
     (((int)param_1 < 3 ||
      (bVar1 = Deserializer_readString(this,param_1 + 0x12), uVar3 = extraout_var_04, bVar1)))) {
    if (3 < (int)param_1) {
      bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff4);
      uVar3 = extraout_var_05;
      if (!bVar1) goto LAB_014463cc;
      *(bool *)(param_1 + 0x19) = unaff_EDI != (void *)0x0;
    }
    if (((((int)param_1 < 5) ||
         ((bVar1 = Deserializer_readString(this,param_1 + 0x1a), uVar3 = extraout_var_06, bVar1 &&
          (bVar1 = Deserializer_readString(this,param_1 + 0x21), uVar3 = extraout_var_07, bVar1))))
        && (((int)param_1 < 6 ||
            ((bVar1 = Deserializer_readString(this,param_1 + 0x28), uVar3 = extraout_var_08, bVar1
             && ((param_1 != (int *)0x6 ||
                 (bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff4),
                 uVar3 = extraout_var_09, bVar1)))))))) &&
       (((int)param_1 < 7 ||
        ((bVar1 = Deserializer_readString(this,param_1 + 0x2f), uVar3 = extraout_var_10, bVar1 &&
         (bVar1 = Deserializer_readString(this,param_1 + 0x36), uVar3 = extraout_var_11, bVar1))))))
    {
      iVar2 = (**(code **)(*param_1 + 0x14))(this);
      return iVar2;
    }
  }
LAB_014463cc:
  return (uint)uVar3 << 8;
}

