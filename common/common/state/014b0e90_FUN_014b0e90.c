// addr: 0x014b0e90
// name: FUN_014b0e90
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014b0e90(int *param_1,int *param_2)

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
  int unaff_EDI;
  int *local_4;
  
                    /* Deserializes a nested NetworkCommand, two integer fields, a compound member,
                       and versioned optional compound/integer fields. No class identity is visible.
                        */
  local_4 = param_1;
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = NetworkCommand_deserializeWithNestedCommand(param_1,param_2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,param_1 + 2);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(param_2,param_1 + 3);
        uVar3 = extraout_var_02;
        if (bVar1) {
          local_4 = param_2;
          bVar1 = SynchronizationCommand_deserializeInstanceIDList(&local_4);
          uVar3 = extraout_var_03;
          if (bVar1) {
            if (unaff_EDI < 2) {
LAB_014b0f1a:
              iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
              return iVar2;
            }
            bVar1 = SynchronizationCommand_deserializeInstanceIDList(&local_4);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(param_2,param_1 + 1);
              uVar3 = extraout_var_05;
              if (bVar1) goto LAB_014b0f1a;
            }
          }
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

