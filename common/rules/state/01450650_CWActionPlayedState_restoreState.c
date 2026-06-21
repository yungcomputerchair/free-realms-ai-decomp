// addr: 0x01450650
// name: CWActionPlayedState_restoreState
// subsystem: common/rules/state
// source (binary assert): common/rules/state/cwactionplayedstate.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall CWActionPlayedState_restoreState(int *param_1)

{
  int *piVar1;
  int targetKind_;
  int elementId_;
  bool bVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *fmt;
  undefined4 uStack_2c;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Restores CWActionPlayedState after child states, including random-return
                       maps, target returns, state-code transitions, and wait/continue behavior.
                       Evidence is cwactionplayedstate.cpp asserts and close pairing with
                       CWActionPlayedState enter/update functions. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169b633;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  pvVar5 = (void *)StateMachineState_getGame();
  bVar2 = Game_getPendingFlag_131(pvVar5);
  if (bVar2) {
LAB_014506d9:
    StateMachineState_resumePreviousWaitState();
    ExceptionList = local_c;
    return;
  }
  if (param_1[0x3d] != 0) {
    if (param_1[0x3d] != 4) {
      iVar7 = param_1[0x3f];
      pvVar5 = (void *)StateMachineState_getGame();
      pvVar5 = PlayArea_findPlayerElementById(pvVar5,iVar7);
      if (pvVar5 != (void *)0x0) {
        piVar6 = (int *)StateMachineState_getCurrentTurn();
        (**(code **)(*piVar6 + 0x48))(pvVar5);
      }
      if (param_1[0x3d] == 3) {
        param_1[0x3d] = 1;
      }
      goto LAB_014506d9;
    }
    param_1[0x3d] = 3;
    (**(code **)(*(int *)param_1[1] + 0xb4))(3);
  }
  pvVar5 = Mem_Alloc(0x18);
  uStack_4 = 0;
  if (pvVar5 == (void *)0x0) {
    uStack_2c = 0;
  }
  else {
    uStack_2c = ReturnValueMap_ctor();
  }
  uStack_4 = 0xffffffff;
  set_value_boolean(7,false);
  iVar7 = StateMachine_peekReturnValueMap();
  if (iVar7 != 0) {
    FUN_012fa910();
    uStack_4 = 1;
    bVar2 = ValueData_clearIfPresent((void *)0x13);
    if (bVar2) {
      fmt = "Got random return";
      pvVar5 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar5,fmt,uVar4);
      if (iStack_14 != 0xd) {
        FUN_012f5a60("randomValue.isIntIntMapValue()",
                     "..\\common\\rules\\state\\cwactionplayedstate.cpp",0x3b0);
      }
      iVar7 = FUN_0123c3d0();
      piVar6 = *(int **)(iVar7 + 4);
      piVar1 = (int *)*piVar6;
      while( true ) {
        if (iVar7 == 0) {
          FUN_00d83c2d();
        }
        if (piVar1 == piVar6) break;
        if (iVar7 == 0) {
          FUN_00d83c2d();
        }
        if (piVar1 == (int *)*(int *)(iVar7 + 4)) {
          FUN_00d83c2d();
        }
        targetKind_ = piVar1[3];
        if (piVar1 == (int *)*(int *)(iVar7 + 4)) {
          FUN_00d83c2d();
        }
        elementId_ = piVar1[4];
        EvaluationEnvironment_setTargetFromPlayAreaTarget
                  ((void *)param_1[0x3a],targetKind_,elementId_);
        if (targetKind_ == 1) {
          param_1[0x40] = elementId_;
        }
        else if (targetKind_ == 2) {
          param_1[0x41] = elementId_;
        }
        FUN_004d21f9();
      }
      EvaluationEnvironment_truncateTraceActions(0x30);
    }
    uStack_4 = 0xffffffff;
    FUN_01300cd0();
  }
  iVar7 = param_1[0x45];
  if (iVar7 == 0xb) {
    param_1[0x45] = 10;
    uVar8 = StateMachine_popReturnValueMap();
    cVar3 = ReturnValueMap_hasIntegerKey(1);
    if (cVar3 == '\0') {
      FUN_012f5a60("returnvalue->hasIntegerKey(kTarget1Return)",
                   "..\\common\\rules\\state\\cwactionplayedstate.cpp",0x3c5);
    }
    iVar7 = ReturnValueMap_getInteger(1);
    param_1[0x40] = iVar7;
    StateMachine_destroyReturnValueMap(uVar8);
    if (param_1[0x59] == 0) {
      param_1[0x59] = 1;
    }
  }
  else {
    if (iVar7 != 0xc) {
      if (iVar7 == 0xd) {
        param_1[0x45] = 10;
        iVar7 = StateMachine_popReturnValueMap();
        if (iVar7 == 0) goto LAB_01450a9d;
        cVar3 = ReturnValueMap_hasIntegerKey(10);
        if (cVar3 != '\0') {
          uVar8 = ReturnValueMap_getInteger(10);
          EvaluationEnvironment_setNumShownReturn(uVar8);
        }
        cVar3 = ReturnValueMap_hasIntegerKey(0x2e);
        if (cVar3 != '\0') {
          uVar8 = ReturnValueMap_getInteger(0x2e);
          EvaluationEnvironment_setCustomNumberReturn(uVar8);
        }
        cVar3 = ReturnValueMap_hasBooleanKey(7);
        if ((cVar3 != '\0') && (cVar3 = ReturnValueMap_getBoolean(7), cVar3 == '\0')) {
          StateMachine_destroyReturnValueMap(iVar7);
          goto LAB_014508ff;
        }
      }
      else {
        if (iVar7 != 0xf) {
          if (iVar7 == 0x12) {
            param_1[0x45] = 10;
          }
          goto LAB_01450a9d;
        }
        param_1[0x45] = 6;
        iVar7 = StateMachine_popReturnValueMapWithKey(6);
        if (iVar7 == 0) {
          iVar7 = StateMachine_popReturnValueMap();
        }
        else {
          cVar3 = PointerVector_iteratorNotAtEnd(6);
          if (cVar3 != '\0') {
            uVar8 = 0;
            *(undefined1 *)((int)param_1 + 0x11d) = 1;
            StateMachineState_getCurrentTurn(0);
            StateMachine_setContinueWaiting(uVar8);
            StateMachine_destroyReturnValueMap(iVar7);
            goto LAB_01450a9d;
          }
        }
      }
      StateMachine_destroyReturnValueMap(iVar7);
      goto LAB_01450a9d;
    }
    param_1[0x45] = 10;
    uVar8 = StateMachine_popReturnValueMap();
    cVar3 = ReturnValueMap_hasIntegerKey(1);
    if (cVar3 == '\0') {
      FUN_012f5a60("returnvalue->hasIntegerKey(kTarget1Return)",
                   "..\\common\\rules\\state\\cwactionplayedstate.cpp",0x3d7);
    }
    iVar7 = ReturnValueMap_getInteger(1);
    param_1[0x41] = iVar7;
    StateMachine_destroyReturnValueMap(uVar8);
    if (param_1[0x59] == 0) {
      param_1[0x59] = 2;
    }
  }
  if ((iVar7 == 0) && ((char)param_1[0x39] == '\0')) {
LAB_014508ff:
    StateMachine_pushPendingState(uStack_2c);
    StateMachineState_resumePreviousWaitState();
    ExceptionList = local_c;
    return;
  }
LAB_01450a9d:
  StateMachine_destroyReturnValueMap(uStack_2c);
  (**(code **)(*param_1 + 0x3c))();
  ExceptionList = local_c;
  return;
}

