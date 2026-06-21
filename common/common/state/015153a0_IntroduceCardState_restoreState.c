// addr: 0x015153a0
// name: IntroduceCardState_restoreState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IntroduceCardState_restoreState(void * this) */

void __cdecl IntroduceCardState_restoreState(void *this)

{
  void *game;
  undefined4 unaff_retaddr;
  char *fmt;
  
                    /* Restore-state handler that logs IntroduceCardState::restoreState. */
  fmt = "IntroduceCardState::restoreState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_retaddr);
  return;
}

