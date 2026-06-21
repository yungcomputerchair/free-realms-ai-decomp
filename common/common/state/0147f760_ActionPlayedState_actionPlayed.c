// addr: 0x0147f760
// name: ActionPlayedState_actionPlayed
// subsystem: common/common/state
// source (binary assert): common/common/state/ActionPlayedState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0147fc9c) */
/* WARNING: Removing unreachable block (ram,0x0147fd03) */
/* WARNING: Removing unreachable block (ram,0x0147fbf0) */
/* Setting prototype: uint ActionPlayedState_actionPlayed(void * this) */

uint __fastcall ActionPlayedState_actionPlayed(void *this)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *this_00;
  void *pvVar9;
  int extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  uint uVar10;
  int *piVar11;
  void *this_01;
  undefined4 extraout_EAX_02;
  undefined4 extraout_EAX_03;
  undefined4 extraout_EAX_04;
  undefined4 extraout_EAX_05;
  undefined4 extraout_EAX_06;
  undefined4 extraout_EAX_07;
  void *extraout_EDX;
  void *extraout_EDX_00;
  code *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  void *pvStack_224;
  undefined4 uStack_210;
  int iStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 auStack_144 [36];
  undefined1 auStack_120 [108];
  undefined1 auStack_b4 [156];
  undefined1 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
                    /* Processes an ActionPlayedState action: validates player/card/action return
                       values and targets, checks costs/preconditions/prevention, begins the card
                       action, and records boolean return flags such as
                       skip-cost/ignore-phase/dependent-action. */
  puStack_10 = &LAB_016a0a8b;
  local_14 = ExceptionList;
  pvVar4 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffd90);
  ExceptionList = &local_14;
  local_c = 0;
  if (*(int *)((int)this + 0xe8) == 0) {
    (**(code **)(*(int *)this + 0x4c))();
    EvaluationEnvironment_setDependentActionReturn();
  }
  pvVar5 = Mem_Alloc(0x18);
  local_c._0_1_ = 1;
  if (pvVar5 != (void *)0x0) {
    ReturnValueMap_ctor();
  }
  local_c = (uint)local_c._1_3_ << 8;
  set_value_boolean(7,false);
  if (*(int *)((int)this + 0xfc) == 0) {
    iVar6 = StateMachine_popReturnValueMap();
    if (iVar6 == 0) {
      FUN_012f5a60();
    }
    cVar1 = ReturnValueMap_hasIntegerKey();
    if (cVar1 == '\0') {
      FUN_012f5a60();
    }
    uVar7 = ReturnValueMap_getInteger();
    *(undefined4 *)((int)this + 0xfc) = uVar7;
    cVar1 = ReturnValueMap_hasIntegerKey();
    if (cVar1 == '\0') {
      FUN_012f5a60();
    }
    uVar7 = ReturnValueMap_getInteger();
    *(undefined4 *)((int)this + 0xf8) = uVar7;
    cVar1 = ReturnValueMap_hasIntegerKey();
    if (cVar1 == '\0') {
      FUN_012f5a60();
    }
    uVar7 = ReturnValueMap_getInteger();
    *(undefined4 *)((int)this + 0x108) = uVar7;
    cVar1 = PointerVector_iteratorNotAtEnd();
    if (cVar1 != '\0') {
      cVar1 = ReturnValueMap_hasBooleanKey();
      if (cVar1 == '\0') {
        FUN_012f5a60();
      }
      uVar2 = ReturnValueMap_getBoolean();
      *(undefined1 *)((int)this + 0x125) = uVar2;
    }
    cVar1 = PointerVector_iteratorNotAtEnd();
    if (cVar1 != '\0') {
      cVar1 = ReturnValueMap_hasIntegerKey();
      if (cVar1 == '\0') {
        FUN_012f5a60();
      }
      uVar7 = ReturnValueMap_getInteger();
      *(undefined4 *)((int)this + 0x100) = uVar7;
      *(undefined1 *)((int)this + 0x162) = 0;
    }
    cVar1 = PointerVector_iteratorNotAtEnd();
    if (cVar1 != '\0') {
      cVar1 = ReturnValueMap_hasBooleanKey();
      if (cVar1 == '\0') {
        FUN_012f5a60();
      }
      bVar3 = (bool)ReturnValueMap_getBoolean();
      pvStack_224 = (void *)CONCAT31(pvStack_224._1_3_,bVar3);
      set_boolean_value_key_14(bVar3);
    }
    cVar1 = PointerVector_iteratorNotAtEnd();
    if (cVar1 != '\0') {
      cVar1 = ReturnValueMap_hasBooleanKey();
      if (cVar1 == '\0') {
        FUN_012f5a60();
      }
      uVar2 = ReturnValueMap_getBoolean();
      *(undefined1 *)((int)this + 0x160) = uVar2;
      set_boolean_value_key_18(true);
      EvaluationEnvironment_setDependentActionReturn();
      FUN_01387970();
    }
    cVar1 = PointerVector_iteratorNotAtEnd();
    if (cVar1 != '\0') {
      cVar1 = ReturnValueMap_hasBooleanKey();
      if (cVar1 == '\0') {
        FUN_012f5a60();
      }
      cVar1 = ReturnValueMap_getBoolean();
      if (cVar1 != '\0') {
        EvaluationEnvironment_setCurrentTargetFromElement
                  (*(void **)((int)this + 0xe8),(void *)0x0,pvVar4);
        EvaluationEnvironment_setPlayElementId();
      }
    }
    cVar1 = PointerVector_iteratorNotAtEnd();
    if (cVar1 != '\0') {
      cVar1 = ReturnValueMap_hasBooleanKey();
      if (cVar1 == '\0') {
        FUN_012f5a60();
      }
      bVar3 = (bool)ReturnValueMap_getBoolean();
      pvStack_224 = (void *)CONCAT31(pvStack_224._1_3_,bVar3);
      set_boolean_value_key_17(bVar3);
    }
    cVar1 = PointerVector_iteratorNotAtEnd();
    if (cVar1 != '\0') {
      cVar1 = ReturnValueMap_hasBooleanKey();
      if (cVar1 == '\0') {
        FUN_012f5a60();
      }
      cVar1 = ReturnValueMap_getBoolean();
      *(char *)((int)this + 0x199) = cVar1;
      if (cVar1 == '\x01') {
        EvaluationEnvironment_setSkipPayingCostsReturn();
      }
    }
    cVar1 = PointerVector_iteratorNotAtEnd();
    if (cVar1 != '\0') {
      cVar1 = ReturnValueMap_hasBooleanKey();
      if (cVar1 == '\0') {
        FUN_012f5a60();
      }
      uVar2 = ReturnValueMap_getBoolean();
      *(undefined1 *)((int)this + 0x19a) = uVar2;
    }
    StateMachine_destroyReturnValueMap();
    (**(code **)(*(int *)this + 0xf4))();
    EvaluationEnvironment_setReturnKey37Bool();
  }
  if ((*(char *)((int)this + 0x125) == '\0') &&
     (cVar1 = (**(code **)(*(int *)this + 0x78))(), cVar1 == '\0')) {
    StateMachineState_getGame();
    Game_logGeneralFormatted();
    iVar6 = *(int *)this;
    uVar13 = StateMachineState_getGame(*(undefined4 *)((int)this + 0xf8));
    pvVar4 = find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    FUN_00d8d382(pvVar4);
    (**(code **)(iVar6 + 0x124))();
    StateMachine_pushPendingState();
    ExceptionList = local_14;
    return 1;
  }
  iVar6 = *(int *)((int)this + 0xfc);
  pvVar5 = (void *)StateMachineState_getGame();
  piVar8 = PlayArea_findPlayerElementById(pvVar5,iVar6);
  if (piVar8 == (int *)0x0) {
    iVar6 = *(int *)this;
    uVar13 = StateMachineState_getGame(*(undefined4 *)((int)this + 0xf8));
    pvVar4 = find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    FUN_00d8d382(pvVar4);
    (**(code **)(iVar6 + 0x124))();
    StateMachine_pushPendingState();
    StateMachineState_getGame();
    Game_logGeneralFormatted();
    ExceptionList = local_14;
    return 1;
  }
  uVar13 = StateMachineState_getGame();
  pvVar5 = find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
  if (pvVar5 == (void *)0x0) {
    StateMachineState_getGame();
    Game_logGeneralFormatted();
    StateMachine_pushPendingState();
    ExceptionList = local_14;
    return 1;
  }
  uVar13 = FUN_00d8d382(pvVar5);
  this_00 = (int *)uVar13;
  if (this_00 == (int *)0x0) {
    StateMachine_pushPendingState();
    StateMachineState_getGame();
    Game_logGeneralFormatted();
    goto LAB_014817cc;
  }
  pvVar9 = Card_getActionByID(this_00,(int)((ulonglong)uVar13 >> 0x20));
  pvVar5 = extraout_EDX;
  if (*(int *)((int)this + 0x110) == 9) {
    if (pvVar9 == (void *)0x0) {
      set_value_boolean(7,true);
      StateMachine_pushPendingState();
      goto LAB_014817cc;
    }
  }
  else if (pvVar9 == (void *)0x0) {
    FUN_012f5a60();
    pvVar5 = extraout_EDX_00;
  }
  bVar3 = card_check_target_modifier_predicates(this_00,pvVar5);
  *(bool *)((int)this + 0x124) = bVar3;
  iVar6 = unknown_getField38(this_00);
  if (((iVar6 == 1) || (iVar6 = unknown_getField38(this_00), iVar6 == 2)) &&
     (Game_handleMissingCostCard(), extraout_EAX == 0)) {
    uVar7 = (**(code **)(*this_00 + 0x30))();
    iVar6 = FUN_00d8d382(uVar7);
    if (iVar6 != 0) {
      FUN_01387360();
    }
  }
  *(undefined4 *)((int)this + 0x114) = 10;
  if (*(int *)((int)this + 0x100) != 0) {
    uVar13 = StateMachineState_getGame();
    pvVar5 = find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    EvaluationEnvironment_setCurrentTargetFromElement(*(void **)((int)this + 0xe8),pvVar5,pvVar4);
  }
  if (*(int *)((int)this + 0x104) != 0) {
    uVar13 = StateMachineState_getGame();
    find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
    EvaluationEnvironment_setPlayElementId();
  }
  if (*(int *)((int)this + 0x108) != 0) {
    EvaluationEnvironment_setActionReturn();
  }
  (**(code **)(*piVar8 + 0x84))();
  set_play_element_id_field(*(void **)((int)this + 0xe8),this_00);
  pvVar5 = (void *)(**(code **)(*this_00 + 0xcc))();
  if ((pvVar5 == pvVar9) || (cVar1 = CommandObject_setActionReturnKey24(), cVar1 != '\0')) {
    iVar6 = Card_getPropertyMap();
    if (*(uint *)(iVar6 + 0x18) < 0x10) {
      iVar6 = iVar6 + 4;
    }
    else {
      iVar6 = *(int *)(iVar6 + 4);
    }
    pcVar14 = "defaultplayaction in actionplayed state: %s";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar14,iVar6);
  }
  FUN_012fa910();
  local_c._0_1_ = 2;
  switch(*(undefined4 *)((int)this + 0x110)) {
  case 0:
    *(undefined4 *)((int)this + 0x110) = 1;
    pvVar5 = (void *)(**(code **)(*this_00 + 0xcc))();
    if ((pvVar5 == pvVar9) || (cVar1 = CommandObject_setActionReturnKey24(), cVar1 != '\0')) {
      uVar7 = (**(code **)(*this_00 + 0x30))();
      iVar6 = FUN_00d8d382(uVar7);
      if (iVar6 != 0) {
        FUN_01387360();
      }
    }
    break;
  case 1:
    break;
  case 2:
    goto LAB_01480083;
  case 3:
    goto switchD_0147ff0c_caseD_3;
  case 4:
    goto switchD_0147ff0c_caseD_4;
  case 5:
    *(undefined4 *)((int)this + 0x110) = 4;
    iVar6 = *piVar8;
    FUN_01321f20();
    (**(code **)(iVar6 + 0x8c))();
    pvVar5 = EvaluationEnvironment_resolveTarget(*(void **)((int)this + 0xe8));
    *(void **)((int)this + 0x168) = pvVar5;
    pvVar5 = EvaluationEnvironment_resolveTarget2(*(void **)((int)this + 0xe8));
    *(void **)((int)this + 0x16c) = pvVar5;
    EvaluationEnvironment_setCardPlayedReturnFromActionId();
    EvaluationEnvironment_setReturnKey38Bool();
    (**(code **)(*this_00 + 0x1a8))();
    pvVar5 = (void *)StateMachineState_getGame();
    bVar3 = Game_getFlag_14d(pvVar5);
    if (!bVar3) {
      StateMachine_destroyReturnValueMap();
      pcVar14 = "Waiting for Preventing player info from server.";
      *(undefined4 *)((int)this + 0x110) = 0x10;
      pvVar5 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar5,pcVar14,pvVar4);
      goto LAB_0148028a;
    }
    pvVar5 = Mem_Alloc(0x34);
    local_c._0_1_ = 0xe;
    if (pvVar5 == (void *)0x0) {
      pvStack_224 = (void *)0x0;
    }
    else {
      uVar7 = StateMachineState_getGame();
      pvStack_224 = GameCommand_CanPrevent_ctorWithContext(pvVar5,uVar7);
    }
    iStack_20c = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    local_c = CONCAT31(local_c._1_3_,0xf);
    FUN_01269090();
    FUN_01269060();
    cVar1 = FUN_01268ea0();
    while (cVar1 != '\0') {
      FUN_01268e40();
      GamePlayer_getPlayerId();
      FUN_0042c155();
      FUN_0132e500();
      cVar1 = FUN_01268ea0();
    }
    FUN_005f15f0(&uStack_210);
    local_c._1_3_ = (uint3)(local_c >> 8);
    local_c._0_1_ = 0xf;
    FUN_014e0a20();
    iVar6 = 0;
    pvVar5 = pvStack_224;
    this_01 = (void *)StateMachineState_getGame();
    Game_dispatchCommandToPlayer(this_01,iVar6,pvVar5);
    local_c._0_1_ = 2;
    StdVector_clearStorage(&uStack_210);
  case 0x10:
    *(undefined4 *)((int)this + 0x110) = 4;
    FUN_01469400();
    cVar1 = FUN_014694a0();
    if (cVar1 == '\0') {
      *(undefined4 *)((int)this + 0x114) = 0xe;
      piVar8 = (int *)FUN_01469430();
      iVar6 = *piVar8;
      *(int *)((int)this + 0x120) = iVar6;
      if (iVar6 == 0) {
        FUN_012f5a60();
      }
      piVar8 = (int *)StateMachineState_getCurrentTurn();
      pvVar4 = *(void **)((int)this + 0x120);
      (**(code **)(*piVar8 + 0x48))();
      FUN_013815b0();
      EvaluationEnvironment_ctor();
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x11);
      EvaluationEnvironment_copyFrom(auStack_b4,*(void **)((int)this + 0xe8),pvVar4);
      (**(code **)(*this_00 + 0x104))();
      FUN_01384050();
      uStack_18 = 0x12;
      FUN_01387e60();
      uStack_18 = 0x11;
      FUN_0041f1d7();
      (**(code **)(*(int *)this + 0x9c))();
      StateMachine_destroyReturnValueMap();
      local_c._0_1_ = 2;
      FUN_01385460();
      goto LAB_0148028a;
    }
    *(undefined1 *)((int)this + 0x11e) = 0;
    *(undefined4 *)((int)this + 0x114) = 10;
