// addr: 0x0141b9e0
// name: StateMachine_popPendingStateAndReturnTrue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StateMachine_popPendingStateAndReturnTrue(void * this) */

bool __fastcall StateMachine_popPendingStateAndReturnTrue(void *this)

{
                    /* Calls StateMachine_popPendingState and always returns true. Likely a
                       transition helper wrapper used as a virtual/state callback. */
  StateMachine_popPendingState(*(void **)((int)this + 8));
  return true;
}

