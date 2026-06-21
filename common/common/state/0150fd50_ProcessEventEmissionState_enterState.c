// addr: 0x0150fd50
// name: ProcessEventEmissionState_enterState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall ProcessEventEmissionState_enterState(int *param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Implements the operation identified by referenced string
                       'ProcessEventEmissionState::enterState()'. */
  fmt = "ProcessEventEmissionState::enterState()";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,fmt,unaff_ESI);
  (**(code **)(*param_1 + 0x4c))();
  pvVar2 = (void *)StateMachineState_getGame();
  bVar1 = unknown_getGameGuardFlag(pvVar2);
  if (bVar1) {
    return 2;
  }
  set_boolean_value_key_14(false);
  StateMachineState_getCurrentTurn();
  iVar3 = FUN_013f7eb0();
  param_1[0x40] = iVar3;
  StateMachineState_getGame();
  Game_incrementEventEmissionDepth();
  StateMachineState_getGame();
  iVar3 = Game_getEventEmissionDepth();
  param_1[0x4d] = iVar3;
                    /* WARNING: Could not recover jumptable at 0x0150fdd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*param_1 + 0x124))();
  return uVar4;
}

