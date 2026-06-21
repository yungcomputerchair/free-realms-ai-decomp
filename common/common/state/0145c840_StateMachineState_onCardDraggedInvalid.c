// addr: 0x0145c840
// name: StateMachineState_onCardDraggedInvalid
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateMachineState_onCardDraggedInvalid(void * this) */

int __fastcall StateMachineState_onCardDraggedInvalid(void *this)

{
  uint uVar1;
  uint extraout_EAX;
  char *pcVar2;
  
                    /* Default invalid-state handler for dragging a card: validates mMachine, logs
                       'Card attempted to be drug in an invalid state.', calls StateMachine
                       dispatch, and returns false in the low byte. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  pcVar2 = "Card attempted to be drug in an invalid state.";
  uVar1 = get_field_4(*(void **)((int)this + 8));
  Game_logGeneralFormatted(uVar1,pcVar2);
  StateMachine_dispatchPendingActionOrEvent(*(void **)((int)this + 8));
  return extraout_EAX & 0xffffff00;
}

