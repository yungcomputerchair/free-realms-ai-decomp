// addr: 0x0147ea70
// name: ActionPlayedState_restoreState
// subsystem: common/rules/state
// source (binary assert): common/common/state/ActionPlayedState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ActionPlayedState_restoreState(int *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Restores ActionPlayedState after target/response sub-states, consuming
                       kTarget1Return and other return keys, updating target fields, popping pending
                       states, and either continuing or advancing. Evidence is ActionPlayedState.cpp
                       asserts and close structural match to CWActionPlayedState restore logic. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a060b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  if (param_1[0x3d] != 0) {
    if (param_1[0x3d] != 4) {
      iVar7 = param_1[0x3f];
      pvVar3 = (void *)StateMachineState_getGame();
      pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar7);
      if (pvVar3 != (void *)0x0) {
        piVar4 = (int *)StateMachineState_getCurrentTurn();
        (**(code **)(*piVar4 + 0x48))(pvVar3);
      }
      if (param_1[0x3d] == 3) {
        param_1[0x3d] = 1;
      }
      StateMachineState_resumePreviousWaitState();
      ExceptionList = local_c;
      return;
    }
    param_1[0x3d] = 3;
    (**(code **)(*(int *)param_1[1] + 0xb4))(3,uVar2);
  }
  pvVar3 = Mem_Alloc(0x18);
  uStack_4 = 0;
  if (pvVar3 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = ReturnValueMap_ctor();
  }
  uStack_4 = 0xffffffff;
  set_value_boolean(7,false);
  iVar7 = param_1[0x45];
  if (iVar7 == 0xb) {
    param_1[0x45] = 10;
    uVar6 = StateMachine_popReturnValueMap();
    cVar1 = ReturnValueMap_hasIntegerKey(1);
    if (cVar1 == '\0') {
      FUN_012f5a60("returnValueMap->hasIntegerKey(kTarget1Return)",
                   "..\\common\\common\\state\\ActionPlayedState.cpp",0x45d);
    }
    iVar7 = ReturnValueMap_getInteger(1);
    param_1[0x40] = iVar7;
    StateMachine_destroyReturnValueMap(uVar6);
    if (param_1[0x59] == 0) {
      param_1[0x59] = 1;
    }
  }
  else {
    if (iVar7 != 0xc) {
      if (iVar7 == 0xd) {
        param_1[0x45] = 10;
        iVar7 = StateMachine_popReturnValueMap();
        if (iVar7 == 0) goto LAB_0147ed80;
        cVar1 = ReturnValueMap_hasIntegerKey(10);
        if (cVar1 != '\0') {
          uVar6 = ReturnValueMap_getInteger(10);
          EvaluationEnvironment_setNumShownReturn(uVar6);
        }
        cVar1 = ReturnValueMap_hasIntegerKey(0x2e);
        if (cVar1 != '\0') {
          uVar6 = ReturnValueMap_getInteger(0x2e);
          EvaluationEnvironment_setCustomNumberReturn(uVar6);
        }
        cVar1 = ReturnValueMap_hasBooleanKey(7);
        if ((cVar1 != '\0') && (cVar1 = ReturnValueMap_getBoolean(7), cVar1 == '\0')) {
          StateMachine_destroyReturnValueMap(iVar7);
          goto LAB_0147ebde;
        }
      }
      else {
        if (iVar7 != 0xf) {
          if (iVar7 == 0x12) {
            param_1[0x45] = 10;
            StateMachine_popPendingState((void *)param_1[2]);
          }
          goto LAB_0147ed80;
        }
        param_1[0x45] = 6;
        iVar7 = StateMachine_popReturnValueMapWithKey(6);
        if (iVar7 == 0) {
          iVar7 = StateMachine_popReturnValueMap();
        }
        else {
          cVar1 = PointerVector_iteratorNotAtEnd(6);
          if (cVar1 != '\0') {
            uVar6 = 0;
            *(undefined1 *)((int)param_1 + 0x11d) = 1;
            StateMachineState_getCurrentTurn(0);
            StateMachine_setContinueWaiting(uVar6);
            StateMachine_destroyReturnValueMap(iVar7);
            goto LAB_0147ed80;
          }
        }
      }
      StateMachine_destroyReturnValueMap(iVar7);
      goto LAB_0147ed80;
    }
    param_1[0x45] = 10;
    uVar6 = StateMachine_popReturnValueMap();
    cVar1 = ReturnValueMap_hasIntegerKey(1);
    if (cVar1 == '\0') {
      FUN_012f5a60("returnValueMap->hasIntegerKey(kTarget1Return)",
                   "..\\common\\common\\state\\ActionPlayedState.cpp",0x46d);
    }
    iVar7 = ReturnValueMap_getInteger(1);
    param_1[0x41] = iVar7;
    StateMachine_destroyReturnValueMap(uVar6);
    if (param_1[0x59] == 0) {
      param_1[0x59] = 2;
    }
  }
  if ((iVar7 == 0) && ((char)param_1[0x39] == '\0')) {
LAB_0147ebde:
    StateMachine_pushPendingState(uVar5);
    StateMachineState_resumePreviousWaitState();
    ExceptionList = local_c;
    return;
  }
LAB_0147ed80:
  StateMachine_destroyReturnValueMap(uVar5);
  (**(code **)(*param_1 + 0x38))();
  ExceptionList = local_c;
  return;
}

