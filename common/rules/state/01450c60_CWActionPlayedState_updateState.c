// addr: 0x01450c60
// name: CWActionPlayedState_updateState
// subsystem: common/rules/state
// source (binary assert): common/rules/state/cwactionplayedstate.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall CWActionPlayedState_updateState(int *param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  int extraout_EAX;
  int extraout_EAX_00;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  void *extraout_EDX;
  void *extraout_EDX_00;
  void *extraout_EDX_01;
  void *extraout_EDX_02;
  void *extraout_EDX_03;
  void *extraout_EDX_04;
  uint uVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined1 *puVar15;
  int *local_d4;
  void *local_d0;
  int local_cc;
  void *local_c8;
  undefined1 local_c4 [4];
  void *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  void *apvStack_a8 [2];
  uint local_a0;
  undefined1 auStack_9c [4];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* Large CWActionPlayedState update loop that drives initial validation,
                       can-be-played checks, pre-play events, cost payment, moving/playing cards,
                       card-played events, and completion. Evidence is
                       CWActionPlayedState::updateState plus many cwactionplayedstate.cpp phase log
                       strings. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_0169b85a;
  local_14 = ExceptionList;
  local_1c = DAT_01b839d8 ^ (uint)&local_d4;
  pvVar3 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff20);
  ExceptionList = &local_14;
  pcVar14 = "CWActionPlayedState::updateState";
  local_a0 = 0;
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar14,pvVar3);
  local_c0 = (void *)0x0;
  local_bc = 0;
  local_b8 = 0;
  local_c = 0;
  local_d4 = Mem_Alloc(0x18);
  local_c._0_1_ = 1;
  if (local_d4 == (int *)0x0) {
    local_cc = 0;
  }
  else {
    local_cc = ReturnValueMap_ctor();
  }
  iVar9 = local_cc;
  local_c = (uint)local_c._1_3_ << 8;
  set_value_boolean(7,false);
  iVar7 = param_1[0x3f];
  pvVar4 = (void *)StateMachineState_getGame();
  local_d0 = PlayArea_findPlayerElementById(pvVar4,iVar7);
  uVar13 = StateMachineState_getGame(param_1[0x3e]);
  pvVar4 = find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
  if (pvVar4 == (void *)0x0) {
    uVar5 = StateMachineState_getGame("Invalid element ID: %d",param_1[0x3e]);
    Game_logGeneralFormatted(uVar5);
    StateMachine_pushPendingState(iVar9);
    local_c = 0xffffffff;
    if (local_c0 == (void *)0x0) {
      ExceptionList = local_14;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_c0);
  }
  uVar13 = FUN_00d8d382(pvVar4,0,&PlayElement::RTTI_Type_Descriptor,&CWCard::RTTI_Type_Descriptor,0)
  ;
  piVar11 = (int *)uVar13;
  if (piVar11 == (int *)0x0) {
    StateMachine_pushPendingState(iVar9);
    uVar5 = StateMachineState_getGame("That wasn\'t a card. %d",param_1[0x3e]);
    Game_logGeneralFormatted(uVar5);
    local_c = 0xffffffff;
    if (local_c0 == (void *)0x0) {
      ExceptionList = local_14;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_c0);
  }
  pvVar6 = Card_getActionByID(piVar11,(int)((ulonglong)uVar13 >> 0x20));
  iVar7 = local_cc;
  pvVar4 = extraout_EDX;
  local_c8 = pvVar6;
  if (param_1[0x44] == 9) {
    if (pvVar6 == (void *)0x0) {
      set_value_boolean(7,true);
      StateMachine_pushPendingState(iVar7);
      goto LAB_0145269d;
    }
  }
  else if (pvVar6 == (void *)0x0) {
    uVar5 = StateMachineState_getGame("### WARNING ### - action not translated %d",param_1[0x42]);
    Game_logGeneralFormatted(uVar5);
    uVar13 = PackedActionId_fromLegacyDecimal(param_1[0x42]);
    param_1[0x42] = (int)uVar13;
    pvVar6 = Card_getActionByID(piVar11,(int)((ulonglong)uVar13 >> 0x20));
    pvVar4 = extraout_EDX_00;
    local_c8 = pvVar6;
    if (pvVar6 == (void *)0x0) {
      FUN_012f5a60("action","..\\common\\rules\\state\\cwactionplayedstate.cpp",0xec);
      FUN_012f5a60("action","..\\common\\rules\\state\\cwactionplayedstate.cpp",0xee);
      pvVar4 = extraout_EDX_01;
    }
  }
  bVar1 = card_check_target_modifier_predicates(piVar11,pvVar4);
  *(bool *)(param_1 + 0x49) = bVar1;
  param_1[0x45] = 10;
  if (param_1[0x40] != 0) {
    uVar13 = StateMachineState_getGame(param_1[0x40]);
    pvVar4 = find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    EvaluationEnvironment_setCurrentTargetFromElement((void *)param_1[0x3a],pvVar4,pvVar3);
  }
  if (param_1[0x41] != 0) {
    uVar13 = StateMachineState_getGame(param_1[0x41]);
    pvVar4 = find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    EvaluationEnvironment_setPlayElementId(pvVar4);
  }
  if (pvVar6 != (void *)0x0) {
    EvaluationEnvironment_setActionReturn(pvVar6);
  }
  if (local_d0 != (void *)0x0) {
    FUN_013815b0(local_d0);
  }
  set_play_element_id_field((void *)param_1[0x3a],piVar11);
  pvVar4 = (void *)(**(code **)(*piVar11 + 0xcc))();
  if ((pvVar4 == pvVar6) || (cVar2 = CommandObject_setActionReturnKey24(), cVar2 != '\0')) {
    pvVar4 = (void *)StateMachineState_getGame();
    bVar1 = Game_shouldLogAttributeModifierDebug(pvVar4);
    if (bVar1) {
      iVar7 = Card_getPropertyMap();
      if (*(uint *)(iVar7 + 0x18) < 0x10) {
        iVar7 = iVar7 + 4;
      }
      else {
        iVar7 = *(int *)(iVar7 + 4);
      }
      pcVar14 = "defaultplayaction in eqactionplayed state: %s";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar14,iVar7);
    }
  }
  FUN_012fa910();
  local_c._0_1_ = 2;
  iVar7 = (**(code **)(*piVar11 + 0x28))();
  pvVar4 = (void *)StateMachineState_getGame();
  local_d4 = PlayArea_findPlayerElementById(pvVar4,iVar7);
  iVar7 = param_1[0x3f];
  pvVar4 = (void *)StateMachineState_getGame();
  apvStack_a8[0] = PlayArea_findPlayerElementById(pvVar4,iVar7);
  pvVar4 = local_c8;
  switch(param_1[0x44]) {
  case 0:
    pcVar14 = "CWActionPlayedState::updateSate kInitialActionPlayedState";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar14,pvVar3);
    param_1[0x44] = 1;
    piVar8 = (int *)StateMachineState_getCurrentTurn();
    (**(code **)(*piVar8 + 0x48))(local_d0);
    pvVar4 = (void *)(**(code **)(*piVar11 + 0xcc))();
    if ((pvVar4 == local_c8) || (cVar2 = CommandObject_setActionReturnKey24(), cVar2 != '\0')) {
      uVar5 = (**(code **)(*piVar11 + 0x30))
                        (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
      iVar7 = FUN_00d8d382(uVar5);
      if (iVar7 != 0) {
        FUN_01387360(iVar7);
      }
    }
  case 1:
    pcVar14 = "CWActionPlayedState::updateSate kPreconditionsActionPlayedState";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar14,pvVar3);
    param_1[0x44] = 2;
    if ((local_d4 == (int *)0x0) || (apvStack_a8[0] == (void *)0x0)) {
LAB_0145111e:
      pvVar4 = local_c8;
      if ((((char)param_1[0x49] == '\x01') && (*(char *)((int)param_1 + 0x199) == '\0')) &&
         (((pvVar6 = (void *)(**(code **)(*piVar11 + 0xcc))(), pvVar4 = local_c8, local_c8 == pvVar6
           || (cVar2 = CommandObject_setActionReturnKey24(), cVar2 != '\0')) &&
          (cVar2 = (**(code **)(*piVar11 + 0x110))(local_d0,param_1[0x3a],1), cVar2 == '\0')))) {
        uVar5 = StateMachineState_getGame("basic preconditions violated.");
        Game_logGeneralFormatted(uVar5);
        (**(code **)(*param_1 + 0x124))(piVar11);
        iVar7 = local_cc;
        goto LAB_01452684;
      }
      if (*(char *)((int)param_1 + 0x19b) == '\x01') {
        pcVar14 = "skipping preconditions";
        pvVar6 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar6,pcVar14,pvVar3);
        param_1[0x44] = 0x11;
        EvaluationEnvironment_setBooleanKey4(0);
        EvaluationEnvironment_setBooleanKey9(0);
        StateMachine_destroyReturnValueMap(local_cc);
        (**(code **)(*piVar11 + 0xdc))(pvVar4,param_1[0x3a],1);
        break;
      }
