// addr: 0x01450060
// name: CWActionPlayedState_enterState
// subsystem: common/rules/state
// source (binary assert): common/rules/state/cwactionplayedstate.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CWActionPlayedState_enterState(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  byte bVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 unaff_EBP;
  void *unaff_EDI;
  undefined8 uVar11;
  char *pcVar12;
  
                    /* CWActionPlayedState enter handler that initializes action/card/player/origin
                       returns, logs action play details, handles optional target/dependent/skip
                       flags, updates evaluation environment, and starts update processing. Evidence
                       is CWActionPlayedState.enterState() log and cwactionplayedstate.cpp asserts.
                        */
  if (param_1[0x3a] == 0) {
    (**(code **)(*param_1 + 0x4c))();
    EvaluationEnvironment_setDependentActionReturn(0);
  }
  pcVar12 = "CWActionPlayedState.enterState()";
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar12,unaff_EDI);
  iVar6 = StateMachine_popReturnValueMap();
  if (iVar6 == 0) {
    FUN_012f5a60("returnValueMap","..\\common\\rules\\state\\cwactionplayedstate.cpp",0x59);
  }
  cVar1 = PointerVector_iteratorNotAtEnd(4);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasKey(kPlayerReturn)",
                 "..\\common\\rules\\state\\cwactionplayedstate.cpp",0x5b);
  }
  iVar7 = ReturnValueMap_getInteger(4);
  param_1[0x3f] = iVar7;
  cVar1 = PointerVector_iteratorNotAtEnd(3);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasKey(kCardPlayedReturn)",
                 "..\\common\\rules\\state\\cwactionplayedstate.cpp",0x5e);
  }
  iVar7 = ReturnValueMap_getInteger(3);
  param_1[0x3e] = iVar7;
  cVar1 = PointerVector_iteratorNotAtEnd(5);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasKey(kActionReturn)",
                 "..\\common\\rules\\state\\cwactionplayedstate.cpp",0x61);
  }
  iVar7 = ReturnValueMap_getInteger(5);
  param_1[0x42] = iVar7;
  cVar1 = PointerVector_iteratorNotAtEnd(0x35);
  if (cVar1 == '\0') {
    param_1[0x67] = 0;
    uVar11 = StateMachineState_getGame
                       (param_1[0x3e],0,&PlayElement::RTTI_Type_Descriptor,
                        &CWCard::RTTI_Type_Descriptor,0);
    pvVar5 = find_play_element_in_maps((void *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    iVar7 = FUN_00d8d382(pvVar5);
    if (iVar7 != 0) {
      iVar7 = Card_getOriginCardIdForAction(param_1[0x42]);
      param_1[0x67] = iVar7;
    }
    if (param_1[0x67] == 0) {
      param_1[0x67] = param_1[0x3e];
    }
  }
  else {
    iVar7 = ReturnValueMap_getInteger(0x35);
    param_1[0x67] = iVar7;
  }
  uVar8 = PackedActionId_getLow12Bits(param_1[0x42],param_1[0x3e],param_1[0x67],param_1[0x3f]);
  uVar8 = PackedActionId_getHighBits(param_1[0x42],uVar8);
  pcVar12 = "actionPlayed: %d (%d) card: %d, originCard: %d, player: %d";
  pvVar5 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar5,pcVar12,uVar8);
  cVar1 = ReturnValueMap_hasBooleanKey(8);
  if (cVar1 != '\0') {
    uVar2 = ReturnValueMap_getBoolean(8);
    *(undefined1 *)((int)param_1 + 0x125) = uVar2;
  }
  cVar1 = ReturnValueMap_hasIntegerKey(1);
  if (cVar1 != '\0') {
    iVar7 = ReturnValueMap_getInteger(1);
    pcVar12 = "got target: %d";
    param_1[0x40] = iVar7;
    *(undefined1 *)((int)param_1 + 0x162) = 0;
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar12,iVar7);
    uVar11 = StateMachineState_getGame
                       (param_1[0x40],0,&PlayElement::RTTI_Type_Descriptor,
                        &Card::RTTI_Type_Descriptor,0);
    pvVar5 = find_play_element_in_maps((void *)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    piVar9 = (int *)FUN_00d8d382(pvVar5);
    if ((piVar9 != (int *)0x0) && (cVar1 = (**(code **)(*piVar9 + 0x1e8))(), cVar1 != '\0')) {
      pcVar12 = "Got player card target.";
      pvVar5 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar5,pcVar12,unaff_EBP);
      iVar7 = (**(code **)(*piVar9 + 0x28))();
      pvVar5 = (void *)StateMachineState_getGame();
      pvVar5 = PlayArea_findPlayerElementById(pvVar5,iVar7);
      FUN_013876d0(pvVar5);
    }
  }
  cVar1 = ReturnValueMap_hasBooleanKey(0x10);
  if (cVar1 != '\0') {
    bVar3 = (bool)ReturnValueMap_getBoolean(0x10);
    set_boolean_value_key_14(bVar3);
  }
  cVar1 = ReturnValueMap_hasBooleanKey(0x11);
  if (cVar1 != '\0') {
    bVar4 = ReturnValueMap_getBoolean(0x11);
    *(byte *)(param_1 + 0x58) = bVar4;
    uVar10 = (uint)bVar4;
    pcVar12 = "dependentAction: %d";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar12,uVar10);
    if ((char)param_1[0x58] == '\x01') {
      set_boolean_value_key_18(true);
      EvaluationEnvironment_setDependentActionReturn(1);
      FUN_01387970();
    }
  }
  if ((char)param_1[0x58] == '\0') {
    set_boolean_value_key_14(false);
  }
  cVar1 = ReturnValueMap_hasBooleanKey(0x1d);
  if ((cVar1 != '\0') && (cVar1 = ReturnValueMap_getBoolean(0x1d), cVar1 != '\0')) {
    EvaluationEnvironment_setCurrentTargetFromElement((void *)param_1[0x3a],(void *)0x0,unaff_EDI);
    EvaluationEnvironment_setPlayElementId(0);
    FUN_013876d0(0);
    pcVar12 = "got clear target";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar12,unaff_EDI);
  }
  cVar1 = ReturnValueMap_hasBooleanKey(0x1e);
  if (cVar1 != '\0') {
    bVar3 = (bool)ReturnValueMap_getBoolean(0x1e);
    set_boolean_value_key_17(bVar3);
  }
  cVar1 = ReturnValueMap_hasBooleanKey(0x31);
  if (cVar1 != '\0') {
    cVar1 = ReturnValueMap_getBoolean(0x31);
    *(char *)((int)param_1 + 0x199) = cVar1;
    if (cVar1 == '\x01') {
      EvaluationEnvironment_setSkipPayingCostsReturn(1);
    }
    uVar10 = (uint)*(byte *)((int)param_1 + 0x199);
    pcVar12 = "skipPayingCosts: %d";
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar12,uVar10);
  }
  cVar1 = ReturnValueMap_hasBooleanKey(0x21);
  if (cVar1 != '\0') {
    uVar2 = ReturnValueMap_getBoolean(0x21);
    *(undefined1 *)((int)param_1 + 0x19a) = uVar2;
  }
  cVar1 = ReturnValueMap_hasBooleanKey(0x33);
  if (cVar1 != '\0') {
    bVar4 = ReturnValueMap_getBoolean(0x33);
    uVar10 = (uint)bVar4;
    pcVar12 = "skipPreconditions: %d";
    *(byte *)((int)param_1 + 0x19b) = bVar4;
    pvVar5 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar5,pcVar12,uVar10);
  }
  StateMachine_destroyReturnValueMap(iVar6);
  (**(code **)(*param_1 + 0xf4))();
  EvaluationEnvironment_setReturnKey37Bool(1);
                    /* WARNING: Could not recover jumptable at 0x014504c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c))();
  return;
}

