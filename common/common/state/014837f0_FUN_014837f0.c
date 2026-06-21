// addr: 0x014837f0
// name: FUN_014837f0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014837f0(int *param_1,void *param_2)

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
  uint3 extraout_var_05;
  uint3 extraout_var_06;
  uint3 extraout_var_07;
  uint3 extraout_var_08;
  uint3 extraout_var_09;
  uint3 extraout_var_10;
  uint3 extraout_var_11;
  uint3 extraout_var_12;
  uint3 extraout_var_13;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  int iStack_4;
  
                    /* Generic deserialize/read helper: reads integers, strings, nested commands, or
                       validated child nodes from a Deserializer, but no strings/RTTI identify the
                       specific command or node class. */
  this = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readInteger(this,param_1 + 1);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readString(this,param_1 + 3);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readString(this,param_1 + 10);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readString(this,param_1 + 0x11);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readString(this,param_1 + 0x1f);
            uVar3 = extraout_var_04;
            if (bVar1) {
              if (1 < iStack_4) {
                bVar1 = Deserializer_readString(this,param_1 + 0x18);
                uVar3 = extraout_var_05;
                if (!bVar1) goto LAB_0148380e;
                bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff0);
                uVar3 = extraout_var_06;
                if (!bVar1) goto LAB_0148380e;
                *(bool *)(param_1 + 0x2d) = unaff_EDI != 0;
              }
              if (2 < iStack_4) {
                bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff0);
                uVar3 = extraout_var_07;
                if (!bVar1) goto LAB_0148380e;
                *(bool *)((int)param_1 + 0xb5) = unaff_EDI != 0;
                bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff4);
                uVar3 = extraout_var_08;
                if (!bVar1) goto LAB_0148380e;
                *(bool *)((int)param_1 + 0xb6) = unaff_ESI != 0;
              }
              if (3 < iStack_4) {
                bVar1 = Deserializer_readInteger(this,param_1 + 0x2e);
                uVar3 = extraout_var_09;
                if (!bVar1) goto LAB_0148380e;
              }
              if (4 < iStack_4) {
                bVar1 = Deserializer_readInteger(this,param_1 + 2);
                uVar3 = extraout_var_10;
                if (!bVar1) goto LAB_0148380e;
              }
              if (5 < iStack_4) {
                bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff4);
                uVar3 = extraout_var_11;
                if (!bVar1) goto LAB_0148380e;
                *(bool *)((int)param_1 + 0xbd) = unaff_ESI != 0;
                bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff0);
                uVar3 = extraout_var_12;
                if (!bVar1) goto LAB_0148380e;
                *(bool *)(param_1 + 0x2f) = unaff_EDI != 0;
              }
              if (6 < iStack_4) {
                bVar1 = Deserializer_readString(this,param_1 + 0x26);
                uVar3 = extraout_var_13;
                if (!bVar1) goto LAB_0148380e;
              }
              iVar2 = (**(code **)(*param_1 + 0x14))(this);
              return iVar2;
            }
          }
        }
      }
    }
  }
LAB_0148380e:
  return (uint)uVar3 << 8;
}

