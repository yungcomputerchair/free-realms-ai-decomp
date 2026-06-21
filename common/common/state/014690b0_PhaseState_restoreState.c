// addr: 0x014690b0
// name: PhaseState_restoreState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PhaseState_restoreState(void * this) */

void __fastcall PhaseState_restoreState(void *this)

{
  int iVar1;
  void *game;
  char *fmt;
  
                    /* Logs %s::restoreState using the state name and dispatches a virtual
                       transition hook. */
  if (*(uint *)((int)this + 0x34) < 0x10) {
    iVar1 = (int)this + 0x20;
  }
  else {
    iVar1 = *(int *)((int)this + 0x20);
  }
  fmt = "%s::restoreState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,iVar1);
                    /* WARNING: Could not recover jumptable at 0x014690dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x3c))();
  return;
}

