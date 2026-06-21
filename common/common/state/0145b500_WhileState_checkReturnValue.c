// addr: 0x0145b500
// name: WhileState_checkReturnValue
// subsystem: common/common/rules
// source (binary assert): common/common/state/WhileState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x0145bd15) */

undefined4 __fastcall WhileState_checkReturnValue(int param_1)

{
  undefined4 *puVar1;
  uint elementId_;
  char cVar2;
  void **item;
  void *pvVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  int key_;
  int key__00;
  int key__01;
  undefined4 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puStack_34;
  void *local_30;
  int local_2c;
  uint *puStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Processes a WhileState ReturnValueMap, updating
                       discard/draw/reveal/target/custom-number/dynamic-card returns and detecting
                       end/cancel cases. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169cbf8;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffb4);
  ExceptionList = &local_c;
  pvVar3 = (void *)StateMachine_popReturnValueMap();
  if (pvVar3 == (void *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  local_30 = pvVar3;
  cVar2 = Rules_getBooleanKey23DefaultFalse();
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x128) == '\0')) {
    pcVar12 = "WhileState::checkReturnValue environment has got target, we don\'t. setting.";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,item);
    *(undefined1 *)(param_1 + 0x128) = 1;
  }
  cVar2 = ReturnValueMap_hasIntegerKey(1);
  if ((((cVar2 == '\0') && (cVar2 = ReturnValueMap_hasIntegerKey(2), cVar2 == '\0')) &&
      (cVar2 = ReturnValueMap_hasIntegerKey(0x36), cVar2 == '\0')) &&
     (cVar2 = ReturnValueMap_hasIntegerKey(0x37), cVar2 == '\0')) goto LAB_0145b808;
  cVar2 = ReturnValueMap_hasIntegerKey(1);
  if (cVar2 == '\0') {
    cVar2 = ReturnValueMap_hasIntegerKey(2);
    if (cVar2 != '\0') {
      uVar13 = 2;
      goto LAB_0145b603;
    }
    cVar2 = ReturnValueMap_hasIntegerKey(0x36);
    if (cVar2 != '\0') {
      uVar13 = 0x36;
      goto LAB_0145b603;
    }
    cVar2 = ReturnValueMap_hasIntegerKey(0x37);
    if (cVar2 != '\0') {
      uVar13 = 0x37;
      goto LAB_0145b603;
    }
  }
  else {
    uVar13 = 1;
LAB_0145b603:
    uVar13 = ReturnValueMap_getInteger(uVar13);
    *(undefined4 *)(param_1 + 0x124) = uVar13;
  }
  uVar13 = *(undefined4 *)(param_1 + 0x124);
  pcVar12 = "WhileState::checkReturnValue - Found target Return %d";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar12,uVar13);
  uVar11 = StateMachineState_getGame(*(undefined4 *)(param_1 + 0x124));
  pvVar4 = find_play_element_in_maps((void *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  cVar2 = ReturnValueMap_hasIntegerKey(1);
  if (cVar2 == '\0') {
    cVar2 = ReturnValueMap_hasIntegerKey(2);
    if (cVar2 == '\0') {
      cVar2 = ReturnValueMap_hasIntegerKey(0x36);
      if (cVar2 == '\0') {
        cVar2 = ReturnValueMap_hasIntegerKey(0x37);
        if (cVar2 == '\0') goto LAB_0145b6b0;
        iVar6 = *(int *)(param_1 + 0x124);
        iVar9 = 0x37;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x124);
        iVar9 = 0x36;
      }
      set_integer_value_for_key(iVar9,iVar6);
    }
    else {
      EvaluationEnvironment_setPlayElementId(pvVar4);
    }
  }
  else {
    EvaluationEnvironment_setCurrentTargetFromElement(*(void **)(param_1 + 0xe8),pvVar4,item);
  }
LAB_0145b6b0:
  piVar5 = (int *)FUN_00d8d382(pvVar4,0,&PlayElement::RTTI_Type_Descriptor,
                               &Card::RTTI_Type_Descriptor,0);
  if ((piVar5 != (int *)0x0) && (cVar2 = (**(code **)(*piVar5 + 0x1e8))(), cVar2 != '\0')) {
    iVar6 = (**(code **)(*piVar5 + 0x28))();
    pvVar4 = (void *)StateMachineState_getGame();
    pvVar4 = PlayArea_findPlayerElementById(pvVar4,iVar6);
    FUN_013876d0(pvVar4);
  }
  FUN_01385f30(&local_2c);
  uStack_4 = 0;
  if (*(int *)(param_1 + 0x124) == 0) {
    pcVar12 = "No valid targets or canceled in get target.";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,item);
    cVar2 = PointerVector_iteratorNotAtEnd(0x19);
    if (cVar2 != '\0') {
      pcVar12 = "Button was pressed, last action was canceled.";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar12,item);
      *(undefined1 *)(param_1 + 0x128) = 1;
      EvaluationEnvironment_setTargetGottenReturn(1);
    }
    *(undefined4 *)(param_1 + 0xf8) = 3;
    StateMachine_destroyReturnValueMap(pvVar3);
    uStack_4 = 0xffffffff;
    if (puStack_28 == (uint *)0x0) {
      ExceptionList = local_c;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    _free(puStack_28);
  }
  if ((puStack_28 != (uint *)0x0) && (iStack_24 - (int)puStack_28 >> 2 != 0)) {
    pcVar12 = "setting TargetGotten.";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,item);
    *(undefined1 *)(param_1 + 0x128) = 1;
    EvaluationEnvironment_setTargetGottenReturn(1);
  }
  uStack_4 = 0xffffffff;
  if (puStack_28 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_28);
  }
  puStack_28 = (uint *)0x0;
  iStack_24 = 0;
  uStack_20 = 0;
