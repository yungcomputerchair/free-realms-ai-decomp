// addr: 0x0147c030
// name: ChainedActionState_updateState
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall ChainedActionState_updateState(int *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  void *pvVar8;
  undefined4 uVar9;
  void *outVector;
  char *pcVar10;
  void *local_2c [2];
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Runs the ChainedActionState state machine, evaluating actions, handling
                       responses, checking returns, and finishing. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a0213;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  switch(param_1[0x3e]) {
  case 1:
    pcVar10 = "ChainedActionState::updateState - InitialChainedActionState";
    ExceptionList = &local_c;
    pvVar8 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar8,pcVar10,uVar4);
    ChainedActionState_applyInitialReturnValues();
    pcVar1 = *(code **)(*param_1 + 0x3c);
    param_1[0x3e] = 2;
    uVar9 = (*pcVar1)();
    ExceptionList = local_c;
    return uVar9;
  case 2:
    break;
  case 3:
    pcVar10 = "ChainedActionState::updateState - FinishChainedActionState";
    ExceptionList = &local_c;
    pvVar8 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar8,pcVar10,uVar4);
    if ((param_1[0x4c] != 0) && (param_1[0x4d] - param_1[0x4c] >> 2 != 0)) {
      ChainedActionState_sendCloseReveal((char)param_1[0x4a]);
    }
    ExceptionList = local_c;
    return 1;
  case 4:
    ExceptionList = &local_c;
    StateMachineState_getGame();
    Game_incrementActionEvaluationCount();
    pcVar10 = "ChainedActionState::updateState - DoEffectChainedActionState";
    pvVar8 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar8,pcVar10,uVar4);
    PlayElementList_collectCommandObjects((void *)param_1[0x3a],outVector);
    local_4 = 0;
    if (local_18 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = local_14 - local_18 >> 2;
    }
    pcVar10 = "ChainedActionState::updateState - got %d objects";
    pvVar8 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar8,pcVar10,iVar5);
    FUN_013815d0();
    param_1[0x3e] = 5;
    local_2c[0] = Mem_Alloc(0x18);
    local_4._0_1_ = 1;
    if (local_2c[0] == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = ReturnValueMap_ctor();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    StateMachine_pushPendingState(uVar9);
    pvVar8 = (void *)(**(code **)(*(int *)param_1[2] + 0x40))();
    pvVar6 = (void *)StateMachineState_getGame();
    bVar3 = Game_getPendingFlag_131(pvVar6);
    if (bVar3) {
      pvVar6 = (void *)StateMachineState_getCurrentTurn();
      uVar4 = get_field_8(pvVar6);
      if (uVar4 != 0) {
        pvVar6 = (void *)StateMachineState_getCurrentTurn();
        pvVar6 = (void *)get_field_8(pvVar6);
        piVar7 = (int *)unknown_getField30(pvVar6);
        iVar5 = (**(code **)(*piVar7 + 0x15c))(0x4f6,param_1[0x3a]);
        if (iVar5 == 1) {
          FUN_01412790(0);
        }
      }
    }
    GameResult_appendValue(local_1c);
    set_flag_130(pvVar8,false);
    uVar9 = StateMachine_setCurrentState(pvVar8);
    local_4 = 0xffffffff;
    FUN_01314560();
    ExceptionList = local_c;
    return uVar9;
  case 5:
    pcVar10 = "ChainedActionState::updateState - ReturnFromHandleResponseState";
    ExceptionList = &local_c;
    pvVar8 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar8,pcVar10,uVar4);
    param_1[0x3e] = 2;
    ChainedActionState_checkReturnValue();
    FUN_01383050();
    FUN_012fb670(local_2c,0);
    uVar9 = (**(code **)(*param_1 + 0x3c))();
    ExceptionList = local_c;
    return uVar9;
  default:
    return 2;
  }
  pcVar10 = "ChainedActionState::updateState - GetActionChainedActionState";
  ExceptionList = &local_c;
  pvVar8 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar8,pcVar10,uVar4);
  uVar9 = FUN_012fbdd0(local_24);
  cVar2 = FUN_012facf0(uVar9);
  if (cVar2 != '\0') {
    pcVar1 = *(code **)(*param_1 + 0x3c);
    param_1[0x3e] = 3;
    uVar9 = (*pcVar1)();
    ExceptionList = local_c;
    return uVar9;
  }
  cVar2 = FUN_0147aaa0();
  if (cVar2 != '\0') {
    pcVar1 = *(code **)(*param_1 + 0x3c);
    param_1[0x3e] = 4;
    uVar9 = (*pcVar1)();
    ExceptionList = local_c;
    return uVar9;
  }
  pcVar10 = "ERROR!! Chained Action failed an evaluate!!";
  pvVar8 = (void *)get_field_4((void *)param_1[2]);
  Game_logGeneral(pvVar8,pcVar10,uVar4);
  pcVar1 = *(code **)(*param_1 + 0x3c);
  param_1[0x3e] = 3;
  uVar9 = (*pcVar1)();
  ExceptionList = local_c;
  return uVar9;
}

