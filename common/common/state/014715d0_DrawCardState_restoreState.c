// addr: 0x014715d0
// name: DrawCardState_restoreState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DrawCardState_restoreState(void * this) */

void __fastcall DrawCardState_restoreState(void *this)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Restore-state handler that logs DrawCardState::restoreState; no additional
                       state changes are visible in this stub. */
  fmt = "DrawCardState::restoreState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
                    /* WARNING: Could not recover jumptable at 0x014715f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x124))();
  return;
}