switchD_01450ff9_caseD_2:
      pcVar14 = "CWActionPlayedState::updateSate kCanBePlayedActionPlayedState";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar14,pvVar3);
      iVar7 = local_cc;
      if (*(char *)((int)param_1 + 0x199) == '\x01') {
        param_1[0x44] = 5;
      }
      else {
        param_1[0x44] = (-(uint)(*(char *)((int)param_1 + 0x19a) != '\0') & 0xfffffff2) + 0x11;
      }
      if ((char)param_1[0x39] == '\0') {
        EvaluationEnvironment_setBooleanKey4(1);
        EvaluationEnvironment_setBooleanKey9(0);
        cVar2 = (**(code **)(*piVar11 + 0xdc))(local_c8,param_1[0x3a],1);
        if (cVar2 != '\0') {
          cVar2 = CommandObject_setActionReturnKey5();
          if ((cVar2 == '\0') && ((char)param_1[0x58] == '\0')) {
            local_d4 = Mem_Alloc(0x5c);
            local_c._0_1_ = 4;
            if (local_d4 == (int *)0x0) {
              pvVar4 = (void *)0x0;
            }
            else {
              uVar5 = StateMachineState_getGame();
              pvVar4 = (void *)GameCommand_ActionPlayed_ctor(uVar5);
            }
            local_c._0_1_ = 2;
            uVar12 = GamePlayer_getPlayerId();
            set_field_4(pvVar4,uVar12);
            uVar5 = FUN_01321f20();
            StateCommand_setSecondIntArg(uVar5);
            uVar13 = StateMachineState_getGame(param_1[0x40]);
            pvVar6 = find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
            GameCommand_ActionPlayed_setTarget1(pvVar6);
            uVar13 = StateMachineState_getGame(param_1[0x41]);
            pvVar6 = find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
            GameCommand_ActionPlayed_setTarget2(pvVar6);
            StateCommand_setThirdIntArg(param_1[0x59]);
            GameCommand_ActionPlayed_setPlayedCardFromCard(piVar11);
LAB_014517a5:
            uVar5 = GamePlayer_getPlayerId(pvVar4);
            StateMachineState_getGame(uVar5);
            Game_dispatchCommandToPlayerOrAll(uVar5,pvVar4);
          }
          else {
            cVar2 = CommandObject_setActionReturnKey5();
            if (((cVar2 == '\0') && (((char)param_1[0x58] == '\x01' && (param_1[0x40] != 0)))) &&
               (*(char *)((int)param_1 + 0x162) == '\x01')) {
              local_d4 = Mem_Alloc(0x38);
              local_c._0_1_ = 5;
              if (local_d4 == (int *)0x0) {
                pvVar4 = (void *)0x0;
              }
              else {
                uVar5 = StateMachineState_getGame();
                pvVar4 = (void *)GameCommand_CardSelected_ctor(uVar5);
              }
              local_c._0_1_ = 2;
              uVar12 = GamePlayer_getPlayerId();
              set_field_4(pvVar4,uVar12);
              GameCommand_CardSelected_setCard(param_1[0x40]);
              uVar5 = GamePlayer_getPlayerId(pvVar4);
              StateMachineState_getGame(uVar5);
              Game_dispatchCommandToPlayerOrAll(uVar5,pvVar4);
              if (param_1[0x41] != 0) {
                local_d4 = Mem_Alloc(0x38);
                local_c._0_1_ = 6;
                if (local_d4 == (int *)0x0) {
                  pvVar4 = (void *)0x0;
                }
                else {
                  uVar5 = StateMachineState_getGame();
                  pvVar4 = (void *)GameCommand_CardSelected_ctor(uVar5);
                }
                local_c._0_1_ = 2;
                uVar12 = GamePlayer_getPlayerId();
                set_field_4(pvVar4,uVar12);
                iVar7 = param_1[0x41];
LAB_0145179e:
                GameCommand_CardSelected_setCard(iVar7);
                goto LAB_014517a5;
              }
            }
            else {
              cVar2 = CommandObject_setActionReturnKey5();
              if ((((cVar2 == '\x01') && ((char)param_1[0x58] == '\0')) && (param_1[0x40] != 0)) &&
                 (*(char *)((int)param_1 + 0x162) == '\x01')) {
                local_d4 = Mem_Alloc(0x38);
                local_c._0_1_ = 7;
                if (local_d4 == (int *)0x0) {
                  pvVar4 = (void *)0x0;
                }
                else {
                  uVar5 = StateMachineState_getGame();
                  pvVar4 = (void *)GameCommand_CardSelected_ctor(uVar5);
                }
                local_c._0_1_ = 2;
                uVar12 = GamePlayer_getPlayerId();
                set_field_4(pvVar4,uVar12);
                GameCommand_CardSelected_setCard(param_1[0x40]);
                uVar5 = GamePlayer_getPlayerId(pvVar4);
                StateMachineState_getGame(uVar5);
                Game_dispatchCommandToPlayerOrAll(uVar5,pvVar4);
                if (param_1[0x41] != 0) {
                  local_d4 = Mem_Alloc(0x38);
                  local_c._0_1_ = 8;
                  if (local_d4 == (int *)0x0) {
                    pvVar4 = (void *)0x0;
                  }
                  else {
                    uVar5 = StateMachineState_getGame();
                    pvVar4 = (void *)GameCommand_CardSelected_ctor(uVar5);
                  }
                  local_c._0_1_ = 2;
                  uVar12 = GamePlayer_getPlayerId();
                  set_field_4(pvVar4,uVar12);
                  iVar7 = param_1[0x41];
                  goto LAB_0145179e;
                }
              }
            }
          }
switchD_01450ff9_caseD_11:
          pcVar14 = "CWActionPlayedState::updateSate kEmitPrePlayEventActionPlayedState";
          pvVar4 = (void *)StateMachineState_getGame();
          Game_logGeneral(pvVar4,pcVar14,pvVar3);
          param_1[0x44] = 3;
          cVar2 = CommandObject_setActionReturnKey24();
          if ((cVar2 != '\0') && (*(char *)((int)param_1 + 0x19a) == '\0')) {
            *(undefined1 *)((int)param_1 + 0x161) = 0;
            param_1[0x45] = 0x12;
            piVar8 = (int *)StateMachineState_getCurrentTurn();
            (**(code **)(*piVar8 + 0x48))(local_d0);
            pvVar3 = Mem_Alloc(0x18);
            puStack_10._0_1_ = 9;
            if (pvVar3 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = ReturnValueMap_ctor();
            }
            puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
            StateMachine_pushPendingState(uVar5);
            StateMachine_destroyReturnValueMap(local_d0);
            EvaluationEnvironment_emitActionDebugLog((void *)param_1[0x3a]);
            param_1[99] = extraout_EAX;
            uVar5 = (**(code **)(*(int *)param_1[2] + 0x44))();
            FUN_014643a0(0x4c);
            EvaluationEnvironment_setReturnKey8Integer(0x4c);
            pvVar3 = Rules_getVariable7Card();
            param_1[100] = (int)pvVar3;
            FUN_01386d60(piVar11);
            CommandObject_registerPropertyAction((void *)param_1[0x3a]);
            param_1[0x65] = extraout_EAX_00;
            EvaluationEnvironment_setCardPlayedReturnFromActionId(local_c8);
            iVar7 = PlayElement_getId();
            set_integer_value_for_key(0x33,iVar7);
            set_integer_value_for_key(0x34,param_1[0x40]);
            uVar5 = StateMachine_setCurrentState(uVar5);
            goto LAB_01451211;
          }
          break;
        }
        uVar5 = StateMachineState_getGame
                          ("Preconditions failed (beginCardAction). %d, %d, %d",(char)param_1[0x43],
                           *(undefined1 *)((int)param_1 + 0x10d),(char)param_1[0x39]);
        Game_logGeneralFormatted(uVar5);
        if ((((char)param_1[0x43] != '\0') || (*(char *)((int)param_1 + 0x10d) != '\0')) &&
           ((char)param_1[0x39] == '\0')) {
          pvVar4 = (void *)StateMachine_getCurrentState();
          pvVar4 = get_field_1c_address(pvVar4);
          uVar12 = *(uint *)((int)pvVar4 + 0x14);
          pvVar4 = (void *)StateMachine_getCurrentState();
          pvVar4 = get_field_1c_address(pvVar4);
          if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
            pcVar14 = (char *)((int)pvVar4 + 4);
          }
          else {
            pcVar14 = *(char **)((int)pvVar4 + 4);
          }
          iVar7 = __strnicmp(pcVar14,"CWActionPlayedState",uVar12);
          if (iVar7 == 0) {
            param_1[0x45] = 0xb;
            param_1[0x44] = 2;
            local_d4 = Mem_Alloc(0x13c);
            local_c._0_1_ = 3;
            if (local_d4 == (int *)0x0) {
              piVar11 = (int *)0x0;
            }
            else {
              piVar11 = (int *)GetTargetState_ctor(param_1[2]);
            }
            local_c._0_1_ = 2;
            piVar8 = param_1 + 0x4a;
            if ((char)param_1[0x43] == '\0') {
              piVar8 = param_1 + 0x51;
            }
            iVar7 = StateMachineState_getPreviousState();
            if (iVar7 != 0) {
              (**(code **)(*piVar11 + 0x104))(piVar8);
            }
            StateMachine_setCurrentState(piVar11);
          }
          pcVar14 = "CWActionPlayedState::returning true, waiting for getTarget.";
          pvVar4 = (void *)StateMachineState_getGame();
          Game_logGeneral(pvVar4,pcVar14,pvVar3);
          StateMachine_destroyReturnValueMap(local_cc);
          local_c = (uint)local_c._1_3_ << 8;
          FUN_01300cd0();
          local_c = 0xffffffff;
          FUN_01314560();
          ExceptionList = local_14;
          return 2;
        }
        ReturnValueMap_setInteger(1,0);
        StateMachine_pushPendingState(local_cc);
        pcVar14 = "Returing false where previously returned true";
        pvVar4 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar4,pcVar14,pvVar3);
        cVar2 = CommandObject_setActionReturnKey24();
        if (cVar2 != '\0') {
          (**(code **)(*param_1 + 0x124))(piVar11);
        }
      }
      else {
        set_value_boolean(1,false);
        StateMachine_pushPendingState(iVar7);
        pcVar14 = "No Valid targets in Can Be played, preventing infinite recursion.";
        pvVar4 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar4,pcVar14,pvVar3);
        cVar2 = CommandObject_setActionReturnKey24();
        if (cVar2 != '\0') {
          (**(code **)(*param_1 + 0x124))(piVar11);
        }
      }
    }
    else {
      iVar7 = GamePlayer_getPlayerId();
      iVar9 = GamePlayer_getPlayerId();
      if (iVar9 == iVar7) goto LAB_0145111e;
      piVar8 = piVar11;
      pvVar4 = (void *)StateMachineState_getGame();
      bVar1 = Game_hasRegisteredObject_01356120(pvVar4,piVar8);
      if ((bVar1) || (*(char *)((int)param_1 + 0x125) != '\0')) goto LAB_0145111e;
      uVar5 = (**(code **)(*piVar11 + 0x28))();
      uVar5 = StateMachineState_getGame
                        ("Player %d tried to play player %d\'s card.",param_1[0x3f],uVar5);
      Game_logGeneralFormatted(uVar5);
      (**(code **)(*param_1 + 0x124))(piVar11);
      iVar7 = local_cc;
LAB_01452684:
      StateMachine_pushPendingState(iVar7);
    }
