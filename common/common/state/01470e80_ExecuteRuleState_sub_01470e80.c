// addr: 0x01470e80
// name: ExecuteRuleState_sub_01470e80
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ExecuteRuleState_sub_01470e80(void * this) */

void __fastcall ExecuteRuleState_sub_01470e80(void *this)

{
                    /* If mPreviousState is absent, uses the base StateMachineState default handler;
                       otherwise delegates to the previous state through
                       CancellableStateMachineState. Exact virtual method name is not evident. */
  if (*(int *)((int)this + 4) == 0) {
    dispatch_queued_action_thunk();
    return;
  }
  CancellableStateMachineState_sub_0147c6c0(this);
  return;
}

