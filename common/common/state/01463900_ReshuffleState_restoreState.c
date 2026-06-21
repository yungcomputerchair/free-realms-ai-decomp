// addr: 0x01463900
// name: ReshuffleState_restoreState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int ReshuffleState_restoreState(void) */

int ReshuffleState_restoreState(void)

{
  void *game;
  undefined4 unaff_retaddr;
  char *fmt;
  
                    /* Logs ReshuffleState::restoreState and returns state result 2. */
  fmt = "ReshuffleState::restoreState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_retaddr);
  return 2;
}

