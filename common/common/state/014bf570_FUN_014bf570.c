// addr: 0x014bf570
// name: FUN_014bf570
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014bf570(int *param_1,void *param_2)

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
  int unaff_ESI;
  int unaff_EDI;
  undefined1 local_8 [4];
  void *pvStack_4;
  
                    /* Deserializes multiple integers, a compound member via FUN_013d53d0, another
                       integer, and a versioned optional boolean-like flag. Class identity is
                       unknown. */
  (**(code **)(*param_1 + 0x10))(param_2,local_8);
  bVar1 = LobbyCommand_deserialize(param_1,param_2);
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
          pvStack_4 = param_2;
          bVar1 = SynchronizationCommand_deserializeInstanceIDList(&pvStack_4);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readInteger(param_2,param_1 + 5);
            uVar3 = extraout_var_04;
            if (bVar1) {
              if (1 < unaff_EDI) {
                bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xfffffff4);
                uVar3 = extraout_var_05;
                if (!bVar1) goto LAB_014bf596;
                *(bool *)(param_1 + 10) = unaff_ESI != 0;
              }
              iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
              return iVar2;
            }
          }
        }
      }
    }
  }
LAB_014bf596:
  return (uint)uVar3 << 8;
}

