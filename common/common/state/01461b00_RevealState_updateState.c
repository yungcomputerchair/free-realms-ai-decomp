// addr: 0x01461b00
// name: RevealState_updateState
// subsystem: common/common/rules
// source (binary assert): common/common/state/RevealState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 __fastcall RevealState_updateState(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint value_;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined1 *sourceEnv;
  char *pcVar15;
  void *local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [4];
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_e8 [28];
  undefined1 auStack_cc [20];
  undefined1 auStack_b8 [156];
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Advances RevealState after selection/restore, sends close reveal commands,
                       validates selected targets, and can create play-card commands. */
  local_c = 0xffffffff;
  puStack_10 = &LAB_0169d64b;
  local_14 = ExceptionList;
  pvVar4 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffe98);
  ExceptionList = &local_14;
  pvVar5 = (void *)StateMachineState_getGame();
  bVar2 = Game_getPendingFlag_131(pvVar5);
  if (bVar2) {
    ExceptionList = local_14;
    return 1;
  }
  switch(param_1[0x46]) {
  case 1:
    break;
  case 2:
    pvVar4 = Mem_Alloc(0x18);
    local_c = 9;
    if (pvVar4 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = ReturnValueMap_ctor();
    }
    local_c = 0xffffffff;
    if (param_1[0x45] == 0) {
      FUN_012f5a60("mSelectedTarget","..\\common\\common\\state\\RevealState.cpp",0x299);
    }
    uVar11 = PlayElement_getId();
    ReturnValueMap_setInteger(1,uVar11);
    StateMachine_pushPendingState(uVar6);
    pcVar1 = *(code **)(*param_1 + 0x44);
    param_1[0x46] = 3;
    uVar6 = (*pcVar1)();
    ExceptionList = local_14;
    return uVar6;
  case 3:
    pvVar5 = (void *)0x0;
    param_1[0x46] = 0;
    pvVar4 = Mem_Alloc(0x14);
    local_c = 10;
    if (pvVar4 != (void *)0x0) {
      pvVar5 = (void *)FUN_012f9eb0();
    }
    local_c = 0xffffffff;
    FUN_012f8c70(0x6d);
    StateMachineState_getGame();
    iVar12 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar5,iVar12);
    DisplayActionBuilder_addIntArg(pvVar5,param_1[0x55]);
    piVar13 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar13 + 0x150))(param_1[0x3e],pvVar5);
    iVar12 = param_1[0x55];
    StateMachineState_getGame(iVar12);
    FUN_01360e80(iVar12);
    iVar12 = param_1[0x55];
    pcVar15 = "Sending Close RevealID: %d";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar15,iVar12);
    if (param_1[0x40] != 6) {
      ExceptionList = local_14;
      return 1;
    }
    PlayElement_getGame();
    pvVar4 = (void *)FUN_0139d7a0();
    CommandObjectShuffle_doShuffle(pvVar4);
    ExceptionList = local_14;
    return 1;
  case 4:
    pcVar1 = *(code **)(*param_1 + 0x3c);
    param_1[0x46] = 1;
    uVar6 = (*pcVar1)();
    ExceptionList = local_14;
    return uVar6;
  default:
    pcVar15 = "error! got to the end of a reveal state which shouldn\'t be possible!\n";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar15,pvVar4);
    ExceptionList = local_14;
    return 0;
  }
  uVar6 = StateMachine_popReturnValueMap();
  cVar3 = ReturnValueMap_hasIntegerKey(1);
  if (cVar3 == '\0') {
    FUN_012f5a60("rvm->hasIntegerKey(kTarget1Return)","..\\common\\common\\state\\RevealState.cpp",
                 0x225);
  }
  iVar7 = ReturnValueMap_getInteger(1);
  pcVar15 = "RevealState::restoreState card selected: %d";
  iVar12 = iVar7;
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar15,iVar12);
  StateMachine_destroyReturnValueMap(uVar6);
  pvVar5 = (void *)0x0;
  if (iVar7 == 0) {
    if (param_1[0x40] == 6) {
      PlayElement_getGame();
      pvVar4 = (void *)FUN_0139d7a0();
      CommandObjectShuffle_doShuffle(pvVar4);
    }
    pvVar4 = Mem_Alloc(0x14);
    local_c = 0;
    if (pvVar4 != (void *)0x0) {
      pvVar5 = (void *)FUN_012f9eb0();
    }
    local_c = 0xffffffff;
    FUN_012f8c70(0x6d);
    StateMachineState_getGame();
    iVar12 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar5,iVar12);
    DisplayActionBuilder_addIntArg(pvVar5,param_1[0x55]);
    piVar13 = (int *)StateMachineState_getGame();
    (**(code **)(*piVar13 + 0x150))(param_1[0x3e],pvVar5);
    iVar12 = param_1[0x55];
    StateMachineState_getGame(iVar12);
    FUN_01360e80(iVar12);
    param_1[0x3d] = 3;
    uVar6 = StateMachineState_resumePreviousWaitState();
    ExceptionList = pvStack_1c;
    return uVar6;
  }
  uVar14 = StateMachineState_getGame
                     (iVar7,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  pvVar8 = find_play_element_in_maps((void *)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  iVar12 = FUN_00d8d382(pvVar8);
  param_1[0x45] = iVar12;
  uStack_148 = 0;
  uStack_144 = 0;
  if (iVar12 != 0) {
    uStack_14c = PlayElement_getId();
    puVar9 = (undefined4 *)FUN_0041f5d2(auStack_f8);
    puVar10 = (undefined4 *)FUN_0041f3a1(auStack_118);
    puVar9 = (undefined4 *)
             FUN_0127eb80(auStack_108,*puVar10,puVar10[1],*puVar9,puVar9[1],&uStack_14c);
    uStack_148 = *puVar9;
    uStack_144 = puVar9[1];
  }
  uVar6 = FUN_0041f5d2(auStack_110);
  cVar3 = FUN_0040ba1f(uVar6);
  if ((cVar3 != '\0') || (param_1[0x45] == 0)) {
    param_1[0x45] = 0;
    pvVar4 = Mem_Alloc(0x13c);
    local_c = 1;
    if (pvVar4 != (void *)0x0) {
      pvVar5 = (void *)GetTargetState_ctor(param_1[2],param_1 + 0x41,param_1 + 0x15);
    }
    local_c = 0xffffffff;
    StateMachineState_setButtonPressed(1);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_e8,"close");
    local_c = 2;
    uVar6 = FUN_0145d850(auStack_cc,abStack_e8);
    local_c._0_1_ = 3;
    StateMachineState_setMessageText(uVar6);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_0041f1d7();
    local_c = 0xffffffff;
    FUN_0041f1d7();
    uVar6 = StateMachine_setCurrentState(pvVar5);
    ExceptionList = local_14;
    return uVar6;
  }
  local_154 = Mem_Alloc(0x38);
  local_c = 4;
  if (local_154 == (void *)0x0) {
    pvVar8 = (void *)0x0;
  }
  else {
    uVar6 = StateMachineState_getGame();
    pvVar8 = (void *)GameCommand_CardSelected_ctor(uVar6);
  }
  local_c = 0xffffffff;
  value_ = GamePlayer_getPlayerId();
  set_field_4(pvVar8,value_);
  GameCommand_CardSelected_setCard(iVar7);
  uVar6 = GamePlayer_getPlayerId(pvVar8);
  StateMachineState_getGame(uVar6);
  Game_dispatchCommandToPlayerOrAll(uVar6,pvVar8);
  param_1[0x46] = 2;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_c = 5;
  FUN_013815b0(param_1[0x3f]);
  uVar6 = StateMachineState_getGame();
  EvaluationEnvironment_setGame(uVar6);
  set_play_element_id_field((void *)param_1[0x3a],(void *)param_1[0x45]);
  uVar6 = (**(code **)(*(int *)param_1[0x45] + 0xcc))();
  EvaluationEnvironment_setActionReturn(uVar6);
  set_boolean_value_key_18(true);
  EvaluationEnvironment_setCurrentTargetFromElement((void *)param_1[0x3a],(void *)0x0,pvVar4);
  EvaluationEnvironment_setPlayElementId(0);
  uStack_14c = 0;
  iVar12 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  local_c = CONCAT31(local_c._1_3_,6);
  sourceEnv = auStack_140;
  (**(code **)(*(int *)param_1[0x45] + 0x114))(sourceEnv,3);
  puVar9 = (undefined4 *)FUN_01258f50(&uStack_128);
  uStack_150 = *puVar9;
  uStack_14c = puVar9[1];
  FUN_01258f20(auStack_108);
  cVar3 = FUN_01258760(&uStack_150);
  if (cVar3 != '\0') {
    do {
      piVar13 = (int *)FUN_01257b90();
      iVar7 = *piVar13;
      if (iVar7 != 0) {
        EvaluationEnvironment_ctor();
        local_14._0_1_ = 7;
        EvaluationEnvironment_copyFrom(auStack_b8,(void *)param_1[0x3a],sourceEnv);
        EvaluationEnvironment_setBooleanKey9(1);
        EvaluationEnvironment_setBooleanKey4(0);
        EvaluationEnvironment_setActionReturn(iVar7);
        set_play_element_id_field(auStack_b8,(void *)param_1[0x45]);
        set_boolean_value_key_18(true);
        set_boolean_value_key_17(true);
        cVar3 = (**(code **)(*(int *)param_1[0x45] + 0xdc))(iVar7,auStack_b8,1);
        if (cVar3 != '\0') {
          local_154 = (void *)((int)local_154 + 1);
          iVar12 = iVar7;
        }
        local_14 = (void *)CONCAT31(local_14._1_3_,6);
        FUN_01385460();
      }
      FUN_0138c550(auStack_f8,0);
      cVar3 = FUN_01258760(&uStack_150);
    } while (cVar3 != '\0');
    if (iVar12 != 0) goto LAB_0146201c;
  }
  iVar12 = (**(code **)(*(int *)param_1[0x45] + 0xcc))();
LAB_0146201c:
  EvaluationEnvironment_setActionReturn(iVar12);
  pvVar4 = Mem_Alloc(0x124);
  local_14._0_1_ = 8;
  if (pvVar4 != (void *)0x0) {
    pvVar5 = CommandObjectPlayCard_ctor(pvVar4,(void *)param_1[0x3a]);
  }
  local_14._0_1_ = 6;
  if (1 < (int)local_154) {
    iVar12 = param_1[0x3f];
    pcVar15 = "This card has more than 1 valid action, right-click to select which action to take.";
    pvVar4 = (void *)StateMachineState_getGame();
    GamePlayer_logFormattedMessage(pvVar4,iVar12,pcVar15);
    CommandObjectPlayCard_setStateMachine(pvVar5,(void *)0x14b,sourceEnv);
  }
  CommandObjectVector_pushBack(&uStack_138,&stack0xfffffea4,sourceEnv);
  uVar6 = (**(code **)(*(int *)param_1[2] + 0x40))();
  GameResult_appendValue(&uStack_138);
  uVar6 = StateMachine_setCurrentState(uVar6);
  local_14 = (void *)CONCAT31(local_14._1_3_,5);
  FUN_012591b0();
  local_14 = (void *)0xffffffff;
  FUN_01314560();
  ExceptionList = pvStack_1c;
  return uVar6;
}

