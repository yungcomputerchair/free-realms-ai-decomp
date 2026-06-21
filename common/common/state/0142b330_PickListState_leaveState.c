// addr: 0x0142b330
// name: PickListState_leaveState
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PickListState_leaveState(void * this) */

void __fastcall PickListState_leaveState(void *this)

{
  void *game;
  undefined4 unaff_ESI;
  char *fmt;
  
                    /* Leave-state handler that logs PickListState::leaveState and pops a pending
                       state. */
  fmt = "PickListState::leaveState";
  game = (void *)StateMachineState_getGame();
  Game_logGeneral(game,fmt,unaff_ESI);
  StateMachine_popPendingState(*(void **)((int)this + 8));
  return;
}

