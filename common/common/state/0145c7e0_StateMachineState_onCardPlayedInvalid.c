// addr: 0x0145c7e0
// name: StateMachineState_onCardPlayedInvalid
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateMachineState_onCardPlayedInvalid(void * this) */

int __fastcall StateMachineState_onCardPlayedInvalid(void *this)

{
  uint uVar1;
  char *pcVar2;
  
                    /* Default invalid-state handler for playing a card: validates mMachine, logs
                       'Card attempted to be played in an invalid state?', calls StateMachine
                       dispatch cleanup/continuation, and returns 0. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  pcVar2 = "Card attempted to be played in an invalid state?";
  uVar1 = get_field_4(*(void **)((int)this + 8));
  Game_logGeneralFormatted(uVar1,pcVar2);
  StateMachine_dispatchPendingActionOrEvent(*(void **)((int)this + 8));
  return 0;
}

