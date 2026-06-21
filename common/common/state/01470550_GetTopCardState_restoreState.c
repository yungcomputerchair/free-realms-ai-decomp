// addr: 0x01470550
// name: GetTopCardState_restoreState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int GetTopCardState_restoreState(void) */

int GetTopCardState_restoreState(void)

{
  void *game;
  undefined4 unaff_retaddr;
  char *fmt;
  
                    /* Logs GetTopCardState::restoreState and returns state result 2. */
  fmt = "GetTopCardState::restoreState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_retaddr);
  return 2;
}