LAB_0145b808:
  cVar2 = PointerVector_iteratorNotAtEnd(0x32);
  if (cVar2 != '\0') {
    pvVar4 = ReturnValueMap_findValueData(pvVar3,key_);
    if (*(int *)((int)pvVar4 + 4) != 6) {
      FUN_012f5a60("value->isIntegerListValue()","..\\common\\common\\state\\WhileState.cpp",0x9c);
    }
    iVar6 = FUN_0123c3a0();
    if (*(int *)(iVar6 + 4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 8) - *(int *)(iVar6 + 4) >> 2;
    }
    pcVar12 = "WhileState::checkReturnValue - Found customCardList Return %d";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,iVar6);
    iVar6 = FUN_0123c3a0();
    puVar1 = *(undefined4 **)(iVar6 + 8);
    if (puVar1 < *(undefined4 **)(iVar6 + 4)) {
      FUN_00d83c2d();
    }
    pvStack_18 = (void *)0x0;
    iStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 1;
    local_2c = FUN_0123c3a0();
    puVar10 = *(undefined4 **)(local_2c + 4);
    if (*(undefined4 **)(local_2c + 8) < puVar10) {
      FUN_00d83c2d();
    }
    while( true ) {
      if ((local_2c == 0) || (local_2c != iVar6)) {
        FUN_00d83c2d();
      }
      if (puVar10 == puVar1) break;
      if (local_2c == 0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(local_2c + 8) <= puVar10) {
        FUN_00d83c2d();
      }
      uVar11 = StateMachineState_getGame(*puVar10);
      pvVar4 = find_play_element_in_maps((void *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      puStack_34 = (uint *)FUN_00d8d382(pvVar4,0,&PlayElement::RTTI_Type_Descriptor,
                                        &Card::RTTI_Type_Descriptor,0);
      if (puStack_34 != (uint *)0x0) {
        PointerVector_pushBack(auStack_1c,&puStack_34,item);
      }
      if (*(undefined4 **)(local_2c + 8) <= puVar10) {
        FUN_00d83c2d();
      }
      puVar10 = puVar10 + 1;
    }
    CommandObjectList_buildEventValueAction40(auStack_1c);
    uStack_4 = 0xffffffff;
    if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_18);
    }
    pvStack_18 = (void *)0x0;
    iStack_14 = 0;
    uStack_10 = 0;
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x23);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasIntegerKey(0x23);
    if (cVar2 == '\0') {
      FUN_012f5a60("rvm->hasIntegerKey(kDynamicCardReturn)",
                   "..\\common\\common\\state\\WhileState.cpp",0xb2);
    }
    uVar7 = ReturnValueMap_getInteger(0x23);
    pcVar12 = "WhileState::checkReturnValue - Found dynamicCard Return %d";
    uVar13 = uVar7;
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,uVar13);
    uVar11 = StateMachineState_getGame(uVar7);
    pvVar4 = find_play_element_in_maps((void *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    uVar13 = FUN_00d8d382(pvVar4,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0)
    ;
    EvaluationEnvironment_setDynamicCardReturn(uVar13);
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x2e);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasIntegerKey(0x2e);
    if (cVar2 == '\0') {
      FUN_012f5a60("rvm->hasIntegerKey(kCustomNumberReturn)",
                   "..\\common\\common\\state\\WhileState.cpp",0xba);
    }
    uVar13 = ReturnValueMap_getInteger(0x2e);
    EvaluationEnvironment_setCustomNumberReturn(uVar13);
    pcVar12 = "WhileState::checkReturnValue - Found customnumber Return %d";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,uVar13);
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x2f);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasIntegerKey(0x2f);
    if (cVar2 == '\0') {
      FUN_012f5a60("rvm->hasIntegerKey(kCustomNumber2Return)",
                   "..\\common\\common\\state\\WhileState.cpp",0xc1);
    }
    uVar13 = ReturnValueMap_getInteger(0x2f);
    EvaluationEnvironment_setCustomNumber2Return(uVar13);
    pcVar12 = "WhileState::checkReturnValue - Found customnumber2 Return %d";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,uVar13);
  }
  cVar2 = PointerVector_iteratorNotAtEnd(10);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasIntegerKey(10);
    if (cVar2 == '\0') {
      FUN_012f5a60("rvm->hasIntegerKey(kMultiActionNumReturn)",
                   "..\\common\\common\\state\\WhileState.cpp",200);
    }
    uVar7 = ReturnValueMap_getInteger(10);
    pcVar12 = "WhileState::checkReturnValue - Found MultiActionNum Return %d";
    uVar13 = uVar7;
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,uVar13);
    EvaluationEnvironment_setNumShownReturn(uVar7);
    FUN_01385f30(auStack_1c);
    uStack_4 = 2;
    iVar6 = Rules_getIntegerKey15();
    if (((0 < iVar6) && (pvStack_18 != (void *)0x0)) && (iStack_14 - (int)pvStack_18 >> 2 != 0)) {
      pcVar12 = "setting TargetGotten.";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar12,item);
      *(undefined1 *)(param_1 + 0x128) = 1;
      EvaluationEnvironment_setTargetGottenReturn(1);
    }
    uStack_4 = 0xffffffff;
    if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_18);
    }
    pvStack_18 = (void *)0x0;
    iStack_14 = 0;
    uStack_10 = 0;
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x20);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasBooleanKey(0x20);
    if (cVar2 == '\0') {
      FUN_012f5a60("rvm->hasBooleanKey(kTargetGottenReturn)",
                   "..\\common\\common\\state\\WhileState.cpp",0xd8);
    }
    pcVar12 = "WhileState::checkReturnValue - Found TargetGotten return";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,item);
    FUN_01385f30(auStack_1c);
    uStack_4 = 3;
    EvaluationEnvironment_setTargetGottenReturn(1);
    *(undefined1 *)(param_1 + 0x128) = 1;
    uStack_4 = 0xffffffff;
    if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_18);
    }
    pvStack_18 = (void *)0x0;
    iStack_14 = 0;
    uStack_10 = 0;
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x16);
  if (cVar2 != '\0') {
    pcVar12 = "WhileState::checkReturnValue - Found RevealedCards Return";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,item);
    pvVar4 = ReturnValueMap_findValueData(pvVar3,key__00);
    if (((*(int *)((int)pvVar4 + 4) == 6) ||
        (FUN_012f5a60("value->isIntegerListValue()","..\\common\\common\\state\\WhileState.cpp",0xe4
                     ), *(int *)((int)pvVar4 + 4) == 6)) ||
       (FUN_012f5a60("mTypeID == kIntegerListTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x135), *(int *)((int)pvVar4 + 4) == 6)) {
      uVar13 = *(undefined4 *)((int)pvVar4 + 8);
    }
    else {
      uVar13 = 0;
    }
    FUN_005f1e5c(uVar13);
    pvStack_18 = (void *)0x0;
    iStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 4;
    puVar8 = *(uint **)(param_1 + 0x118);
    if (*(uint **)(param_1 + 0x11c) < puVar8) {
      FUN_00d83c2d();
    }
    while( true ) {
      puStack_34 = *(uint **)(param_1 + 0x11c);
      if (puStack_34 < *(uint **)(param_1 + 0x118)) {
        FUN_00d83c2d();
      }
      if (puVar8 == puStack_34) break;
      if (*(uint **)(param_1 + 0x11c) <= puVar8) {
        FUN_00d83c2d();
      }
      uVar11 = StateMachineState_getGame(*puVar8);
      pvVar4 = find_play_element_in_maps((void *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      puStack_34 = (uint *)FUN_00d8d382(pvVar4,0,&PlayElement::RTTI_Type_Descriptor,
                                        &Card::RTTI_Type_Descriptor,0);
      if (puStack_34 == (uint *)0x0) {
        if (*(uint **)(param_1 + 0x11c) <= puVar8) {
          FUN_00d83c2d();
        }
        uVar14 = *puVar8;
        pcVar12 = "Couldn\'t get card for id: %d";
        pvVar4 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar4,pcVar12,uVar14);
      }
      else {
        iVar6 = Card_getPropertyMap();
        if (*(uint *)(iVar6 + 0x18) < 0x10) {
          iVar6 = iVar6 + 4;
        }
        else {
          iVar6 = *(int *)(iVar6 + 4);
        }
        pcVar12 = "Adding %s to revealed Cards List.";
        pvVar4 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar4,pcVar12,iVar6);
        PointerVector_pushBack(auStack_1c,&puStack_34,item);
      }
      if (*(uint **)(param_1 + 0x11c) <= puVar8) {
        FUN_00d83c2d();
      }
      puVar8 = puVar8 + 1;
    }
    EvaluationEnvironment_setRevealedCardsReturn(auStack_1c);
    cVar2 = PointerVector_iteratorNotAtEnd(0x22);
    if (cVar2 != '\0') {
      cVar2 = ReturnValueMap_hasIntegerKey(0x22);
      if (cVar2 == '\0') {
        FUN_012f5a60("rvm->hasIntegerKey(kRevealIDReturn)",
                     "..\\common\\common\\state\\WhileState.cpp",0xf4);
      }
      puVar8 = (uint *)ReturnValueMap_getInteger(0x22);
      pcVar12 = "WhileState::checkReturnValue - Found RevealID: %d";
      puStack_34 = puVar8;
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar12,puVar8);
      FUN_0042c155(&puStack_34);
    }
    uStack_4 = 0xffffffff;
    if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_18);
    }
    pvStack_18 = (void *)0x0;
    iStack_14 = 0;
    uStack_10 = 0;
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x13);
  if (cVar2 != '\0') {
    pcVar12 = "WhileState::checkReturnValue - Found Random Return";
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,item);
    pvVar4 = ReturnValueMap_findValueData(pvVar3,key__01);
    if (((*(int *)((int)pvVar4 + 4) == 0xd) ||
        (FUN_012f5a60("value->isIntIntMapValue()","..\\common\\common\\state\\WhileState.cpp",0xff),
        *(int *)((int)pvVar4 + 4) == 0xd)) ||
       (FUN_012f5a60("mTypeID == kIntIntMapTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x13b), *(int *)((int)pvVar4 + 4) == 0xd)) {
      iVar6 = *(int *)((int)pvVar4 + 8);
    }
    else {
      iVar6 = 0;
    }
    puStack_34 = *(uint **)(iVar6 + 4);
    puStack_28 = (uint *)*puStack_34;
    local_2c = iVar6;
    while( true ) {
      puVar8 = puStack_28;
      iVar9 = local_2c;
      if ((local_2c == 0) || (local_2c != iVar6)) {
        FUN_00d83c2d();
      }
      if (puVar8 == puStack_34) break;
      if (iVar9 == 0) {
        FUN_00d83c2d();
      }
      if (puVar8 == *(uint **)(iVar9 + 4)) {
        FUN_00d83c2d();
      }
      uVar14 = puVar8[3];
      if (puVar8 == *(uint **)(iVar9 + 4)) {
        FUN_00d83c2d();
      }
      elementId_ = puVar8[4];
      EvaluationEnvironment_setTargetFromPlayAreaTarget
                (*(void **)(param_1 + 0xe8),uVar14,elementId_);
      uVar11 = StateMachineState_getGame
                         (elementId_,0,&PlayElement::RTTI_Type_Descriptor,
                          &Card::RTTI_Type_Descriptor,0);
      pvVar3 = find_play_element_in_maps((void *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      piVar5 = (int *)FUN_00d8d382(pvVar3);
      if ((piVar5 != (int *)0x0) && (cVar2 = (**(code **)(*piVar5 + 0x1e8))(), cVar2 != '\0')) {
        iVar9 = (**(code **)(*piVar5 + 0x28))();
        pvVar3 = (void *)StateMachineState_getGame();
        pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar9);
        FUN_013876d0(pvVar3);
      }
      FUN_004d21f9();
      pvVar3 = local_30;
    }
    EvaluationEnvironment_truncateTraceActions(0x30);
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x34);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasIntegerKey(0x34);
    if (cVar2 == '\0') {
      FUN_012f5a60("rvm->hasIntegerKey(kCardsDrawnReturn)",
                   "..\\common\\common\\state\\WhileState.cpp",0x111);
    }
    iVar9 = ReturnValueMap_getInteger(0x34);
    pcVar12 = "WhileState::checkReturnValue - Cards Drawn Return %d";
    iVar6 = iVar9;
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,iVar6);
    set_integer_value_for_key(0x32,iVar9);
  }
  cVar2 = PointerVector_iteratorNotAtEnd(0x30);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasIntegerKey(0x30);
    if (cVar2 == '\0') {
      FUN_012f5a60("rvm->hasIntegerKey(kDiscardReturn)","..\\common\\common\\state\\WhileState.cpp",
                   0x119);
    }
    iVar9 = ReturnValueMap_getInteger(0x30);
    pcVar12 = "WhileState::checkReturnValue - Cards Discarded Return %d";
    iVar6 = iVar9;
    pvVar4 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar4,pcVar12,iVar6);
    set_integer_value_for_key(0x31,iVar9);
  }
  StateMachine_destroyReturnValueMap(pvVar3);
  StateMachineState_getCurrentTurn();
  cVar2 = FUN_013f81f0();
  if (cVar2 != '\0') {
    uVar13 = 0;
    StateMachineState_getCurrentTurn(0);
    FUN_013f8200(uVar13);
    pcVar12 = "While::checkReturnValue found End MultiAction, endingState.";
    *(undefined4 *)(param_1 + 0xf8) = 3;
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar12,item);
  }
  ExceptionList = local_c;
  return 1;
}