LAB_0145268c:
    local_c = (uint)local_c._1_3_ << 8;
    FUN_01300cd0();
LAB_0145269d:
    local_c = 0xffffffff;
    FUN_01314560();
    ExceptionList = local_14;
    return 1;
  case 2:
    goto switchD_01450ff9_caseD_2;
  case 3:
    pcVar14 = "CWActionPlayedState::updateSate kPayingCostsActionPlayedState";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar14,pvVar3);
    param_1[0x44] = 5;
    piVar8 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar8 + 0x1ec))(param_1[0x3f],param_1[0x3e],param_1[0x42]);
    set_boolean_value_key_17(false);
    EvaluationEnvironment_setReturnKey43Bool(1);
    *(undefined1 *)((int)param_1 + 0x161) = 0;
    FUN_01412fb0();
    cVar2 = (**(code **)(*piVar11 + 0xf4))(local_d4,param_1[0x3a]);
    if (cVar2 != '\0') {
      uVar5 = EvaluationEnvironment_addCommandObjectChecked(auStack_7c);
      local_c._0_1_ = 10;
      FUN_014135c0(uVar5);
      local_c = CONCAT31(local_c._1_3_,2);
      FUN_01314560();
      if (*(char *)((int)param_1 + 0x199) == '\x01') {
        pcVar14 = "Skipping paying costs.";
        pvVar4 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar4,pcVar14,pvVar3);
        FUN_01412fb0();
      }
      StateMachine_destroyReturnValueMap(local_cc);
      param_1[0x45] = 0xd;
      local_d4 = Mem_Alloc(0x18);
      local_c = CONCAT31(local_c._1_3_,0xb);
      if (local_d4 != (int *)0x0) {
        uVar5 = ReturnValueMap_ctor();
        goto LAB_01451a4e;
      }
      goto LAB_01451a4c;
    }
    uVar5 = StateMachineState_getGame("Couldn\'t get costs to pay?");
    Game_logGeneralFormatted(uVar5);
    iVar7 = local_cc;
    goto LAB_01452684;
  case 4:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x16:
    goto switchD_01450ff9_caseD_4;
  case 5:
    pcVar14 = "CWActionPlayedState::updateSate kQueryUserPreventedByActionPlayedState:";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar14,pvVar3);
    pvVar4 = local_c8;
    param_1[0x44] = 6;
    EvaluationEnvironment_setCardPlayedReturnFromActionId(local_c8);
    pvVar6 = (void *)(**(code **)(*piVar11 + 0xcc))();
    if ((pvVar6 == pvVar4) || (cVar2 = CommandObject_setActionReturnKey24(), cVar2 != '\0')) {
      StateMachine_destroyReturnValueMap(local_cc);
      iVar7 = PlayElement_getId();
      set_integer_value_for_key(0x33,iVar7);
      set_integer_value_for_key(0x34,param_1[0x40]);
      uVar5 = (**(code **)(*(int *)param_1[2] + 0x44))();
      FUN_014643a0(0x37);
      uVar5 = StateMachine_setCurrentState(uVar5);
      goto LAB_01451211;
    }
    goto LAB_01451b2c;
  case 6:
