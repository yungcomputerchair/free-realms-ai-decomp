// addr: 0x0145cb10
// name: FUN_0145cb10
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void dispatch_queued_action_thunk(void) */

void dispatch_queued_action_thunk(void)

{
  int in_ECX;
  
                    /* Thunk that dispatches a queued action; exact owning class or virtual slot is
                       not identifiable. */
  StateMachine_dispatchQueuedAction(*(void **)(in_ECX + 8));
  return;
}

