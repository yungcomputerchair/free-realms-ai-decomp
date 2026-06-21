// addr: 0x01474d50
// name: StateMachineState_deserializeTargetSelection
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall StateMachineState_deserializeTargetSelection(int *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int *piVar6;
  int playerId_;
  int iStack_60;
  int iStack_5c;
  void *apvStack_58 [2];
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [2];
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Deserializes a state-machine state with player context, reading integers and
                       an integer vector, looking up a play-area element, and delegating to
                       StateMachineState_deserializeWithPlayer. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0169f5d8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_2,&local_3c,DAT_01b839d8 ^ (uint)&stack0xffffff90);
  if (cVar1 != '\0') {
    StateMachineState_deserializeWithPlayer(param_1,param_2);
    apvStack_58[0] = param_2;
    cVar1 = FUN_01473440(param_1 + 0x3e);
    if ((cVar1 != '\0') && (bVar2 = Deserializer_readInteger(param_2,&iStack_60), bVar2)) {
      if (iStack_60 != 0) {
        pvVar4 = (void *)StateMachineState_getGame();
        pvVar4 = PlayArea_findPlayerElementById(pvVar4,iStack_60);
        param_1[0x41] = (int)pvVar4;
        if (pvVar4 == (void *)0x0) {
          ExceptionList = pvStack_1c;
          return 0;
        }
      }
      bVar2 = Deserializer_readInteger(param_2,&iStack_5c);
      if (bVar2) {
        if (iStack_5c != 0) {
          pvVar4 = (void *)StateMachineState_getGame();
          pvVar4 = PlayArea_findPlayerElementById(pvVar4,iStack_5c);
          param_1[0x42] = (int)pvVar4;
          if (pvVar4 == (void *)0x0) {
            ExceptionList = pvStack_1c;
            return 0;
          }
        }
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        local_14 = (void *)0x0;
        bVar2 = Deserializer_readIntegerVector(apvStack_58,auStack_30);
        if (bVar2) {
          puVar5 = (undefined4 *)FUN_0041f5d2(apvStack_58);
          uStack_40 = *puVar5;
          local_3c = puVar5[1];
          FUN_0041f3a1(apvStack_58);
          cVar1 = FUN_00416f86(&uStack_40);
          while (cVar1 != '\0') {
            piVar6 = (int *)FUN_01240910();
            playerId_ = *piVar6;
            pvVar4 = (void *)StateMachineState_getGame();
            apvStack_58[0] = PlayArea_findPlayerElementById(pvVar4,playerId_);
            if (apvStack_58[0] == (void *)0x0) goto LAB_01474e4a;
            FUN_01336350(apvStack_58);
            FUN_012fb740(auStack_38,0);
            cVar1 = FUN_00416f86(&uStack_40);
          }
          bVar2 = Deserializer_readInteger(param_2,&iStack_50);
          if (bVar2) {
            *(bool *)(param_1 + 0x47) = iStack_50 != 0;
            Deserializer_readInteger(param_2,&iStack_4c);
            param_1[0x48] = iStack_4c;
            Deserializer_readInteger(param_2,aiStack_48);
            param_1[0x4a] = aiStack_48[0];
            uVar3 = (**(code **)(*param_1 + 0x14))(param_2);
            uStack_18 = 0xffffffff;
            StdVector_clearStorage(auStack_34);
            ExceptionList = pvStack_20;
            return uVar3;
          }
        }
LAB_01474e4a:
        local_14 = (void *)0xffffffff;
        StdVector_clearStorage(auStack_30);
      }
    }
  }
  ExceptionList = pvStack_1c;
  return 0;
}

