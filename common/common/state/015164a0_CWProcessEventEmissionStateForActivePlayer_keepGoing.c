// addr: 0x015164a0
// name: CWProcessEventEmissionStateForActivePlayer_keepGoing
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CWProcessEventEmissionStateForActivePlayer_keepGoing(void) */

void CWProcessEventEmissionStateForActivePlayer_keepGoing(void)

{
  void *game;
  void *in_ECX;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs keepGoing and delegates to StateMachineState_shouldContinueWaiting. */
  fmt = "CWProcessEventEmissionStateForActivePlayer::keepGoing";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  StateMachineState_shouldContinueWaiting(in_ECX);
  return;
}

