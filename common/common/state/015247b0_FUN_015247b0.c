// addr: 0x015247b0
// name: FUN_015247b0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_015247b0(int *param_1,void *param_2)

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
  int iVar2;
  undefined1 local_4 [4];
  
                    /* Generic game/lobby/deserialization helper with insufficient direct naming
                       evidence; behavior is broader than a specific state method. */
  (**(code **)(*param_1 + 0x10))(param_2,local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readIntegerWithHooks(param_1,param_2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      FUN_00420fb6();
      bVar1 = Deserializer_readIntegerVector(&stack0xfffffff0,param_1 + 3);
      uVar3 = extraout_var_01;
      if (bVar1) {
        FUN_012aa320();
        bVar1 = Deserializer_readStringVector(local_4,param_1 + 7);
        uVar3 = extraout_var_02;
        if (bVar1) {
          FUN_012aa320();
          bVar1 = Deserializer_readStringVector(local_4,param_1 + 0xb);
          uVar3 = extraout_var_03;
          if (bVar1) {
            FUN_012aa320();
            bVar1 = Deserializer_readStringVector(local_4,param_1 + 0xf);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
              uVar3 = extraout_var_05;
              if (bVar1) {
                iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
                return iVar2;
              }
            }
          }
        }
      }
      return (uint)uVar3 << 8;
    }
  }
  return (uint)uVar3 << 8;
}