switchD_0147ff0c_caseD_4:
    if (*(char *)((int)this + 0x11e) != '\0') {
      if (*(char *)((int)this + 0x11c) == '\0') {
        if ((*(char *)((int)this + 0x11e) != '\0') && (*(char *)((int)this + 0x11c) == '\0')) {
          CommandObject_registerPropertyAction(*(void **)((int)this + 0xe8));
          *(undefined4 *)((int)this + 0x194) = extraout_EAX_03;
          pvVar4 = Rules_getVariable7Card();
          *(void **)((int)this + 400) = pvVar4;
          FUN_012fa910();
          local_c = CONCAT31(local_c._1_3_,0x16);
          (**(code **)(*this_00 + 4))();
          if (pvStack_224 == (void *)0x3) {
            (**(code **)(*this_00 + 0x108))();
            local_14._0_1_ = 0x17;
            iVar6 = *(int *)((int)this + 0x120);
            pcVar14 = "You choose not to prevent the action of %s";
            pvVar4 = (void *)StateMachineState_getGame();
            GamePlayer_logFormattedMessage(pvVar4,iVar6,pcVar14);
            local_14._0_1_ = 0x16;
            FUN_0041f1d7();
            uStack_210 = 0;
            iStack_20c = 0;
            local_14 = (void *)CONCAT31(local_14._1_3_,0x18);
            StateMachineState_getGame();
            FUN_013630f0();
            FUN_01269090();
            FUN_01269060();
            cVar1 = FUN_01268ea0();
            while (cVar1 != '\0') {
              piVar8 = (int *)FUN_01268e40();
              if (*piVar8 != *(int *)((int)this + 0x120)) {
                (**(code **)(*this_00 + 0x108))();
                local_14._0_1_ = 0x19;
                Game_formatCommandObjectListText(*(void **)((int)this + 0x120),auStack_144);
                local_14._0_1_ = 0x1a;
                piVar8 = (int *)FUN_01268e40();
                iVar6 = *piVar8;
                pcVar14 = "%s chooses not to prevent %s action.";
                pvVar4 = (void *)StateMachineState_getGame();
                GamePlayer_logFormattedMessage(pvVar4,iVar6,pcVar14);
                local_14._0_1_ = 0x19;
                FUN_0041f1d7();
                local_14 = (void *)CONCAT31(local_14._1_3_,0x18);
                FUN_0041f1d7();
              }
              FUN_0132e500();
              cVar1 = FUN_01268ea0();
            }
            local_14._1_3_ = (undefined3)((uint)local_14 >> 8);
            local_14 = (void *)CONCAT31(local_14._1_3_,0x16);
            FUN_01269120();
          }
          FUN_01469460();
          FUN_01469400();
          cVar1 = FUN_014694a0();
          if (cVar1 == '\0') {
            piVar8 = (int *)FUN_01469430();
            iVar6 = *piVar8;
            *(int *)((int)this + 0x120) = iVar6;
            if (iVar6 == 0) {
              FUN_012f5a60("mPreventingPlayer");
            }
            piVar8 = (int *)StateMachineState_getCurrentTurn();
            (**(code **)(*piVar8 + 0x48))();
            FUN_013815b0();
            (**(code **)(*(int *)this + 0x9c))();
            *(undefined4 *)((int)this + 0x114) = 0xe;
            StateMachine_destroyReturnValueMap();
            local_c._0_1_ = 2;
            FUN_01300cd0();
            goto LAB_0148028a;
          }
          *(undefined4 *)((int)this + 0x110) = 4;
          *(undefined1 *)((int)this + 0x11e) = 0;
          StateMachine_destroyReturnValueMap();
          uVar10 = (**(code **)(*(int *)this + 0x38))();
          local_c = CONCAT31(local_c._1_3_,2);
          FUN_01300cd0();
          goto LAB_01480738;
        }
        goto LAB_014810c7;
      }
      *(undefined4 *)((int)this + 0x110) = 6;
      FUN_01412fb0();
      FUN_01383010();
      CommandObject_registerPropertyAction(*(void **)((int)this + 0xe8));
      *(undefined4 *)((int)this + 0x194) = extraout_EAX_02;
      pvVar4 = Rules_getVariable7Card();
      *(void **)((int)this + 400) = pvVar4;
      FUN_013815b0();
      cVar1 = (**(code **)(*this_00 + 0xb0))();
      if (cVar1 != '\0') {
        EvaluationEnvironment_addCommandObjectChecked();
        local_c._0_1_ = 0x13;
        FUN_014135c0();
        local_c._0_1_ = 2;
        FUN_01314560();
        EvaluationEnvironment_setForceReturn();
        *(undefined4 *)((int)this + 0x114) = 0xf;
        StateMachine_destroyReturnValueMap();
        pvVar4 = Mem_Alloc(0x18);
        local_c._0_1_ = 0x14;
        if (pvVar4 != (void *)0x0) {
          ReturnValueMap_ctor();
        }
        local_c._0_1_ = 2;
        StateMachine_pushPendingState();
        pvVar4 = Mem_Alloc(0x15c);
        local_c = CONCAT31(local_c._1_3_,0x15);
        goto LAB_01480d71;
      }
      StateMachineState_getGame();
      Game_logGeneralFormatted();
      goto LAB_01480017;
    }
