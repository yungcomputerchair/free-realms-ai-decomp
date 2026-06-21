// addr: 0x013ef1e0
// name: FUN_013ef1e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_013ef1e0(int *param_1,void *param_2)

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
  int *local_4;
  
                    /* Deserializer wrapper that reads several string/complex and integer fields,
                       converts a final integer to a boolean byte at offset 0x60, then finalizes.
                       Owning command/state class is unresolved. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readString(param_2,param_1 + 1);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readString(param_2,param_1 + 8);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(param_2,param_1 + 0xf);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readString(param_2,param_1 + 0x10);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readInteger(param_2,param_1 + 0x17);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(param_2,(int *)&local_4);
              uVar3 = extraout_var_05;
              if (bVar1) {
                *(bool *)(param_1 + 0x18) = local_4 != (int *)0x0;
                iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
                return iVar2;
              }
            }
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

