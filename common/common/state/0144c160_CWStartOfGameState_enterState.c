// addr: 0x0144c160
// name: CWStartOfGameState_enterState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWStartOfGameState_enterState(void * this) */

void __fastcall CWStartOfGameState_enterState(void *this)

{
  code *UNRECOVERED_JUMPTABLE;
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Logs CWStartOfGameState::enterState, calls a virtual pre-hook, sets state
                       field +0xf4 to 1, and dispatches a virtual transition. */
  (**(code **)(*(int *)this + 0x4c))();
  fmt = "CWStartOfGameState::enterState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)this + 0x3c);
  *(undefined4 *)((int)this + 0xf4) = 1;
                    /* WARNING: Could not recover jumptable at 0x0144c191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

