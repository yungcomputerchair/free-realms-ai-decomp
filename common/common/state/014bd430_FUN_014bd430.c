// addr: 0x014bd430
// name: FUN_014bd430
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014bd430(int *param_1,int *param_2)

{
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  int iVar2;
  int unaff_EDI;
  int *local_4;
  
                    /* Deserializes an integer, a compound member via FUN_013d53d0, and a versioned
                       optional integer after FUN_013b2910. No safe class name is available. */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  bVar1 = LobbyCommand_deserialize(param_1,param_2);
  uVar3 = extraout_var;
  if (bVar1) {
    bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      local_4 = param_2;
      bVar1 = SynchronizationCommand_deserializeInstanceIDList(&local_4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        if (1 < unaff_EDI) {
          bVar1 = Deserializer_readInteger(param_2,param_1 + 3);
          uVar3 = extraout_var_02;
          if (!bVar1) goto LAB_014bd454;
        }
        iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
        return iVar2;
      }
    }
  }
LAB_014bd454:
  return (uint)uVar3 << 8;
}

