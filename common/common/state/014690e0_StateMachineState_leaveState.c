// addr: 0x014690e0
// name: StateMachineState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall StateMachineState_leaveState(int param_1)

{
  int iVar1;
  void *game;
  char *fmt;
  
                    /* Logs '%s::leaveState' using the object's state-name string, pops the pending
                       state, and returns success. */
  if (*(uint *)(param_1 + 0x34) < 0x10) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  fmt = "%s::leaveState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,iVar1);
  StateMachine_popPendingState(*(void **)(param_1 + 8));
  return 1;
}

