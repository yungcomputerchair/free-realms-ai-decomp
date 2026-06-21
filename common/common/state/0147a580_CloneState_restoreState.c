// addr: 0x0147a580
// name: CloneState_restoreState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CloneState_restoreState(void * this) */

void __cdecl CloneState_restoreState(void *this)

{
  void *game;
  undefined4 unaff_retaddr;
  char *fmt;
  
                    /* Restore-state handler that logs CloneState::restoreState; no additional state
                       changes are visible in this stub. */
  fmt = "CloneState::restoreState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_retaddr);
  return;
}

