// addr: 0x0146a3d0
// name: MultiActionState_restoreState
// subsystem: common/rules/state
// source (binary assert): common/common/state/MultiActionState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall MultiActionState_restoreState(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  void *pvVar10;
  int iVar11;
  undefined8 uVar12;
  TypeDescriptor *pTVar13;
  TypeDescriptor *pTVar14;
  char *pcVar15;
  undefined4 uVar16;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Restores MultiActionState through get-target, get-target2, and
                       handle-response phases, validates selected player, dispatches target
                       commands, handles game-end cancellation, and advances state. Evidence is
                       MultiActionState::restoreState() and detailed state-specific log strings. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169e576;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  pcVar15 = "MultiActionState::restoreState()";
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar15,uVar4);
  if (param_1[0x3d] != 0) {
LAB_0146aa84:
    pcVar15 = 
    "Cancelling MultiActionState because the game ended and a new game is starting or InvalidCancelStrategy"
    ;
LAB_0146aa89:
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar15,uVar4);
LAB_0146aa99:
    uVar6 = StateMachineState_resumePreviousWaitState();
    ExceptionList = local_c;
    return uVar6;
  }
  pvVar5 = (void *)StateMachineState_getGame();
  bVar2 = Game_getPendingFlag_131(pvVar5);
  if (bVar2) {
    StateMachineState_getGame();
    cVar3 = CWGame_getMoveToNextGame();
    if (cVar3 != '\0') goto LAB_0146aa84;
  }
  iVar11 = param_1[0x49];
  if (iVar11 != 1) {
    if (iVar11 != 5) {
      if (iVar11 != 4) {
        pcVar15 = "MutliActionState::hit end of restoreState -- SHOULD NEVER ET HERE!!";
        pvVar5 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar5,pcVar15,uVar4);
        ExceptionList = local_c;
        return 0;
      }
      pcVar15 = "MultiActionState::restoreState(): state = kHandleResponseMultiActionState";
      pvVar5 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar5,pcVar15,uVar4);
      if (param_1[0x3f] == 3) {
        iVar11 = StateMachine_popReturnValueMapWithKey(0x23);
        if (iVar11 == 0) {
          iVar11 = StateMachine_popReturnValueMapWithKey(0x22);
          if (iVar11 == 0) goto LAB_0146a94a;
        }
        cVar3 = ReturnValueMap_hasIntegerKey(0x23);
        if (cVar3 != '\0') {
          uVar16 = 0;
          pTVar14 = &Card::RTTI_Type_Descriptor;
          pTVar13 = &PlayElement::RTTI_Type_Descriptor;
          uVar9 = 0;
          uVar6 = ReturnValueMap_getInteger(0x23);
          uVar12 = StateMachineState_getGame(uVar6,uVar9,pTVar13,pTVar14,uVar16);
          pvVar5 = find_play_element_in_maps((void *)uVar12,(int)((ulonglong)uVar12 >> 0x20));
          iVar7 = FUN_00d8d382(pvVar5);
          if (iVar7 != 0) {
            EvaluationEnvironment_setDynamicCardReturn(iVar7);
          }
        }
        cVar3 = ReturnValueMap_hasIntegerKey(0x22);
        if (cVar3 != '\0') {
          iVar7 = ReturnValueMap_getInteger(0x22);
          param_1[0x59] = iVar7;
        }
        StateMachine_destroyReturnValueMap(iVar11);
      }