LAB_01451b2c:
    pcVar14 = "CWActionPlayedState::updateSate kCheckPreventedSuccessActionPlayedState";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar14,pvVar3);
    if ((char)param_1[0x49] != '\0') {
      FUN_013228c0();
    }
    param_1[0x44] = 0x13;
LAB_01451b61:
    pcVar14 = "CWActionPlayedState::updateSate kMoveCardIntoPlayActionPlayedState";
    pvVar6 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar6,pcVar14,pvVar3);
    param_1[0x44] = 7;
    (**(code **)(*piVar11 + 0x208))(param_1[0x42],param_1[0x67]);
    FUN_01412fb0();
    pvVar6 = (void *)(**(code **)(*piVar11 + 0xcc))();
    if ((pvVar6 == pvVar4) || (cVar2 = CommandObject_setActionReturnKey24(), cVar2 != '\0')) {
      (**(code **)(*piVar11 + 0x198))(param_1[0x3a]);
      iVar7 = Card_getPropertyMap();
      if (*(uint *)(iVar7 + 0x18) < 0x10) {
        iVar7 = iVar7 + 4;
      }
      else {
        iVar7 = *(int *)(iVar7 + 4);
      }
      pcVar14 = "Playing Card: %s";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar14,iVar7);
      pvVar4 = EvaluationEnvironment_resolveTarget((void *)param_1[0x3a]);
      if (pvVar4 != (void *)0x0) {
        EvaluationEnvironment_resolveTarget((void *)param_1[0x3a]);
        uVar5 = PlayElement_getId();
        pcVar14 = "Card Has Target: %d";
        pvVar4 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar4,pcVar14,uVar5);
      }
      pvVar4 = EvaluationEnvironment_resolveTarget2((void *)param_1[0x3a]);
      if (pvVar4 != (void *)0x0) {
        EvaluationEnvironment_resolveTarget2((void *)param_1[0x3a]);
        uVar5 = PlayElement_getId();
        pcVar14 = "Card Has Target2: %d";
        pvVar4 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar4,pcVar14,uVar5);
      }
      pvVar4 = EvaluationEnvironment_resolveTarget((void *)param_1[0x3a]);
      if (pvVar4 == (void *)0x0) {
        EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
        pvVar4 = (void *)FUN_013402b0();
        pvVar4 = (void *)unknown_getField30(pvVar4);
        EvaluationEnvironment_setCurrentTargetFromElement((void *)param_1[0x3a],pvVar4,pvVar3);
      }
      local_d4 = Mem_Alloc(0x13c);
      local_c._0_1_ = 0xc;
      if (local_d4 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = CommandObject_Move_ctor(local_d4,(void *)param_1[0x3a],0x32);
      }
      local_c._0_1_ = 2;
      MoveActionNode_setMoveDestination(0x32);
      local_d4 = piVar8;
      puVar10 = (undefined4 *)FUN_01313e10(auStack_84);
      FUN_01315a20(apvStack_a8,*puVar10,puVar10[1],&local_d4);
      FUN_01482720(piVar11,local_c4);
    }
    StateMachine_destroyReturnValueMap(local_cc);
    local_d4 = Mem_Alloc(0x18);
    local_c = CONCAT31(local_c._1_3_,0xd);
    if (local_d4 == (int *)0x0) {
LAB_01451a4c:
      uVar5 = 0;
    }
    else {
      uVar5 = ReturnValueMap_ctor();
    }
