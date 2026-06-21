// addr: 0x01467620
// name: PlayCardState_updateHints
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PlayCardState_updateHints(void) */

void PlayCardState_updateHints(void)

{
  void *game;
  undefined4 unaff_retaddr;
  char *fmt;
  
                    /* Logs PlayCardState::updateHints. */
  fmt = "PlayCardState::updateHints";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_retaddr);
  return;
}

