// addr: 0x01464800
// name: FUN_01464800
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01464800(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int playerId_;
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Schedules an ActionPlayedState from a selected/played card: fills
                       player/card/action/origin return values, pushes a pending state,
                       copy-constructs ActionPlayedState, and installs it. Class owning this helper
                       is not evident from the context. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169da86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  playerId_ = (**(code **)(*param_2 + 0x28))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  pvVar1 = (void *)StateMachineState_getGame();
  pvVar1 = PlayArea_findPlayerElementById(pvVar1,playerId_);
  if (pvVar1 != (void *)0x0) {
    piVar2 = (int *)StateMachineState_getCurrentTurn();
    (**(code **)(*piVar2 + 0x48))(pvVar1);
  }
  pvVar1 = Mem_Alloc(0x18);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ReturnValueMap_ctor();
  }
  uStack_4 = 0xffffffff;
  uVar4 = (**(code **)(*param_2 + 0x28))();
  ReturnValueMap_setInteger(4,uVar4);
  uVar4 = PlayElement_getId();
  ReturnValueMap_setInteger(3,uVar4);
  uVar4 = FUN_01321f20();
  ReturnValueMap_setInteger(5,uVar4);
  set_value_boolean(8,true);
  set_value_boolean(0x1d,true);
  ReturnValueMap_setInteger(0x35,param_4);
  StateMachine_pushPendingState(uVar3);
  pvVar1 = Mem_Alloc(0x19c);
  uStack_4 = 1;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ActionPlayedState_copy_ctor(pvVar1,*(void **)(param_1 + 8));
  }
  uStack_4 = 0xffffffff;
  StateMachine_setCurrentState(pvVar1);
  ExceptionList = local_c;
  return;
}

