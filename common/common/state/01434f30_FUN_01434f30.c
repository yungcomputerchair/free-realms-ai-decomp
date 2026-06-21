// addr: 0x01434f30
// name: FUN_01434f30
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01434f30(int *param_1,void *param_2)

{
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
  int iVar2;
  int unaff_EDI;
  int local_4;
  
                    /* Deserializer wrapper that reads a sequence of integer fields and one
                       string/complex field before finalizing. The owning class is not evident from
                       this context. */
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readInteger(param_2,param_1 + 1);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,&local_4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        param_1[2] = local_4;
        bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xfffffff0);
        uVar3 = extraout_var_02;
        if (bVar1) {
          param_1[3] = unaff_EDI;
          bVar1 = Deserializer_readInteger(param_2,param_1 + 4);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readInteger(param_2,param_1 + 5);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(param_2,param_1 + 6);
              uVar3 = extraout_var_05;
              if (bVar1) {
                bVar1 = Deserializer_readInteger(param_2,param_1 + 7);
                uVar3 = extraout_var_06;
                if (bVar1) {
                  bVar1 = Deserializer_readString(param_2,param_1 + 8);
                  uVar3 = extraout_var_07;
                  if (bVar1) {
                    iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
                    return iVar2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

