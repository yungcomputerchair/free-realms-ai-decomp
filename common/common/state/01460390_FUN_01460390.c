// addr: 0x01460390
// name: FUN_01460390
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: bool reset_or_cancel_state_thunk(void) */

bool reset_or_cancel_state_thunk(void)

{
  int in_ECX;
  
                    /* Tiny state thunk that calls a common StateMachineState helper and returns
                       true; class/method semantics are not identifiable locally. */
  StateMachine_popPendingState(*(void **)(in_ECX + 8));
  return true;
}

