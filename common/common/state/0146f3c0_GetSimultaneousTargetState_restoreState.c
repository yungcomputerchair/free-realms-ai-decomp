// addr: 0x0146f3c0
// name: GetSimultaneousTargetState_restoreState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GetSimultaneousTargetState_restoreState(void * this) */

void __fastcall GetSimultaneousTargetState_restoreState(void *this)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs GetSimultaneousTargetState::restoreState and dispatches a virtual
                       transition hook. */
  fmt = "GetSimultaneousTargetState::restoreState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
                    /* WARNING: Could not recover jumptable at 0x0146f3de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x3c))();
  return;
}