LAB_014810c7:
    cVar1 = CommandObject_setActionReturnKey5();
    if (cVar1 != '\x01') {
      *(undefined4 *)((int)this + 0x110) = 6;
      *(undefined4 *)((int)this + 0x114) = 0xf;
      piVar8 = (int *)StateMachineState_getCurrentTurn();
      (**(code **)(*piVar8 + 0x48))();
      pvVar4 = Mem_Alloc(0x18);
      local_c._0_1_ = 0x1b;
      if (pvVar4 != (void *)0x0) {
        ReturnValueMap_ctor();
      }
      local_c._0_1_ = 2;
      StateMachine_pushPendingState();
      StateMachine_destroyReturnValueMap();
      EvaluationEnvironment_emitActionDebugLog(*(void **)((int)this + 0xe8));
      *(undefined4 *)((int)this + 0x18c) = extraout_EAX_06;
      pvVar4 = Mem_Alloc(0x148);
      local_c._0_1_ = 0x1c;
      if (pvVar4 != (void *)0x0) {
        ProcessEventEmissionState_copy_ctor(pvVar4,*(void **)((int)this + 8));
      }
      local_c = CONCAT31(local_c._1_3_,2);
      pvVar4 = Rules_getVariable7Card();
      *(void **)((int)this + 400) = pvVar4;
      FUN_01386d60();
      CommandObject_registerPropertyAction(*(void **)((int)this + 0xe8));
      uVar7 = extraout_EAX_07;
      goto LAB_0148071c;
    }
    EvaluationEnvironment_emitActionDebugLog(*(void **)((int)this + 0xe8));
    *(undefined4 *)((int)this + 0x18c) = extraout_EAX_04;
    pvVar5 = Rules_getVariable7Card();
    *(void **)((int)this + 400) = pvVar5;
    CommandObject_registerPropertyAction(*(void **)((int)this + 0xe8));
    *(undefined4 *)((int)this + 0x194) = extraout_EAX_05;
    *(undefined4 *)((int)this + 0x110) = 7;
