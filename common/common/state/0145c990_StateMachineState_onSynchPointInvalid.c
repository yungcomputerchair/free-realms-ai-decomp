// addr: 0x0145c990
// name: StateMachineState_onSynchPointInvalid
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateMachineState_onSynchPointInvalid(void * this) */

int __fastcall StateMachineState_onSynchPointInvalid(void *this)

{
  uint uVar1;
  char *pcVar2;
  
                    /* Default invalid-state handler for reaching a synchronization point: validates
                       mMachine, logs 'Synch point reached in an invalid state.', calls StateMachine
                       dispatch, and returns 0. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  pcVar2 = "Synch point reached in an invalid state.";
  uVar1 = get_field_4(*(void **)((int)this + 8));
  Game_logGeneralFormatted(uVar1,pcVar2);
  StateMachine_dispatchPendingActionOrEvent(*(void **)((int)this + 8));
  return 0;
}