LAB_0146a94a:
      if (param_1[0x3f] == 6) {
        iVar11 = StateMachine_popReturnValueMapWithKey(0x2e);
        if (iVar11 != 0) {
          cVar3 = ReturnValueMap_hasIntegerKey(0x2e);
          if (cVar3 != '\0') {
            uVar6 = ReturnValueMap_getInteger(0x2e);
            EvaluationEnvironment_setCustomNumberReturn(uVar6);
          }
          cVar3 = ReturnValueMap_hasIntegerKey(0x2f);
          if (cVar3 != '\0') {
            uVar6 = ReturnValueMap_getInteger(0x2f);
            EvaluationEnvironment_setCustomNumber2Return(uVar6);
          }
          StateMachine_destroyReturnValueMap(iVar11);
        }
      }
      StateMachineState_getCurrentTurn();
      cVar3 = FUN_013f81f0();
      if (cVar3 != '\0') {
        uVar6 = 0;
        StateMachineState_getCurrentTurn(0);
        FUN_013f8200(uVar6);
        pcVar15 = "MultiActionState::restoreState Got End MultiAction.";
        param_1[0x44] = 0;
        *(undefined1 *)(param_1 + 0x5b) = 0;
        pvVar5 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar5,pcVar15,uVar4);
      }
      if (param_1[0x3f] == 6) {
        if (param_1[0x44] < 1) {
          ExceptionList = local_c;
          return 1;
        }
        param_1[0x49] = 2;
      }
      else {
        param_1[0x49] = 1;
      }
      pcVar1 = *(code **)(*param_1 + 0x124);
      param_1[0x4a] = 0;
      uVar6 = (*pcVar1)();
      ExceptionList = local_c;
      return uVar6;
    }
    pcVar15 = "MultiActionState::restoreState(): state = kGetTarget2MultiActionState";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar15,uVar4);
    uVar6 = StateMachine_popReturnValueMap();
    cVar3 = ReturnValueMap_hasIntegerKey(1);
    if (cVar3 == '\0') {
      FUN_012f5a60("returnvalue->hasIntegerKey(kTarget1Return)",
                   "..\\common\\common\\state\\MultiActionState.cpp",0x3b7);
    }
    iVar11 = ReturnValueMap_getInteger(1);
    StateMachine_destroyReturnValueMap(uVar6);
    if (iVar11 == 0) {
      if (param_1[0x54] == 0) goto LAB_0146aa99;
      if (param_1[0x54] == 2) {
        if (param_1[0x3f] == 1) {
          PlayElement_getGame();
          FUN_0139d7a0();
          uVar6 = PlayElement_getId();
          uVar12 = StateMachineState_getGame(uVar6);
          pvVar5 = find_play_element_in_maps((void *)uVar12,(int)((ulonglong)uVar12 >> 0x20));
          param_1[0x4b] = (int)pvVar5;
        }
        goto LAB_0146a868;
      }
    }
    pvVar5 = (void *)StateMachineState_getGame();
    bVar2 = Game_getPendingFlag_131(pvVar5);
    if (bVar2) {
      pvVar5 = (void *)StateMachineState_getGame();
      bVar2 = Game_getFlag_14d(pvVar5);
      if (!bVar2) goto LAB_0146a868;
    }
    uVar12 = StateMachineState_getGame(iVar11);
    pvVar5 = find_play_element_in_maps((void *)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    param_1[0x4b] = (int)pvVar5;
    pvVar5 = Mem_Alloc(0x38);
    uStack_4 = 1;
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      uVar6 = StateMachineState_getGame();
      pvVar5 = (void *)GameCommand_CardSelected_ctor(uVar6);
    }
    uStack_4 = 0xffffffff;
    uVar4 = GamePlayer_getPlayerId();
    set_field_4(pvVar5,uVar4);
    GameCommand_CardSelected_setCard(iVar11);
    pvVar10 = (void *)StateMachineState_getGame();
    bVar2 = Game_getPendingFlag_131(pvVar10);
    if (bVar2) {
      StateMachineState_getGame();
      cVar3 = CWGame_getMoveToNextGame();
      if (cVar3 != '\0') {
        pvVar10 = (void *)StateMachineState_getGame();
        Game_dispatchCommandToAllPlayers(pvVar10,pvVar5);
        goto LAB_0146a868;
      }
    }
    uVar6 = GamePlayer_getPlayerId(pvVar5);
    StateMachineState_getGame(uVar6);
    Game_dispatchCommandToPlayerOrAll(uVar6,pvVar5);