switchD_0147ff0c_caseD_6:
    *(undefined4 *)((int)this + 0x110) = 7;
    piVar11 = (int *)StateMachineState_getCurrentTurn();
    (**(code **)(*piVar11 + 0x48))();
    EvaluationEnvironment_setReturnKey8Integer();
    FUN_01386d60();
    EvaluationEnvironment_setCardPlayedReturnFromActionId();
    EvaluationEnvironment_setReturnKey38Bool();
    if (*(char *)((int)this + 0x11d) == '\0') {
LAB_01481604:
      if ((*(char *)((int)this + 0x11e) != '\0') && (*(char *)((int)this + 0x11c) != '\0')) {
        bVar3 = false;
        pvVar5 = (void *)StateMachineState_getCurrentTurn();
        set_flag_84(pvVar5,bVar3);
      }
switchD_0147ff0c_caseD_7:
      *(undefined4 *)((int)this + 0x110) = 9;
      *(undefined1 *)((int)this + 0x161) = 0;
      EvaluationEnvironment_setCurrentTargetFromElement
                (*(void **)((int)this + 0xe8),*(void **)((int)this + 0x168),pvVar4);
      EvaluationEnvironment_setPlayElementId();
      EvaluationEnvironment_setReturnKey38Bool();
      EvaluationEnvironment_setReturnKey43Bool();
      piVar11 = (int *)StateMachineState_getCurrentTurn();
      (**(code **)(*piVar11 + 0x48))();
      FUN_01412fb0();
      if (*(int *)((int)this + 0x100) == 0) {
        FUN_013815b0();
        pcVar12 = *(code **)(*piVar8 + 0x68);
      }
      else {
        pcVar12 = *(code **)(*piVar8 + 0x68);
      }
      (*pcVar12)(this_00);
      StateMachine_destroyReturnValueMap();
      pvVar4 = Mem_Alloc(0x18);
      local_c._0_1_ = 0x24;
      if (pvVar4 != (void *)0x0) {
        ReturnValueMap_ctor();
      }
      local_c._0_1_ = 2;
      StateMachine_pushPendingState();
      pvVar4 = Mem_Alloc(0x15c);
      local_c = CONCAT31(local_c._1_3_,0x25);
LAB_01480d71:
      if (pvVar4 != (void *)0x0) {
        HandleResponseState_copy_ctor(pvVar4,*(void **)((int)this + 8));
      }
      local_c = CONCAT31(local_c._1_3_,2);
      GameResult_appendValue();
      goto LAB_0148072e;
    }
    pvVar5 = (void *)StateMachineState_getCurrentTurn();
    bVar3 = get_flag_84(pvVar5);
    if (bVar3) goto LAB_01481604;
    FUN_012fa910();
    local_c._0_1_ = 0x1d;
    (**(code **)(*this_00 + 4))();
    if (iStack_20c == 3) {
      if (*(int *)((int)this + 0x120) == 0) {
        local_c = CONCAT31(local_c._1_3_,0x1e);
        StateMachineState_getGame();
        FUN_013630f0();
        FUN_01269090();
        FUN_01269060();
        cVar1 = FUN_01268ea0();
        while (cVar1 != '\0') {
          (**(code **)(*this_00 + 0x108))();
          local_c._0_1_ = 0x1f;
          piVar8 = (int *)FUN_01268e40();
          iVar6 = *piVar8;
          pcVar14 = "The action of %s is prevented.";
          pvVar4 = (void *)StateMachineState_getGame();
          GamePlayer_logFormattedMessage(pvVar4,iVar6,pcVar14);
          local_c = CONCAT31(local_c._1_3_,0x1e);
          FUN_0041f1d7();
          FUN_0132e500();
          cVar1 = FUN_01268ea0();
        }
        local_c._1_3_ = (uint3)(local_c >> 8);
      }
      else {
        (**(code **)(*this_00 + 0x108))();
        local_c._0_1_ = 0x20;
        iVar6 = *(int *)((int)this + 0x120);
        pcVar14 = "You prevent the action of %s.";
        pvVar4 = (void *)StateMachineState_getGame();
        GamePlayer_logFormattedMessage(pvVar4,iVar6,pcVar14);
        local_c._0_1_ = 0x1d;
        FUN_0041f1d7();
        local_c = CONCAT31(local_c._1_3_,0x21);
        StateMachineState_getGame();
        FUN_013630f0();
        FUN_01269090();
        FUN_01269060();
        cVar1 = FUN_01268ea0();
        while (cVar1 != '\0') {
          piVar8 = (int *)FUN_01268e40();
          if (*piVar8 != *(int *)((int)this + 0x120)) {
            (**(code **)(*this_00 + 0x108))();
            local_c._0_1_ = 0x22;
            Game_copyCommandObjectList(*(void **)((int)this + 0x120),auStack_120);
            local_c._0_1_ = 0x23;
            piVar8 = (int *)FUN_01268e40();
            iVar6 = *piVar8;
            pcVar14 = "%s prevents %s\'s action.";
            pvVar4 = (void *)StateMachineState_getGame();
            GamePlayer_logFormattedMessage(pvVar4,iVar6,pcVar14);
            local_c._0_1_ = 0x22;
            FUN_0041f1d7();
            local_c = CONCAT31(local_c._1_3_,0x21);
            FUN_0041f1d7();
          }
          FUN_0132e500();
          cVar1 = FUN_01268ea0();
        }
        local_c._1_3_ = (uint3)(local_c >> 8);
      }
      local_c._0_1_ = 0x1d;
      FUN_01269120();
    }
    if ((*(char *)((int)this + 0x124) == '\x01') &&
       ((pvVar4 = (void *)(**(code **)(*this_00 + 0xcc))(), pvVar9 == pvVar4 ||
        (cVar1 = CommandObject_setActionReturnKey24(), cVar1 != '\0')))) {
      (**(code **)(*this_00 + 0x150))();
    }
    bVar3 = false;
    pvVar4 = (void *)StateMachineState_getCurrentTurn();
    set_flag_84(pvVar4,bVar3);
    *(undefined4 *)((int)this + 0x110) = 9;
    set_value_boolean(7,true);
    StateMachine_pushPendingState();
    local_c._0_1_ = 2;
    FUN_01300cd0();
    goto LAB_014817bb;
  case 6:
    goto switchD_0147ff0c_caseD_6;
  case 7:
    goto switchD_0147ff0c_caseD_7;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  default:
    cVar1 = CommandObject_setActionReturnKey24();
    if ((cVar1 != '\0') || (pvVar4 = (void *)(**(code **)(*this_00 + 0xcc))(), pvVar4 == pvVar9)) {
      piVar8 = (int *)StateMachineState_getGame();
      (**(code **)(*piVar8 + 0x21c))();
      StateMachineState_getCurrentTurn();
      GameTurn_pushCurrentPhaseCommand();
    }
    EvaluationEnvironment_setReturnKey37Bool();
    piVar8 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar8 + 400))();
    set_value_boolean(7,true);
    goto LAB_014817b3;
  case 0x11:
    goto switchD_0147ff0c_caseD_11;
  }
  *(undefined4 *)((int)this + 0x110) = 2;
  if ((*(char *)((int)this + 0x125) == '\0') &&
     (cVar1 = (**(code **)(*(int *)this + 0x78))(), cVar1 == '\0')) {
LAB_0147ff9e:
    StateMachineState_getGame();
    Game_logGeneralFormatted();
    (**(code **)(*(int *)this + 0x124))();
LAB_014817b3:
    StateMachine_pushPendingState();
  }
  else {
    iVar6 = (**(code **)(*this_00 + 0x28))();
    if (iVar6 != *(int *)((int)this + 0xfc)) {
      piVar11 = this_00;
      pvVar5 = (void *)StateMachineState_getGame();
      bVar3 = Game_hasRegisteredObject_01356120(pvVar5,piVar11);
      if ((bVar3) || (*(char *)((int)this + 0x125) != '\0')) goto LAB_0148002e;
      (**(code **)(*this_00 + 0x28))();
      StateMachineState_getGame();
      Game_logGeneralFormatted();
LAB_01480017:
      (**(code **)(*(int *)this + 0x124))();
      goto LAB_014817b3;
    }
LAB_0148002e:
    if ((((*(char *)((int)this + 0x124) == '\x01') && (*(char *)((int)this + 0x199) == '\0')) &&
        ((pvVar5 = (void *)(**(code **)(*this_00 + 0xcc))(), pvVar9 == pvVar5 ||
         (cVar1 = CommandObject_setActionReturnKey24(), cVar1 != '\0')))) &&
       (cVar1 = (**(code **)(*this_00 + 0x110))(), cVar1 == '\0')) goto LAB_0147ff9e;
LAB_01480083:
    if (*(char *)((int)this + 0x199) == '\x01') {
      *(undefined4 *)((int)this + 0x110) = 5;
    }
    else {
      *(uint *)((int)this + 0x110) =
           (-(uint)(*(char *)((int)this + 0x19a) != '\0') & 0xfffffff2) + 0x11;
    }
    if (*(char *)((int)this + 0xe4) == '\0') {
      if ((*(int *)((int)this + 0x100) == 0) || (*(int *)((int)this + 0x104) == 0)) {
        cVar1 = (**(code **)(*piVar8 + 0x58))();
        if (cVar1 != '\0') goto LAB_014802ed;
        StateMachineState_getGame();
        Game_logGeneralFormatted();
        if (((*(char *)((int)this + 0x10c) != '\0') || (*(char *)((int)this + 0x10d) != '\0')) &&
           (*(char *)((int)this + 0xe4) == '\0')) {
          pvVar4 = (void *)StateMachine_getCurrentState();
          pvVar4 = get_field_1c_address(pvVar4);
          uVar10 = *(uint *)((int)pvVar4 + 0x14);
          pvVar4 = (void *)StateMachine_getCurrentState();
          pvVar4 = get_field_1c_address(pvVar4);
          if (*(uint *)((int)pvVar4 + 0x18) < 0x10) {
            pcVar14 = (char *)((int)pvVar4 + 4);
          }
          else {
            pcVar14 = *(char **)((int)pvVar4 + 4);
          }
          iVar6 = __strnicmp(pcVar14,"ActionPlayedState",uVar10);
          if (iVar6 == 0) {
            *(undefined4 *)((int)this + 0x114) = 0xb;
            *(undefined4 *)((int)this + 0x110) = 2;
            pvVar4 = Mem_Alloc(0x13c);
            local_c._0_1_ = 3;
            if (pvVar4 == (void *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)GetTargetState_ctor();
            }
            local_c._0_1_ = 2;
            iVar6 = StateMachineState_getPreviousState();
            if (iVar6 != 0) {
              (**(code **)(*piVar8 + 0x104))();
            }
            StateMachine_setCurrentState();
          }
          StateMachine_destroyReturnValueMap();
LAB_0148028a:
          local_c = (uint)local_c._1_3_ << 8;
          FUN_01300cd0();
          local_c = 0xffffffff;
          FUN_01314560();
          ExceptionList = local_14;
          return 2;
        }
        ReturnValueMap_setInteger();
        StateMachine_pushPendingState();
        pcVar14 = "Returing false where previously returned true";
      }
      else {
        cVar1 = (**(code **)(*piVar8 + 0x58))();
        if (cVar1 != '\0') {
LAB_014802ed:
          cVar1 = CommandObject_setActionReturnKey5();
          if ((cVar1 == '\0') && (*(char *)((int)this + 0x160) == '\0')) {
            pvVar5 = Mem_Alloc(0x5c);
            local_c._0_1_ = 4;
            if (pvVar5 == (void *)0x0) {
              pvVar5 = (void *)0x0;
            }
            else {
              StateMachineState_getGame();
              pvVar5 = (void *)GameCommand_ActionPlayed_ctor();
            }
            local_c._0_1_ = 2;
            uVar10 = GamePlayer_getPlayerId();
            set_field_4(pvVar5,uVar10);
            FUN_01321f20();
            StateCommand_setSecondIntArg();
            uVar13 = StateMachineState_getGame();
            find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
            GameCommand_ActionPlayed_setTarget1();
            uVar13 = StateMachineState_getGame();
            find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
            GameCommand_ActionPlayed_setTarget2();
            StateCommand_setThirdIntArg();
            GameCommand_ActionPlayed_setPlayedCardFromCard();
LAB_014805bb:
            GamePlayer_getPlayerId();
            StateMachineState_getGame();
            Game_dispatchCommandToPlayerOrAll();
          }
          else {
            cVar1 = CommandObject_setActionReturnKey5();
            if (((cVar1 == '\0') &&
                ((*(char *)((int)this + 0x160) == '\x01' && (*(int *)((int)this + 0x100) != 0)))) &&
               (*(char *)((int)this + 0x162) == '\x01')) {
              pvVar5 = Mem_Alloc(0x38);
              local_c._0_1_ = 5;
              if (pvVar5 == (void *)0x0) {
                pvVar5 = (void *)0x0;
              }
              else {
                StateMachineState_getGame();
                pvVar5 = (void *)GameCommand_CardSelected_ctor();
              }
              local_c._0_1_ = 2;
              uVar10 = GamePlayer_getPlayerId();
              set_field_4(pvVar5,uVar10);
              GameCommand_CardSelected_setCard();
              GamePlayer_getPlayerId();
              StateMachineState_getGame();
              Game_dispatchCommandToPlayerOrAll();
              if (*(int *)((int)this + 0x104) != 0) {
                pvVar5 = Mem_Alloc(0x38);
                local_c._0_1_ = 6;
                if (pvVar5 == (void *)0x0) {
                  pvVar5 = (void *)0x0;
                }
                else {
                  StateMachineState_getGame();
                  pvVar5 = (void *)GameCommand_CardSelected_ctor();
                }
                local_c._0_1_ = 2;
                uVar10 = GamePlayer_getPlayerId();
                set_field_4(pvVar5,uVar10);
LAB_014805b4:
                GameCommand_CardSelected_setCard();
                goto LAB_014805bb;
              }
            }
            else {
              cVar1 = CommandObject_setActionReturnKey5();
              if ((((cVar1 == '\x01') && (*(char *)((int)this + 0x160) == '\0')) &&
                  (*(int *)((int)this + 0x100) != 0)) && (*(char *)((int)this + 0x162) == '\x01')) {
                pvVar5 = Mem_Alloc(0x38);
                local_c._0_1_ = 7;
                if (pvVar5 == (void *)0x0) {
                  pvVar5 = (void *)0x0;
                }
                else {
                  StateMachineState_getGame();
                  pvVar5 = (void *)GameCommand_CardSelected_ctor();
                }
                local_c._0_1_ = 2;
                uVar10 = GamePlayer_getPlayerId();
                set_field_4(pvVar5,uVar10);
                GameCommand_CardSelected_setCard();
                GamePlayer_getPlayerId();
                StateMachineState_getGame();
                Game_dispatchCommandToPlayerOrAll();
                if (*(int *)((int)this + 0x104) != 0) {
                  pvVar5 = Mem_Alloc(0x38);
                  local_c._0_1_ = 8;
                  if (pvVar5 == (void *)0x0) {
                    pvVar5 = (void *)0x0;
                  }
                  else {
                    StateMachineState_getGame();
                    pvVar5 = (void *)GameCommand_CardSelected_ctor();
                  }
                  local_c._0_1_ = 2;
                  uVar10 = GamePlayer_getPlayerId();
                  set_field_4(pvVar5,uVar10);
                  goto LAB_014805b4;
                }
              }
            }
          }
switchD_0147ff0c_caseD_11:
          *(undefined4 *)((int)this + 0x110) = 3;
          cVar1 = CommandObject_setActionReturnKey24();
          if ((cVar1 == '\0') || (*(char *)((int)this + 0x19a) != '\0')) {
switchD_0147ff0c_caseD_3:
            *(undefined4 *)((int)this + 0x110) = 5;
            piVar11 = (int *)StateMachineState_getGame();
            (**(code **)(*piVar11 + 0x1ec))();
            FUN_01300680();
            set_boolean_value_key_17(false);
            EvaluationEnvironment_setReturnKey43Bool();
            *(undefined1 *)((int)this + 0x161) = 0;
            FUN_01412fb0();
            cVar1 = (**(code **)(*piVar8 + 100))
                              (this_00,*(undefined4 *)((int)this + 0x108),&stack0xfffffd9c);
            if (cVar1 == '\0') {
              StateMachineState_getGame();
              Game_logGeneralFormatted();
              goto LAB_014817b3;
            }
            if (*(char *)((int)this + 0x199) == '\x01') {
              FUN_01412fb0();
            }
            StateMachine_destroyReturnValueMap();
            *(undefined4 *)((int)this + 0x114) = 0xd;
            pvVar4 = Mem_Alloc(0x18);
            local_c._0_1_ = 0xc;
            if (pvVar4 != (void *)0x0) {
              ReturnValueMap_ctor();
            }
            local_c._0_1_ = 2;
            StateMachine_pushPendingState();
            pvVar4 = Mem_Alloc(0x15c);
            local_c._0_1_ = 0xd;
            if (pvVar4 != (void *)0x0) {
              HandleResponseState_copy_ctor(pvVar4,*(void **)((int)this + 8));
            }
            local_c = CONCAT31(local_c._1_3_,2);
            GameResult_appendValue();
          }
          else {
            *(undefined1 *)((int)this + 0x161) = 0;
            *(undefined4 *)((int)this + 0x114) = 0x12;
            piVar8 = (int *)StateMachineState_getCurrentTurn();
            (**(code **)(*piVar8 + 0x48))();
            pvVar5 = Mem_Alloc(0x18);
            local_c._0_1_ = 9;
            if (pvVar5 != (void *)0x0) {
              ReturnValueMap_ctor();
            }
            local_c._0_1_ = 2;
            StateMachine_pushPendingState();
            StateMachine_destroyReturnValueMap();
            EvaluationEnvironment_emitActionDebugLog(*(void **)((int)this + 0xe8));
            *(undefined4 *)((int)this + 0x18c) = extraout_EAX_00;
            pvVar5 = Mem_Alloc(0x94);
            local_c._0_1_ = 10;
            if (pvVar5 == (void *)0x0) {
              pvVar5 = (void *)0x0;
            }
            else {
              pvVar5 = (void *)EvaluationEnvironment_ctor();
            }
            local_c._0_1_ = 2;
            EvaluationEnvironment_copyFrom(pvVar5,*(void **)((int)this + 0xe8),pvVar4);
            StateMachine_setCurrentEnvironment();
            pvVar4 = Mem_Alloc(0x148);
            local_c._0_1_ = 0xb;
            if (pvVar4 != (void *)0x0) {
              ProcessEventEmissionState_copy_ctor(pvVar4,*(void **)((int)this + 8));
            }
            local_c = CONCAT31(local_c._1_3_,2);
            pvVar4 = Rules_getVariable7Card();
            *(void **)((int)this + 400) = pvVar4;
            FUN_01386d60();
            CommandObject_registerPropertyAction(*(void **)((int)this + 0xe8));
            uVar7 = extraout_EAX_01;
LAB_0148071c:
            *(undefined4 *)((int)this + 0x194) = uVar7;
            EvaluationEnvironment_setCardPlayedReturnFromActionId();
          }
LAB_0148072e:
          uVar10 = StateMachine_setCurrentState();
LAB_01480738:
          local_c = local_c & 0xffffff00;
          FUN_01300cd0();
          local_c = 0xffffffff;
          FUN_01314560();
          ExceptionList = local_14;
          return uVar10;
        }
        StateMachineState_getGame();
        Game_logGeneralFormatted();
        (**(code **)(*(int *)this + 0x124))();
        ReturnValueMap_setInteger();
        StateMachine_pushPendingState();
        pcVar14 = "Returing false where previously returned true2";
      }
    }
    else {
      ReturnValueMap_setInteger();
      StateMachine_pushPendingState();
      pcVar14 = "No Valid targets in Can Be played, preventing infinite recursion.";
    }
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar14,pvVar4);
  }
LAB_014817bb:
  local_c = (uint)local_c._1_3_ << 8;
  FUN_01300cd0();
LAB_014817cc:
  local_c = 0xffffffff;
  FUN_01314560();
  ExceptionList = local_14;
  return 1;
}