LAB_01451a4e:
    local_c._0_1_ = 2;
    StateMachine_pushPendingState(uVar5);
    uVar5 = (**(code **)(*(int *)param_1[2] + 0x40))();
    GameResult_appendValue(local_c4);
    uVar5 = StateMachine_setCurrentState(uVar5);
    goto LAB_01451211;
  case 7:
    pcVar14 = "CWActionPlayedState::updateSate kPlayingActionPlayedState";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar14,pvVar3);
    param_1[0x44] = 8;
    *(undefined1 *)((int)param_1 + 0x161) = 0;
    EvaluationEnvironment_setReturnKey38Bool(0);
    EvaluationEnvironment_setReturnKey43Bool(0);
    piVar8 = (int *)StateMachineState_getCurrentTurn();
    (**(code **)(*piVar8 + 0x48))(local_d0);
    FUN_01412fb0();
    iVar7 = local_cc;
    cVar2 = (**(code **)(*piVar11 + 0x100))(local_cc,param_1[0x3a]);
    if (cVar2 != '\0') {
      iVar9 = (**(code **)(*piVar11 + 0xcc))();
      if ((iVar9 == iVar7) ||
         (cVar2 = CommandObject_setActionReturnKey24(), pvVar4 = extraout_EDX_02, cVar2 != '\0')) {
        iVar7 = Card_getPropertyMap();
        if (*(uint *)(iVar7 + 0x18) < 0x10) {
          iVar7 = iVar7 + 4;
        }
        else {
          iVar7 = *(int *)(iVar7 + 4);
        }
        pcVar14 = "Playing Card: %s";
        pvVar4 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar4,pcVar14,iVar7);
        pvVar4 = EvaluationEnvironment_resolveTarget((void *)param_1[0x3a]);
        if (pvVar4 != (void *)0x0) {
          EvaluationEnvironment_resolveTarget((void *)param_1[0x3a]);
          uVar5 = PlayElement_getId();
          pcVar14 = "Card Has Target: %d";
          pvVar4 = (void *)StateMachineState_getGame();
          Game_logGeneral(pvVar4,pcVar14,uVar5);
        }
        pvVar6 = EvaluationEnvironment_resolveTarget2((void *)param_1[0x3a]);
        pvVar4 = extraout_EDX_03;
        if (pvVar6 != (void *)0x0) {
          EvaluationEnvironment_resolveTarget2((void *)param_1[0x3a]);
          uVar5 = PlayElement_getId();
          pcVar14 = "Card Has Target2: %d";
          pvVar4 = (void *)StateMachineState_getGame();
          Game_logGeneral(pvVar4,pcVar14,uVar5);
          pvVar4 = extraout_EDX_04;
        }
      }
      pvVar4 = PlayElementList_collectCommandObjects((void *)param_1[0x3a],pvVar4);
      local_c._0_1_ = 0xe;
      FUN_014135c0(pvVar4);
      local_c._0_1_ = 2;
      FUN_01314560();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_38,
                 "[MID: ");
      local_c._0_1_ = 0xf;
      puVar15 = auStack_54;
      StateMachineState_getGame(puVar15);
      uVar5 = FUN_01356600(puVar15);
      local_c._0_1_ = 0x10;
      StdString_appendSubstring(uVar5,0,0xffffffff);
      local_c._0_1_ = 0xf;
      FUN_0041f1d7();
      FUN_012417e0(&DAT_017a0760);
      local_d4 = Mem_Alloc(0x154);
      if (local_d4 == (int *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        uStack_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        local_c = CONCAT31(local_c._1_3_,0x12);
        local_a0 = 1;
        piVar11 = (int *)CommandObjectEmitTextMessage_doCommand
                                   (&uStack_38,3,auStack_9c,param_1[0x3a]);
      }
      local_c = 0xf;
      if ((local_a0 & 1) != 0) {
        local_a0 = local_a0 & 0xfffffffe;
        FUN_012ce9d0();
      }
      local_d4 = piVar11;
      CommandObjectVector_pushBack(local_c4,&local_d4,pvVar3);
      StateMachine_destroyReturnValueMap(local_cc);
      local_d4 = Mem_Alloc(0x18);
      local_c._0_1_ = 0x14;
      if (local_d4 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = ReturnValueMap_ctor();
      }
      local_c._0_1_ = 0xf;
      StateMachine_pushPendingState(uVar5);
      uVar5 = (**(code **)(*(int *)param_1[2] + 0x40))();
      GameResult_appendValue(local_c4);
      uVar5 = StateMachine_setCurrentState(uVar5);
      local_c._0_1_ = 2;
      FUN_0041f1d7();
      goto LAB_01451211;
    }
    param_1[0x44] = 0x17;
    break;
  case 8:
    cVar2 = FUN_013228c0();
    if (cVar2 != '\0') {
      FUN_013228d0(0);
      param_1[0x44] = 0x17;
      goto LAB_01452087;
    }
    pcVar14 = "CWActionPlayedState::updateSate kDoPostCardPlayedEventResponseState";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar14,pvVar3);
    param_1[0x44] = 0x14;
    FUN_01412fb0();
    StateMachine_destroyReturnValueMap(local_cc);
    local_d4 = Mem_Alloc(0x18);
    local_c = CONCAT31(local_c._1_3_,0x15);
    if (local_d4 == (int *)0x0) goto LAB_01451a4c;
    uVar5 = ReturnValueMap_ctor();
    goto LAB_01451a4e;
  case 9:
    cVar2 = (**(code **)(*piVar11 + 0x124))(0x1ae04);
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar11 + 0x124))(0x1ae03), cVar2 == '\0')) {
      cVar2 = (**(code **)(*piVar11 + 0x124))(0x1ae10);
      if ((cVar2 == '\0') || ((char)param_1[0x49] != '\0')) {
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        local_14 = (void *)CONCAT31(local_14._1_3_,0x1c);
        piVar8 = (int *)StateMachineState_getGame();
        (**(code **)(*piVar8 + 0x144))(auStack_40);
        FUN_01258ec0(apvStack_a8);
        uVar5 = FUN_01258ef0(auStack_8c);
        cVar2 = FUN_012586d0(uVar5);
        if (cVar2 != '\0') {
          do {
            puVar10 = (undefined4 *)FUN_01258670();
            piVar8 = (int *)*puVar10;
            local_d4 = (int *)(**(code **)(*piVar11 + 0x28))();
            piVar8 = (int *)(**(code **)(*piVar8 + 0x28))();
            if (piVar8 == local_d4) {
              puVar10 = (undefined4 *)FUN_01258670();
              cVar2 = (**(code **)(*(int *)*puVar10 + 0x124))(0x1ae03);
              if (cVar2 != '\0') {
                puVar10 = (undefined4 *)FUN_01258670();
                local_d0 = (void *)*puVar10;
              }
            }
            FUN_012586a0();
            uVar5 = FUN_01258ef0(auStack_8c);
            cVar2 = FUN_012586d0(uVar5);
          } while (cVar2 != '\0');
          if (local_d0 != (void *)0x0) {
            local_d4 = Mem_Alloc(0x14);
            local_c._0_1_ = 0x1d;
            if (local_d4 == (int *)0x0) {
              pvVar4 = (void *)0x0;
            }
            else {
              pvVar4 = (void *)FUN_012f9eb0();
            }
            local_c._0_1_ = 0x1c;
            FUN_012f8c70(0x1add6);
            StateMachineState_getGame();
            iVar7 = StateMachine_getCurrentState();
            DisplayActionBuilder_addIntArg(pvVar4,iVar7);
            iVar7 = PlayElement_getId();
            DisplayActionBuilder_addIntArg(pvVar4,iVar7);
            iVar7 = PlayElement_getId();
            DisplayActionBuilder_addIntArg(pvVar4,iVar7);
            piVar8 = (int *)StateMachineState_getGame();
            (**(code **)(*piVar8 + 0x154))(pvVar4);
          }
        }
        local_c._0_1_ = 2;
        STLVector_int_clear(&uStack_38);
      }
      else {
        iVar7 = (**(code **)(*piVar11 + 0x30))();
        if (iVar7 != 0) {
          local_d4 = Mem_Alloc(0x14);
          local_c._0_1_ = 0x1b;
          if (local_d4 == (int *)0x0) {
            pvVar4 = (void *)0x0;
          }
          else {
            pvVar4 = (void *)FUN_012f9eb0();
          }
          local_c._0_1_ = 2;
          FUN_012f8c70(0x1add6);
          StateMachineState_getGame();
          iVar7 = StateMachine_getCurrentState();
          DisplayActionBuilder_addIntArg(pvVar4,iVar7);
          (**(code **)(*piVar11 + 0x30))();
          goto LAB_014525db;
        }
      }
    }
    else {
      pvVar4 = Mem_Alloc(0x14);
      puStack_10._0_1_ = 0x1a;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)FUN_012f9eb0();
      }
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
      FUN_012f8c70(0x1add6);
      StateMachineState_getGame();
      iVar7 = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar4,iVar7);
