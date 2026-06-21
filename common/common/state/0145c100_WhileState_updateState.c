// addr: 0x0145c100
// name: WhileState_updateState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall WhileState_updateState(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *outVector;
  char *pcVar8;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Implements the operation identified by referenced string
                       'WhileState::updateState - FinishWhileState'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169cc33;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  switch(param_1[0x3e]) {
  case 1:
    pcVar8 = "WhileState::updateState - InitialWhileState";
    ExceptionList = &local_c;
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar8,uVar4);
    WhileState_applyInitialReturnValues();
    pcVar1 = *(code **)(*param_1 + 0x3c);
    param_1[0x3e] = 2;
    uVar7 = (*pcVar1)();
    ExceptionList = local_c;
    return uVar7;
  case 2:
    break;
  case 3:
    pcVar8 = "WhileState::updateState - FinishWhileState";
    ExceptionList = &local_c;
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar8,uVar4);
    if ((param_1[0x4c] != 0) && (param_1[0x4d] - param_1[0x4c] >> 2 != 0)) {
      WhileState_sendCloseReveal((char)param_1[0x4a]);
    }
    ExceptionList = local_c;
    return 1;
  case 4:
    ExceptionList = &local_c;
    StateMachineState_getGame();
    Game_incrementActionEvaluationCount();
    pcVar8 = "WhileState::updateState - DoEffectWhileState";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar8,uVar4);
    PlayElementList_collectCommandObjects((void *)param_1[0x3a],outVector);
    local_4 = 0;
    if (local_18 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = local_14 - local_18 >> 2;
    }
    pcVar8 = "WhileState::updateState - got %d objects";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar8,iVar5);
    FUN_013815d0();
    param_1[0x3e] = 5;
    pvVar6 = Mem_Alloc(0x18);
    local_4._0_1_ = 1;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = ReturnValueMap_ctor();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    StateMachine_pushPendingState(uVar7);
    pvVar6 = (void *)(**(code **)(*(int *)param_1[2] + 0x40))();
    GameResult_appendValue(local_1c);
    set_flag_130(pvVar6,false);
    uVar7 = StateMachine_setCurrentState(pvVar6);
    local_4 = 0xffffffff;
    FUN_01314560();
    ExceptionList = local_c;
    return uVar7;
  case 5:
    pcVar8 = "WhileState::updateState - ReturnFromHandleResponseWhileState";
    ExceptionList = &local_c;
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar8,uVar4);
    param_1[0x3e] = 2;
    WhileState_checkReturnValue();
    FUN_01383050();
    uVar7 = (**(code **)(*param_1 + 0x3c))();
    ExceptionList = local_c;
    return uVar7;
  default:
    return 2;
  }
  pcVar8 = "WhileState::updateState - CheckActionWhileState";
  ExceptionList = &local_c;
  pvVar6 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar6,pcVar8,uVar4);
  pvVar6 = (void *)StateMachineState_getGame();
  bVar2 = Game_getPendingFlag_131(pvVar6);
  if (bVar2) {
    pcVar8 = "WhileState::updateState, kCheckWhileState - Game has ended: bailing.";
  }
  else {
    cVar3 = FUN_0145acf0();
    if (cVar3 == '\0') {
      pcVar8 = "While Check Action failed an evaluate. exiting";
    }
    else {
      cVar3 = FUN_0145ac60();
      if (cVar3 != '\0') {
        param_1[0x3e] = 4;
        goto LAB_0145c1c4;
      }
      pcVar8 = "ERROR !! While Action failed an evaluate!!";
    }
  }
  pvVar6 = (void *)get_field_4((void *)param_1[2]);
  Game_logGeneral(pvVar6,pcVar8,uVar4);
  param_1[0x3e] = 3;
LAB_0145c1c4:
  uVar7 = (**(code **)(*param_1 + 0x3c))();
  ExceptionList = local_c;
  return uVar7;
}

