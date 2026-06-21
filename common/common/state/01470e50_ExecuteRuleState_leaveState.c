// addr: 0x01470e50
// name: ExecuteRuleState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall ExecuteRuleState_leaveState(int param_1)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs 'ExecuteRuleState::leaveState', pops the pending state, and returns
                       success. */
  fmt = "ExecuteRuleState::leaveState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  StateMachine_popPendingState(*(void **)(param_1 + 8));
  return 1;
}

