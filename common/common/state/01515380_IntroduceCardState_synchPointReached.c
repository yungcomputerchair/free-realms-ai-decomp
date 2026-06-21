// addr: 0x01515380
// name: IntroduceCardState_synchPointReached
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IntroduceCardState_synchPointReached(void * this) */

void IntroduceCardState_synchPointReached(void *this)

{
  void *game;
  undefined4 unaff_retaddr;
  char *fmt;
  
                    /* Synchronization-point handler that logs
                       IntroduceCardState::synchPointReached. */
  fmt = "IntroduceCardState::synchPointReached";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_retaddr);
  return;
}

