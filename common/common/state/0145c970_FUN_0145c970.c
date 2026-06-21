// addr: 0x0145c970
// name: FUN_0145c970
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: uint dispatch_pending_and_return_zero(void) */

uint dispatch_pending_and_return_zero(void)

{
  int in_ECX;
  
                    /* Thunk that dispatches a pending state-machine action/event and returns 0;
                       exact owning virtual slot is not identifiable. */
  StateMachine_dispatchPendingActionOrEvent(*(void **)(in_ECX + 8));
  return 0;
}

