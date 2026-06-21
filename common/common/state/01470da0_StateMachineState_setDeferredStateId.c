// addr: 0x01470da0
// name: StateMachineState_setDeferredStateId
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachineState_setDeferredStateId(void * this, int stateId_) */

void __thiscall StateMachineState_setDeferredStateId(void *this,int stateId_)

{
                    /* Stores a 32-bit value at offset +0xf8. Callers in the game-turn phase
                       advancement path set it to 0xf42f3 before marking the following byte flag,
                       suggesting a deferred/queued state id. */
  *(int *)((int)this + 0xf8) = stateId_;
  return;
}

