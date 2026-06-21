// addr: 0x014af4f0
// name: FUN_014af4f0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_014af4f0(int *param_1,void *param_2)

{
  void *reader;
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
  uint3 extraout_var_10;
  int iVar2;
  int unaff_EDI;
  int iStack_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  reader = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = NetworkCommand_deserializeWithNestedCommand(param_1,reader);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(reader,param_1 + 1);
      uVar3 = extraout_var_01;
      if (bVar1) {
        if (1 < iStack_4) {
          bVar1 = Deserializer_readInteger(reader,param_1 + 0xd);
          uVar3 = extraout_var_02;
          if (!bVar1) goto LAB_014af50e;
        }
        if (2 < iStack_4) {
          bVar1 = Deserializer_readInteger(reader,(int *)&stack0xfffffff0);
          uVar3 = extraout_var_03;
          if (!bVar1) goto LAB_014af50e;
          *(bool *)(param_1 + 0xe) = unaff_EDI != 0;
        }
        if (3 < iStack_4) {
          bVar1 = Deserializer_readInteger(reader,param_1 + 2);
          uVar3 = extraout_var_04;
          if (!bVar1) goto LAB_014af50e;
          bVar1 = Deserializer_readInteger(reader,param_1 + 3);
          uVar3 = extraout_var_05;
          if (!bVar1) goto LAB_014af50e;
          bVar1 = Deserializer_readString(reader,param_1 + 4);
          uVar3 = extraout_var_06;
          if (!bVar1) goto LAB_014af50e;
          bVar1 = Deserializer_readInteger(reader,param_1 + 0xb);
          uVar3 = extraout_var_07;
          if (!bVar1) goto LAB_014af50e;
          bVar1 = Deserializer_readInteger(reader,param_1 + 0xc);
          uVar3 = extraout_var_08;
          if (!bVar1) goto LAB_014af50e;
        }
        if (4 < iStack_4) {
          bVar1 = SynchronizationCommand_deserializeInstanceIDList(&stack0xfffffff4);
          uVar3 = extraout_var_09;
          if (!bVar1) goto LAB_014af50e;
        }
        if (5 < iStack_4) {
          bVar1 = SynchronizationCommand_deserializeInstanceIDList(&stack0xfffffff4);
          uVar3 = extraout_var_10;
          if (!bVar1) goto LAB_014af50e;
        }
        iVar2 = (**(code **)(*param_1 + 0x14))(reader);
        return iVar2;
      }
    }
  }
LAB_014af50e:
  return (uint)uVar3 << 8;
}

