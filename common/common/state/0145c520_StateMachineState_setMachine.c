// addr: 0x0145c520
// name: StateMachineState_setMachine
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachineState_setMachine(void * this, void * stateMachine) */

void __thiscall StateMachineState_setMachine(void *this,void *stateMachine)

{
                    /* Validates the incoming state-machine pointer and stores it into the
                       StateMachineState's mMachine field at offset +8. Evidence is
                       StateMachineState.cpp and the assert text 'state'. */
  if (stateMachine == (void *)0x0) {
    FUN_012f5a60("state","..\\common\\common\\state\\StateMachineState.cpp",0x5c);
  }
  *(void **)((int)this + 8) = stateMachine;
  return;
}

