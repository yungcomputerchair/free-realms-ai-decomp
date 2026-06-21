// addr: 0x01445420
// name: FUN_01445420
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01445420(int *param_1,void *param_2)

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
  uint3 extraout_var_12;
  int iVar2;
  void *unaff_EDI;
  
                    /* Versioned deserializer reading many string fields, a compound member via
                       FUN_01445070, and several optional boolean/integer fields after FUN_01441e20.
                       Class identity is unknown. */
  this = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if ((((((extraout_AL != '\0') &&
         (FUN_01441e20(this), uVar3 = extraout_var_00, extraout_AL_00 != '\0')) &&
        (bVar1 = Deserializer_readString(this,param_1 + 1), uVar3 = extraout_var_01, bVar1)) &&
       (bVar1 = Deserializer_readString(this,param_1 + 8), uVar3 = extraout_var_02, bVar1)) &&
      (((int)param_1 < 2 ||
       ((FUN_01445070(param_1 + 0xf), uVar3 = extraout_var_03, extraout_AL_01 != '\0' &&
        (bVar1 = Deserializer_readString(this,param_1 + 0x12), uVar3 = extraout_var_04,
        unaff_EDI = this, bVar1)))))) &&
     (((int)param_1 < 3 ||
      (bVar1 = Deserializer_readString(this,param_1 + 0x19), uVar3 = extraout_var_05, bVar1)))) {
    if (3 < (int)param_1) {
      bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff4);
      uVar3 = extraout_var_06;
      if (!bVar1) goto LAB_0144543c;
      *(bool *)(param_1 + 0x20) = unaff_EDI != (void *)0x0;
    }
    if (((((int)param_1 < 5) ||
         ((bVar1 = Deserializer_readString(this,param_1 + 0x21), uVar3 = extraout_var_07, bVar1 &&
          (bVar1 = Deserializer_readString(this,param_1 + 0x28), uVar3 = extraout_var_08, bVar1))))
        && (((int)param_1 < 6 ||
            ((bVar1 = Deserializer_readString(this,param_1 + 0x2f), uVar3 = extraout_var_09, bVar1
             && ((param_1 != (int *)0x6 ||
                 (bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff4),
                 uVar3 = extraout_var_10, bVar1)))))))) &&
       (((int)param_1 < 7 ||
        ((bVar1 = Deserializer_readString(this,param_1 + 0x36), uVar3 = extraout_var_11, bVar1 &&
         (bVar1 = Deserializer_readString(this,param_1 + 0x3d), uVar3 = extraout_var_12, bVar1))))))
    {
      iVar2 = (**(code **)(*param_1 + 0x14))(this);
      return iVar2;
    }
  }
LAB_0144543c:
  return (uint)uVar3 << 8;
}

