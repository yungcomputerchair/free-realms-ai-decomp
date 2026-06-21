// addr: 0x0144c1a0
// name: CWStartOfGameState_restoreState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWStartOfGameState_restoreState(void * this) */

void __fastcall CWStartOfGameState_restoreState(void *this)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs CWStartOfGameState::restoreState and dispatches a virtual transition
                       hook. */
  fmt = "CWStartOfGameState::restoreState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
                    /* WARNING: Could not recover jumptable at 0x0144c1be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x3c))();
  return;
}

