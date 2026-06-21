// addr: 0x0144d670
// name: FUN_0144d670
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0144d670(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int playerId_;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Schedules a CWActionPlayedState from a selected/played card: sets
                       player/card/action/origin return values, pushes a pending state,
                       copy-constructs CWActionPlayedState, and installs it. Class owning this
                       helper is not evident from the context. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169af76;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = (**(code **)(*param_2 + 0x28))(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  playerId_ = (**(code **)(*param_2 + 0x28))();
  pvVar2 = (void *)StateMachineState_getGame();
  pvVar2 = PlayArea_findPlayerElementById(pvVar2,playerId_);
  if (pvVar2 != (void *)0x0) {
    piVar3 = (int *)StateMachineState_getCurrentTurn();
    (**(code **)(*piVar3 + 0x48))(pvVar2);
  }
  (**(code **)(*param_1 + 0x88))();
  pvVar2 = Mem_Alloc(0x18);
  uVar4 = 0;
  uStack_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar4 = ReturnValueMap_ctor();
  }
  uStack_4 = 0xffffffff;
  ReturnValueMap_setInteger(4,uVar1);
  uVar1 = PlayElement_getId();
  ReturnValueMap_setInteger(3,uVar1);
  uVar1 = FUN_01321f20();
  ReturnValueMap_setInteger(5,uVar1);
  ReturnValueMap_setInteger(0x35,param_4);
  set_value_boolean(8,true);
  set_value_boolean(0x1d,true);
  StateMachine_pushPendingState(uVar4);
  pvVar2 = Mem_Alloc(0x1a4);
  uStack_4 = 1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = CWActionPlayedState_copy_ctor(pvVar2,(void *)param_1[2]);
  }
  uStack_4 = 0xffffffff;
  StateMachine_setCurrentState(pvVar2);
  ExceptionList = local_c;
  return;
}

