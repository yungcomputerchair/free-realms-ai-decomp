// addr: 0x0142b360
// name: PickListState_deserialize
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall PickListState_deserialize(int *param_1,void *param_2)

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
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  int iStack_4;
  
                    /* Deserializes PickListState by reading the CancellableStateMachineState base
                       and several integer/boolean fields, with version-gated booleans, then
                       finalizes. */
  reader = param_2;
  (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = StateMachineState_deserializeWithPlayer(param_1,reader);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(reader,param_1 + 0x3e);
      uVar3 = extraout_var_01;
      if (bVar1) {
        bVar1 = Deserializer_readInteger(reader,param_1 + 0x3f);
        uVar3 = extraout_var_02;
        if (bVar1) {
          bVar1 = Deserializer_readInteger(reader,param_1 + 0x40);
          uVar3 = extraout_var_03;
          if (bVar1) {
            bVar1 = Deserializer_readInteger(reader,param_1 + 0x41);
            uVar3 = extraout_var_04;
            if (bVar1) {
              if (1 < iStack_4) {
                bVar1 = Deserializer_readInteger(reader,(int *)&stack0xfffffff0);
                uVar3 = extraout_var_05;
                if (!bVar1) goto LAB_0142b37e;
                *(bool *)(param_1 + 0x52) = unaff_EDI != 0;
              }
              if (2 < iStack_4) {
                bVar1 = Deserializer_readInteger(reader,(int *)&stack0xfffffff4);
                uVar3 = extraout_var_06;
                if (!bVar1) goto LAB_0142b37e;
                *(bool *)((int)param_1 + 0x149) = unaff_ESI != 0;
              }
              iVar2 = (**(code **)(*param_1 + 0x14))(reader);
              return iVar2;
            }
          }
        }
      }
    }
  }
LAB_0142b37e:
  return (uint)uVar3 << 8;
}

