// addr: 0x013454d0
// name: StateMachine_setCurrentState
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_setCurrentState(void * this, void * state) */

void __thiscall StateMachine_setCurrentState(void *this,void *state)

{
  undefined4 uVar1;
  
                    /* Stores the current state pointer at offset +8 and caches that state's
                       id/value at offset +0x3c by calling the common getter at 01347d90. Called
                       from Game.cpp state-transition logic. */
  *(void **)((int)this + 8) = state;
  uVar1 = StateMachine_getCurrentState();
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  return;
}

