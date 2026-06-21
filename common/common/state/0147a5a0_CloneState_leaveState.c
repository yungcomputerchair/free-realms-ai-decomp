// addr: 0x0147a5a0
// name: CloneState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CloneState_leaveState(int param_1)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs 'CloneState::leaveState', pops the pending state, and returns success.
                        */
  fmt = "CloneState::leaveState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  StateMachine_popPendingState(*(void **)(param_1 + 8));
  return 1;
}

