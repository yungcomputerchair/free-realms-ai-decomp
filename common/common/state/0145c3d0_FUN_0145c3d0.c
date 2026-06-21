// addr: 0x0145c3d0
// name: FUN_0145c3d0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0145c3d0(int *param_1,void *param_2)

{
  char extraout_AL;
  bool bVar1;
  char extraout_AL_00;
  char extraout_AL_01;
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
  int unaff_ESI;
  int unaff_EDI;
  void *local_4;
  
                    /* Deserializes a StateMachineState with player data, integer/vector fields,
                       booleans, and two nested virtual-deserialized members. No class-specific
                       identity is visible. */
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StateMachineState_deserializeWithPlayer(param_1,param_2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      local_4 = param_2;
      bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xffffffec);
      uVar3 = extraout_var_01;
      if (bVar1) {
        param_1[0x3e] = unaff_EDI;
        bVar1 = Deserializer_readIntegerVector(&local_4,param_1 + 0x45);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(param_2,param_1 + 0x49);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xfffffff0);
            uVar3 = extraout_var_04;
            if (bVar1) {
              *(bool *)(param_1 + 0x4a) = unaff_ESI != 0;
              bVar1 = Deserializer_readIntegerVector(&local_4,param_1 + 0x4b);
              uVar3 = extraout_var_05;
              if (bVar1) {
                (**(code **)(param_1[0x3f] + 0x24))(param_2);
                uVar3 = extraout_var_06;
                if (extraout_AL_00 != '\0') {
                  (**(code **)(param_1[0x42] + 0x24))(param_2);
                  uVar3 = extraout_var_07;
                  if (extraout_AL_01 != '\0') {
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

