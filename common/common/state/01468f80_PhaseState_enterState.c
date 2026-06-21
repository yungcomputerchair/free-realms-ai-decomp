// addr: 0x01468f80
// name: PhaseState_enterState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PhaseState_enterState(void * this) */

void __fastcall PhaseState_enterState(void *this)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  void *game;
  char *fmt;
  
                    /* Logs %s::enterState using the state name, calls a virtual pre-hook, sets
                       active state field to 1, and dispatches a virtual transition. */
  (**(code **)(*(int *)this + 0x4c))();
  if (*(uint *)((int)this + 0x34) < 0x10) {
    iVar1 = (int)this + 0x20;
  }
  else {
    iVar1 = *(int *)((int)this + 0x20);
  }
  fmt = "%s::enterState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,iVar1);
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)this + 0x3c);
  *(undefined4 *)((int)this + 0xf4) = 1;
                    /* WARNING: Could not recover jumptable at 0x01468fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

