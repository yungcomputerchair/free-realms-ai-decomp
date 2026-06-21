// addr: 0x0141db20
// name: GetTargetState_buttonPressed
// subsystem: common/rules/state
// source (binary assert): common/common/state/GetTargetState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall GetTargetState_buttonPressed(int *param_1,uint param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *unaff_ESI;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Processes GetTargetState button choices, optionally dispatching ButtonPressed
                       game commands, restoring a previous state on button 2, and scheduling a
                       pending return state. Evidence is GetTargetState.cpp mPreviousState assert
                       and neighboring named GetTargetState_buttonPressedWithString. */
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_01693fec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_3 == 1) {
    if ((char)param_1[0x48] != '\0') {
      bVar1 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse();
      if (!bVar1) {
        cVar2 = EvaluationEnvironment_setTraceIndentAction();
        if (cVar2 != '\0') {
          pvVar3 = Mem_Alloc(0x30);
          local_4 = (void *)0x0;
          if (pvVar3 == (void *)0x0) {
            pvVar3 = (void *)0x0;
          }
          else {
            pvVar4 = (void *)StateMachineState_getGame();
            pvVar3 = GameCommand_ButtonPressed_ctor(pvVar3,pvVar4);
          }
          local_4 = (void *)0xffffffff;
          set_field_4(pvVar3,param_2);
          StateCommand_setField24(pvVar3,1);
          uVar6 = param_2;
          StateMachineState_getGame(param_2,pvVar3);
          Game_dispatchCommandToPlayerOrAll(uVar6,pvVar3);
        }
        pvVar3 = Mem_Alloc(0x18);
        local_4 = (void *)0x1;
        if (pvVar3 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = ReturnValueMap_ctor();
        }
        local_4 = (void *)0xffffffff;
        ReturnValueMap_setInteger(4,param_2);
        ReturnValueMap_setInteger(param_1[0x4e],0);
        set_value_boolean(0x19,true);
        StateMachine_pushPendingState(uVar5);
        (**(code **)(*param_1 + 0x88))();
        uVar5 = StateMachineState_resumePreviousWaitState();
        ExceptionList = local_c;
        return uVar5;
      }
    }
  }
  else if (param_3 == 2) {
    if (param_1[1] == 0) {
      FUN_012f5a60("mPreviousState","..\\common\\common\\state\\GetTargetState.cpp",0xea,
                   DAT_01b839d8 ^ (uint)&stack0xffffffe8);
    }
    cVar2 = EvaluationEnvironment_setTraceIndentAction();
    if (cVar2 != '\0') {
      pvVar3 = Mem_Alloc(0x30);
      local_4 = (void *)0x2;
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)StateMachineState_getGame();
        pvVar3 = GameCommand_ButtonPressed_ctor(pvVar3,pvVar4);
      }
      local_4 = (void *)0xffffffff;
      set_field_4(pvVar3,param_2);
      StateCommand_setField24(pvVar3,2);
      uVar6 = param_2;
      StateMachineState_getGame(param_2,pvVar3);
      Game_dispatchCommandToPlayerOrAll(uVar6,pvVar3);
    }
    (**(code **)(*(int *)param_1[1] + 0xa0))(param_2,2);
    local_4 = Mem_Alloc(0x18);
    local_c = (void *)0x3;
    if (local_4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = ReturnValueMap_ctor();
    }
    local_c = (void *)0xffffffff;
    ReturnValueMap_setInteger(4,param_2);
    ReturnValueMap_setInteger(param_1[0x4e],0);
    StateMachine_pushPendingState(uVar5);
    uVar5 = StateMachineState_resumePreviousWaitState();
    ExceptionList = unaff_ESI;
    return uVar5;
  }
  GetTargetState_stateSpecificMessage(param_1 + 0x3f);
  ExceptionList = local_c;
  return 0;
}

