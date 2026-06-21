// addr: 0x0147c3a0
// name: FUN_0147c3a0
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_0147c3a0(int *param_1,void *param_2)

{
  char extraout_AL;
  bool bVar1;
  char extraout_AL_00;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  int *piVar2;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint3 extraout_var_05;
  uint3 extraout_var_06;
  uint3 extraout_var_07;
  int iVar4;
  int unaff_EDI;
  int iStack_24;
  void *apvStack_20 [2];
  int iStack_18;
  int iStack_14;
  undefined1 auStack_10 [4];
  undefined1 local_c [8];
  void *pvStack_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  (**(code **)(*param_1 + 0x10))(param_2,local_c);
  uVar3 = extraout_var;
  if (((extraout_AL == '\0') ||
      (bVar1 = StateMachineState_deserializeWithPlayer(param_1,param_2), uVar3 = extraout_var_00,
      !bVar1)) ||
     (bVar1 = Deserializer_readInteger(param_2,&iStack_24), uVar3 = extraout_var_01, !bVar1)) {
    return (uint)uVar3 << 8;
  }
  param_1[0x3e] = iStack_24;
  apvStack_20[0] = param_2;
  STLVector_serializablePointer_deserialize(apvStack_20,param_1 + 0x3f);
  bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xffffffd4);
  uVar3 = extraout_var_02;
  if (bVar1) {
    if (-1 < unaff_EDI) {
      iVar4 = 0;
      piVar2 = (int *)FUN_012fbda0(apvStack_20);
      param_1[0x43] = *piVar2;
      param_1[0x44] = piVar2[1];
      while( true ) {
        apvStack_20[0] = (void *)param_1[0x41];
        if (apvStack_20[0] < (void *)param_1[0x40]) {
          FUN_00d83c2d();
        }
        piVar2 = (int *)param_1[0x43];
        if ((piVar2 == (int *)0x0) || (piVar2 != param_1 + 0x3f)) {
          FUN_00d83c2d();
        }
        param_2 = pvStack_4;
        if (((void *)param_1[0x44] == apvStack_20[0]) || (iVar4 == unaff_EDI)) break;
        iVar4 = iVar4 + 1;
        FUN_012fb670(auStack_10,0);
      }
    }
    bVar1 = Deserializer_readIntegerVector(&stack0xffffffd8,param_1 + 0x45);
    uVar3 = extraout_var_03;
    if (((bVar1) &&
        (bVar1 = Deserializer_readInteger(param_2,param_1 + 0x49), uVar3 = extraout_var_04, bVar1))
       && (bVar1 = Deserializer_readInteger(param_2,&iStack_18), uVar3 = extraout_var_05, bVar1)) {
      *(bool *)(param_1 + 0x4a) = iStack_18 != 0;
      bVar1 = Deserializer_readIntegerVector(&stack0xffffffd8,param_1 + 0x4b);
      uVar3 = extraout_var_06;
      if ((bVar1) &&
         ((iStack_14 < 2 ||
          ((**(code **)(param_1[0x4f] + 0x24))(param_2), uVar3 = extraout_var_07,
          extraout_AL_00 != '\0')))) {
        iVar4 = (**(code **)(*param_1 + 0x14))(param_2);
        return iVar4;
      }
    }
  }
  return (uint)uVar3 << 8;
}

