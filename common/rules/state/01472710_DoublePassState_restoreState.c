// addr: 0x01472710
// name: DoublePassState_restoreState
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall DoublePassState_restoreState(int *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  char *fmt;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Restores DoublePassState, logging DOUBLEPASS::RESTORESTATE, resuming
                       cancellable previous states or pushing a wait return, then calling the
                       next-state virtual when ready. Evidence is the double-pass log string and
                       DoublePass restore callers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f2db;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  fmt = "DOUBLEPASS::RESTORESTATE";
  pvVar3 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar3,fmt,uVar2);
  uVar5 = 0;
  if (param_1[0x3d] != 0) {
    iVar4 = FUN_00d8d382(param_1[1],0,&StateMachineState::RTTI_Type_Descriptor,
                         &CancellableStateMachineState::RTTI_Type_Descriptor,0);
    if (iVar4 != 0) {
      uVar5 = StateMachineState_resumePreviousWaitState();
      ExceptionList = local_c;
      return uVar5;
    }
    param_1[0x3d] = 0;
    pvVar3 = Mem_Alloc(0x18);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      uVar5 = ReturnValueMap_ctor();
    }
    local_4 = 0xffffffff;
    set_value_boolean(7,true);
    StateMachine_pushPendingState(uVar5);
  }
  cVar1 = (**(code **)(*(int *)param_1[1] + 0x120))();
  if (cVar1 == '\0') {
    ExceptionList = local_c;
    return 1;
  }
  uVar5 = (**(code **)(*param_1 + 0x124))();
  ExceptionList = local_c;
  return uVar5;
}

