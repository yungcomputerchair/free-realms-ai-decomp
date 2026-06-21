// addr: 0x01476630
// name: FUN_01476630
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01476630(int *param_1,void *param_2)

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
  uint3 extraout_var_08;
  uint3 extraout_var_09;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  int iStack_18;
  int iStack_14;
  void *apvStack_10 [3];
  int local_4;
  
                    /* Deserializes a player-aware state with many integer/boolean fields and an
                       integer vector, then runs the virtual post-read hook. No concrete class name
                       is present. */
  (**(code **)(*param_1 + 0x10))(param_2,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StateMachineState_deserializeWithPlayer(param_1,param_2);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_2,param_1 + 0x3e);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(param_2,param_1 + 0x3f);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(param_2,&local_4);
          uVar3 = extraout_var_03;
          if (bVar1) {
            param_1[0x40] = local_4;
            bVar1 = Deserializer_readInteger(param_2,param_1 + 0x41);
            uVar3 = extraout_var_04;
            if (bVar1) {
              bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xffffffe0);
              uVar3 = extraout_var_05;
              if (bVar1) {
                param_1[0x42] = unaff_EDI;
                bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xffffffe4);
                uVar3 = extraout_var_06;
                if (bVar1) {
                  *(bool *)(param_1 + 0x43) = unaff_ESI != 0;
                  bVar1 = Deserializer_readInteger(param_2,&iStack_18);
                  uVar3 = extraout_var_07;
                  if (bVar1) {
                    *(bool *)((int)param_1 + 0x10d) = iStack_18 != 0;
                    bVar1 = Deserializer_readInteger(param_2,&iStack_14);
                    uVar3 = extraout_var_08;
                    if (bVar1) {
                      param_1[0x44] = iStack_14;
                      apvStack_10[0] = param_2;
                      bVar1 = Deserializer_readIntegerVector(apvStack_10,param_1 + 0x46);
                      uVar3 = extraout_var_09;
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
    }
  }
  return (uint)uVar3 << 8;
}

