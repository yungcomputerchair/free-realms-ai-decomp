// addr: 0x014d32e0
// name: FUN_014d32e0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014d32e0(int *param_1,void *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  int iVar2;
  int unaff_EDI;
  int local_4;
  
                    /* Deserializes integer and boolean fields plus two NetworkCommand component
                       pointers after FUN_014d6880. No owning class is identified. */
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar1 = GuildCommand_deserialize(param_1,param_2);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,&local_4);
      *(bool *)(param_1 + 3) = local_4 != 0;
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xfffffff0);
        param_1[4] = unaff_EDI;
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = NetworkCommand_deserializeComponentPtr(param_2,(void **)(param_1 + 5));
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = NetworkCommand_deserializeComponentPtr(param_2,(void **)(param_1 + 6));
            uVar3 = extraout_var_04;
            if (bVar1) {
              iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
              return iVar2;
            }
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

