// addr: 0x015153c0
// name: IntroduceCardState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool IntroduceCardState_leaveState(void) */

bool IntroduceCardState_leaveState(void)

{
  void *game;
  int in_ECX;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs IntroduceCardState::leaveState and pops the pending state from the state
                       machine. */
  fmt = "IntroduceCardState::leaveState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  StateMachine_popPendingState(*(void **)(in_ECX + 8));
  return true;
}

