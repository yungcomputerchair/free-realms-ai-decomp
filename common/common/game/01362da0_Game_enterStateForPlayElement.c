// addr: 0x01362da0
// name: Game_enterStateForPlayElement
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall Game_enterStateForPlayElement(void *param_1,int *param_2)

{
  int iVar1;
  
                    /* Sets a PlayElement field based on the current player-vector count, switches
                       the state machine current state, invokes a state callback, and records the
                       involved player id. Exact state transition name is unknown. */
  if (*(int *)((int)param_1 + 0x28) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)param_1 + 0x2c) - *(int *)((int)param_1 + 0x28) >> 2;
  }
  PlayElement_setField34_01344e90(param_2,iVar1 + 1);
  StateMachine_setCurrentState(param_2,param_1);
  (**(code **)(*param_2 + 0x38))(param_1);
  FUN_01336350(&stack0x00000000);
  GamePlayer_getPlayerId();
  FUN_0042c155(&stack0xfffffff8);
  FUN_01336350(&stack0x00000000);
  return 1;
}

