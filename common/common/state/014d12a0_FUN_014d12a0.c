// addr: 0x014d12a0
// name: FUN_014d12a0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014d12a0(int *param_1,void *param_2)

{
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
  
                    /* Deserializes three integers, two strings, and a boolean-like integer after
                       FUN_014d6880. No safe class name is recoverable. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar1 = GuildCommand_deserialize(param_1,param_2);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,param_1 + 3);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(param_2,param_1 + 4);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readString(param_2,param_1 + 5);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readString(param_2,param_1 + 0xc);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(param_2,(int *)&local_4);
              uVar3 = extraout_var_05;
              if (bVar1) {
                *(bool *)(param_1 + 0x13) = local_4 != (int *)0x0;
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

