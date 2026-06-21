// addr: 0x014858e0
// name: FUN_014858e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014858e0(int *param_1,void *param_2)

{
  void *this;
  char extraout_AL;
  bool bVar1;
  char extraout_AL_00;
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
  int iVar2;
  int unaff_EDI;
  int aiStack_c [2];
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
      bVar1 = Deserializer_readInteger(this,(int *)&stack0xffffffec);
      *(bool *)(param_1 + 2) = unaff_EDI != 0;
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readString(this,param_1 + 3);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readString(this,param_1 + 10);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readString(this,param_1 + 0x11);
            uVar3 = extraout_var_04;
            if (bVar1) {
              FUN_014857d0(param_1 + 0x18);
              uVar3 = extraout_var_05;
              if (extraout_AL_00 != '\0') {
                if (1 < iStack_4) {
                  bVar1 = Deserializer_readInteger(this,aiStack_c);
                  uVar3 = extraout_var_06;
                  if (!bVar1) goto LAB_014858fe;
                  param_1[0x1c] = aiStack_c[0];
                }
                if (2 < iStack_4) {
                  bVar1 = Deserializer_readInteger(this,(int *)&stack0xfffffff0);
                  uVar3 = extraout_var_07;
                  if (!bVar1) goto LAB_014858fe;
                  *(bool *)((int)param_1 + 9) = this != (void *)0x0;
                }
                if (3 < iStack_4) {
                  bVar1 = Deserializer_readInteger(this,param_1 + 0x1d);
                  uVar3 = extraout_var_08;
                  if (!bVar1) goto LAB_014858fe;
                }
                iVar2 = (**(code **)(*param_1 + 0x14))(this);
                return iVar2;
              }
            }
          }
        }
      }
    }
  }
LAB_014858fe:
  return (uint)uVar3 << 8;
}