LAB_0146a868:
    pcVar1 = *(code **)(*param_1 + 0x124);
    param_1[0x49] = 2;
    uVar6 = (*pcVar1)();
    ExceptionList = local_c;
    return uVar6;
  }
  pcVar15 = "MultiActionState::restoreState(): state = kGetTargetMultiActionState";
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar15,uVar4);
  uVar6 = StateMachine_popReturnValueMap();
  cVar3 = ReturnValueMap_hasIntegerKey(1);
  if (cVar3 == '\0') {
    FUN_012f5a60("returnvalue->hasIntegerKey(kTarget1Return)",
                 "..\\common\\common\\state\\MultiActionState.cpp",0x38a);
  }
  iVar7 = ReturnValueMap_getInteger(1);
  iVar11 = param_1[0x40];
  iVar8 = ReturnValueMap_getInteger(4);
  if (iVar11 != iVar8) {
    uVar9 = ReturnValueMap_getInteger(4);
    pcVar15 = "Got a card selected from the wrong player ID!! got %d, wanted %d";
    pvVar5 = (void *)StateMachineState_getGame
                               ("Got a card selected from the wrong player ID!! got %d, wanted %d",
                                uVar9,iVar11);
    Game_logGeneral(pvVar5,pcVar15,uVar9);
    StateMachine_destroyReturnValueMap(uVar6);
    pcVar1 = *(code **)(*param_1 + 0x124);
    param_1[0x49] = 1;
    uVar6 = (*pcVar1)();
    ExceptionList = local_c;
    return uVar6;
  }
  StateMachine_destroyReturnValueMap(uVar6);
  if (iVar7 == 0) {
    if (param_1[0x54] == 0) {
      pcVar15 = 
      "MultiActionState::restoreState(): state = kGetTargetMultiActionState, card == 0 && mButtonPressed == 0"
      ;
      goto LAB_0146aa89;
    }
    if (param_1[0x54] == 2) {
      pcVar15 = 
      "MultiActionState::restoreState(): state = kGetTargetMultiActionState, card == 0 && mButtonPressed == 2"
      ;
      pvVar5 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar5,pcVar15,uVar4);
      if (param_1[0x47] == 2) {
        PlayElement_getGame();
        FUN_0139d7a0();
        uVar6 = PlayElement_getId();
        uVar12 = StateMachineState_getGame(uVar6);
        pvVar5 = find_play_element_in_maps((void *)uVar12,(int)((ulonglong)uVar12 >> 0x20));
        param_1[0x4a] = (int)pvVar5;
        param_1[0x54] = 0;
      }
      goto LAB_0146a699;
    }
  }
  pvVar5 = (void *)StateMachineState_getGame();
  bVar2 = Game_getPendingFlag_131(pvVar5);
  if (bVar2) {
    pvVar5 = (void *)StateMachineState_getGame();
    bVar2 = Game_getFlag_14d(pvVar5);
    if (!bVar2) goto LAB_0146a699;
  }
  pcVar15 = 
  "MultiActionState::restoreState(): state = kGetTargetMultiActionState, false == this->getGame()->gameEnded() || this->getGame()->isServer()"
  ;
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar15,uVar4);
  uVar12 = StateMachineState_getGame(iVar7);
  pvVar5 = find_play_element_in_maps((void *)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  param_1[0x4a] = (int)pvVar5;
  pvVar5 = Mem_Alloc(0x38);
  uStack_4 = 0;
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    uVar6 = StateMachineState_getGame();
    pvVar5 = (void *)GameCommand_CardSelected_ctor(uVar6);
  }
  uStack_4 = 0xffffffff;
  uVar4 = GamePlayer_getPlayerId();
  set_field_4(pvVar5,uVar4);
  GameCommand_CardSelected_setCard(iVar7);
  pvVar10 = (void *)StateMachineState_getGame();
  bVar2 = Game_getPendingFlag_131(pvVar10);
  if (bVar2) {
    StateMachineState_getGame();
    cVar3 = CWGame_getMoveToNextGame();
    if (cVar3 != '\0') {
      pvVar10 = (void *)StateMachineState_getGame();
      Game_dispatchCommandToAllPlayers(pvVar10,pvVar5);
      goto LAB_0146a699;
    }
  }
  uVar6 = GamePlayer_getPlayerId();
  pcVar15 = 
  "MultiActionState::restoreState(): state = kGetTargetMultiActionState, sending game command to all but: %d"
  ;
  pvVar10 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar10,pcVar15,uVar6);
  uVar6 = GamePlayer_getPlayerId(pvVar5);
  StateMachineState_getGame(uVar6);
  Game_dispatchCommandToPlayerOrAll(uVar6,pvVar5);
LAB_0146a699:
  param_1[0x49] = (-(uint)(param_1[0x3f] != 4) & 0xfffffffd) + 5;
  uVar6 = (**(code **)(*param_1 + 0x124))();
  ExceptionList = local_c;
  return uVar6;
}

