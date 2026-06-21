// addr: 0x0147dd30
// name: AlternateMultiActionState_restoreState
// subsystem: common/rules/state
// source (binary assert): common/common/state/AlternateMultiActionState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall AlternateMultiActionState_restoreState(int *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined1 auStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Restores AlternateMultiActionState across target selection phases, validates
                       selected player, sends target display commands, switches owner/player for
                       selected cards, and advances or cancels. Evidence is
                       AlternateMultiActionState::restoreState string and
                       AlternateMultiActionState.cpp asserts. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a053e;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  pcVar10 = "AlternateMultiActionState::restoreState";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar10,uVar3);
  iVar6 = param_1[0x49];
  if (iVar6 != 1) {
    if (iVar6 != 5) {
      if (iVar6 == 4) {
        if (param_1[0x3f] == 3) {
          iVar6 = StateMachine_popReturnValueMapWithKey(0x23);
          if (iVar6 != 0) {
            cVar2 = ReturnValueMap_hasIntegerKey(0x23);
            if (cVar2 != '\0') {
              uVar5 = ReturnValueMap_getInteger(0x23);
              uVar9 = StateMachineState_getGame
                                (uVar5,0,&PlayElement::RTTI_Type_Descriptor,
                                 &Card::RTTI_Type_Descriptor,0);
              pvVar4 = find_play_element_in_maps((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
              iVar7 = FUN_00d8d382(pvVar4);
              if (iVar7 != 0) {
                EvaluationEnvironment_setDynamicCardReturn(iVar7);
              }
              StateMachine_destroyReturnValueMap(iVar6);
            }
          }
        }
        if (param_1[0x4a] != 0) {
          piVar8 = (int *)FUN_00d8d382(param_1[0x4a],0,&PlayElement::RTTI_Type_Descriptor,
                                       &Card::RTTI_Type_Descriptor,0);
          if (piVar8 != (int *)0x0) {
            iVar6 = (**(code **)(*piVar8 + 0x28))();
            pvVar4 = (void *)StateMachineState_getGame();
            pvVar4 = PlayArea_findPlayerElementById(pvVar4,iVar6);
            param_1[0x3e] = (int)pvVar4;
            if (pvVar4 == (void *)0x0) {
              FUN_012f5a60("mPlayer","..\\common\\common\\state\\AlternateMultiActionState.cpp",
                           0x1aa);
            }
            iVar6 = GamePlayer_getPlayerId();
            param_1[0x40] = iVar6;
            piVar8 = (int *)StateMachineState_getCurrentTurn();
            (**(code **)(*piVar8 + 0x48))(param_1[0x3e]);
            (**(code **)(*param_1 + 0x9c))();
            uVar5 = GamePlayer_getPlayerId();
            pcVar10 = "Got selected target, switching player to owner: %d.";
            pvVar4 = (void *)StateMachineState_getGame();
            Game_logGeneral(pvVar4,pcVar10,uVar5);
            MessageText_copy_ctor(auStack_28,param_1 + 0x15);
            uStack_4 = 2;
            FUN_013f7ca0(param_1 + 0x5e);
            FUN_013f7ca0(auStack_28);
            uStack_4 = 0xffffffff;
            MessageText_dtor();
          }
        }
        pcVar1 = *(code **)(*param_1 + 0x124);
        param_1[0x49] = 1;
        param_1[0x4a] = 0;
        uVar5 = (*pcVar1)();
        ExceptionList = local_c;
        return uVar5;
      }
      ExceptionList = local_c;
      return 2;
    }
    uVar5 = StateMachine_popReturnValueMap();
    cVar2 = ReturnValueMap_hasIntegerKey(1);
    if (cVar2 == '\0') {
      FUN_012f5a60("returnvalue->hasIntegerKey(kTarget1Return)",
                   "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x185);
    }
    iVar6 = ReturnValueMap_getInteger(1);
    StateMachine_destroyReturnValueMap(uVar5);
    if (iVar6 == 0) {
      if (param_1[0x54] == 0) goto LAB_0147de4c;
      if (param_1[0x54] == 2) {
        if (param_1[0x3f] == 1) {
          PlayElement_getGame();
          FUN_0139d7a0();
          uVar5 = PlayElement_getId();
          uVar9 = StateMachineState_getGame(uVar5);
          pvVar4 = find_play_element_in_maps((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
          param_1[0x4b] = (int)pvVar4;
        }
        goto LAB_0147e089;
      }
    }
    uVar9 = StateMachineState_getGame(iVar6);
    pvVar4 = find_play_element_in_maps((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    param_1[0x4b] = (int)pvVar4;
    pvVar4 = Mem_Alloc(0x38);
    uStack_4 = 1;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      uVar5 = StateMachineState_getGame();
      pvVar4 = (void *)GameCommand_CardSelected_ctor(uVar5);
    }
    uStack_4 = 0xffffffff;
    uVar3 = GamePlayer_getPlayerId();
    set_field_4(pvVar4,uVar3);
    GameCommand_CardSelected_setCard(iVar6);
    uVar5 = GamePlayer_getPlayerId(pvVar4);
    StateMachineState_getGame(uVar5);
    Game_dispatchCommandToPlayerOrAll(uVar5,pvVar4);
LAB_0147e089:
    pcVar1 = *(code **)(*param_1 + 0x124);
    param_1[0x49] = 2;
    uVar5 = (*pcVar1)();
    ExceptionList = local_c;
    return uVar5;
  }
  uVar5 = StateMachine_popReturnValueMap();
  cVar2 = ReturnValueMap_hasIntegerKey(1);
  if (cVar2 == '\0') {
    FUN_012f5a60("returnvalue->hasIntegerKey(kTarget1Return)",
                 "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x15e);
  }
  iVar6 = ReturnValueMap_getInteger(1);
  cVar2 = ReturnValueMap_hasIntegerKey(4);
  if (cVar2 == '\0') {
    FUN_012f5a60("returnvalue->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\AlternateMultiActionState.cpp",0x160);
  }
  iVar7 = ReturnValueMap_getInteger(4);
  if (param_1[0x40] != iVar7) {
    pcVar10 = "Got a card selected from the wrong player ID!! got %d, wanted %d";
    pvVar4 = (void *)StateMachineState_getGame
                               ("Got a card selected from the wrong player ID!! got %d, wanted %d",
                                iVar7,param_1[0x40]);
    Game_logGeneral(pvVar4,pcVar10,iVar7);
    param_1[0x49] = 1;
    StateMachine_destroyReturnValueMap(uVar5);
    uVar5 = (**(code **)(*param_1 + 0x124))();
    ExceptionList = local_c;
    return uVar5;
  }
  StateMachine_destroyReturnValueMap(uVar5);
  if (iVar6 == 0) {
    if (param_1[0x54] == 0) {
LAB_0147de4c:
      uVar5 = StateMachineState_resumePreviousWaitState();
      ExceptionList = local_c;
      return uVar5;
    }
    if (param_1[0x54] == 2) {
      if (param_1[0x47] == 2) {
        PlayElement_getGame();
        FUN_0139d7a0();
        uVar5 = PlayElement_getId();
        uVar9 = StateMachineState_getGame(uVar5);
        pvVar4 = find_play_element_in_maps((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
        param_1[0x4a] = (int)pvVar4;
        param_1[0x54] = 0;
      }
      goto LAB_0147df31;
    }
  }
  uVar9 = StateMachineState_getGame(iVar6);
  pvVar4 = find_play_element_in_maps((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  param_1[0x4a] = (int)pvVar4;
  pvVar4 = Mem_Alloc(0x38);
  uStack_4 = 0;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    uVar5 = StateMachineState_getGame();
    pvVar4 = (void *)GameCommand_CardSelected_ctor(uVar5);
  }
  uStack_4 = 0xffffffff;
  uVar3 = GamePlayer_getPlayerId();
  set_field_4(pvVar4,uVar3);
  GameCommand_CardSelected_setCard(iVar6);
  uVar5 = GamePlayer_getPlayerId(pvVar4);
  StateMachineState_getGame(uVar5);
  Game_dispatchCommandToPlayerOrAll(uVar5,pvVar4);
LAB_0147df31:
  param_1[0x49] = (-(uint)(param_1[0x3f] != 4) & 0xfffffffd) + 5;
  uVar5 = (**(code **)(*param_1 + 0x124))();
  ExceptionList = local_c;
  return uVar5;
}