LAB_014525db:
      iVar7 = PlayElement_getId();
      DisplayActionBuilder_addIntArg(pvVar4,iVar7);
      DisplayActionBuilder_addIntArg(pvVar4,param_1[0x42]);
      piVar8 = (int *)StateMachineState_getGame();
      (**(code **)(*piVar8 + 0x154))(pvVar4);
    }
    pcVar14 = "CWActionPlayedState::updateSate kCompletedActionPlayedState";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar14,pvVar3);
    goto switchD_01450ff9_caseD_4;
  case 0x11:
    goto switchD_01450ff9_caseD_11;
  case 0x13:
    goto LAB_01451b61;
  case 0x14:
    uVar12 = (uint)*(byte *)(param_1 + 0x58);
    pcVar14 = "CWActionPlayedState::updateSate kEmitCardPlayedEventActionPlayedState %d";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar14,uVar12);
    pvVar4 = local_c8;
    param_1[0x44] = 9;
    cVar2 = CommandObject_setActionReturnKey24();
    if ((cVar2 != '\0') || (pvVar6 = (void *)(**(code **)(*piVar11 + 0xcc))(), pvVar6 == pvVar4)) {
      StateMachine_destroyReturnValueMap(local_cc);
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      local_c._0_1_ = 0x16;
      iVar7 = PlayElement_getId();
      set_integer_value_for_key(0x33,iVar7);
      set_integer_value_for_key(0x34,param_1[0x40]);
      EvaluationEnvironment_setReturnKey8Integer(0x16);
      FUN_01386d60(piVar11);
      EvaluationEnvironment_setCardPlayedReturnFromActionId(pvVar4);
      local_d4 = Mem_Alloc(0x124);
      local_c._0_1_ = 0x17;
      if (local_d4 == (int *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = CommandObject_DummyEvent_ctor(local_d4,(void *)param_1[0x3a]);
      }
      local_c = CONCAT31(local_c._1_3_,0x16);
      (**(code **)(*piVar11 + 0x50))(0);
      (**(code **)(*piVar11 + 0x60))(0x16);
      local_d4 = piVar11;
      CommandObjectVector_pushBack(&uStack_38,&local_d4,pvVar3);
LAB_0145221c:
      uVar5 = (**(code **)(*(int *)param_1[2] + 0x40))();
      GameResult_appendValue(&uStack_38);
      uVar5 = StateMachine_setCurrentState(uVar5);
      local_c._0_1_ = 2;
      FUN_01314560();
      goto LAB_01451211;
    }
    break;
  case 0x15:
    pcVar14 = "CWActionPlayedState::updateSate kDeadPlayerReturnActionPlayedState";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar14,pvVar3);
    goto LAB_0145268c;
  case 0x17:
    param_1[0x44] = 0x18;
    if ((char)param_1[0x68] != '\0') {
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      local_c._0_1_ = 0x18;
      FUN_013402b0();
      PlayElement_getGame();
      pvVar4 = (void *)FUN_0139d7c0();
      EvaluationEnvironment_setCurrentTargetFromElement((void *)param_1[0x3a],pvVar4,pvVar3);
      local_d4 = Mem_Alloc(0x13c);
      local_c._0_1_ = 0x19;
      if (local_d4 == (int *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = CommandObject_Move_ctor(local_d4,(void *)param_1[0x3a],0x32);
      }
      local_c = CONCAT31(local_c._1_3_,0x18);
      MoveActionNode_setMoveDestination(0x32);
      local_d4 = piVar11;
      puVar10 = (undefined4 *)FUN_01313e10(auStack_6c);
      FUN_01315a20(apvStack_a8,*puVar10,puVar10[1],&local_d4);
      goto LAB_0145221c;
    }
LAB_01452087:
    uVar5 = (**(code **)(*param_1 + 0x3c))();
    goto LAB_01451211;
  default:
    goto switchD_01450ff9_default;
  }
  uVar5 = (**(code **)(*param_1 + 0x3c))();
LAB_01451211:
  local_c = (uint)local_c._1_3_ << 8;
  FUN_01300cd0();
  local_c = 0xffffffff;
  FUN_01314560();
  ExceptionList = local_14;
  return uVar5;
switchD_01450ff9_caseD_4:
  pvVar6 = local_c8;
switchD_01450ff9_default:
  cVar2 = CommandObject_setActionReturnKey24();
  if ((cVar2 != '\0') || (pvVar3 = (void *)(**(code **)(*piVar11 + 0xcc))(), pvVar3 == pvVar6)) {
    StateMachineState_getCurrentTurn(piVar11);
    GameTurn_pushCurrentPhaseCommand(piVar11);
  }
  EvaluationEnvironment_setReturnKey37Bool(0);
  piVar11 = (int *)StateMachineState_getGame();
  (**(code **)(*piVar11 + 400))(param_1[0x3a]);
  iVar7 = local_cc;
  set_value_boolean(7,true);
  goto LAB_01452684;
}

